// BlueprintGeneratedClass BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C
// Size: 0x378 (Inherited: 0x280)
struct ABP_WE_IceGarden_NPC_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* Ak_Thaw_audio; // 0x288(0x08)
	struct UChildActorComponent* Plaque; // 0x290(0x08)
	struct UBP_WorldEvent_DropComponentsToGround_C* BP_WorldEvent_DropComponentsToGround; // 0x298(0x08)
	struct UBoxComponent* SpellCollider; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct UStaticMeshComponent* VFX_SM_IcicleB_1m; // 0x2b0(0x08)
	struct UStaticMeshComponent* VFX_SM_IcicleB_1m1; // 0x2b8(0x08)
	struct USceneComponent* Ice; // 0x2c0(0x08)
	struct UDecalSphereHelper* DecalSphereHelper1; // 0x2c8(0x08)
	struct UDecalComponent* Decal; // 0x2d0(0x08)
	struct USceneComponent* Dressing; // 0x2d8(0x08)
	struct UArrowComponent* Arrow_1; // 0x2e0(0x08)
	float FadeDressing_IceZMovement_923058A9469C8FBDD5E0A4821F0351AB; // 0x2e8(0x04)
	float FadeDressing_IceOpacity_923058A9469C8FBDD5E0A4821F0351AB; // 0x2ec(0x04)
	float FadeDressing_DecalOpacity_923058A9469C8FBDD5E0A4821F0351AB; // 0x2f0(0x04)
	enum class ETimelineDirection FadeDressing__Direction_923058A9469C8FBDD5E0A4821F0351AB; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* FadeDressing; // 0x2f8(0x08)
	struct ADynamicObjectVolume* CreatureDOV; // 0x300(0x08)
	struct ANPC_Character* Creature NPC; // 0x308(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x310(0x08)
	struct UMaterialInstanceDynamic* MAT_Icicle1; // 0x318(0x08)
	struct UMaterialInstanceDynamic* MAT_Icicle2; // 0x320(0x08)
	struct USkeletalMeshComponent* NewVar_1; // 0x328(0x08)
	int32_t NPCIndex; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FTimerHandle ResetDurationTimerHandle; // 0x338(0x08)
	struct UWorldEventAnimationComponent* WEAnimComponent; // 0x340(0x08)
	struct ABP_WE_IceGarden_Wizard_C* Wizard; // 0x348(0x08)
	bool WizardSpawned; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float OriginalGlaciusDuration; // 0x354(0x04)
	struct FName IceGardenLock; // 0x358(0x08)
	struct AActor* Spawned Creature; // 0x360(0x08)
	struct UObjectStateInfo* Creature Object State; // 0x368(0x08)
	struct FTimerHandle Loaded Handle; // 0x370(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Immunity(struct AActor* InActor, bool Immune?); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Set Immunity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwakenCreature(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.AwakenCreature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset NPC Mesh Collision(struct ANPC_Character* NPC); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Reset NPC Mesh Collision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set NPC Collision Enabled(struct ANPC_Character* NPC); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Set NPC Collision Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ThawSpecificNPC(struct AActor* SpawnedNPC); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.ThawSpecificNPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompleteStage(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.CompleteStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAbility(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.StartAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnWizard(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.SpawnWizard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Put Creature In Place(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Put Creature In Place // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Creature Index and Collision(struct UObjectStateInfo* Input: Object State Info); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Set Creature Index and Collision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetFrozenDuration(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.ResetFrozenDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeDressing__FinishedFunc(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.FadeDressing__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeDressing__UpdateFunc(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.FadeDressing__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeDressing__TriggerAbleEvent__EventFunc(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.FadeDressing__TriggerAbleEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ForceFreeze(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.ForceFreeze // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Setup Creature(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Setup Creature // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup Event Type(); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.Setup Event Type // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureSpawn(struct AActor* SpawnedActor); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.OnCreatureSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_IceGarden_NPC(int32_t EntryPoint); // Function BP_WE_IceGarden_NPC.BP_WE_IceGarden_NPC_C.ExecuteUbergraph_BP_WE_IceGarden_NPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

