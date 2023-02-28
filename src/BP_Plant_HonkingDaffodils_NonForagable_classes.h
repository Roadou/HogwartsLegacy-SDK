// BlueprintGeneratedClass BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Plant_HonkingDaffodils_NonForagable_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USceneComponent* Scene; // 0x278(0x08)
	struct UABP_HonkingDaffodils_C* ABP; // 0x280(0x08)

	void StartHonking(bool bStart); // Function BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.StartHonking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable(int32_t EntryPoint); // Function BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

