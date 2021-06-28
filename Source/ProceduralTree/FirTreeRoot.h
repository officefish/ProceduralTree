// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TreeRoot.h"
#include "FirTreeRoot.generated.h"

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API AFirTreeRoot : public AStandartTreeRoot
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	FTreeElementProperties NeedleElementProperties;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void RegisterEditorRules() override;
	virtual void ValidateModifiers() override;
	virtual ATreeBranch* NewTrunk() override;

protected:
	void SetupPrototypes(UChildFirBranchMutation* Mutation);
};
