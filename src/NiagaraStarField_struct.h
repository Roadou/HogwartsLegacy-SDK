// Enum NiagaraStarField.EStarCatalogOrdering
enum class EStarCatalogOrdering : uint8 {
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EStarCatalogOrdering_MAX = 6
};

// ScriptStruct NiagaraStarField.StarScalabilityParameters
// Size: 0x18 (Inherited: 0x00)
struct FStarScalabilityParameters {
	float LowLimitStarsK; // 0x00(0x04)
	float MediumLimitStarsK; // 0x04(0x04)
	float HighLimitStarsK; // 0x08(0x04)
	float EpicLimitStarsK; // 0x0c(0x04)
	int32_t MinStars; // 0x10(0x04)
	bool bUseLimitStars; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct NiagaraStarField.StarCatalogDebugStar
// Size: 0x14 (Inherited: 0x00)
struct FStarCatalogDebugStar {
	struct FLinearColor DebugColor; // 0x00(0x10)
	float DebugBrightness; // 0x10(0x04)
};

// ScriptStruct NiagaraStarField.StarCatalogConstellationLimits
// Size: 0x60 (Inherited: 0x00)
struct FStarCatalogConstellationLimits {
	struct FStarCatalogConstellationStars LimitConstellationStars; // 0x00(0x50)
	int32_t DefaultLimitConstellationStars; // 0x50(0x04)
	float ConstellationNameMagnitudeCutoff; // 0x54(0x04)
	bool bUseConstellationStarsLimit; // 0x58(0x01)
	bool bUseDefaultConstellationStarsLimit; // 0x59(0x01)
	bool bUseConstellationNameMagnitudeCutoff; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct NiagaraStarField.StarCatalogConstellationStars
// Size: 0x50 (Inherited: 0x00)
struct FStarCatalogConstellationStars {
	struct TMap<struct FName, int32_t> ConstellationStars; // 0x00(0x50)
};

// ScriptStruct NiagaraStarField.StarCatalogNameIDMap
// Size: 0x10 (Inherited: 0x00)
struct FStarCatalogNameIDMap {
	struct TArray<struct FName> Names; // 0x00(0x10)
};

// ScriptStruct NiagaraStarField.PixelStarRenderingParameters
// Size: 0x18 (Inherited: 0x00)
struct FPixelStarRenderingParameters {
	float LinearBrightnessMin; // 0x00(0x04)
	float LinearBrightnessMax; // 0x04(0x04)
	float LinearBrightnessPower; // 0x08(0x04)
	float MagnitudeBrightnessMin; // 0x0c(0x04)
	float MagnitudeBrightnessMax; // 0x10(0x04)
	bool bLinearBrightness; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct NiagaraStarField.StarRenderingParameters
// Size: 0x14 (Inherited: 0x00)
struct FStarRenderingParameters {
	float OverallRadiusMeters; // 0x00(0x04)
	float StarSizeRatio; // 0x04(0x04)
	float MinBrightnessSize; // 0x08(0x04)
	float MaxBrightnessSize; // 0x0c(0x04)
	float OverallBrightness; // 0x10(0x04)
};

// ScriptStruct NiagaraStarField.Star
// Size: 0x24 (Inherited: 0x00)
struct FStar {
	struct FVector Direction; // 0x00(0x0c)
	struct FVector Color; // 0x0c(0x0c)
	float LinearMagnitude; // 0x18(0x04)
	float MagnitudeBrightness; // 0x1c(0x04)
	char ConstellationID; // 0x20(0x01)
	char ExtraID; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct NiagaraStarField.StarCatalogNameMapEntry
// Size: 0x18 (Inherited: 0x08)
struct FStarCatalogNameMapEntry : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	struct FName Name; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct NiagaraStarField.StarCatalogEntry
// Size: 0x18 (Inherited: 0x08)
struct FStarCatalogEntry : FTableRowBase {
	float RightAscention; // 0x08(0x04)
	float Declination; // 0x0c(0x04)
	float Temperature; // 0x10(0x04)
	float Magnitude; // 0x14(0x04)
};

// ScriptStruct NiagaraStarField.StarCatalogEntryConvert
// Size: 0x38 (Inherited: 0x00)
struct FStarCatalogEntryConvert {
	enum class EStarCatalogOrdering Ordering; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PostZRotationAngleDegrees; // 0x04(0x04)
	bool bNormalizeRotation; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector PolarisDir; // 0x0c(0x0c)
	struct FVector MintakaDir; // 0x18(0x0c)
	struct FVector NormalizeRotationAxis; // 0x24(0x0c)
	float NormalizeRotationAngleDegrees; // 0x30(0x04)
	bool bValidNormalizeRotation; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

