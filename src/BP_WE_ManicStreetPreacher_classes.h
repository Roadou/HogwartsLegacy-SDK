// BlueprintGeneratedClass BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C
// Size: 0x390 (Inherited: 0x280)
struct ABP_WE_ManicStreetPreacher_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* WandMesh; // 0x288(0x08)
	struct USkeletalMeshComponent* SK_Wands_Wand01; // 0x290(0x08)
	struct UChildActorComponent* BP_WE_ManicSign_04; // 0x298(0x08)
	struct UChildActorComponent* BP_WE_ManicSign_06; // 0x2a0(0x08)
	struct USceneComponent* Beast Illness Signs; // 0x2a8(0x08)
	struct UChildActorComponent* Podium Actor; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_HM_InkBottleWithQuills_B; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_HM_3Broom_Bottle_A; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_HM_HogsHead_Bottle_D; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	struct USkeletalMeshComponent* SK_Preacher; // 0x2d8(0x08)
	int32_t World_Event_Level; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct AActor*> Preacher Dialogue Actor; // 0x2e8(0x10)
	struct TSoftClassPtr<UObject> Podium; // 0x2f8(0x28)
	struct AStation* Preacher Station; // 0x320(0x08)
	struct UScheduledEntity* PreacherSE; // 0x328(0x08)
	struct TArray<struct AStation*> Crowd Stations; // 0x330(0x10)
	struct TArray<struct ATier4_Actor*> Crowd Hobos; // 0x340(0x10)
	struct TArray<struct UAvaAudioDialogueEvent*> DialogueShort; // 0x350(0x10)
	struct TArray<struct UAvaAudioDialogueEvent*> DialogueMedium; // 0x360(0x10)
	struct TArray<struct UAvaAudioDialogueEvent*> DialogueLong; // 0x370(0x10)
	struct FHermesBPDelegateHandle T4LoadedHandle; // 0x380(0x10)

	void AttatchWand(struct AActor* Actor); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.AttatchWand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFleshCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnFleshCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayDialogue(struct TArray<struct UAvaAudioDialogueEvent*>& DialogueEvents); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.PlayDialogue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TeleportIntoFreeStation(struct TArray<struct AStation*>& Stations, struct ATier4_Actor*& T4); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.TeleportIntoFreeStation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Apparate Preacher(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.Apparate Preacher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitCrowd(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.ExitCrowd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPreacherExitStation(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnPreacherExitStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCrowd(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.SetupCrowd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupPreacher(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.SetupPreacher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupSigns(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.SetupSigns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropSigns(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.DropSigns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSignRowVariable(struct UChildActorComponent* Sign child actor ref); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.SetSignRowVariable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_0CE0E3334EDFFCA550F5D79DD78983A4(struct UObject* Loaded); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnLoaded_0CE0E3334EDFFCA550F5D79DD78983A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Kill Preacher(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.Kill Preacher // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End Event(); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.End Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BindDialogue(struct AActor* Actor); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.BindDialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreacherDialogueShort(struct UObject* Caller); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.PreacherDialogueShort // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreacherDialogueMedium(struct UObject* Caller); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.PreacherDialogueMedium // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreacherDialogueLong(struct UObject* Caller); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.PreacherDialogueLong // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttatchWandToHand(struct AActor* Actor); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.AttatchWandToHand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void T4CharacterLoadComplete(struct UObject* Caller, struct AActor* Actor); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.T4CharacterLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void T4ActorSpawned(struct ATier4_Actor* T4Actor); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.T4ActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ManicStreetPreacher(int32_t EntryPoint); // Function BP_WE_ManicStreetPreacher.BP_WE_ManicStreetPreacher_C.ExecuteUbergraph_BP_WE_ManicStreetPreacher // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

