// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineInterpLibrary.h"

void USplineInterpLibrary::Proccess(TEnumAsByte<EInterpolation::MODE> Algorithm, USplineComponent* Spline) {
	switch (Algorithm) {
	case EInterpolation::CUBIC:
		USplineInterpLibrary::Cubic(Spline); break;
	case EInterpolation::HERMITE:
		USplineInterpLibrary::Hermite(Spline); break;
	case EInterpolation::MONOTONIC:
		USplineInterpLibrary::Monotonic(Spline); break;
	}
}

void USplineInterpLibrary::Cubic(USplineComponent* Spline) {
	UE_LOG(LogTemp, Warning, TEXT("Cubic Interp"));
}

void USplineInterpLibrary::Hermite(USplineComponent* Spline) {
	UE_LOG(LogTemp, Warning, TEXT("Hermite Interp"));
}

void USplineInterpLibrary::Monotonic(USplineComponent* Spline) {
	UE_LOG(LogTemp, Warning, TEXT("Monotonic Interp"));
}