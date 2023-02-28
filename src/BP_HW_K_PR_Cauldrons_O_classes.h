// BlueprintGeneratedClass BP_HW_K_PR_Cauldrons_O.BP_HW_K_PR_Cauldrons_O_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldrons_O_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldrons_O4; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseO5; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldrons_O5; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldrons_O3; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HW_K_PR_Cauldrons_O2; // 0x280(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldrons_O.BP_HW_K_PR_Cauldrons_O_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldrons_O(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldrons_O.BP_HW_K_PR_Cauldrons_O_C.ExecuteUbergraph_BP_HW_K_PR_Cauldrons_O // (Final|UbergraphFunction) // @ game+0x38a7480
};

