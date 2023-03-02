// BlueprintGeneratedClass BP_PlantParty.BP_PlantParty_C
// Size: 0x279 (Inherited: 0x248)
struct ABP_PlantParty_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak; // 0x250(0x08)
	struct USkeletalMeshComponent* PlantMesh; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	struct FDataTableRowHandle DT_Row_Name; // 0x268(0x10)
	bool Dance?; // 0x278(0x01)

	void FN_SetDancing(bool Set Dancing); // Function BP_PlantParty.BP_PlantParty_C.FN_SetDancing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_SetUpPlant(); // Function BP_PlantParty.BP_PlantParty_C.FN_SetUpPlant // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PlantParty.BP_PlantParty_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlantParty.BP_PlantParty_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlantParty(int32_t EntryPoint); // Function BP_PlantParty.BP_PlantParty_C.ExecuteUbergraph_BP_PlantParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

