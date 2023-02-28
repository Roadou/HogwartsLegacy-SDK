// BlueprintGeneratedClass BP_HM_PR_FireStoker_B.BP_HM_PR_FireStoker_B_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_HM_PR_FireStoker_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseO5; // 0x250(0x08)
	struct UStaticMeshComponent* GC_HM_PR_FireStoker_B_Piece_05; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseO4; // 0x260(0x08)
	struct UStaticMeshComponent* GC_HM_PR_FireStoker_B_Piece_04; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseO3; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse02; // 0x278(0x08)
	struct UStaticMeshComponent* GC_HM_PR_FireStoker_B_Piece_03; // 0x280(0x08)
	struct UStaticMeshComponent* GC_HM_PR_FireStoker_B_Piece_02; // 0x288(0x08)
	struct UStaticMeshComponent* GC_HM_PR_FireStoker_B_Piece_01; // 0x290(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HM_PR_FireStoker_B.BP_HM_PR_FireStoker_B_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_PR_FireStoker_B(int32_t EntryPoint); // Function BP_HM_PR_FireStoker_B.BP_HM_PR_FireStoker_B_C.ExecuteUbergraph_BP_HM_PR_FireStoker_B // (Final|UbergraphFunction) // @ game+0x38a7480
};

