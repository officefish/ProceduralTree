// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TreeBranch.h"
#include "TreeElementFunctionLibrary.h"
#include "TreeBranchClaster.h"
#include "FirTreeBranch.generated.h"



USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FTreeElementPrototypeData {

	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
			meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
		)
		float Chance = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
		float Density = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
		float MinDistance = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
		float MaxDistance = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		ATreeElement* Prototype;
};


USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FPhiBallSettings {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	int32 Num;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Length;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FFunctionRangeValueProperty Pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FFunctionRangeValueProperty Yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FFunctionRangeValueProperty Roll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Chance;
};


UCLASS()
class PROCEDURALTREE_API APhiBall : public ATreeElement {
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FPhiBallSettings Settings;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	//FTreeBranchProperties BranchProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	ATreeElement* Prototype;

public:
	APhiBall();

	virtual void Redraw() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

protected:
	static FRandomStream RandomStream;
};


USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FNeedleSettings {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Density = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Length = 20.0;
};

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API AFirTreeBranch : public ATreeBranch
{
	GENERATED_BODY()

protected:

	TArray<TSharedPtr<FTreeElementPrototypeData>> Prototypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TArray<ATreeElement*> FirComponents;

public:

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual	ATreeElement* NewFirBranch(const TArray<FTreeElementPrototypeData>& Prototypes);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	virtual void RedrawFirComponents();

	void AddPrototype(TSharedPtr<FTreeElementPrototypeData> Prototype);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void AddFirComponent(ATreeElement* InElement);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void RemoveAllFirComponents();

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void RemoveAllPrototypes();

	virtual void Redraw() override;
};
