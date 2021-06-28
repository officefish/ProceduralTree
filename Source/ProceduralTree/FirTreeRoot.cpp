// Fill out your copyright notice in the Description page of Project Settings.


#include "FirTreeRoot.h"

void AFirTreeRoot::ValidateModifiers() {
	Super::ValidateModifiers();
}


void AFirTreeRoot::RegisterEditorRules() {

	ValidateGenesis();

	/* Push Rule, Symbol: '[' */
	UGenesisRule* MainPushRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* MainPushMutation = NewObject<UChildFirBranchMutation>(this->GetRootComponent());
	MainPushRule->AddMutation(MainPushMutation);
	MainPushRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::OpenSquareBraket });
	MainPushRule->Symbol = EGenesisAlphabet::PUSH;
	this->Genesis->Alphabet->Add(MainPushRule);

	/* Pop Rule, Symbol: ']' */
	UGenesisRule* MainPopRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* MainPopMutation = NewObject<UParentBranchMutation>(this->GetRootComponent());
	MainPopRule->AddMutation(MainPopMutation);
	MainPopRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::CloseSquareBraket });
	MainPopRule->Symbol = EGenesisAlphabet::POP;
	this->Genesis->Alphabet->Add(MainPopRule);

	// Push Rule, Symbol: '{'
	UGenesisRule* PushRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UChildFirBranchMutation* PushMutation = NewObject<UChildFirBranchMutation>(this->GetRootComponent());
	PushRule->AddMutation(PushMutation);
	PushRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::OpenFigureBracket });
	PushRule->Symbol = EGenesisAlphabet::OPEN_FIGURE_BRACKET;
	this->Genesis->Alphabet->Add(PushRule);
	SetupPrototypes(PushMutation);

	// Pop Rule, Symbol: '}'
	UGenesisRule* PopRule = NewObject<UGenesisRule>(this->GetRootComponent());
	UGenesisMutation* PopMutation = NewObject<UParentBranchMutation>(this->GetRootComponent());
	PopRule->AddMutation(PopMutation);
	PopRule->AddPattern(FRulePattern{ 1.0, UTreeGenesisLibrary::CloseFigureBracket });
	PopRule->Symbol = EGenesisAlphabet::CLOSE_FIGURE_BRACKET;
	this->Genesis->Alphabet->Add(PopRule);

}

void AFirTreeRoot::SetupPrototypes(UChildFirBranchMutation* Mutation) {

	UE_LOG(LogTemp, Warning, TEXT("Setup Prototypes"));

	FVector Location = FVector{ 0,0,0 };
	FRotator Rotation = FRotator{ 0,0,0 };
	FActorSpawnParameters SpawnInfo;

	FTreeBranchProperties NeedleBranchProperties;
	NeedleBranchProperties.BaseRadius = 2.0;
	NeedleBranchProperties.Stricture = 0.9;

	if (!this->GetWorld()) {
		UE_LOG(LogTemp, Warning, TEXT("GetWorld not inited"));
		return;
	}


	ATreeBranch* Needle = this->GetWorld()->SpawnActor<ATreeBranch>(Location, Rotation, SpawnInfo);
	if (!Needle) {
		UE_LOG(LogTemp, Warning, TEXT("Needle not awailable"));
		return;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Needle awailable"));
	}

	Needle->AttachToComponent(this->SceneRoot, ATreeRoot::TrunkAttachmentRules);
	Needle->LOD_0_Properties = NeedleElementProperties;
	Needle->BranchProperties = NeedleBranchProperties;
	Needle->DrawForward(10);
	Needle->Redraw();

	UE_LOG(LogTemp, Warning, TEXT("Needle Init"));

	FPhiBallSettings BodyPhiballSettings;
	BodyPhiballSettings.Chance = 1.0;
	BodyPhiballSettings.Num = 12;

	FFunctionRangeValueProperty PitchProperty;
	PitchProperty.Function = ETrigonometry::PI_N;
	PitchProperty.MinValue = 2.0;
	PitchProperty.MaxValue = 2.0;

	BodyPhiballSettings.Pitch = PitchProperty;

	FFunctionRangeValueProperty RollProperty;
	RollProperty.Function = ETrigonometry::PI_N;
	RollProperty.MinValue = 0;
	RollProperty.MaxValue = PI;

	BodyPhiballSettings.Roll = RollProperty;

	APhiBall* BodyPhiBall = this->GetWorld()->SpawnActor<APhiBall>(Location, Rotation, SpawnInfo);
	BodyPhiBall->Settings = BodyPhiballSettings;

	BodyPhiBall->Prototype = Needle;
	BodyPhiBall->Redraw();

	FTreeElementPrototypeData Component;
	Component.MinDistance = 0;
	Component.MaxDistance = 0.7;
	Component.Chance = 1;
	Component.Density = 0.25;
	Component.Prototype = BodyPhiBall;

	Mutation->AddPrototype(Component);

}

ATreeBranch* AFirTreeRoot::NewTrunk() {
	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	ATreeBranch* TreeTrunkInstance = this->GetWorld()->SpawnActor<AFirTreeBranch>(Location, Rotation, SpawnInfo);
	TreeTrunkInstance->AttachToComponent(SceneRoot, ATreeRoot::TrunkAttachmentRules);

	return TreeTrunkInstance;
}


void AFirTreeRoot::BeginPlay() {
	Super::BeginPlay();
}

void AFirTreeRoot::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}
