// Class StreamingComplexityToolRuntime.LevelTransformsDataAsset
// Size: 0x220 (Inherited: 0x30)
struct ULevelTransformsDataAsset : UDataAsset {
	struct TMap<struct TSoftObjectPtr<UWorld>, int32_t> LevelsTransforms; // 0x30(0x50)
	struct TArray<struct FTransform> Transform; // 0x80(0x10)
	struct TSet<struct TSoftObjectPtr<UWorld>> LevelsWithStreamingVolumes; // 0x90(0x50)
	struct TMap<struct TSoftObjectPtr<UWorld>, enum class EStreamingBehaviorType> ForcedStreamingBehaviorType; // 0xe0(0x50)
	struct TSet<struct TSoftObjectPtr<UWorld>> ForceExcludeLevels; // 0x130(0x50)
	struct TSet<struct TSoftObjectPtr<UWorld>> AdditionalPersistentLevels; // 0x180(0x50)
	struct TMap<struct FName, struct FBox> NamedWorldRegions; // 0x1d0(0x50)
};

// Class StreamingComplexityToolRuntime.PackagesStatsFetchLevelController
// Size: 0x300 (Inherited: 0x248)
struct APackagesStatsFetchLevelController : AActor {
	struct UPackageStatsCaptureSettings* PackageStatsCaptureSettings; // 0x248(0x08)
	char pad_250[0x90]; // 0x250(0x90)
	struct UWorldStructureDescGenerator* WorldStructureGenerator; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class StreamingComplexityToolRuntime.PackageStatsCaptureSettings
// Size: 0x40 (Inherited: 0x30)
struct UPackageStatsCaptureSettings : UDataAsset {
	struct TArray<struct FString> RawPackages; // 0x30(0x10)
};

// Class StreamingComplexityToolRuntime.SCT_LevelController
// Size: 0x2e8 (Inherited: 0x248)
struct ASCT_LevelController : AActor {
	struct TSoftObjectPtr<UWorld> LevelToAnalyzePtr; // 0x248(0x28)
	struct TArray<struct TSoftObjectPtr<UWorld>> ConstLevelsToStream; // 0x270(0x10)
	bool bUseBlockingStreaming; // 0x280(0x01)
	bool bRunLevelMiners; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct TArray<struct FName> MinerNamesToRun; // 0x288(0x10)
	bool bFlushAsyncThreadBeforeStreaming; // 0x298(0x01)
	bool bStreamLevelsIndependently; // 0x299(0x01)
	bool bUnloadLevelsPriorExit; // 0x29a(0x01)
	bool bExitAtEnd; // 0x29b(0x01)
	char pad_29C[0x2c]; // 0x29c(0x2c)
	struct TArray<struct USCT_StreamingEventWrapper*> StreamingEvents; // 0x2c8(0x10)
	struct UWorld* LevelToAnalyze; // 0x2d8(0x08)
	char pad_2E0[0x8]; // 0x2e0(0x08)
};

// Class StreamingComplexityToolRuntime.SCT_StreamingEventWrapper
// Size: 0x50 (Inherited: 0x28)
struct USCT_StreamingEventWrapper : UObject {
	struct ASCT_LevelController* LevelController; // 0x28(0x08)
	struct ULevelStreaming* LevelStreaming; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)

	void OnLevelUnloaded(); // Function StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelUnloaded // (Final|Native|Public) // @ game+0x24caac0
	void OnLevelShown(); // Function StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelShown // (Final|Native|Public) // @ game+0x24caaa0
	void OnLevelLoaded(); // Function StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelLoaded // (Final|Native|Public) // @ game+0x24caa80
	void OnLevelHidden(); // Function StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelHidden // (Final|Native|Public) // @ game+0x1074730
};

// Class StreamingComplexityToolRuntime.StreamingComplexityToolContext
// Size: 0x78 (Inherited: 0x28)
struct UStreamingComplexityToolContext : UObject {
	struct TMap<struct FName, struct ULevel*> Levels; // 0x28(0x50)
};

// Class StreamingComplexityToolRuntime.WorldStructureDescGenerator
// Size: 0x1d8 (Inherited: 0x28)
struct UWorldStructureDescGenerator : UObject {
	char pad_28[0x1a0]; // 0x28(0x1a0)
	struct TArray<struct UWorld*> PendingParses; // 0x1c8(0x10)
};

