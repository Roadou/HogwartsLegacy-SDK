// BlueprintGeneratedClass BP_HW_Laundry_Coatrack_C.BP_HW_Laundry_Coatrack_C_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_HW_Laundry_Coatrack_C_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse03; // 0x250(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Laundry_Coatrack_C_Piece_03; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse02; // 0x260(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Laundry_Coatrack_C_Piece_02; // 0x268(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Laundry_Coatrack_C_Piece_01; // 0x270(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Laundry_Coatrack_C.BP_HW_Laundry_Coatrack_C_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Laundry_Coatrack_C(int32_t EntryPoint); // Function BP_HW_Laundry_Coatrack_C.BP_HW_Laundry_Coatrack_C_C.ExecuteUbergraph_BP_HW_Laundry_Coatrack_C // (Final|UbergraphFunction) // @ game+0x38a7480
};

