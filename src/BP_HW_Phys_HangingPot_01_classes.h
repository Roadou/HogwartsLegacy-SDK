// BlueprintGeneratedClass BP_HW_Phys_HangingPot_01.BP_HW_Phys_HangingPot_01_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_HW_Phys_HangingPot_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UAkComponent* AkComponent; // 0x258(0x08)
	struct UStaticMeshComponent* Plant; // 0x260(0x08)
	struct UStaticMeshComponent* Pot; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Phys_HangingPot_01.BP_HW_Phys_HangingPot_01_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Phys_HangingPot_01(int32_t EntryPoint); // Function BP_HW_Phys_HangingPot_01.BP_HW_Phys_HangingPot_01_C.ExecuteUbergraph_BP_HW_Phys_HangingPot_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

