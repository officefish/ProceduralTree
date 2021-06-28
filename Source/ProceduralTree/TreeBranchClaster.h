// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TreeBranch.h"
#include "TreeBranchClaster.generated.h"

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API UTreeElementClaster : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<ATreeElement*> Elements;

public:
	int32 AddElement(const FTreeElementProperties& Properties);
	virtual ATreeElement* GetElementInstanceByIndex(int32 index, ATreeElement* Owner);
	ATreeElement* GetRandomElementInstance(ATreeElement* Owner);
};

UCLASS()
class PROCEDURALTREE_API UTreeBranchClaster : public UTreeElementClaster
{
	GENERATED_BODY()
public:
	int32 AddBranch(const FTreeElementProperties& ElementProperties, const FTreeBranchProperties& BranchProperties);
};
