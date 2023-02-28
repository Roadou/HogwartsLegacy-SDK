// BlueprintGeneratedClass BP_HW_DAO_TribalMask_E.BP_HW_DAO_TribalMask_E_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_HW_DAO_TribalMask_E_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_DAO_TribalMask_E; // 0x250(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_DAO_TribalMask_E.BP_HW_DAO_TribalMask_E_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_DAO_TribalMask_E(int32_t EntryPoint); // Function BP_HW_DAO_TribalMask_E.BP_HW_DAO_TribalMask_E_C.ExecuteUbergraph_BP_HW_DAO_TribalMask_E // (Final|UbergraphFunction) // @ game+0x38a7480
};

