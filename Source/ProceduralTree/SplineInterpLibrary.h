// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "spline.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "SplineInterpLibrary.generated.h"

/**
 *
 */
UENUM(BlueprintType)
namespace EInterpolation
{
	enum MODE
	{
		CUBIC, HERMITE, MONOTONIC, NONE
	};
}

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API USplineInterpLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	*Add Rule to Genesis alphabet
	*
	*@param		Alphabet		Genesis Alphabet Object Reference
	*@param		Rule			Genesis Rule Object Reference
	*@return	void
	*/
public:

	UFUNCTION(BlueprintCallable, Category = "Interp")
	static void Proccess(TEnumAsByte<EInterpolation::MODE> Algorithm, USplineComponent* Spline);

	UFUNCTION(BlueprintCallable, Category = "Interp")
	static void Cubic(USplineComponent* Spline);

	UFUNCTION(BlueprintCallable, Category = "Interp")
	static void Hermite(USplineComponent* Spline);

	UFUNCTION(BlueprintCallable, Category = "Interp")
	static void Monotonic(USplineComponent* Spline);


};
