// BlueprintGeneratedClass BP_Phys_HangingPots_01.BP_Phys_HangingPots_01_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_Phys_HangingPots_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* Pot_02; // 0x258(0x08)
	struct UStaticMeshComponent* Pot_01; // 0x260(0x08)
	struct UStaticMeshComponent* Pot_03; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_03; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_02; // 0x278(0x08)
	struct UStaticMeshComponent* Knot; // 0x280(0x08)
	struct UStaticMeshComponent* Nail; // 0x288(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_01; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Phys_HangingPots_01.BP_Phys_HangingPots_01_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Phys_HangingPots_01(int32_t EntryPoint); // Function BP_Phys_HangingPots_01.BP_Phys_HangingPots_01_C.ExecuteUbergraph_BP_Phys_HangingPots_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

