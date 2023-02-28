// Enum DesignerHelper.ESpawnOnFloorTestType
enum class ESpawnOnFloorTestType : uint8 {
	ShapeSweep = 0,
	LineTrace = 1,
	ESpawnOnFloorTestType_MAX = 2
};

// Enum DesignerHelper.ESpawnerActorSelectionMode
enum class ESpawnerActorSelectionMode : uint8 {
	Undefined = 0,
	FirstClass = 1,
	MultipleClass = 2,
	RandomClass = 3,
	ESpawnerActorSelectionMode_MAX = 4
};

// Enum DesignerHelper.ESpawnVolumeType
enum class ESpawnVolumeType : uint8 {
	Point = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	Spline = 4,
	ESpawnVolumeType_MAX = 5
};

// ScriptStruct DesignerHelper.SpawnLocationGroup
// Size: 0x50 (Inherited: 0x00)
struct FSpawnLocationGroup {
	struct TArray<struct ASpawnLocation*> SpawnLocations; // 0x00(0x10)
	enum class ESpawnerActorSelectionMode ActorSelectionMode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct UObject*> ActorClassesToSpawn; // 0x18(0x10)
	int32_t MinActorCount; // 0x28(0x04)
	int32_t MaxActorCount; // 0x2c(0x04)
	float MinDelayBetweenSpawns; // 0x30(0x04)
	float MaxDelayBetweenSpawns; // 0x34(0x04)
	bool bForceSpawnOnFloor; // 0x38(0x01)
	enum class ESpawnOnFloorTestType SpawnOnFloorTest; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float FloorSweepDistanceZ; // 0x3c(0x04)
	bool bIsValid; // 0x40(0x01)
	bool bUsesDeterministicSpawning; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t RandomizerSeed; // 0x44(0x04)
	struct FRandomStream Randomizer; // 0x48(0x08)
};

// ScriptStruct DesignerHelper.SpawnProperties
// Size: 0x38 (Inherited: 0x00)
struct FSpawnProperties {
	enum class ESpawnerActorSelectionMode ActorSelectionMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSpawnableActorData> SpawnableActorData; // 0x08(0x10)
	int32_t MinActorCount; // 0x18(0x04)
	int32_t MaxActorCount; // 0x1c(0x04)
	float MinDelayBetweenSpawns; // 0x20(0x04)
	float MaxDelayBetweenSpawns; // 0x24(0x04)
	bool bApplyAdditionalDelay; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AdditionalDelay; // 0x2c(0x04)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct DesignerHelper.SpawnableActorData
// Size: 0x40 (Inherited: 0x00)
struct FSpawnableActorData {
	struct UObject* ActorClass; // 0x00(0x08)
	struct FBoxSphereBounds ActorBounds; // 0x08(0x1c)
	bool bSpawnOnNavMesh; // 0x24(0x01)
	bool bForceSpawnOnFloor; // 0x25(0x01)
	enum class ESpawnOnFloorTestType SpawnOnFloorTest; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	float FloorSweepDistanceZ; // 0x28(0x04)
	float NavSearchRadius; // 0x2c(0x04)
	struct FRotator InitialRotation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DesignerHelper.ObjectVisualizationInfo
// Size: 0x0c (Inherited: 0x00)
struct FObjectVisualizationInfo {
	bool bDrawObject; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FColor ObjectActiveColor; // 0x04(0x04)
	struct FColor ObjectInactiveColor; // 0x08(0x04)
};

