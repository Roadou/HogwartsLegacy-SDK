// BlueprintGeneratedClass BP_HW_PR_ArmillarySphere.BP_HW_PR_ArmillarySphere_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_HW_PR_ArmillarySphere_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HW_PR_ArmilarySphere_Piece_02; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_PR_ArmilarySphere_Piece_03; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HW_PR_ArmilarySphere_Piece_06; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HW_PR_ArmilarySphere_Piece_01; // 0x280(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_PR_ArmillarySphere.BP_HW_PR_ArmillarySphere_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_PR_ArmillarySphere(int32_t EntryPoint); // Function BP_HW_PR_ArmillarySphere.BP_HW_PR_ArmillarySphere_C.ExecuteUbergraph_BP_HW_PR_ArmillarySphere // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

