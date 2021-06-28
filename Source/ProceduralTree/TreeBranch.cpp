// Fill out your copyright notice in the Description page of Project Settings.

#include "TreeBranch.h"

FAttachmentTransformRules ATreeElement::BranchAttachmentRules = FAttachmentTransformRules{
	EAttachmentRule::KeepRelative,
	EAttachmentRule::KeepRelative,
	EAttachmentRule::KeepRelative,
	false
};

FDetachmentTransformRules ATreeElement::BranchDetachmentRules = FDetachmentTransformRules{
	EDetachmentRule::KeepRelative,
	EDetachmentRule::KeepRelative,
	EDetachmentRule::KeepRelative,
	false
};

FRandomStream ATreeElement::RandomStream = FRandomStream(INT32_MAX);

ATreeElement::ATreeElement() {

	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BranchRoot"));
	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	SceneTreeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BranchChildrenRoot"));

	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
	if (Spline) {
		Spline->SetupAttachment(SceneRoot);
		Spline->SetDrawDebug(true);
		SetupDefaultSplineSettings();
	}

	RootComponent = SceneRoot;
	ProceduralMesh->SetupAttachment(SceneRoot);
	SceneTreeRoot->SetupAttachment(SceneRoot);

	ElementProperties = LOD_0_Properties; // Copy!
}

void ATreeElement::SetupDefaultSplineSettings() {
	Spline->bInputSplinePointsToConstructionScript = true;
	Spline->ScaleVisualizationWidth = 20.0f;
	Spline->ClearSplinePoints();
	FSplinePoint NewPoint{ 0, FVector{ 0.0, 0.0, 0.0 }, ESplinePointType::CurveCustomTangent };
	Spline->AddPoint(NewPoint, true);
	Spline->SetRelativeLocationAndRotation(FVector{ 0.0f, 0.0f, 0.0f }, FRotator{ 90.0f, 0.0f, 0.0f });
	FVector Tangent = Spline->GetTransformAtSplinePoint(0, ESplineCoordinateSpace::Local).GetRotation().GetForwardVector();
	Tangent.Normalize();
	Tangent *= 5;
	Spline->SetTangentAtSplinePoint(0, Tangent, ESplineCoordinateSpace::Local);
}

/* Spline Manipulator */
void ATreeElement::MoveForward(float InValue) {
	int32 NumPoints = Spline->GetNumberOfSplinePoints();
	if (!NumPoints) return;
	FRotator Rotation = Spline->GetRotationAtSplinePoint(0, ESplineCoordinateSpace::World);
	FVector Delta = Rotation.Quaternion().GetForwardVector() * InValue;
	Spline->SetRelativeLocation(Spline->GetRelativeLocation() + Delta);
}

void ATreeElement::DrawForward(float Value) {
	int32 NumPoints = Spline->GetNumberOfSplinePoints();
	FVector LastPointPosition = Spline->GetLocationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	FVector LastPointTangent = Spline->GetTangentAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	LastPointTangent = LastPointTangent.GetSafeNormal() * Value;
	FRotator LastPointRotation = Spline->GetRotationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	FVector ForwardVector = Spline->GetDirectionAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	ForwardVector *= Value;
	LastPointPosition += ForwardVector;
	FSplinePoint NewPoint{ static_cast<float>(NumPoints), LastPointPosition, ESplinePointType::CurveCustomTangent };
	//NewPoint.ArriveTangent = FVector{ 90.0, 0.0, -45.0 };
	//NewPoint.LeaveTangent = FVector{ 90.0, 0.0, -45.0 };
	Spline->AddPoint(NewPoint, false);
	Spline->SetRotationAtSplinePoint(NumPoints, LastPointRotation, ESplineCoordinateSpace::Local);
	Spline->SetTangentAtSplinePoint(NumPoints, LastPointTangent, ESplineCoordinateSpace::Local);

	//FVector PrevPosition = Spline->GetLocationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	//FVector Tangent = LastPointPosition - PrevPosition;
	//Tangent.Normalize();
	//Tangent *= Value;
	//Spline->SetTangentAtSplinePoint(NumPoints, Tangent, ESplineCoordinateSpace::Local);
}

