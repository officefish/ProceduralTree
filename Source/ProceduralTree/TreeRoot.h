// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TreeGenesis.h"
#include "TreeBranch.h"
#include "TreeRootModifier.h"
#include "TreeRoot.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FRuleWidgetElement {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Genesis")
	TEnumAsByte<EGenesisAlphabet::Symbol> Symbol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Genesis")
	FString Axiom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Genesis",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
	float Chance = 1.0;
};

UCLASS()
class PROCEDURALTREE_API ATreeRoot : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Genesis")
	float ForwardValue = 25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Genesis")
	float AngleValue = 30;

protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleDefaultsOnly)
	ATreeBranch* TreeTrunk;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UTreeGenesis* Genesis;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	bool bModifiersInit = false;

	TArray<UTreeRootModifier*> Modifiers;

public:
	ATreeRoot();
	//virtual void OnConstruction(const FTransform& Transform) override;

	//UFUNCTION(BlueprintPure, Category = "Genesis")
	//UTreeGenesis* GetGenesis() const;

	UFUNCTION(BlueprintCallable, Category = "Genesis")
	void Redraw(int32 Step);

public:
	static FAttachmentTransformRules TrunkAttachmentRules;
	static FDetachmentTransformRules TrunkDetachmentRules;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void ValidateModifiers();
	void ValidateGenesis();
	void ValidateSceneRoot();

	void AddModifier(UTreeRootModifier* Modifier);
	void ProcessModifiers(ATreeBranch* TreeTrunk, int32 Step);

	virtual ATreeBranch* NewTrunk();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

UCLASS()
class PROCEDURALTREE_API AStandartTreeRoot : public ATreeRoot
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rules")
	FString Axiom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rules")
	TArray<FRuleWidgetElement> Rules;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Rules")
	bool bStandartRulesInit = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Rules")
	bool bEditorRulesInit = false;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void ValidateModifiers() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

protected:

	UFUNCTION(BlueprintCallable, Category = "Genesis")
	virtual void ValidateRules();

	UFUNCTION(BlueprintCallable, Category = "Genesis")
	virtual void ValidateStandartRules();

	UFUNCTION(BlueprintCallable, Category = "Genesis")
	virtual void ValidateEditorRules();

	virtual void RegisterStandartRules();
	virtual void RegisterEditorRules();

	void ReconstructRules();
};

