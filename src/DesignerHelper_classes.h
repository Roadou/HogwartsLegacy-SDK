// Class DesignerHelper.SpawnerComponent
// Size: 0x138 (Inherited: 0xc8)
struct USpawnerComponent : UActorComponent {
	struct TMap<struct FName, struct FSpawnLocationGroup> SpawnLocationGroups; // 0xc8(0x50)
	struct FMulticastInlineDelegate OnActorSpawned; // 0x118(0x10)
	struct FMulticastInlineDelegate OnFinishedSpawning; // 0x128(0x10)

	void StopSpawning(struct FName& GroupName); // Function DesignerHelper.SpawnerComponent.StopSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a0d80
	void StartSpawning(struct FName& GroupName); // Function DesignerHelper.SpawnerComponent.StartSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a0a50
	bool IsSpawning(struct FName& GroupName); // Function DesignerHelper.SpawnerComponent.IsSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a0790
	void EventOnFinishedSpawningAtSpawnLocation(struct FName& GroupName); // Function DesignerHelper.SpawnerComponent.EventOnFinishedSpawningAtSpawnLocation // (Final|Native|Public|HasOutParms) // @ game+0x24a0640
	void EventOnActorSpawnedAtSpawnLocation(struct AActor* SpawnedActor, struct FName& GroupName); // Function DesignerHelper.SpawnerComponent.EventOnActorSpawnedAtSpawnLocation // (Final|Native|Public|HasOutParms) // @ game+0x24a0560
};

// Class DesignerHelper.SpawnLocation
// Size: 0x408 (Inherited: 0x248)
struct ASpawnLocation : ATargetPoint {
	struct FMulticastInlineDelegate OnActorSpawned; // 0x248(0x10)
	struct FMulticastInlineDelegate OnFinishedSpawning; // 0x258(0x10)
	char pad_268[0x18]; // 0x268(0x18)
	struct FDbSingleColumnInfo SpawnCategoryType; // 0x280(0x88)
	struct TArray<struct FDbSingleColumnInfo> AdditionalSpawnCategoryTypes; // 0x308(0x10)
	struct FText Description; // 0x318(0x18)
	enum class ESpawnVolumeType SpawnVolumeType; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UPrimitiveComponent* SpawnVolume; // 0x338(0x08)
	bool bEnableScatterSampling; // 0x340(0x01)
	bool bEnableRandomRotation; // 0x341(0x01)
	bool bSpawnOnNavMesh; // 0x342(0x01)
	bool bForceSpawnOnFloor; // 0x343(0x01)
	int32_t GridCols; // 0x344(0x04)
	int32_t GridRows; // 0x348(0x04)
	struct FVector2D ScatterVariance; // 0x34c(0x08)
	char pad_354[0x94]; // 0x354(0x94)
	struct UTextRenderComponent* DebugTextVisualizer; // 0x3e8(0x08)
	char pad_3F0[0x18]; // 0x3f0(0x18)

	void StopSpawning(struct FName& GroupIn); // Function DesignerHelper.SpawnLocation.StopSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a0cf0
	void StartSpawningUsingProbability(struct FSpawnProperties& SpawnProperiesIn, struct FName& GroupIn, float& SpawnProbability, int32_t& NumActorsPerClassIn, int32_t InFirstActorGroupIndex); // Function DesignerHelper.SpawnLocation.StartSpawningUsingProbability // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a0ae0
	void StartSpawning(struct FSpawnProperties& SpawnProperiesIn, struct FName& GroupIn); // Function DesignerHelper.SpawnLocation.StartSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a0920
	void SetSpawnCategorySelection(struct FString InSpawnCatType); // Function DesignerHelper.SpawnLocation.SetSpawnCategorySelection // (Final|Native|Public|BlueprintCallable) // @ game+0x24a0830
	bool IsSpawning(struct FName& GroupIn); // Function DesignerHelper.SpawnLocation.IsSpawning // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a06f0
	void InitScatterGrid(); // Function DesignerHelper.SpawnLocation.InitScatterGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x24a06d0
	void CacheVolumeBounds(); // Function DesignerHelper.SpawnLocation.CacheVolumeBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x24a0540
};

