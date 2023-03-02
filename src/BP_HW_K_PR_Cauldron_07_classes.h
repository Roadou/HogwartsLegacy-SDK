// BlueprintGeneratedClass BP_HW_K_PR_Cauldron_07.BP_HW_K_PR_Cauldron_07_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldron_07_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron_7_I; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron_7_F02; // 0x260(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseL; // 0x268(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron_7_L; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseF; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron_7_F; // 0x280(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldron_7_D; // 0x288(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldron_07.BP_HW_K_PR_Cauldron_07_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldron_07(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldron_07.BP_HW_K_PR_Cauldron_07_C.ExecuteUbergraph_BP_HW_K_PR_Cauldron_07 // (Final|UbergraphFunction) // @ game+0x38a7480
};

