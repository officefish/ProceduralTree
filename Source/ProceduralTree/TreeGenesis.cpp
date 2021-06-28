// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeGenesis.h"

UGenesisMutation::UGenesisMutation(float InValue) {
	this->Value = InValue;
}

/* Mutations */
ATreeElement* UGrowMutation::Pass(ATreeElement* InTreeElement) {
	if (InTreeElement) InTreeElement->DrawForward(Value);
	return InTreeElement;
}
ATreeElement* UTiltMutation::Pass(ATreeElement* InTreeElement) {
	return InTreeElement;
}
ATreeElement* UChildBranchMutation::Pass(ATreeElement* InTreeElement) {
	if (InTreeElement) InTreeElement = InTreeElement->NewBranch();
	return InTreeElement;
}
ATreeElement* UParentBranchMutation::Pass(ATreeElement* InTreeElement) {
	if (InTreeElement) InTreeElement = InTreeElement->ParentBranch();
	return InTreeElement;
}
ATreeElement* ULeafMutation::Pass(ATreeElement* InTreeElement) {
	return InTreeElement;
}
ATreeElement* UPitchMutation::Pass(ATreeElement* InTreeElement) {
	if (InTreeElement) InTreeElement->Pitch(Value);
	return InTreeElement;
}
ATreeElement* URollMutation::Pass(ATreeElement* InTreeElement) {
	if (InTreeElement) InTreeElement->Roll(Value);
	return InTreeElement;
}

ATreeElement* UChildFirBranchMutation::Pass(ATreeElement* InTreeElement) {
	AFirTreeBranch* Branch = dynamic_cast<AFirTreeBranch*>(InTreeElement);
	if (Branch)	InTreeElement = Branch->NewFirBranch(this->Prototypes);
	return InTreeElement;
}

void UChildFirBranchMutation::AddPrototype(const FTreeElementPrototypeData& Prototype) {
	Prototypes.Add(Prototype);
}

void UChildFirBranchMutation::RemoveAllPrototypes() {
	Prototypes.Empty();
}


void UGenesisRule::AddPattern(FRulePattern Pattern) {
	this->Patterns.Add(Pattern);
}

void UGenesisRule::RemoveAllPatterns() {
	this->Patterns.Empty();
}

void UGenesisRule::AddMutation(UGenesisMutation* Mutation) {
	this->Mutations.Add(Mutation);
}

ATreeElement* UGenesisRule::ApplyMutations(ATreeElement* InTreeElement, float DynamicValue) {
	if (!Mutations.Num()) return InTreeElement;
	ATreeElement* CurrentElement = InTreeElement;
	for (auto& Mutation : Mutations) {
		if (DynamicValue) {
			UDynamicValueMutation* DynamicMutation = dynamic_cast<UDynamicValueMutation*>(Mutation);
			if (DynamicMutation) {
				float ConstantValue = DynamicMutation->Value;
				DynamicMutation->Value = DynamicValue;
				CurrentElement = DynamicMutation->Pass(CurrentElement);
				DynamicMutation->Value = ConstantValue;
			} else
				CurrentElement = Mutation->Pass(CurrentElement);
		} else
			CurrentElement = Mutation->Pass(CurrentElement);
	}
	return CurrentElement;
}

FRandomStream UGenesisRule::RandomStream = FRandomStream(INT32_MAX);

FString UGenesisRule::GetAxiom() const {
	if (!Patterns.Num()) return FString{};
	if (Patterns.Num() == 1) return (*Patterns.begin()).Axiom;
	float Chance = UGenesisRule::RandomStream.GetFraction();
	float PatternChance = 0.0;
	for (int32 i = 0; i < Patterns.Num() - 1; ++i) {
		PatternChance += Patterns[i].Chance;
		if (PatternChance > Chance) return Patterns[i].Axiom;
	}
	return Patterns[Patterns.Num() - 1].Axiom;
}

void UGenesisAlphabet::Add(UGenesisRule* Rule) {
	//const TEnumAsByte<EGenesisAlphabet::Symbol> Symbol = Rule->Symbol;
	FString EnumAsString = UTreeGenesisLibrary::AlphabetSymbolToString(Rule->Symbol);
	//UE_LOG(LogTemp, Warning, TEXT("Key: "), *EnumAsString);
	if (GenesisMap.Contains(EnumAsString))
		UE_LOG(LogTemp, Warning, TEXT("Rule with associated symbol: %s is already exist, and will be overwritten"), *EnumAsString);
	if (EnumAsString.Len()) {
		this->GenesisMap.Add(EnumAsString, Rule);
	}
}

UGenesisRule* UGenesisAlphabet::GetRule(FString Key) {
	UGenesisRule** ValuePtr = this->GenesisMap.Find(Key);
	//if (!ValuePtr) UE_LOG(LogTemp, Warning, TEXT("Rule Not found"));
	return ValuePtr ? *ValuePtr : nullptr;
}

UTreeGenesis::UTreeGenesis() {
	Alphabet = CreateDefaultSubobject<UGenesisAlphabet>(TEXT("AlphabetInstance"));
}

