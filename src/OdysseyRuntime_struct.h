// Enum OdysseyRuntime.EOdcAuthoredObstacleShape
enum class EOdcAuthoredObstacleShape : uint8 {
	Box = 0,
	Prism = 1,
	EOdcAuthoredObstacleShape_MAX = 2
};

// Enum OdysseyRuntime.ENavLayer
enum class ENavLayer : uint8 {
	Layer0 = 0,
	Layer1 = 1,
	Layer2 = 2,
	Layer3 = 3,
	ENavLayer_MAX = 4
};

// Enum OdysseyRuntime.OdcObstacleBehavior
enum class OdcObstacleBehavior : uint8 {
	Automatic = 0,
	NoEffectPenalty = 1,
	NoEffectImpassable = 2,
	PenaltyImpassable = 3,
	OdcObstacleBehavior_MAX = 4
};

// Enum OdysseyRuntime.EOdcSnapMode
enum class EOdcSnapMode : uint8 {
	SNAP_CLOSEST = 0,
	SNAP_VERTICAL = 1,
	SNAP_MAX = 2
};

// Enum OdysseyRuntime.EOdcPenaltyTableMode
enum class EOdcPenaltyTableMode : uint8 {
	PENALTY_MODE_DISABLED = 0,
	PENALTY_MODE_MAX = 1,
	PENALTY_MODE_TOTAL = 2
};

// Enum OdysseyRuntime.EOdcBlockageMode
enum class EOdcBlockageMode : uint8 {
	BLOCKED_IF_ANY_MATCH = 0,
	BLOCKED_IF_ALL_MATCH = 1,
	BLOCKED_IF_MAX = 2
};

// Enum OdysseyRuntime.EOdcNavmeshProbeType
enum class EOdcNavmeshProbeType : uint8 {
	Full3D = 0,
	Projection = 1,
	Horizontal = 2,
	EOdcNavmeshProbeType_MAX = 3
};

// Enum OdysseyRuntime.EOdcPathSmoothingPass
enum class EOdcPathSmoothingPass : uint8 {
	Original = 0,
	FilterSignificantPoints = 1,
	Extrude = 2,
	AlignPointsOnSlopes = 3,
	Smoothed = 4,
	EOdcPathSmoothingPass_MAX = 5
};

// Enum OdysseyRuntime.ELinkType
enum class ELinkType : uint8 {
	JUMP_LINK = 0,
	LADDER_LINK = 1,
	CLIMB_LINK = 2,
	SLIDE_LINK = 3,
	VAULT_LINK = 4,
	SPLINE_LINK = 5,
	ELinkType_MAX = 6
};

// ScriptStruct OdysseyRuntime.OdcPathSpec
// Size: 0x50 (Inherited: 0x00)
struct FOdcPathSpec {
	enum class EOdcBlockageMode ObstacleMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FOdcFlags ObstacleBlockageFlags; // 0x04(0x04)
	struct FOdcFlags AreaUsageFlags; // 0x08(0x04)
	struct FOdcFlags AreaPenaltyFlags; // 0x0c(0x04)
	struct FOdcFlags LinkUsageFlags; // 0x10(0x04)
	bool bUsePathSharingPenalty; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float PathSharingPenalty; // 0x18(0x04)
	float MaxPathSharingPenalty; // 0x1c(0x04)
	float MaxSearchDist; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FOdcPenaltyTable PenaltyTable; // 0x28(0x20)
	enum class EOdcSnapMode SnapMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct OdysseyRuntime.OdcPenaltyTable
// Size: 0x20 (Inherited: 0x00)
struct FOdcPenaltyTable {
	enum class EOdcPenaltyTableMode Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<char> PerFlagPenalties; // 0x08(0x10)
	char FixedPointDenominator; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OdysseyRuntime.OdcFlags
// Size: 0x04 (Inherited: 0x00)
struct FOdcFlags {
	int32_t Bits; // 0x00(0x04)
};

// ScriptStruct OdysseyRuntime.OdcCollisionAreaUsageFlag
// Size: 0x01 (Inherited: 0x00)
struct FOdcCollisionAreaUsageFlag {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OdysseyRuntime.OdcCollisionChannelSet
// Size: 0x04 (Inherited: 0x00)
struct FOdcCollisionChannelSet {
	uint32_t ChannelBitmask; // 0x00(0x04)
};

// ScriptStruct OdysseyRuntime.OdcFlagsDefinition
// Size: 0x10 (Inherited: 0x00)
struct FOdcFlagsDefinition {
	struct TArray<struct FName> flags; // 0x00(0x10)
};

// ScriptStruct OdysseyRuntime.OdcNavGraphImage
// Size: 0x10 (Inherited: 0x00)
struct FOdcNavGraphImage {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct OdysseyRuntime.OdcGeometryMetrics
// Size: 0x14 (Inherited: 0x00)
struct FOdcGeometryMetrics {
	float TraceLedgeRadius; // 0x00(0x04)
	float TraceLedgeIntoWallAdjust; // 0x04(0x04)
	float TraceLedgeUpAdjust; // 0x08(0x04)
	float TraceLedgeDownCast; // 0x0c(0x04)
	float LinkOffsetFromLadderEnds; // 0x10(0x04)
};

// ScriptStruct OdysseyRuntime.OdcLayerConfig
// Size: 0x0c (Inherited: 0x00)
struct FOdcLayerConfig {
	float Radius; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float ExtrusionRadius; // 0x08(0x04)
};

// ScriptStruct OdysseyRuntime.OdcLinkAutogenParams
// Size: 0x01 (Inherited: 0x00)
struct FOdcLinkAutogenParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OdysseyRuntime.OdcObstacleData
// Size: 0x28 (Inherited: 0x00)
struct FOdcObstacleData {
	int32_t Layers; // 0x00(0x04)
	enum class OdcObstacleBehavior Behavior; // 0x04(0x04)
	float Cost; // 0x08(0x04)
	struct FOdcFlags BlockageFlags; // 0x0c(0x04)
	uint32_t MarkupFlags; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
};

// ScriptStruct OdysseyRuntime.OdcSlopeAreaUsageFlag
// Size: 0x01 (Inherited: 0x00)
struct FOdcSlopeAreaUsageFlag {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OdysseyRuntime.DoNavigationAsyncWork
// Size: 0x48 (Inherited: 0x40)
struct FDoNavigationAsyncWork : FTickFunction {
	char pad_40[0x8]; // 0x40(0x08)
};

