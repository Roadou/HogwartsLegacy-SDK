// Class CachedLevelBounds.CachedLevelBounds
// Size: 0x78 (Inherited: 0x28)
struct UCachedLevelBounds : UObject {
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FWorldLevelsBounds> Worlds; // 0x28(0x50)
};

// Class CachedLevelBounds.achedLevelBoundsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UachedLevelBoundsBlueprintLibrary : UBlueprintFunctionLibrary {

	void UncachedTotalWorldBounds(struct UObject* WorldContextObject, struct FLevelBoundsSources LevelBoundsSources, struct FBox& WorldBounds); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.UncachedTotalWorldBounds // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1852650
	void TotalWorldBounds(struct UObject* WorldContextObject, struct FLevelBoundsSources LevelBoundsSources, bool bRefresh, struct FBox& WorldBounds); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.TotalWorldBounds // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x18524f0
	void GetInsideOfLevelsSummary(struct UObject* WorldContextObject, struct FVector Position, enum class ELevelBoundsBestHeuristic BestHeuristic, struct FLevelBoundsSources LevelBoundsSources, struct FString& SummaryInsideList, int32_t MaxLevelsToShow, struct FString Separator, enum class EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevelsSummary // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x18521c0
	void GetInsideOfLevelsList(struct UObject* WorldContextObject, struct FVector Position, enum class ELevelBoundsBestHeuristic BestHeuristic, struct FLevelBoundsSources LevelBoundsSources, struct TArray<struct FInsideOfLevel>& InsideOfLevelList); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevelsList // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1852000
	void GetInsideOfLevels(struct UObject* WorldContextObject, struct FVector Position, enum class ELevelBoundsBestHeuristic BestHeuristic, struct FLevelBoundsSources LevelBoundsSources, struct FString& InsideList, struct FString Separator, enum class EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevels // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1851d20
	void GetInsideOfLevel(struct UObject* WorldContextObject, struct FVector Position, enum class ELevelBoundsBestHeuristic BestHeuristic, struct FLevelBoundsSources LevelBoundsSources, struct FInsideOfLevel& InsideOfLevel); // Function CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevel // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1851b40
};

