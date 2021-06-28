// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProcedurarTreeDataLibrary.generated.h"


UENUM(BlueprintType)
namespace ELengthSegments
{
	enum Mode
	{
		Total, PerSegment
	};
}

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FTreeElementProperties {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TEnumAsByte<ELengthSegments::Mode> LengthSegmentsMode;

	UPROPERTY(
	EditAnywhere, BlueprintReadWrite, Category = "Geometry",
	meta = (ClampMin = "3", ClampMax = "128", UIMin = "3", UIMax = "128")
	)
	int32 LengthSegments;

	UPROPERTY(
		EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "3", ClampMax = "128", UIMin = "3", UIMax = "128")
	)
	int32 RadiusSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	UMaterialInstance* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	FVector2D UVScale = FVector2D(1, 1);

	UPROPERTY(
		EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
	float ScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shadows")
	bool bShadowCasting;

};


USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FMeshSectionData {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<int32> Triangles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FVector2D> UVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FLinearColor> VertexColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FVector2D> PivotPaintUVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	float SphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FVector> Normals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Section Data")
	TArray<FProcMeshTangent> Tangents;

public:
	void Empty();
};

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FTreeBranchProperties {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tree Branch Data")
	float BaseRadius = 25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tree Branch Data", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float Stricture = 0.9f;
};

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API UProcedurarTreeDataLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
};
