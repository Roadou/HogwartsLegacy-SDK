// BlueprintGeneratedClass BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C
// Size: 0x2f8 (Inherited: 0x280)
struct ABP_WE_Prop_Webbed_Body_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* DropActorToGround; // 0x288(0x08)
	struct USkeletalMeshComponent* SK_WE_Arachnophobia; // 0x290(0x08)
	struct UObjectStateComponent* ObjectState; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume; // 0x2a8(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolumeFrenemy; // 0x2b0(0x08)
	struct UScheduledEntity* ScheduledEntity; // 0x2b8(0x08)
	struct AActor* NPCActor; // 0x2c0(0x08)
	struct ANPC_Character* NPCChracter; // 0x2c8(0x08)
	struct UNPC_ReactionComponent* NPCReactionComponent; // 0x2d0(0x08)
	struct ADynamicObjectVolume* SpiderDOV; // 0x2d8(0x08)
	struct ADynamicObjectVolume* FrenemyDOV; // 0x2e0(0x08)
	struct FName In Team; // 0x2e8(0x08)
	struct FName FrenemyTeam; // 0x2f0(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHasPerception(struct AActor* NPCActor, bool IsActive); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.SetHasPerception // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetProtectedBySpells(struct AActor* NPCActor, bool IsProtected); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.SetProtectedBySpells // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateCocoonState(bool Activate, struct AActor* NPCActor); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.ActivateCocoonState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnCustomAbilityFInished(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnCustomAbilityFInished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnDroppedToGround(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnDroppedToGround // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Up Event(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.Set Up Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnemiesDead(); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.OnEnemiesDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FrenemySetup(struct AActor* SpawnedActor); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.FrenemySetup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Prop_Webbed_Body(int32_t EntryPoint); // Function BP_WE_Prop_Webbed_Body.BP_WE_Prop_Webbed_Body_C.ExecuteUbergraph_BP_WE_Prop_Webbed_Body // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

