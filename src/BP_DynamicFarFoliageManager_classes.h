// BlueprintGeneratedClass BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C
// Size: 0x3d8 (Inherited: 0x390)
struct ABP_DynamicFarFoliageManager_C : ADynamicFarFoliageManager {
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	int32_t BaseIndex; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<int32_t> AdditionalIndexes; // 0x3a0(0x10)
	struct TSoftObjectPtr<AActor> SetupHelper; // 0x3b0(0x28)

	void FindMatchingComp(struct UStaticMesh* StaticMesh, struct TArray<struct UFoliageInstancedStaticMeshComponent*>& HostComponents, bool& Success, struct UFoliageInstancedStaticMeshComponent*& Component); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.FindMatchingComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateCoastComponents(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.PopulateCoastComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProbeFoliageActor(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.ProbeFoliageActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindNextEmptyMatchingIndex(struct FNone* Helper, int32_t TypeIndex, int32_t& AvilableIndex); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.FindNextEmptyMatchingIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetHostFoliageActorAndCompsOrganized(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.GetHostFoliageActorAndCompsOrganized // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LogHostCompMesh(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.LogHostCompMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTotal(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.UpdateTotal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MergeFliageData(); // Function BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.MergeFliageData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

