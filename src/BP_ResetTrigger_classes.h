// BlueprintGeneratedClass BP_ResetTrigger.BP_ResetTrigger_C
// Size: 0x2d8 (Inherited: 0x248)
struct ABP_ResetTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UStaticMeshComponent* Trigger; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	bool Reset; // 0x268(0x01)
	bool CameraFadeOnReset; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct ATargetPoint* ResetLOC; // 0x270(0x08)
	float ResetDelay; // 0x278(0x04)
	float Damage; // 0x27c(0x04)
	bool ChipDamage; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float TriggerOffset; // 0x284(0x04)
	bool DamageOtherActors; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct AActor*> ActorsToReset; // 0x290(0x10)
	struct TArray<struct FTransform> ActorResetLOCS; // 0x2a0(0x10)
	struct UMaterialInstanceDynamic* MAT; // 0x2b0(0x08)
	bool KillPlayer; // 0x2b8(0x01)
	bool KillActor; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	float KillDelay; // 0x2bc(0x04)
	float KillActorDelay; // 0x2c0(0x04)
	bool Destroy; // 0x2c4(0x01)
	bool CheckOverlap on Start; // 0x2c5(0x01)
	bool CompanionTeleport; // 0x2c6(0x01)
	char pad_2C7[0x1]; // 0x2c7(0x01)
	struct FMulticastInlineDelegate PlayerReset; // 0x2c8(0x10)

	void Kill Player Cue(); // Function BP_ResetTrigger.BP_ResetTrigger_C.Kill Player Cue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ResetTrigger.BP_ResetTrigger_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_ResetTrigger.BP_ResetTrigger_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ResetTrigger.BP_ResetTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ResetTrigger.BP_ResetTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ResetTrigger.BP_ResetTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DamageOverTime(); // Function BP_ResetTrigger.BP_ResetTrigger_C.DamageOverTime // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ResetTrigger(int32_t EntryPoint); // Function BP_ResetTrigger.BP_ResetTrigger_C.ExecuteUbergraph_BP_ResetTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PlayerReset__DelegateSignature(); // Function BP_ResetTrigger.BP_ResetTrigger_C.PlayerReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

