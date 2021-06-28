// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProcedurarTreeDataLibrary.h"
#include "SplineInterpLibrary.h"
#include "TreeBranch.generated.h"

UCLASS()
class PROCEDURALTREE_API ATreeElement : public AActor {
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	ATreeElement* TreeParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TArray<ATreeElement*> TreeChildren;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	int32 ParentNumPoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		FTreeElementProperties LOD_0_Properties {
		ELengthSegments::Mode::PerSegment, 6, 24, nullptr, FVector2D{ 1.0f, 1.0f }, 0.75f, true
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TEnumAsByte<EInterpolation::MODE> SplineInterp;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	USceneComponent* SceneTreeRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	USplineComponent* Spline;

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Geometry")
	FTreeElementProperties ElementProperties;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UProceduralMeshComponent* ProceduralMesh;


protected:
	static FAttachmentTransformRules BranchAttachmentRules;
	static FDetachmentTransformRules BranchDetachmentRules;

public:
	ATreeElement();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual void Redraw() {};

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void DrawForward(float InValue);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void MoveForward(float InValue);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual void AddRotation(FRotator DeltaRotation);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void Pitch(float InValue);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	ATreeElement* NewBranch();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	ATreeElement* ParentBranch();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void Roll(float InValue);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void InterpolateSpline();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void UpdateSpline();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	void RemoveTreeChildren();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual void UpdateChildren();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual ATreeElement* Clone(ATreeElement* InOwner);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void CopySpline(USplineComponent* InSpline);

public:
	virtual void SetupElementProperties(const FTreeElementProperties& InProperties);

protected:
	FRotator GetQuatRotation(FRotator FromRot, FRotator ToRot);
	virtual void SetupDefaultSplineSettings();
	virtual void SetupElementProperties();

public:
	static FRandomStream RandomStream;

};



UCLASS()
class PROCEDURALTREE_API ATreeBranch : public ATreeElement
{
	GENERATED_BODY()

private:
	TSharedPtr<FMeshSectionData> MeshSection;

protected:
	TArray<TSharedPtr<FMeshSectionData>> MeshSections;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FTreeBranchProperties BranchProperties;

public:
	// Sets default values for this actor's properties
	ATreeBranch();

	virtual void Redraw() override;

	virtual ATreeElement* Clone(ATreeElement* Owner) override;

	UFUNCTION(BlueprintPure, Category = "Math")
	FVector2D PolarToCartesian2D(float Radius, float Angle);

	UFUNCTION(BlueprintCallable, Category = "Geometry")
	virtual void SetupBaseRadius(float InValue);

protected:
	virtual void ClearMeshData();
	virtual void GenerateMeshData();
	virtual void GenerateMesh();
	virtual void UpdateMesh();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FTransform GetSegmentTransform(float distance);
	float GetSegmentDistance(int32 SegmentLength);
	float GetSegmentStricture(int32 SegmentLength);
	void GenerateVertexColor(float red, float green, float blue, float alpha);
	FVector RotateAroundTransformUpVector(const FTransform& SegmentTransform, int32 SegmentRadius);
	void GenerateVertex(const FTransform& SegmentTransform, int32 x, int32 z);
	void GenerateUV(int32 SegmentRadius, int32 SegmentLength);
	void GenerateTriangles();
	void CalculateTangents();
};

