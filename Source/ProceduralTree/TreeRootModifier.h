// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TreeBranch.h"
#include "TreeRootModifier.generated.h"

UENUM(BlueprintType)
namespace EAlebra
{
	enum Function
	{
		SUM, DEVIDE, POWER
	};
}

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FAlgebraFunctionValueProperty {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TEnumAsByte<EAlebra::Function> Function;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	float Coficient;
};

UCLASS()
class PROCEDURALTREE_API UTreeRootModifier : public UObject
{
	GENERATED_BODY()

public:
	virtual void Pass(ATreeBranch* TreeTrunk, int32 Step) {};
};

UCLASS()
class PROCEDURALTREE_API UBaseRadiusModifier : public UTreeRootModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FAlgebraFunctionValueProperty Function;

public:
	virtual void Pass(ATreeBranch* TreeTrunk, int32 Step) override;
};

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API UTreeRootModifierLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Genesis")
	static float Call(const FAlgebraFunctionValueProperty& Function, float Base);

};
