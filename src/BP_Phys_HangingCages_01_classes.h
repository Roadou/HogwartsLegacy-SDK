// BlueprintGeneratedClass BP_Phys_HangingCages_01.BP_Phys_HangingCages_01_C
// Size: 0x300 (Inherited: 0x248)
struct ABP_Phys_HangingCages_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* Cage_03; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_03; // 0x260(0x08)
	struct UStaticMeshComponent* Cage_02; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_02; // 0x270(0x08)
	struct UStaticMeshComponent* Cage_01; // 0x278(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_01; // 0x280(0x08)
	struct UStaticMeshComponent* Cage_02_Rope; // 0x288(0x08)
	struct UStaticMeshComponent* Cage_02_Knot; // 0x290(0x08)
	struct UStaticMeshComponent* StaticMeshComponent4; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMeshComponent5; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent3; // 0x2a8(0x08)
	struct UStaticMeshComponent* Cage_03_Rope; // 0x2b0(0x08)
	struct UStaticMeshComponent* Cage_03_Knot; // 0x2b8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_03_Rope; // 0x2c0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_02_Rope; // 0x2c8(0x08)
	struct UStaticMeshComponent* Cage_01_Rope; // 0x2d0(0x08)
	struct UStaticMeshComponent* Cage_01_Knot; // 0x2d8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_Cage_01_Rope; // 0x2e0(0x08)
	struct USceneComponent* SharedRoot; // 0x2e8(0x08)
	struct UAkAudioEvent* AkEvent; // 0x2f0(0x08)
	struct UStaticMeshComponent* HitComponent; // 0x2f8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Phys_HangingCages_01.BP_Phys_HangingCages_01_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Phys_HangingCages_01(int32_t EntryPoint); // Function BP_Phys_HangingCages_01.BP_Phys_HangingCages_01_C.ExecuteUbergraph_BP_Phys_HangingCages_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