FString UTreeGenesis::GetStepPattern(int32 Step) {
	if (!Step) return Axiom;
	CurrentPattern = Axiom;
	for (int32 i = 0; i < Step; ++i) {
		FString StepPattern;
		for (int32 j = 0; j < CurrentPattern.Len(); ++j) {
			FString Key = CurrentPattern.Mid(j, 1);
			if (Key.Equals(UTreeGenesisLibrary::OpenBracket) ||
			Key.Equals(UTreeGenesisLibrary::CloseBracket) ||
			Key.IsNumeric())
				StepPattern.Append(Key);
			else {
				UGenesisRule* Rule = this->Alphabet->GetRule(Key);
				if (Rule) StepPattern.Append(Rule->GetAxiom());
			}
		}
		CurrentPattern = StepPattern;
	}
	return CurrentPattern;
}


FString UTreeGenesisLibrary::OpenBracket = FString{ "(" };
FString UTreeGenesisLibrary::CloseBracket = FString{ ")" };
FString UTreeGenesisLibrary::PlusSymbol = FString{ "+" };
FString UTreeGenesisLibrary::MinusSymbol = FString{ "-" };
FString UTreeGenesisLibrary::OpenSquareBraket = FString{ "[" };
FString UTreeGenesisLibrary::CloseSquareBraket = FString{ "]" };
FString UTreeGenesisLibrary::SlashSymbol = FString{ "/" };
FString UTreeGenesisLibrary::BackslashSymbol = FString{ "\\" };
FString UTreeGenesisLibrary::CaretSymbol = FString{ "^" };
FString UTreeGenesisLibrary::AmpersandSymbol = FString{ "&" };
FString UTreeGenesisLibrary::OpenFigureBracket = FString{ "{" };
FString UTreeGenesisLibrary::CloseFigureBracket = FString{ "}" };

void UTreeGenesisLibrary::AddRule(UGenesisAlphabet* Alphabet, UGenesisRule* Rule) {
	Alphabet->Add(Rule);
}

void UTreeGenesisLibrary::AddPattern(UGenesisRule* Rule, FRulePattern Pattern) {
	Rule->AddPattern(Pattern);
}

void UTreeGenesisLibrary::AddMutation(UGenesisRule* Rule, UGenesisMutation* Mutation) {
	Rule->AddMutation(Mutation);
}

UGenesisMutation* UTreeGenesisLibrary::GetGrowMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UGrowMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetTiltMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UTiltMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetRollMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<URollMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetChildBranchMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UChildBranchMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetChildFirBranchMutation(AActor* Owner) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UChildFirBranchMutation>(Owner->GetRootComponent());
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetParentBranchMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UParentBranchMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetLeafMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<ULeafMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisMutation* UTreeGenesisLibrary::GetPitchMutation(AActor* Owner, float InValue) {
	if (!Owner) return nullptr;
	UGenesisMutation* Mutation = NewObject<UPitchMutation>(Owner->GetRootComponent());
	if (!Mutation) return nullptr;
	Mutation->Value = InValue;
	return Mutation;
}

UGenesisRule* UTreeGenesisLibrary::GetRule(AActor* Owner) {
	if (!Owner) return nullptr;
	UGenesisRule* Rule = NewObject<UGenesisRule>(Owner->GetRootComponent());
	return Rule;
}

FString UTreeGenesisLibrary::AlphabetSymbolToString(TEnumAsByte<EGenesisAlphabet::Symbol> Symbol) {
	FString Response;
	switch (Symbol) {
	case EGenesisAlphabet::PUSH:
		Response = UTreeGenesisLibrary::OpenSquareBraket; break;
	case EGenesisAlphabet::POP:
		Response = UTreeGenesisLibrary::CloseSquareBraket; break;
	case EGenesisAlphabet::PLUS:
		Response = UTreeGenesisLibrary::PlusSymbol; break;
	case EGenesisAlphabet::MINUS:
		Response = UTreeGenesisLibrary::MinusSymbol; break;
	case EGenesisAlphabet::SLASH:
		Response = UTreeGenesisLibrary::SlashSymbol; break;
	case EGenesisAlphabet::BACKSLASH:
		Response = UTreeGenesisLibrary::BackslashSymbol; break;
	case EGenesisAlphabet::CARET:
		Response = UTreeGenesisLibrary::CaretSymbol; break;
	case EGenesisAlphabet::AMPERSAND:
		Response = UTreeGenesisLibrary::AmpersandSymbol; break;
	case EGenesisAlphabet::OPEN_FIGURE_BRACKET:
		Response = UTreeGenesisLibrary::OpenFigureBracket; break;
	case EGenesisAlphabet::CLOSE_FIGURE_BRACKET:
		Response = UTreeGenesisLibrary::CloseFigureBracket; break;
	default:
		Response = UEnum::GetValueAsString(Symbol.GetValue());
		Response.RemoveAt(0, Response.Len() - 1);
	}
	return Response;
}

/*
	UE_LOG(LogTemp, Warning, TEXT("GetRule Key: %s"), *Key);
	UE_LOG(LogTemp, Warning, TEXT("Alphabet.Num: %d"), GenesisMap.Num());
	for (const TPair<FString, UGenesisRule*>& pair : GenesisMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pair Key: %s"), *pair.Key);
		UE_LOG(LogTemp, Warning, TEXT("Pair Value: %s"), *(pair.Value->Pattern));
	}
*/