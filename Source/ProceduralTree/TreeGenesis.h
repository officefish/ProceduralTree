// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <unordered_map>
#include <string>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "TreeBranch.h"
#include "FirTreeBranch.h"
#include "TreeGenesis.generated.h"

UENUM(BlueprintType)
namespace EGenesisAlphabet
{
	enum Symbol
	{
		A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
		PUSH, POP, PLUS, MINUS, SLASH, BACKSLASH, CARET, AMPERSAND, OPEN_FIGURE_BRACKET, CLOSE_FIGURE_BRACKET
	};
}

USTRUCT(BlueprintType)
struct PROCEDURALTREE_API FRulePattern {

	GENERATED_BODY()

	UPROPERTY(
		EditAnywhere, BlueprintReadWrite, Category = "Geometry",
		meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")
	)
	float Chance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	FString	Axiom;


};

/**
 *
 */
UCLASS()
class PROCEDURALTREE_API UGenesisMutation : public UObject {
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Genesis")
	float Value;

public:
	UGenesisMutation() {};
	UGenesisMutation(float InValue);
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) { return InTreeElement; };
};

UCLASS()
class PROCEDURALTREE_API UDynamicValueMutation : public UGenesisMutation {
	GENERATED_BODY()
public:
	UDynamicValueMutation() {};
	UDynamicValueMutation(float InValue) : UGenesisMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override { return InTreeElement; };
};


