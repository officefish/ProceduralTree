// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeRootModifier.h"

void UBaseRadiusModifier::Pass(ATreeBranch* TreeTrunk, int32 Step) {
	UE_LOG(LogTemp, Warning, TEXT("BaseRadiusModifier::Pass"));
	float Radius = UTreeRootModifierLibrary::Call(this->Function, static_cast<float>(Step));
	TreeTrunk->SetupBaseRadius(Radius);
}

float UTreeRootModifierLibrary::Call(const FAlgebraFunctionValueProperty& Property, float Base) {
	float Response = 1;
	switch (Property.Function) {
	case EAlebra::DEVIDE:
		Response = FMath::DivideAndRoundNearest(Base, Property.Coficient);
		break;
	case EAlebra::POWER:
		Response = FMath::Pow(Base, Property.Coficient);
		break;
	case EAlebra::SUM:
		Response = Property.Coficient + Base;
		break;
	}
	return Response;
}