// BlueprintGeneratedClass BP_HW_PR_LensD.BP_HW_PR_LensD_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_HW_PR_LensD_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_06; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse5; // 0x258(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_05; // 0x260(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse4; // 0x268(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_04; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x278(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_03; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x288(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_02; // 0x290(0x08)
	struct UStaticMeshComponent* GC_HW_PR_Lens_D_Piece_01; // 0x298(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_PR_LensD.BP_HW_PR_LensD_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_PR_LensD(int32_t EntryPoint); // Function BP_HW_PR_LensD.BP_HW_PR_LensD_C.ExecuteUbergraph_BP_HW_PR_LensD // (Final|UbergraphFunction) // @ game+0x38a7480
};

