// BlueprintGeneratedClass BP_HW_K_PR_Cauldron_N.BP_HW_K_PR_Cauldron_N_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldron_N_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron__N6; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseN6; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron__N5; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseN5; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron__N4; // 0x278(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x280(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron__N3; // 0x288(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldron_N.BP_HW_K_PR_Cauldron_N_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldron_N(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldron_N.BP_HW_K_PR_Cauldron_N_C.ExecuteUbergraph_BP_HW_K_PR_Cauldron_N // (Final|UbergraphFunction) // @ game+0x38a7480
};

