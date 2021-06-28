// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "TreeElementFunctionLibrary.generated.h"

/**
 *
 */
UENUM(BlueprintType)
namespace ETrigonometry
{
	enum Function
	{
		SIN, COS, TAN, ASIN, ACOS, ATAN, SINH, COSH, TANH, EXP, EXP2, LOG, SQR, SQRT, PHI, PI_N, CLAMP, RAND
	};
}



USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FFunctionValueProperty {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		TEnumAsByte<ETrigonometry::Function> Function;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		float Value;
};

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FRangeValueProperty {

	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		float MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
		float MaxValue;
};

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FFunctionRangeValueProperty {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TEnumAsByte<ETrigonometry::Function> Function;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "3.1416", UIMin = "0.0", UIMax = "3.1416")
	)
		float MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "3.1416", UIMin = "0.0", UIMax = "3.1416")
	)
		float MaxValue;
};


UCLASS()
class PROCEDURALTREE_API UTreeElementFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	*Add Rule to Genesis alphabet
	*
	*@param		Alphabet		Genesis Alphabet Object Reference
	*@param		Rule			Genesis Rule Object Reference
	*@return	void
	*/
	UFUNCTION(BlueprintCallable, Category = "Genesis")
	static float Call(const FFunctionRangeValueProperty& Property, float InValue, float Multiplier);

	static FRandomStream RandomStream;
};


