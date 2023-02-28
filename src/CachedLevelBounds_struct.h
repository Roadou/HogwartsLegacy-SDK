// Enum CachedLevelBounds.ECompositeLevelBoundsDraw
enum class ECompositeLevelBoundsDraw : uint8 {
	None = 0,
	OverallBounds = 1,
	ActorBounds = 2,
	LandscapeBounds = 3,
	LevelBoundsActors = 4,
	CalculatedActorBounds = 5,
	ECompositeLevelBoundsDraw_MAX = 6
};

// Enum CachedLevelBounds.ELevelBoundsSource
enum class ELevelBoundsSource : uint8 {
	Actors = 0,
	Landscape = 1,
	AllowUnloaded = 2,
	ELevelBoundsSource_MAX = 3
};

// Enum CachedLevelBounds.ELevelBoundsBestHeuristic
enum class ELevelBoundsBestHeuristic : uint8 {
	SmallestVolume = 0,
	LargestVolume = 1,
	ClosestDistance = 2,
	FarthestDistance = 3,
	SmallestAreaXY = 4,
	LargestAreaXY = 5,
	First = 6,
	Oldest = 7,
	Youngest = 8,
	ELevelBoundsBestHeuristic_MAX = 9
};

// Enum CachedLevelBounds.EGameFriendlyLevelNameFormat
enum class EGameFriendlyLevelNameFormat : uint8 {
	Game = 0,
	Raw = 1,
	GameAndRaw = 2,
	RawAndGame = 3,
	EGameFriendlyLevelNameFormat_MAX = 4
};

// ScriptStruct CachedLevelBounds.GameFriendlyLevelName
// Size: 0x10 (Inherited: 0x00)
struct FGameFriendlyLevelName {
	struct FName RawName; // 0x00(0x08)
	struct FName GameFriendlyName; // 0x08(0x08)
};

// ScriptStruct CachedLevelBounds.InsideOfLevel
// Size: 0x34 (Inherited: 0x10)
struct FInsideOfLevel : FGameFriendlyLevelName {
	struct TWeakObjectPtr<struct ULevel> Level; // 0x10(0x08)
	struct FBox Bounds; // 0x18(0x1c)
};

// ScriptStruct CachedLevelBounds.InsideOfLevelRanked
// Size: 0x38 (Inherited: 0x34)
struct FInsideOfLevelRanked : FInsideOfLevel {
	float Rank; // 0x34(0x04)
};

// ScriptStruct CachedLevelBounds.WorldLevelsBounds
// Size: 0x58 (Inherited: 0x00)
struct FWorldLevelsBounds {
	struct TMap<struct TWeakObjectPtr<struct ULevel>, struct FCompositeLevelBounds> Bounds; // 0x00(0x50)
	int32_t TickInitialized; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct CachedLevelBounds.CompositeLevelBounds
// Size: 0x78 (Inherited: 0x00)
struct FCompositeLevelBounds {
	struct FComputedLevelBounds Bounds; // 0x00(0x58)
	struct FGameFriendlyLevelName LevelName; // 0x58(0x10)
	struct FTimespan Timestamp; // 0x68(0x08)
	bool bMarkedRemoved; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct CachedLevelBounds.ComputedLevelBounds
// Size: 0x58 (Inherited: 0x00)
struct FComputedLevelBounds {
	struct FBox Total; // 0x00(0x1c)
	struct FBox Actors; // 0x1c(0x1c)
	struct FBox Landscape; // 0x38(0x1c)
	bool bUsedLevelBoundsActor; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct CachedLevelBounds.LevelBoundsSources
// Size: 0x04 (Inherited: 0x00)
struct FLevelBoundsSources {
	int32_t Sources; // 0x00(0x04)
};

