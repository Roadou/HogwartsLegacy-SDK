// BlueprintGeneratedClass BP_HM_HD_PR_CrateStack.BP_HM_HD_PR_CrateStack_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_HM_HD_PR_CrateStack_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HM_HD_PR_CrateStack_COL; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse06; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse05; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Large_001_W2; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Large_001_W3; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse04; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Large_001_W1; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse03; // 0x288(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse02; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Large_001_W; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_WoodTub_Small_001_W; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Medium_003_W; // 0x2a8(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HM_HD_PR_CrateStack.BP_HM_HD_PR_CrateStack_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_HD_PR_CrateStack(int32_t EntryPoint); // Function BP_HM_HD_PR_CrateStack.BP_HM_HD_PR_CrateStack_C.ExecuteUbergraph_BP_HM_HD_PR_CrateStack // (Final|UbergraphFunction) // @ game+0x38a7480
};

