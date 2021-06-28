// Fill out your copyright notice in the Description page of Project Settings.


#include "FirTreeBranch.h"

FRandomStream APhiBall::RandomStream = FRandomStream(INT32_MAX);

APhiBall::APhiBall() {
	if (Settings.Length) this->DrawForward(Settings.Length);
}

void APhiBall::Redraw() {

	UE_LOG(LogTemp, Warning, TEXT("Redraw"));

	this->RemoveTreeChildren();
	//this->SetupElementProperties();
	//this->Spline->ReparamStepsPerSegment = FMath::Clamp(Settings.Num, 4, 50);

	for (int32 i = 0; i < Settings.Num; ++i) {

		// calculate Chance
		float Chance = APhiBall::RandomStream.GetFraction();

		// if chance:
		if (Chance > Settings.Chance) continue;

		float EntireCurrentValue = UKismetMathLibrary::NormalizeToRange(i, 0, Settings.Num);
		float FractionCurrentValue = UKismetMathLibrary::NormalizeToRange(i, 0, Settings.Num - 1);

		// location along spline
		FTransform SegmentTransform = Spline->GetTransformAtTime(FractionCurrentValue, ESplineCoordinateSpace::Local);
		FVector Location = Settings.Length
			? SegmentTransform.GetLocation()
			: FVector{ 0, 0, 0 };

		// spawn Child
		FRotator Rotation = this->GetActorRotation() + SegmentTransform.GetRotation().Rotator();

		ATreeElement* NewElement = this->Prototype->Clone(this);
		NewElement->SetActorRelativeLocation(Location);

		//ATreeBranch* NewBranch = this->GetWorld()->SpawnActor<ATreeBranch>(Location, FRotator(0.0f, 0.0f, 0.0f), SpawnInfo);
		//NewBranch->AttachToComponent(SceneTreeRoot, ATreeBranch::BranchAttachmentRules);
		//NewBranch->TreeParent = this;
		//this->TreeChildren.Add(NewBranch);
		//NewBranch->ParentNumPoints = this->ParentNumPoints + Spline->GetNumberOfSplinePoints();

		// rotate first spline point of branch
		//NewBranch->AddRotation(SegmentTransform.GetRotation().Rotator());

		// pitch with function
		float PitchValue = (Settings.Pitch.MinValue == 0 && Settings.Pitch.MaxValue >= 3.14)
			? UTreeElementFunctionLibrary::Call(Settings.Pitch, EntireCurrentValue, 360 / PI)
			: UTreeElementFunctionLibrary::Call(Settings.Pitch, FractionCurrentValue, 360 / PI);
		//UE_LOG(LogTemp, Warning, TEXT("Pitch Value: %f"), PitchValue);
		//NewBranch->Pitch(PitchValue);
		FRotator DeltaRotation = FRotator{ PitchValue, 0, 0 };
		FRotator NewRotation = UKismetMathLibrary::ComposeRotators(Rotation, DeltaRotation);
		FRotator QuatRotation = GetQuatRotation(Rotation, NewRotation);

		float YawValue = (Settings.Yaw.MinValue == 0 && Settings.Yaw.MaxValue >= 3.14)
			? UTreeElementFunctionLibrary::Call(Settings.Yaw, EntireCurrentValue, 360 / PI)
			: UTreeElementFunctionLibrary::Call(Settings.Yaw, FractionCurrentValue, 360 / PI);
		DeltaRotation = FRotator{ 0, YawValue, 0 };
		NewRotation = UKismetMathLibrary::ComposeRotators(QuatRotation, DeltaRotation);
		QuatRotation = GetQuatRotation(Rotation, NewRotation);

		// roll with function
		float RollValue = (Settings.Roll.MinValue == 0 && Settings.Roll.MaxValue >= 3.14)
			? UTreeElementFunctionLibrary::Call(Settings.Roll, EntireCurrentValue, 360 / PI)
			: UTreeElementFunctionLibrary::Call(Settings.Roll, FractionCurrentValue, 360 / PI);
		//UE_LOG(LogTemp, Warning, TEXT("Roll Value: %f"), RollValue);
		//NewBranch->Roll(RollValue);
		DeltaRotation = FRotator{ 0, 0, RollValue };
		NewRotation = UKismetMathLibrary::ComposeRotators(QuatRotation, DeltaRotation);
		QuatRotation = GetQuatRotation(QuatRotation, NewRotation);

		NewElement->SetActorRotation(QuatRotation);

		// shift from center with radius
		//if (Settings.Radius) NewBranch->MoveForward(Settings.Radius);

		// setup Child
		//NewBranch->BranchProperties.BaseRadius = this->BranchProperties.BaseRadius;
		//NewBranch->BranchProperties.Stricture = this->BranchProperties.Stricture;

		//NewBranch->LOD_0_Properties = this->LOD_0_Properties;
		//NewBranch->SetupElementProperties();
		//NewBranch->DrawForward(10);
	}
	//this->UpdateSpline();
	//this->UpdateChildren();
}

