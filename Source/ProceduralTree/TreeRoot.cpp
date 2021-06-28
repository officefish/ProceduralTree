// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeRoot.h"

FAttachmentTransformRules ATreeRoot::TrunkAttachmentRules = FAttachmentTransformRules {
	EAttachmentRule::KeepRelative,
	EAttachmentRule::KeepRelative,
	EAttachmentRule::KeepRelative,
	false
};

FDetachmentTransformRules ATreeRoot::TrunkDetachmentRules = FDetachmentTransformRules {
	EDetachmentRule::KeepRelative,
	EDetachmentRule::KeepRelative,
	EDetachmentRule::KeepRelative,
	false
};

ATreeRoot::ATreeRoot() {
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TreeRootScene"));
	Genesis = CreateDefaultSubobject<UTreeGenesis>(TEXT("GenesisInstance"));
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = SceneRoot;
}

void ATreeRoot::ValidateGenesis() {
	ValidateSceneRoot();
	if (!this->Genesis) Genesis = NewObject<UTreeGenesis>(this->GetRootComponent());
}

void ATreeRoot::ValidateSceneRoot() {
	if (!this->SceneRoot) {
		SceneRoot = NewObject<USceneComponent>(this);
		RootComponent = SceneRoot;
	}
}

ATreeBranch* ATreeRoot::NewTrunk() {
	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	ATreeBranch* TreeTrunkInstance = this->GetWorld()->SpawnActor<ATreeBranch>(Location, Rotation, SpawnInfo);
	TreeTrunkInstance->AttachToComponent(SceneRoot, ATreeRoot::TrunkAttachmentRules);

	return TreeTrunkInstance;
}

void ATreeRoot::Redraw(int32 Step) {
	UE_LOG(LogTemp, Warning, TEXT("Step: %d"), Step);

	ValidateGenesis();
	ValidateModifiers();

	FString Pattern = this->Genesis->GetStepPattern(Step);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Pattern);
	UE_LOG(LogTemp, Warning, TEXT("Pattern.length: %d"), Pattern.Len());
	if (TreeTrunk) {
		// If TreeTrunk remove TreeTrunk from scene
		TreeTrunk->RemoveTreeChildren();
		TreeTrunk->DetachFromActor(ATreeRoot::TrunkDetachmentRules);
		// Invalidate TreeTrunk
		TreeTrunk->Destroy();
	}
	// Reinit TreeTrunk
	TreeTrunk = NewTrunk();

	ATreeElement* CurrentElement = TreeTrunk;
	// Loop Pattern and Pass every mutation edit Splines Tree
	for (int32 j = 0; j < Pattern.Len(); ++j) {
		float DynamicValue = 0;
		FString Key = Pattern.Mid(j, 1);
		/* Parse Parametric grammars */
		if (Key.IsNumeric()) continue;
		if (Key.Equals(UTreeGenesisLibrary::OpenBracket) ||
			Key.Equals(UTreeGenesisLibrary::CloseBracket)) continue;
		if (j + 1 < Pattern.Len()) {
			FString NextKey = Pattern.Mid(j + 1, 1);
			if (NextKey.Equals(UTreeGenesisLibrary::OpenBracket)) {
				FString DynamicValueString;
				int32 k = j + 2;
				while (!NextKey.Equals(UTreeGenesisLibrary::CloseBracket) && k < Pattern.Len()) {
					NextKey = Pattern.Mid(k, 1);
					if (NextKey.IsNumeric()) DynamicValueString.Append(NextKey);
					++k;
				}
				DynamicValue = FCString::Atof(*DynamicValueString);
			}
		} /* End Parse Parametric grammars */
		UGenesisRule* Rule = this->Genesis->Alphabet->GetRule(Key);
		if (Rule) CurrentElement = Rule->ApplyMutations(CurrentElement, DynamicValue);
	}

	// Apply Geometry modifiers
	this->ProcessModifiers(TreeTrunk, Step);

	UE_LOG(LogTemp, Warning, TEXT("BaseRadius: %f"), TreeTrunk->BranchProperties.BaseRadius);

	// Draw Geometry
	TreeTrunk->UpdateSpline();
	TreeTrunk->Redraw();
}

