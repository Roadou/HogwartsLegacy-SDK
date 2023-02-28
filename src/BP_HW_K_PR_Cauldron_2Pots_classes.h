// BlueprintGeneratedClass BP_HW_K_PR_Cauldron_2Pots.BP_HW_K_PR_Cauldron_2Pots_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldron_2Pots_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseBounceA9; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_2Pots_D_12; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_2Pots_C_9; // 0x268(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldron_2Pots.BP_HW_K_PR_Cauldron_2Pots_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldron_2Pots(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldron_2Pots.BP_HW_K_PR_Cauldron_2Pots_C.ExecuteUbergraph_BP_HW_K_PR_Cauldron_2Pots // (Final|UbergraphFunction) // @ game+0x38a7480
};

