// BlueprintGeneratedClass BP_Phys_HangingCage_02.BP_Phys_HangingCage_02_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_Phys_HangingCage_02_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* cage_01; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_02; // 0x260(0x08)
	struct UStaticMeshComponent* Knot; // 0x268(0x08)
	struct UStaticMeshComponent* Rope; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse_01; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Phys_HangingCage_02.BP_Phys_HangingCage_02_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Phys_HangingCage_02(int32_t EntryPoint); // Function BP_Phys_HangingCage_02.BP_Phys_HangingCage_02_C.ExecuteUbergraph_BP_Phys_HangingCage_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