FRotator ATreeElement::GetQuatRotation(FRotator FromRot, FRotator ToRot) {
	FQuat QuatA = FromRot.Quaternion();
	FQuat QuatB = ToRot.Quaternion();
	FQuat FinalQuat = QuatA.Inverse() * QuatB;
	FinalQuat = QuatA * FinalQuat;
	//	Obj->SetRelativeRotation(FinalQuat);	// works fine
	return FinalQuat.Rotator();			// works fine
}

void ATreeElement::AddRotation(FRotator DeltaRotation) {
	int32 NumPoints = Spline->GetNumberOfSplinePoints();
	FRotator LastPointRotation = Spline->GetRotationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
	FRotator NewRotation = UKismetMathLibrary::ComposeRotators(LastPointRotation, DeltaRotation);
	FRotator QuatRotation = GetQuatRotation(LastPointRotation, NewRotation);
	Spline->SetRotationAtSplinePoint(NumPoints - 1, QuatRotation, ESplineCoordinateSpace::Local);
	FVector Tangent = Spline->GetTransformAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local).GetRotation().GetForwardVector();
	Tangent.Normalize();
	if (NumPoints >= 2) {
		FVector Position = Spline->GetLocationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::Local);
		FVector PrevPosition = Spline->GetLocationAtSplinePoint(NumPoints - 2, ESplineCoordinateSpace::Local);
		float Length = (Position - PrevPosition).Size();
		Tangent *= Length;
	}
	else {
		Tangent *= 50;
	}
	Spline->SetTangentAtSplinePoint(NumPoints - 1, Tangent, ESplineCoordinateSpace::Local);
}

void ATreeElement::Pitch(float Value) {
	this->AddRotation(FRotator(Value, 0, 0));
}

void ATreeElement::Roll(float InValue) {
	this->AddRotation(FRotator(0, 0, InValue));
}

ATreeElement* ATreeElement::NewBranch() {
	int32 NumPoints = Spline->GetNumberOfSplinePoints();
	FVector WorldLocation = Spline->GetLocationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::World);
	FVector Tangent = Spline->GetTransformAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::World).GetRotation().GetForwardVector();
	Tangent.Normalize();
	Tangent *= 50;
	FVector Location(0, 0, 0);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	ATreeElement* NewBranch = this->GetWorld()->SpawnActor<ATreeBranch>(Location, Rotation, SpawnInfo);
	NewBranch->AttachToComponent(SceneTreeRoot, ATreeBranch::BranchAttachmentRules);
	NewBranch->TreeParent = this;
	NewBranch->SetActorLocation(WorldLocation);
	this->TreeChildren.Add(NewBranch);
	NewBranch->Spline->SetTangentAtSplinePoint(0, Tangent, ESplineCoordinateSpace::World);
	NewBranch->ParentNumPoints = this->ParentNumPoints + NumPoints;
	return NewBranch;
}

ATreeElement* ATreeElement::ParentBranch() {
	return this->TreeParent;
}

/* Mesh Geometry*/

void ATreeElement::RemoveTreeChildren() {
	for (auto& Element : TreeChildren) {
		Element->RemoveTreeChildren();
		Element->DetachFromActor(ATreeBranch::BranchDetachmentRules);
		Element->Destroy();
	}
	TreeChildren.Empty();
}

void ATreeElement::InterpolateSpline() {
	USplineInterpLibrary::Proccess(SplineInterp, this->Spline);
}

void ATreeElement::UpdateSpline() {
	this->Spline->UpdateSpline();
	for (auto& TreeChild : this->TreeChildren) {
		TreeChild->UpdateSpline();
	}
}

