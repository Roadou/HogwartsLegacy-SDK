// BlueprintGeneratedClass BP_HW_Sister_Bell_C.BP_HW_Sister_Bell_C_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_HW_Sister_Bell_C_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* GC_SisterBell_COL; // 0x250(0x08)
	struct UPhysicalResponseComponent* Clapper; // 0x258(0x08)
	struct UStaticMeshComponent* GC_SisterBell_C_Clapper; // 0x260(0x08)
	struct UStaticMeshComponent* GC_SisterBell_C; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Sister_Bell_C.BP_HW_Sister_Bell_C_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Sister_Bell_C(int32_t EntryPoint); // Function BP_HW_Sister_Bell_C.BP_HW_Sister_Bell_C_C.ExecuteUbergraph_BP_HW_Sister_Bell_C // (Final|UbergraphFunction) // @ game+0x38a7480
};

