// BlueprintGeneratedClass BP_Phys_HangingCages_03.BP_Phys_HangingCages_03_C
// Size: 0x338 (Inherited: 0x248)
struct ABP_Phys_HangingCages_03_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* Crate_02; // 0x258(0x08)
	struct UStaticMeshComponent* Crate_02_Stick; // 0x260(0x08)
	struct UStaticMeshComponent* Crate_02_Door; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Crate_02; // 0x270(0x08)
	struct UStaticMeshComponent* Crate_02_Rope; // 0x278(0x08)
	struct UStaticMeshComponent* Crate_02_Knot; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Crate_02_Rope; // 0x288(0x08)
	struct UStaticMeshComponent* Crate_01_door; // 0x290(0x08)
	struct UStaticMeshComponent* Crate_01_Stick; // 0x298(0x08)
	struct UStaticMeshComponent* Crate_01; // 0x2a0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Crate_01; // 0x2a8(0x08)
	struct UStaticMeshComponent* Crate_01_Rope; // 0x2b0(0x08)
	struct UStaticMeshComponent* Crate_01_Knot; // 0x2b8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Crate_01_Rope; // 0x2c0(0x08)
	struct UStaticMeshComponent* cage_02; // 0x2c8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_02; // 0x2d0(0x08)
	struct UStaticMeshComponent* Cage_02_Knot; // 0x2d8(0x08)
	struct UStaticMeshComponent* Cage_02_Rope; // 0x2e0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_02_Rope; // 0x2e8(0x08)
	struct UStaticMeshComponent* Main_Rope_02; // 0x2f0(0x08)
	struct UStaticMeshComponent* Main_Rope_02_Knot; // 0x2f8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Main_Rope_02; // 0x300(0x08)
	struct UStaticMeshComponent* cage_01; // 0x308(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_01; // 0x310(0x08)
	struct UStaticMeshComponent* Main_Rope_01_Knot; // 0x318(0x08)
	struct UStaticMeshComponent* Main_Rope_01; // 0x320(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Main_Rope_01; // 0x328(0x08)
	struct USceneComponent* SharedRoot; // 0x330(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Phys_HangingCages_03.BP_Phys_HangingCages_03_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Phys_HangingCages_03(int32_t EntryPoint); // Function BP_Phys_HangingCages_03.BP_Phys_HangingCages_03_C.ExecuteUbergraph_BP_Phys_HangingCages_03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

