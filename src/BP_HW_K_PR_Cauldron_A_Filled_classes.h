// BlueprintGeneratedClass BP_HW_K_PR_Cauldron_A_Filled.BP_HW_K_PR_Cauldron_A_Filled_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldron_A_Filled_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* TriggerVolume; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_LiquidBottle_CauldronA; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HW_Cauldron_A_COL; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_Cauldron_A; // 0x268(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldron_A_Filled.BP_HW_K_PR_Cauldron_A_Filled_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HW_K_PR_Cauldron_A_Filled_TriggerVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_K_PR_Cauldron_A_Filled.BP_HW_K_PR_Cauldron_A_Filled_C.BndEvt__BP_HW_K_PR_Cauldron_A_Filled_TriggerVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldron_A_Filled(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldron_A_Filled.BP_HW_K_PR_Cauldron_A_Filled_C.ExecuteUbergraph_BP_HW_K_PR_Cauldron_A_Filled // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