void ATreeRoot::AddModifier(UTreeRootModifier* Modifier) {
	Modifiers.Add(Modifier);
}

void ATreeRoot::ProcessModifiers(ATreeBranch* InTreeBranch, int32 Step) {
	if (!InTreeBranch) {
		UE_LOG(LogTemp, Warning, TEXT("ProcessModifiers do nothing"));
		return;
	}
	for (auto& Modifier : Modifiers) {
		Modifier->Pass(InTreeBranch, Step);
	}
}

void ATreeRoot::ValidateModifiers() {
	bModifiersInit = true;
}

/*  */
void ATreeRoot::BeginPlay() {
	Super::BeginPlay();
}
void ATreeRoot::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void  AStandartTreeRoot::ValidateModifiers() {
	if (!bModifiersInit) {
		UBaseRadiusModifier* Modifier = NewObject<UBaseRadiusModifier>(this);
		Modifier->Function.Coficient = 1.5;
		Modifier->Function.Function = EAlebra::POWER;
		this->AddModifier(Modifier);
		bModifiersInit = true;
	}
}

void AStandartTreeRoot::ValidateRules() {
	ValidateStandartRules();
	ValidateEditorRules();
}

void AStandartTreeRoot::ValidateStandartRules() {
	if (!bStandartRulesInit) {
		RegisterStandartRules();
		bStandartRulesInit = true;
	}
}

void AStandartTreeRoot::ValidateEditorRules() {
	if (!bEditorRulesInit) {
		RegisterEditorRules();
		bEditorRulesInit = true;
	}
}

void AStandartTreeRoot::RegisterStandartRules() {
	UE_LOG(LogTemp, Warning, TEXT("RegisterStandartRules"));

	ValidateGenesis();

	/* Forward Rule, Symbol: 'F' */
	UGenesisRule* ForwardRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* GrowMutation = NewObject<UGrowMutation>(this->GetRootComponent());
	GrowMutation->Value = ForwardValue;
	ForwardRule->AddMutation(GrowMutation);
	ForwardRule->AddPattern(FRulePattern{ 1.0, FString{"F"} });
	ForwardRule->Symbol = EGenesisAlphabet::F;
	this->Genesis->Alphabet->Add(ForwardRule);

	/* Pitch Left Rule, Symbol: '+' */
	UGenesisRule* PitchLeftRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* PitchLeftMutation =NewObject<UPitchMutation>(this->GetRootComponent());
	PitchLeftMutation->Value = AngleValue;
	PitchLeftRule->AddMutation(PitchLeftMutation);
	PitchLeftRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::AmpersandSymbol });
	PitchLeftRule->Symbol = EGenesisAlphabet::AMPERSAND;
	this->Genesis->Alphabet->Add(PitchLeftRule);

	/* Pitch Right Rule, Symbol: '-' */
	UGenesisRule* PitchRightRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* PitchRightMutation = NewObject<UPitchMutation>(this->GetRootComponent());
	PitchRightMutation->Value = AngleValue * -1;
	PitchRightRule->AddMutation(PitchRightMutation);
	PitchRightRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::CaretSymbol });
	PitchRightRule->Symbol = EGenesisAlphabet::CARET;
	this->Genesis->Alphabet->Add(PitchRightRule);

	/* Roll Right Rule, Symbol: "/" */
	UGenesisRule* RollRightRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* RollRightMutation = NewObject<URollMutation>(this->GetRootComponent());
	RollRightMutation->Value = AngleValue;
	RollRightRule->AddMutation(RollRightMutation);
	RollRightRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::SlashSymbol });
	RollRightRule->Symbol = EGenesisAlphabet::SLASH;
	this->Genesis->Alphabet->Add(RollRightRule);

	/* Roll Left Rule, Symbol: "/" */
	UGenesisRule* RollLeftRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* RollLeftMutation = NewObject<URollMutation>(this->GetRootComponent());
	RollLeftMutation->Value = AngleValue * -1;
	RollLeftRule->AddMutation(RollLeftMutation);
	RollLeftRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::BackslashSymbol });
	RollLeftRule->Symbol = EGenesisAlphabet::BACKSLASH;
	this->Genesis->Alphabet->Add(RollLeftRule);
}

