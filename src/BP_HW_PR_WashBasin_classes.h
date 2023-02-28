// BlueprintGeneratedClass BP_HW_PR_WashBasin.BP_HW_PR_WashBasin_C
// Size: 0x2e0 (Inherited: 0x248)
struct ABP_HW_PR_WashBasin_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_COL; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse8; // 0x260(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse7; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse6; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse5; // 0x278(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse4; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x288(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_01; // 0x290(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_08; // 0x298(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_07; // 0x2a0(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_06; // 0x2a8(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_05; // 0x2b0(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_04; // 0x2b8(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_03; // 0x2c0(0x08)
	struct UStaticMeshComponent* GC_HW_PR_WashBasin_Piece_02; // 0x2c8(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_PR_WashBasin.BP_HW_PR_WashBasin_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_PR_WashBasin(int32_t EntryPoint); // Function BP_HW_PR_WashBasin.BP_HW_PR_WashBasin_C.ExecuteUbergraph_BP_HW_PR_WashBasin // (Final|UbergraphFunction) // @ game+0x38a7480
};

