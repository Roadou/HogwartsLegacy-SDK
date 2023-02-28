// Enum Mercuna.EMerOctreeDebugDrawMode
enum class EMerOctreeDebugDrawMode : uint8 {
	DISABLED = 0,
	UNNAVIGABLE = 1,
	NAVIGABLE = 2,
	CROSS_SECTION = 3,
	REACHABLE = 4,
	PATHFIND = 5,
	REGION = 6,
	EMerOctreeDebugDrawMode_MAX = 7
};

// Enum Mercuna.EMercunaSplineEvent
enum class EMercunaSplineEvent : uint8 {
	Ready = 0,
	Updated = 1,
	Invalid = 2,
	EMercunaSplineEvent_MAX = 3
};

// Enum Mercuna.EMercunaMoveResult
enum class EMercunaMoveResult : uint8 {
	Success = 0,
	Failed = 1,
	Cancelled = 2,
	Blocked = 3,
	Invalid = 4,
	EMercunaMoveResult_MAX = 5
};

// Enum Mercuna.EMercunaPathEvent
enum class EMercunaPathEvent : uint8 {
	Ready = 0,
	Updated = 1,
	Invalid = 2,
	EMercunaPathEvent_MAX = 3
};

// Enum Mercuna.EMercunaPointDistribution
enum class EMercunaPointDistribution : uint8 {
	Uniform = 0,
	Random = 1,
	EMercunaPointDistribution_MAX = 2
};

// Enum Mercuna.EMercunaMoveGoal
enum class EMercunaMoveGoal : uint8 {
	Actor = 0,
	Vector = 1,
	None = 2,
	EMercunaMoveGoal_MAX = 3
};

// Enum Mercuna.ECompassBaring
enum class ECompassBaring : uint8 {
	West_MinX = 0,
	East_MaxX = 1,
	North_MinY = 2,
	South_MaxY = 3,
	Max = 4
};

// Enum Mercuna.EMercunaLevelOfDetail
enum class EMercunaLevelOfDetail : uint8 {
	Full = 0,
	Half = 1,
	Quarter = 2,
	Eighth = 3,
	Sixteenth = 4,
	EMercunaLevelOfDetail_MAX = 5
};

// ScriptStruct Mercuna.MercunaNavigationConfiguration
// Size: 0x20 (Inherited: 0x00)
struct FMercunaNavigationConfiguration {
	float MaxPitch; // 0x00(0x04)
	float MaxRoll; // 0x04(0x04)
	float RollSensitivity; // 0x08(0x04)
	bool MoveOnlyInLookDirection; // 0x0c(0x01)
	bool StopAtDestination; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float HeightChangePenalty; // 0x10(0x04)
	bool SmoothPaths; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float LookAheadTime; // 0x18(0x04)
	float RollAnticipationTime; // 0x1c(0x04)
};

// ScriptStruct Mercuna.MercunaPawnUsageFlags
// Size: 0x08 (Inherited: 0x00)
struct FMercunaPawnUsageFlags {
	struct FMercunaNavUsageTypes RequiredUsageFlags; // 0x00(0x04)
	struct FMercunaNavUsageTypes AllowedUsageFlags; // 0x04(0x04)
};

// ScriptStruct Mercuna.MercunaNavUsageTypes
// Size: 0x04 (Inherited: 0x00)
struct FMercunaNavUsageTypes {
	char bUsageType0 : 1; // 0x00(0x01)
	char bUsageType1 : 1; // 0x00(0x01)
	char bUsageType2 : 1; // 0x00(0x01)
	char bUsageType3 : 1; // 0x00(0x01)
	char bUsageType4 : 1; // 0x00(0x01)
	char bUsageType5 : 1; // 0x00(0x01)
	char bUsageType6 : 1; // 0x00(0x01)
	char bUsageType7 : 1; // 0x00(0x01)
	char bUsageType8 : 1; // 0x01(0x01)
	char bUsageType9 : 1; // 0x01(0x01)
	char bUsageType10 : 1; // 0x01(0x01)
	char bUsageType11 : 1; // 0x01(0x01)
	char bUsageType12 : 1; // 0x01(0x01)
	char bUsageType13 : 1; // 0x01(0x01)
	char bUsageType14 : 1; // 0x01(0x01)
	char bUsageType15 : 1; // 0x01(0x01)
	char bUsageType16 : 1; // 0x02(0x01)
	char bUsageType17 : 1; // 0x02(0x01)
	char bUsageType18 : 1; // 0x02(0x01)
	char bUsageType19 : 1; // 0x02(0x01)
	char bUsageType20 : 1; // 0x02(0x01)
	char bUsageType21 : 1; // 0x02(0x01)
	char bUsageType22 : 1; // 0x02(0x01)
	char bUsageType23 : 1; // 0x02(0x01)
	char bUsageType24 : 1; // 0x03(0x01)
	char bUsageType25 : 1; // 0x03(0x01)
	char bUsageType26 : 1; // 0x03(0x01)
	char bUsageType27 : 1; // 0x03(0x01)
	char bUsageType28 : 1; // 0x03(0x01)
	char bUsageType29 : 1; // 0x03(0x01)
	char bUsageType30 : 1; // 0x03(0x01)
	char bUsageType31 : 1; // 0x03(0x01)
};

// ScriptStruct Mercuna.MercunaMoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FMercunaMoveRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* GoalActor; // 0x08(0x08)
	char pad_10[0x30]; // 0x10(0x30)
};

// ScriptStruct Mercuna.MercunaWorldData
// Size: 0x20 (Inherited: 0x00)
struct FMercunaWorldData {
	struct FString MapPath; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	uint16_t Yaw; // 0x1c(0x02)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Mercuna.MercunaOctreeData
// Size: 0x1c (Inherited: 0x00)
struct FMercunaOctreeData {
	struct FRotator Rotation; // 0x00(0x0c)
	float CellSize; // 0x0c(0x04)
	int32_t MinPawnRadius; // 0x10(0x04)
	int32_t MaxPawnRadius; // 0x14(0x04)
	bool bAllowOctreeMerging; // 0x18(0x01)
	bool bRecordOctreeDeltas; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