void AStandartTreeRoot::RegisterEditorRules() {

	UE_LOG(LogTemp, Warning, TEXT("Standart RegisterEditorRules"));

	ValidateGenesis();

	/* Push Rule, Symbol: '[' */
	UGenesisRule* PushRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* PushMutation = NewObject<UChildBranchMutation>(this->GetRootComponent());
	PushRule->AddMutation(PushMutation);
	PushRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::OpenSquareBraket });
	PushRule->Symbol = EGenesisAlphabet::PUSH;
	this->Genesis->Alphabet->Add(PushRule);

	/* Pop Rule, Symbol: ']' */
	UGenesisRule* PopRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* PopMutation = NewObject<UParentBranchMutation>(this->GetRootComponent());
	PopRule->AddMutation(PopMutation);
	PopRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::CloseSquareBraket });
	PopRule->Symbol = EGenesisAlphabet::POP;
	this->Genesis->Alphabet->Add(PopRule);
};

void AStandartTreeRoot::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	ValidateGenesis();

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AStandartTreeRoot, Axiom)) {
		this->Genesis->Axiom = Axiom;
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AStandartTreeRoot, ForwardValue))
	{
		UGenesisRule* Rule = this->Genesis->Alphabet->GetRule("F");
		if (Rule) {
			auto Mutation = Rule->FindMutationByClass<UGrowMutation>();
			if (Mutation) Mutation->Value = ForwardValue;
		}
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AStandartTreeRoot, AngleValue))
	{
		UGenesisRule* Rule = this->Genesis->Alphabet->GetRule(UTreeGenesisLibrary::AmpersandSymbol);
		if (Rule) {
			auto Mutation = Rule->FindMutationByClass<UPitchMutation>();
			if (Mutation) Mutation->Value = AngleValue;
		}
		Rule = this->Genesis->Alphabet->GetRule(UTreeGenesisLibrary::CaretSymbol);
		if (Rule) {
			auto Mutation = Rule->FindMutationByClass<UPitchMutation>();
			if (Mutation) Mutation->Value = AngleValue * -1;
		}
		Rule = this->Genesis->Alphabet->GetRule(UTreeGenesisLibrary::SlashSymbol);
		if (Rule) {
			auto Mutation = Rule->FindMutationByClass<UPitchMutation>();
			if (Mutation) Mutation->Value = AngleValue;
		}
		Rule = this->Genesis->Alphabet->GetRule(UTreeGenesisLibrary::BackslashSymbol);
		if (Rule) {
			auto Mutation = Rule->FindMutationByClass<UPitchMutation>();
			if (Mutation) Mutation->Value = AngleValue * -1;
		}

	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AStandartTreeRoot, Rules) ||
		PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(FRuleWidgetElement, Axiom) ||
		PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(FRuleWidgetElement, Symbol)
		) {
		ReconstructRules();
	}
}

void AStandartTreeRoot::ReconstructRules() {

	ValidateGenesis();

	for (auto& WidgetRule : Rules) {
		FString EnumAsString = UTreeGenesisLibrary::AlphabetSymbolToString(WidgetRule.Symbol);
		UGenesisRule* Rule = this->Genesis->Alphabet->GetRule(EnumAsString);
		if (Rule) {
			Rule->RemoveAllPatterns();
		} else {
			Rule = NewObject<UGenesisRule>(this->GetRootComponent());
			Rule->Symbol = WidgetRule.Symbol;
			this->Genesis->Alphabet->Add(Rule);
		}
	}
	for (auto& WidgetRule : Rules) {
		FString EnumAsString = UTreeGenesisLibrary::AlphabetSymbolToString(WidgetRule.Symbol);
		UGenesisRule* Rule = this->Genesis->Alphabet->GetRule(EnumAsString);
		if (Rule) {
			FRulePattern Pattern{ WidgetRule.Chance, WidgetRule.Axiom };
			Rule->AddPattern(Pattern);
		} else {
			UE_LOG(LogTemp, Error, TEXT("No such rule in Alphabet"));
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Reconstruct Rules"));
}

void AStandartTreeRoot::BeginPlay() {
	Super::BeginPlay();
}

void AStandartTreeRoot::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}
