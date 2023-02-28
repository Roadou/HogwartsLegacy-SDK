// BlueprintGeneratedClass BP_HW_Dogweed_HangPots_A.BP_HW_Dogweed_HangPots_A_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_HW_Dogweed_HangPots_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_Dogweed_HangPots__B; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HW_Dogweed_HangPots__D; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseD; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_Dogweed_HangPots__C; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseC; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HW_Dogweed_HangPots__A; // 0x278(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Dogweed_HangPots_A.BP_HW_Dogweed_HangPots_A_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Dogweed_HangPots_A(int32_t EntryPoint); // Function BP_HW_Dogweed_HangPots_A.BP_HW_Dogweed_HangPots_A_C.ExecuteUbergraph_BP_HW_Dogweed_HangPots_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

