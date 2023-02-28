// BlueprintGeneratedClass BP_MagicBarrier.BP_MagicBarrier_C
// Size: 0x2b4 (Inherited: 0x248)
struct ABP_MagicBarrier_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Cube; // 0x250(0x08)
	struct UBoxComponent* EnableTrigger; // 0x258(0x08)
	struct UBoxComponent* ShieldVFXTrigger; // 0x260(0x08)
	struct UArrowComponent* Arrow_Center; // 0x268(0x08)
	struct UArrowComponent* Arrow_Radius; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct FVector ImpactPoint; // 0x280(0x0c)
	float Velocity; // 0x28c(0x04)
	float HighVelocity; // 0x290(0x04)
	float MediumVelocity; // 0x294(0x04)
	float LowVelocity; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct AActor*> HitActors; // 0x2a0(0x10)
	float ShieldRadius; // 0x2b0(0x04)

	void EnableShield(bool Enable); // Function BP_MagicBarrier.BP_MagicBarrier_C.EnableShield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MagicBarrier.BP_MagicBarrier_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_MagicBarrier.BP_MagicBarrier_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MagicBarrier.BP_MagicBarrier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MagicBarrier.BP_MagicBarrier_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_MagicBarrier.BP_MagicBarrier_C.BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BroomMount(struct UObject* Caller, struct AActor* Actor); // Function BP_MagicBarrier.BP_MagicBarrier_C.BroomMount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomDismount(struct UObject* Caller, struct AActor* Actor); // Function BP_MagicBarrier.BP_MagicBarrier_C.BroomDismount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EnableTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MagicBarrier.BP_MagicBarrier_C.BndEvt__EnableTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EnableTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MagicBarrier.BP_MagicBarrier_C.BndEvt__EnableTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MagicBarrier(int32_t EntryPoint); // Function BP_MagicBarrier.BP_MagicBarrier_C.ExecuteUbergraph_BP_MagicBarrier // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