UCLASS()
class PROCEDURALTREE_API UGrowMutation : public UDynamicValueMutation {
	GENERATED_BODY()
public:
	UGrowMutation() {};
	UGrowMutation(float InValue) : UDynamicValueMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API UTiltMutation : public UDynamicValueMutation {
	GENERATED_BODY()
public:
	UTiltMutation() {};
	UTiltMutation(float InValue) : UDynamicValueMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API UChildBranchMutation : public UGenesisMutation {
	GENERATED_BODY()
public:
	UChildBranchMutation() {};
	UChildBranchMutation(float InValue) : UGenesisMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS(Blueprintable, BlueprintType)
class PROCEDURALTREE_API UChildFirBranchMutation : public UGenesisMutation {
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	TArray<FTreeElementPrototypeData> Prototypes;

public:
	UChildFirBranchMutation() {};
	UChildFirBranchMutation(float InValue) : UGenesisMutation(InValue) {};

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void AddPrototype(const FTreeElementPrototypeData& Prototype);

	UFUNCTION(BlueprintCallable, Category = "Procedural")
	void RemoveAllPrototypes();

	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API UParentBranchMutation : public UGenesisMutation {
	GENERATED_BODY()
public:
	UParentBranchMutation() {};
	UParentBranchMutation(float InValue) : UGenesisMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API ULeafMutation : public UGenesisMutation {
	GENERATED_BODY()
public:
	ULeafMutation() {};
	ULeafMutation(float InValue) : UGenesisMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API UPitchMutation : public UDynamicValueMutation {
	GENERATED_BODY()
public:
	UPitchMutation() {};
	UPitchMutation(float InValue) : UDynamicValueMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};

UCLASS()
class PROCEDURALTREE_API URollMutation : public UDynamicValueMutation {
	GENERATED_BODY()
public:
	URollMutation() {};
	URollMutation(float InValue) : UDynamicValueMutation(InValue) {};
	virtual ATreeElement* Pass(ATreeElement* InTreeElement) override;
};



UCLASS(Blueprintable)
class PROCEDURALTREE_API UGenesisRule : public UObject {
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Genesis")
	TEnumAsByte<EGenesisAlphabet::Symbol> Symbol;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Genesis")
	TArray<FRulePattern> Patterns;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Genesis")
	TArray<UGenesisMutation*> Mutations;

public:
	static FRandomStream RandomStream;

public:
	UGenesisRule() {};
	UGenesisRule(TEnumAsByte<EGenesisAlphabet::Symbol> InSymbol) { this->Symbol = InSymbol; };

	void AddPattern(FRulePattern Pattern);
	void RemoveAllPatterns();
	void AddMutation(UGenesisMutation* Mutation);
	ATreeElement* ApplyMutations(ATreeElement* InTreeElement, float DynamicValue);
	FString GetAxiom() const;

	template <typename T>
	T* FindMutationByClass() {
		for (auto& Mutation : Mutations) {
			T* GoodCast = dynamic_cast<T*>(Mutation);
			if (GoodCast) return GoodCast;
		}
		return nullptr;
	}
};

UCLASS()
class PROCEDURALTREE_API UGenesisAlphabet : public UObject {
	GENERATED_BODY()
protected:
	UPROPERTY()
	TMap<FString, UGenesisRule*> GenesisMap;
public:
	UGenesisAlphabet() { GenesisMap.Reset(); };

	UFUNCTION (BlueprintCallable, Category = "Genesis")
	void Add(UGenesisRule* Rule);
	UGenesisRule* GetRule(FString Key);
};

UCLASS()
class PROCEDURALTREE_API UTreeGenesis : public UObject {
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Genesis")
	UGenesisAlphabet* Alphabet;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Genesis")
	FString Axiom = FString("");

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Genesis")
	FString CurrentPattern = FString("");;

public:
	UTreeGenesis();
	UFUNCTION(BlueprintPure, Category = "Genesis")
	FString GetStepPattern(int32 Step);
};


UCLASS(meta = (ScriptName = "GenesisLibrary"))
class PROCEDURALTREE_API UTreeGenesisLibrary : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	/**
	*Add Rule to Genesis alphabet
	*
	*@param		Alphabet		Genesis Alphabet Object Reference
	*@param		Rule			Genesis Rule Object Reference
	*@return	void
	*/
	UFUNCTION(BlueprintCallable, Category = "Genesis", meta = (DisplayName = "Add Rule", CompactNodeTitle = "ADD", Keywords = "genesis add"))
	static void AddRule(UGenesisAlphabet* Alphabet, UGenesisRule* Rule);

	/**
	*Add Pattern to Genesis Rule
	*
	*@param		Rule			Genesis Rule Object Reference
	*@param		Pattern			Rule Pattern Instance
	*@return	void
	*/
	UFUNCTION(BlueprintCallable, Category = "Genesis", meta = (DisplayName = "Add Pattern", CompactNodeTitle = "ADD", Keywords = "genesis add"))
	static void AddPattern(UGenesisRule* Rule, FRulePattern Pattern);

	/**
	*Add Rule to Genesis alphabet
	*
	*@param		Rule			Genesis Rule Object Reference
	*@param		Mutation		Genesis Mutation Object Reference
	*@return	void
	*/
	UFUNCTION(BlueprintCallable, Category = "Genesis", meta = (DisplayName = "Add Mutation", CompactNodeTitle = "ADD", Keywords = "genesis add"))
	static void AddMutation(UGenesisRule* Alphabet, UGenesisMutation* Mutation);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Grow Mutation", Keywords = "grow mutation"))
	static UGenesisMutation* GetGrowMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Tilt Mutation", Keywords = "tilt mutation"))
	static UGenesisMutation* GetTiltMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Child Branch Mutation", Keywords = "child branch mutation"))
	static UGenesisMutation* GetChildBranchMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Fir Child Branch Mutation", Keywords = "child fir branch mutation"))
	static UGenesisMutation* GetChildFirBranchMutation(AActor* Owner);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Parent Branch Mutation", Keywords = "parent branch mutation"))
	static UGenesisMutation* GetParentBranchMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Leaf Mutation", Keywords = "leaf mutation"))
	static UGenesisMutation* GetLeafMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Pitch Mutation", Keywords = "pitch mutation"))
	static UGenesisMutation* GetPitchMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Roll Mutation", Keywords = "roll mutation"))
	static UGenesisMutation* GetRollMutation(AActor* Owner, float InValue);

	UFUNCTION(BlueprintPure, Category = "Genesis", meta = (DisplayName = "Get Rule", Keywords = "new rule"))
	static UGenesisRule* GetRule(AActor* Owner);

	UFUNCTION(BlueprintPure, Category = "Genesis")
	static FString AlphabetSymbolToString(TEnumAsByte<EGenesisAlphabet::Symbol> Symbol);

	static FString OpenBracket;
	static FString CloseBracket;
	static FString PlusSymbol;
	static FString MinusSymbol;
	static FString OpenSquareBraket;
	static FString CloseSquareBraket;
	static FString SlashSymbol;
	static FString BackslashSymbol;
	static FString CaretSymbol;
	static FString AmpersandSymbol;
	static FString OpenFigureBracket;
	static FString CloseFigureBracket;

};