void ATreeElement::UpdateChildren() {
	for (auto& TreeChild : this->TreeChildren) {
		TreeChild->Redraw();
	}
}

void ATreeElement::SetupElementProperties(const FTreeElementProperties& InProperties) {
	this->ElementProperties.UVScale = InProperties.UVScale;
	this->ElementProperties.Material = InProperties.Material;
	this->ElementProperties.RadiusSegments = InProperties.RadiusSegments;
	this->ElementProperties.LengthSegmentsMode = InProperties.LengthSegmentsMode;
}

void ATreeElement::SetupElementProperties() {
	this->ElementProperties.LengthSegmentsMode = this->LOD_0_Properties.LengthSegmentsMode;
	this->Spline->ReparamStepsPerSegment = this->LOD_0_Properties.LengthSegments;
	if (this->ElementProperties.LengthSegmentsMode == ELengthSegments::Mode::PerSegment) {
		this->ElementProperties.LengthSegments = this->LOD_0_Properties.LengthSegments * (this->Spline->GetNumberOfSplinePoints() - 1);
		UE_LOG(LogTemp, Warning, TEXT("LengthSegments: %d"), this->ElementProperties.LengthSegments);
	}
	else {
		this->ElementProperties.LengthSegments = this->LOD_0_Properties.LengthSegments;
	}
	this->ElementProperties.RadiusSegments = this->LOD_0_Properties.RadiusSegments;
	this->ElementProperties.Material = this->LOD_0_Properties.Material;
}

void ATreeElement::CopySpline(USplineComponent* InSpline) {
	Spline->ClearSplinePoints();
	Spline->SetRelativeLocationAndRotation(InSpline->GetRelativeLocation(), InSpline->GetRelativeRotation());
	int32 NumPoints = InSpline->GetNumberOfSplinePoints();
	for (int32 i = 0; i < NumPoints; ++i) {
		FSplinePoint NewPoint{ static_cast<float>(i), FVector{ 0.0, 0.0, 0.0 }, ESplinePointType::CurveCustomTangent };
		Spline->AddPoint(NewPoint, true);
		FVector Location = InSpline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local);
		FRotator Rotation = InSpline->GetRotationAtSplinePoint(i, ESplineCoordinateSpace::Local);
		FVector Tangent = InSpline->GetTangentAtSplinePoint(i, ESplineCoordinateSpace::Local);
		Spline->SetLocationAtSplinePoint(i, Location, ESplineCoordinateSpace::Local);
		Spline->SetRotationAtSplinePoint(i, Rotation, ESplineCoordinateSpace::Local);
		Spline->SetTangentAtSplinePoint(i, Tangent, ESplineCoordinateSpace::Local);
	}
}

ATreeElement* ATreeElement::Clone(ATreeElement* InOwner) {
	FVector Location;
	FRotator Rotation;
	FActorSpawnParameters SpawnInfo;
	ATreeElement* NewElement = this->GetWorld()->SpawnActor<ATreeElement>(Location, Rotation, SpawnInfo);
	//NewElement->SetupElementProperties(this->LOD_0_Properties);
	// copy spline
	NewElement->CopySpline(Spline);
	// copy treeChildren
	for (int32 i = 0; i < this->TreeChildren.Num(); ++i) {
		ATreeElement* ChildElement = this->TreeChildren[i];
		ATreeElement* ChildClone = ChildElement->Clone(NewElement);
	}
	NewElement->AttachToComponent(InOwner->SceneTreeRoot, ATreeBranch::BranchAttachmentRules);
	NewElement->TreeParent = InOwner;
	InOwner->TreeChildren.Add(NewElement);
	return NewElement;
}

