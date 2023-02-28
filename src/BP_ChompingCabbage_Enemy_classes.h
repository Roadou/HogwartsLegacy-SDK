// BlueprintGeneratedClass BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C
// Size: 0x250c (Inherited: 0x24c4)
struct ABP_ChompingCabbage_Enemy_C : ABP_Enemy_Character_C {
	char pad_24C4[0x4]; // 0x24c4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24c8(0x08)
	struct UParticleSystemComponent* Flies; // 0x24d0(0x08)
	struct UAkComponent* cabbage_attack_jump; // 0x24d8(0x08)
	struct UAkComponent* chomping_cabbage_smack; // 0x24e0(0x08)
	struct UCapsuleComponent* AttackCollision; // 0x24e8(0x08)
	struct UCombativePlantComponent* CombativePlant; // 0x24f0(0x08)
	float DamageTakenOnProtego; // 0x24f8(0x04)
	float PercentDamageTakenOnAttack; // 0x24fc(0x04)
	struct UParticleSystemComponent* CabbageFinalAttackMistyEmitter; // 0x2500(0x08)
	float BaseLifeTimeSeconds; // 0x2508(0x04)

	void OnBlocked(struct AActor* Instigator, struct UInteractionArchitectAsset* DataAsset, enum class EBlockTiming BlockedTiming, struct FGameplayTagContainer MunitionTagContainer, struct FVector Throw, struct FVector ImpactDirection); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.OnBlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AvoidCollisions_Pawn(struct UObject* Caller); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.AvoidCollisions_Pawn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevertAvoidCollisions_Pawn(struct UObject* Caller); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.RevertAvoidCollisions_Pawn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ChompingCabbage_Enemy_CombativePlant_K2Node_ComponentBoundEvent_2_OnCinematicChange__DelegateSignature(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.BndEvt__BP_ChompingCabbage_Enemy_CombativePlant_K2Node_ComponentBoundEvent_2_OnCinematicChange__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ChompingCabbage_Enemy_CombativePlant_K2Node_ComponentBoundEvent_3_OnCinematicChange__DelegateSignature(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.BndEvt__BP_ChompingCabbage_Enemy_CombativePlant_K2Node_ComponentBoundEvent_3_OnCinematicChange__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void AttackCollisionStart(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.AttackCollisionStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackCollisionStop(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.AttackCollisionStop // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ChompingCabbage_Enemy_AttackCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.BndEvt__BP_ChompingCabbage_Enemy_AttackCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_0_NPCStateChangeDelegate__DelegateSignature(enum class EEnemyAIState State); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_0_NPCStateChangeDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DamageTimer(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.DamageTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnNPCDied(); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.OnNPCDied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ChompingCabbage_Enemy(int32_t EntryPoint); // Function BP_ChompingCabbage_Enemy.BP_ChompingCabbage_Enemy_C.ExecuteUbergraph_BP_ChompingCabbage_Enemy // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