void APhiBall::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(FPhiBallSettings, Length)) {
		int32 NumPoints = Spline->GetNumberOfSplinePoints();
		if (Settings.Length && NumPoints > 1) {
			this->Spline->RemoveSplinePoint(NumPoints - 1);
			this->DrawForward(Settings.Length);
		}
	}
}


ATreeElement* AFirTreeBranch::NewFirBranch(const TArray<FTreeElementPrototypeData>& InPrototypes) {
	int32 NumPoints = Spline->GetNumberOfSplinePoints();
	FVector WorldLocation = Spline->GetLocationAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::World);
	FVector Tangent = Spline->GetTransformAtSplinePoint(NumPoints - 1, ESplineCoordinateSpace::World).GetRotation().GetForwardVector();
	Tangent.Normalize();
	Tangent *= 50;
	FVector Location(0, 0, 0);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	AFirTreeBranch* NewBranch = this->GetWorld()->SpawnActor<AFirTreeBranch>(Location, Rotation, SpawnInfo);
	NewBranch->AttachToComponent(SceneTreeRoot, ATreeBranch::BranchAttachmentRules);
	NewBranch->TreeParent = this;
	NewBranch->SetActorLocation(WorldLocation);
	this->TreeChildren.Add(NewBranch);
	NewBranch->Spline->SetTangentAtSplinePoint(0, Tangent, ESplineCoordinateSpace::World);
	NewBranch->ParentNumPoints = this->ParentNumPoints + NumPoints;

	for (auto& Prototype : InPrototypes)
		NewBranch->AddPrototype(MakeShared<FTreeElementPrototypeData>(Prototype));
	return NewBranch;
}

void AFirTreeBranch::AddPrototype(TSharedPtr<FTreeElementPrototypeData> Prototype) {
	Prototypes.Add(Prototype);
}

void AFirTreeBranch::RemoveAllPrototypes() {
	Prototypes.Empty();
}

void AFirTreeBranch::Redraw() {
	RemoveAllFirComponents();
	Super::Redraw();
	RedrawFirComponents();
}

void AFirTreeBranch::AddFirComponent(ATreeElement* InElement) {
	this->FirComponents.Add(InElement);
}

void  AFirTreeBranch::RemoveAllFirComponents() {
	for (auto& Element : FirComponents) {
		Element->RemoveTreeChildren();
		Element->DetachFromActor(ATreeBranch::BranchDetachmentRules);
		Element->Destroy();
	}
	FirComponents.Empty();
}

void AFirTreeBranch::RedrawFirComponents() {

	float Delta = 0.01;
	float TotalSegments = this->Spline->GetNumberOfSplinePoints() * this->Spline->ReparamStepsPerSegment;
	if (TotalSegments > 100)
		Delta = 1 / TotalSegments;

	for (auto& CmpPtr : Prototypes) {

		auto& Cmp = *(CmpPtr);

		float CmpDelta = Delta / Cmp.Density;
		float Timer = 0;

		while (Timer <= 1.0) {

			float Chance = ATreeElement::RandomStream.GetFraction();

			if (Chance <= Cmp.Chance && Timer >= Cmp.MinDistance && Timer <= Cmp.MaxDistance) {

				UE_LOG(LogTemp, Warning, TEXT("Loop: %f"), Timer);

				ATreeElement* PhiballPrototypeClone = Cmp.Prototype->Clone(this);
				AddFirComponent(PhiballPrototypeClone);

				FVector TimerLocation = this->Spline->GetLocationAtTime(Timer, ESplineCoordinateSpace::World);
				FRotator TimerRotation = this->Spline->GetRotationAtTime(Timer, ESplineCoordinateSpace::World);

				PhiballPrototypeClone->SetActorLocation(TimerLocation);
				PhiballPrototypeClone->SetActorRotation(TimerRotation);

				if (PhiballPrototypeClone->GetActorLocation() != TimerLocation) {
					PhiballPrototypeClone->SetActorLocation(TimerLocation);
				}
			}

			Timer += CmpDelta;
		}
	}



	/*
	PhiBallPrototype->Prototype = Needle;
	PhiBallPrototype->Prototype->Redraw();
	PhiBallPrototype->Redraw();
	*/
}