ATreeElement* ATreeBranch::Clone(ATreeElement* InOwner) {
	FVector Location;
	FRotator Rotation;
	FActorSpawnParameters SpawnInfo;
	ATreeBranch* NewBranch = this->GetWorld()->SpawnActor<ATreeBranch>(Location, Rotation, SpawnInfo);
	// copy spline
	NewBranch->CopySpline(Spline);
	// copy treeChildren
	for (int32 i = 0; i < this->TreeChildren.Num(); ++i) {
		ATreeElement* ChildElement = this->TreeChildren[i];
		ATreeElement* ChildClone = ChildElement->Clone(NewBranch);
	}
	NewBranch->AttachToComponent(InOwner->SceneTreeRoot, ATreeBranch::BranchAttachmentRules);
	NewBranch->TreeParent = InOwner;
	InOwner->TreeChildren.Add(NewBranch);
	NewBranch->MeshSections.Empty();

	FVector RelativeLocation;
	FVector worldLoc = GetTransform().TransformPosition(RelativeLocation);
	NewBranch->SetActorRelativeLocation(RelativeLocation);

	NewBranch->SetActorRotation(this->GetActorRotation());

	NewBranch->BranchProperties = this->BranchProperties;
	NewBranch->LOD_0_Properties = this->LOD_0_Properties;
		// copy mesh sections
	for (int32 i = 0; i < this->MeshSections.Num(); ++i) {
		TSharedPtr<FMeshSectionData> Ptr = this->MeshSections[i];
		NewBranch->MeshSections.Add(Ptr);
	}
		// update mesh
	NewBranch->MeshSection = NewBranch->MeshSections[0];
	NewBranch->UpdateMesh();
	return NewBranch;
}

// Sets default values
ATreeBranch::ATreeBranch() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* temp working only with LOD0 */
	MeshSections.Add(MakeShared<FMeshSectionData>(FMeshSectionData{}));
	MeshSection = MeshSections[0];
}

void ATreeBranch::SetupBaseRadius(float InValue) {
	this->BranchProperties.BaseRadius = InValue;
	for (auto& TreeChild : this->TreeChildren) {
		ATreeBranch* Branch = dynamic_cast<ATreeBranch*>(TreeChild);
		if (Branch) Branch->SetupBaseRadius(InValue);
	}
}

void ATreeBranch::Redraw() {
	this->SetupElementProperties();
	this->ClearMeshData();
	//this->ClearHierarchyData(i);
	this->GenerateMeshData();
	this->UpdateMesh();
	this->UpdateChildren();
}

FVector2D ATreeBranch::PolarToCartesian2D(float Radius, float Angle) {
	float X;
	float Y;
	FMath::PolarToCartesian(Radius, Angle, X, Y);
	return FVector2D{ X, Y };
}

void ATreeBranch::ClearMeshData() {
	MeshSection->Empty();
}

void ATreeBranch::GenerateMeshData() {
	int32 RadiusSegments = ElementProperties.RadiusSegments;
	int32 LengthSegments = ElementProperties.LengthSegments;
	for (int32 x = 0; x <= RadiusSegments; ++x) {
		for (int32 z = 0; z <= LengthSegments; ++z) {
			FTransform SegmentTransform = GetSegmentTransform(GetSegmentDistance(z));
			//AddSegmentTransform(SegmentTransform, LODIndex);
			GenerateVertex(SegmentTransform, x, z);
			GenerateVertexColor(0.0f, 0.0f, 0.0f, 1.0f);
			GenerateUV(x, z);
		}
	}
	GenerateTriangles();
	CalculateTangents();
}

inline void ATreeBranch::GenerateUV(int32 SegmentRadius, int32 SegmentLength) {
	int32 CurrentLength = this->ParentNumPoints * this->LOD_0_Properties.LengthSegments + SegmentLength;
	int32 TotalLength = (this->ParentNumPoints + this->Spline->GetNumberOfSplinePoints() - 1) * this->LOD_0_Properties.LengthSegments;
	float vX = UKismetMathLibrary::NormalizeToRange(SegmentRadius, 0, ElementProperties.RadiusSegments) * ElementProperties.UVScale.X;
	float vY = UKismetMathLibrary::NormalizeToRange(CurrentLength, 0, TotalLength) * ElementProperties.UVScale.Y;
	MeshSection->UVs.Add(FVector2D(vX, vY));
}

