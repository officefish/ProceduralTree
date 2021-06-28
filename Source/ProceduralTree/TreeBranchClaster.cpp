// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeBranchClaster.h"

int32 UTreeElementClaster::AddElement(const FTreeElementProperties& Properties) {
	FVector Location;
	FRotator Rotation;
	FActorSpawnParameters SpawnInfo;
	ATreeElement* NewElement = this->GetWorld()->SpawnActor<ATreeElement>(Location, Rotation, SpawnInfo);
	NewElement->SetupElementProperties(Properties);
	NewElement->Redraw();
	this->Elements.Add(NewElement);
	return this->Elements.Num() - 1;
}

ATreeElement* UTreeElementClaster::GetElementInstanceByIndex(int32 index, ATreeElement* Owner) {
	ATreeElement* Prototype = this->Elements[index];
	if (!Prototype) return nullptr;
	ATreeElement* NewElement = Prototype->Clone(Owner);
	return NewElement;
}

int32 UTreeBranchClaster::AddBranch(const FTreeElementProperties& ElementProperties, const FTreeBranchProperties& BranchProperties) {
	FVector Location;
	FRotator Rotation;
	FActorSpawnParameters SpawnInfo;
	ATreeBranch* NewBranch = this->GetWorld()->SpawnActor<ATreeBranch>(Location, Rotation, SpawnInfo);
	//NewBranch->SetupElementProperties(ElementProperties);
	NewBranch->LOD_0_Properties = ElementProperties;
	NewBranch->BranchProperties = BranchProperties;
	NewBranch->Redraw();
	this->Elements.Add(NewBranch);
	return this->Elements.Num() - 1;
}