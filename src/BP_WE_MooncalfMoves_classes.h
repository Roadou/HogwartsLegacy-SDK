// BlueprintGeneratedClass BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C
// Size: 0x2e0 (Inherited: 0x280)
struct ABP_WE_MooncalfMoves_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* SpellCollider; // 0x288(0x08)
	struct USphereComponent* ProximityTrigger; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct ADynamicObjectVolume* DOV; // 0x2a0(0x08)
	float StopDancingAfterTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct ANPC_Character*> Mooncalves; // 0x2b0(0x10)
	struct TArray<struct ANPC_Character*> PotentialNewMooncalves; // 0x2c0(0x10)
	bool AreDancing; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FTimerHandle NewDancersTimerHandle; // 0x2d8(0x08)

	void TriggerAdditionalDancers(); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.TriggerAdditionalDancers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForNearbyMooncalves(); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.CheckForNearbyMooncalves // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopDancing(); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.StopDancing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void StartDancing(); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.StartDancing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DOV_K2Node_ComponentBoundEvent_2_SpawnerActorSpawnedSignature__DelegateSignature(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.BndEvt__DOV_K2Node_ComponentBoundEvent_2_SpawnerActorSpawnedSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DOV_K2Node_ComponentBoundEvent_4_SpawnerFinishedSpawningSignature__DelegateSignature(struct FName& GroupName); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.BndEvt__DOV_K2Node_ComponentBoundEvent_4_SpawnerFinishedSpawningSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_MooncalfMoves(int32_t EntryPoint); // Function BP_WE_MooncalfMoves.BP_WE_MooncalfMoves_C.ExecuteUbergraph_BP_WE_MooncalfMoves // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