inline void ATreeBranch::GenerateVertexColor(float red, float green, float blue, float alpha) {
	MeshSection->VertexColors.Add(FLinearColor(red, green, blue, alpha));
}

FVector ATreeBranch::RotateAroundTransformUpVector(const FTransform& SegmentTransform, int32 SegmentRadius) {
	FVector Forward = SegmentTransform.GetRotation().GetForwardVector();
	FVector Up = SegmentTransform.GetRotation().GetUpVector();
	float AngleDegrees = UKismetMathLibrary::NormalizeToRange(SegmentRadius, 0, ElementProperties.RadiusSegments) * 360;
	return Up.RotateAngleAxis(AngleDegrees, Forward);
}

void ATreeBranch::GenerateVertex(const FTransform& SegmentTransform, int32 x, int32 z) {
	FVector SegmentVectorZ = SegmentTransform.GetLocation() - this->GetActorLocation();
	FVector SegmentVectorXY = RotateAroundTransformUpVector(SegmentTransform, x);
	//float Key = Spline->FindInputKeyClosestToWorldLocation(SegmentTransform.GetLocation());
	SegmentVectorXY *= GetSegmentStricture((ParentNumPoints * this->LOD_0_Properties.LengthSegments) + z);
	MeshSection->Vertices.Add(SegmentVectorXY + SegmentVectorZ);
}

float inline ATreeBranch::GetSegmentDistance(int32 SegmentLength) {
	return Spline->GetSplineLength() * UKismetMathLibrary::NormalizeToRange(SegmentLength, 0, ElementProperties.LengthSegments);
}

float ATreeBranch::GetSegmentStricture(int32 SegmentLength) {
	int32 TotalNumPoints = (Spline->GetNumberOfSplinePoints() + ParentNumPoints - 1) * this->LOD_0_Properties.LengthSegments;
	float StrictureNormalize = UKismetMathLibrary::NormalizeToRange(SegmentLength, 0, TotalNumPoints);
	StrictureNormalize *= UKismetMathLibrary::FClamp(BranchProperties.Stricture, 0, 1);
	return BranchProperties.BaseRadius - (BranchProperties.BaseRadius * StrictureNormalize);
}

FTransform inline ATreeBranch::GetSegmentTransform(float distance) {
	return Spline->GetTransformAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World, true);
}

void ATreeBranch::GenerateTriangles() {
	UKismetProceduralMeshLibrary::CreateGridMeshTriangles(
		ElementProperties.RadiusSegments + 1,
		ElementProperties.LengthSegments + 1,
		false,
		MeshSection->Triangles);
}

void ATreeBranch::CalculateTangents() {
	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(
		MeshSection->Vertices,
		MeshSection->Triangles,
		MeshSection->UVs,
		MeshSection->Normals,
		MeshSection->Tangents
	);
}

void ATreeBranch::GenerateMesh() {
	ProceduralMesh->ClearMeshSection(0);
	ProceduralMesh->CreateMeshSection_LinearColor(
		0,
		MeshSection->Vertices,
		MeshSection->Triangles,
		MeshSection->Normals,
		MeshSection->UVs,
		MeshSection->VertexColors,
		MeshSection->Tangents,
		false
	);
	ProceduralMesh->SetMaterial(0, ElementProperties.Material);
}

void ATreeBranch::UpdateMesh() {
	//UpdatePivotPainter(LODIndex);
	//UpdateHierarchyData(LODIndex);
	// Update ParentData
	// Update Children
	GenerateMesh();
	UE_LOG(LogTemp, Warning, TEXT("Triangles: %d"), MeshSection->Triangles.Num());
}


/* */
void ATreeBranch::BeginPlay() {
	Super::BeginPlay();
}
void ATreeBranch::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

