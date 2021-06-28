// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeElementFunctionLibrary.h"

FRandomStream UTreeElementFunctionLibrary::RandomStream = FRandomStream(INT32_MAX);

float UTreeElementFunctionLibrary::Call(const FFunctionRangeValueProperty& Property, float InValue, float Multiplier) {
	float Response;
	switch (Property.Function) {
	case ETrigonometry::SIN:
		Response = FMath::Sin(InValue) * Multiplier;
		break;
	case ETrigonometry::COS:
		Response = FMath::Cos(InValue) * Multiplier;
		break;
	case ETrigonometry::TAN:
		Response = FMath::Tan(InValue) * Multiplier;
		break;
	case ETrigonometry::ASIN:
		Response = FMath::Asin(InValue) * Multiplier;
		break;
	case ETrigonometry::ACOS:
		Response = FMath::Acos(InValue) * Multiplier;
		break;
	case ETrigonometry::ATAN:
		Response = FMath::Atan(InValue) * Multiplier;
		break;
	case ETrigonometry::RAND:
		InValue = UTreeElementFunctionLibrary::RandomStream.GetFraction();
		Response = Property.MinValue + InValue * (Property.MaxValue - Property.MinValue);
		Response *= Multiplier;
		break;
	case ETrigonometry::CLAMP:
		Response = FMath::Clamp(InValue, Property.MinValue, Property.MaxValue);
		Response *= Multiplier;
		break;
	case ETrigonometry::PI_N:
		Response = Property.MinValue + InValue * (Property.MaxValue - Property.MinValue);
		Response *= Multiplier;
		break;
	default:
		Response = FMath::Clamp(InValue, Property.MinValue, Property.MaxValue);
	}
	return Response;
}