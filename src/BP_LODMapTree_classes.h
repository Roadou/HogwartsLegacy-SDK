// BlueprintGeneratedClass BP_LODMapTree.BP_LODMapTree_C
// Size: 0x2a4 (Inherited: 0x248)
struct ABP_LODMapTree_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TArray<struct TSoftObjectPtr<AActor>> SourceActor; // 0x250(0x10)
	struct FTransform SourceTransform; // 0x260(0x30)
	struct TArray<struct FSTR_LODMapTreeData> SourceData; // 0x290(0x10)
	float MinComponentSize; // 0x2a0(0x04)

	void CollectAllStaticMeshComponents(struct AActor* Actor); // Function BP_LODMapTree.BP_LODMapTree_C.CollectAllStaticMeshComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindAttachedSeasonSelector(struct TArray<struct USeasonSelectorComponent*>& SeasonSelectors, struct UObject* MeshComponent, bool& HasSeasons, struct FSTR_SeasonSelectorData& SeasonSelector); // Function BP_LODMapTree.BP_LODMapTree_C.FindAttachedSeasonSelector // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ObtainSourceData(); // Function BP_LODMapTree.BP_LODMapTree_C.ObtainSourceData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_LODMapTree.BP_LODMapTree_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

