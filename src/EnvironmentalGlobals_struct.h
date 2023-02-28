// Enum EnvironmentalGlobals.EEnvironmentalGlobalsDirectionalLightMode
enum class EEnvironmentalGlobalsDirectionalLightMode : uint8 {
	Unknown = 0,
	Sun = 1,
	Moon = 2,
	EEnvironmentalGlobalsDirectionalLightMode_MAX = 3
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsColorCurveVarMode
enum class EEnvironmentalGlobalsColorCurveVarMode : uint8 {
	Normal = 0,
	Clamped = 1,
	Unadjusted = 2,
	EEnvironmentalGlobalsColorCurveVarMode_MAX = 3
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsColorVarConversion
enum class EEnvironmentalGlobalsColorVarConversion : uint8 {
	RGBA = 0,
	RGBOneA = 1,
	RGBZeroA = 2,
	RGBTimesAOneA = 3,
	RGBTimesAZeroA = 4,
	RGBNormalizedOneA = 5,
	RGBNormalizedZeroA = 6,
	RGBNormalizedA = 7,
	RGBNormalizedIntA = 8,
	RGBGrayOneA = 9,
	RGBGrayZeroA = 10,
	RGBGrayA = 11,
	EEnvironmentalGlobalsColorVarConversion_MAX = 12
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsScalarDebugFormat
enum class EEnvironmentalGlobalsScalarDebugFormat : uint8 {
	None = 0,
	EV100 = 1,
	PowerOf2 = 2,
	Invert = 3,
	EEnvironmentalGlobalsScalarDebugFormat_MAX = 4
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsScalarConversion
enum class EEnvironmentalGlobalsScalarConversion : uint8 {
	None = 0,
	EV100ToMultipler = 1,
	MultiplierToEV100 = 2,
	EEnvironmentalGlobalsScalarConversion_MAX = 3
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsRunMode
enum class EEnvironmentalGlobalsRunMode : uint8 {
	GameAndProbeCapture = 0,
	GameOnly = 1,
	ProbeCaptureOnly = 2,
	EEnvironmentalGlobalsRunMode_MAX = 3
};

// Enum EnvironmentalGlobals.EEnvironmentalGlobalsValue
enum class EEnvironmentalGlobalsValue : uint8 {
	DayNight = 0,
	DayNightLerp = 1,
	Day = 2,
	Night = 3,
	SunAltitudeDegrees = 4,
	MoonAltitudeDegrees = 5,
	LightAltitudeDegrees = 6,
	SunUnitIntensity = 7,
	MoonUnitIntensity = 8,
	LightUnitIntensity = 9,
	CameraEyeIndoors = 10,
	CameraEyeProbeIndoors = 11,
	CameraEyeWeatherIndoors = 12,
	Overcast = 13,
	NormalizedTime = 14,
	AverageLuminanceEV100 = 15,
	AutoExposureEV100 = 16,
	BrightnessEV100 = 17,
	PlayerSpeed = 18,
	CameraSpeed = 19,
	CameraAngle = 20,
	SeasonSmooth = 21,
	SeasonLerp = 22,
	Season = 23,
	EEnvironmentalGlobalsValue_MAX = 24
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobals
// Size: 0x2a0 (Inherited: 0x00)
struct FEnvironmentalGlobals {
	float DayNight; // 0x00(0x04)
	float DayNightLerp; // 0x04(0x04)
	float Day; // 0x08(0x04)
	float Night; // 0x0c(0x04)
	struct FEnvironmentalGlobalsLightDirection SunDirection; // 0x10(0x50)
	struct FEnvironmentalGlobalsLightDirection MoonDirection; // 0x60(0x50)
	struct FEnvironmentalGlobalsLightDirection LightDirection; // 0xb0(0x50)
	enum class EEnvironmentalGlobalsDirectionalLightMode DirectionalLightMode; // 0x100(0x01)
	bool bDualDirectionalLightMode; // 0x101(0x01)
	char pad_102[0xe]; // 0x102(0x0e)
	struct FEnvironmentalGlobalsPositionOrientationVelocity Camera; // 0x110(0x80)
	struct FEnvironmentalGlobalsPositionOrientationVelocity Player; // 0x190(0x80)
	float CameraEyeIndoors; // 0x210(0x04)
	float CameraEyeProbeIndoors; // 0x214(0x04)
	float CameraEyeWeatherIndoors; // 0x218(0x04)
	float CameraEyeAudioIndoors; // 0x21c(0x04)
	float CameraEyeStreamingIndoors; // 0x220(0x04)
	float Overcast; // 0x224(0x04)
	struct FDateTime DateTime; // 0x228(0x08)
	struct FTimespan NormalizedDateTime; // 0x230(0x08)
	int64_t LightsOnMask; // 0x238(0x08)
	struct FEnvironmentalGlobalsLastFrameExposure LastFrameExposure; // 0x240(0x0c)
	struct FEnvironmentalGlobalsSeasonLerp SeasonLerp; // 0x24c(0x10)
	struct FEnvironmentalGlobalsSeasonLerp OverrideSeasonLerp; // 0x25c(0x10)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FEnvironmentalGlobalsExtraVariables Extras; // 0x270(0x30)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsExtraVariables
// Size: 0x30 (Inherited: 0x00)
struct FEnvironmentalGlobalsExtraVariables {
	struct TArray<struct FEnvironmentalGlobalsExtraScalarVariable> Scalars; // 0x00(0x10)
	struct TArray<struct FEnvironmentalGlobalsExtraColorVariable> Colors; // 0x10(0x10)
	struct TArray<struct FEnvironmentalGlobalsExtraVectorVariable> Vectors; // 0x20(0x10)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsExtraVectorVariable
// Size: 0x14 (Inherited: 0x00)
struct FEnvironmentalGlobalsExtraVectorVariable {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsExtraColorVariable
// Size: 0x18 (Inherited: 0x00)
struct FEnvironmentalGlobalsExtraColorVariable {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsExtraScalarVariable
// Size: 0x0c (Inherited: 0x00)
struct FEnvironmentalGlobalsExtraScalarVariable {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsSeasonLerp
// Size: 0x10 (Inherited: 0x00)
struct FEnvironmentalGlobalsSeasonLerp {
	enum class ESeasonEnum Season; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Phases; // 0x04(0x04)
	int32_t Phase; // 0x08(0x04)
	float Lerp; // 0x0c(0x04)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsLastFrameExposure
// Size: 0x0c (Inherited: 0x00)
struct FEnvironmentalGlobalsLastFrameExposure {
	float AverageLuminance; // 0x00(0x04)
	float AutoExposure; // 0x04(0x04)
	float Brightness; // 0x08(0x04)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsPositionOrientation
// Size: 0x60 (Inherited: 0x00)
struct FEnvironmentalGlobalsPositionOrientation {
	char pad_0[0x10]; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FQuat Rotation; // 0x20(0x10)
	struct FVector Direction; // 0x30(0x0c)
	struct FVector Up; // 0x3c(0x0c)
	struct FVector Right; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsPositionOrientationVelocity
// Size: 0x80 (Inherited: 0x60)
struct FEnvironmentalGlobalsPositionOrientationVelocity : FEnvironmentalGlobalsPositionOrientation {
	struct FVector Velocity; // 0x58(0x0c)
	struct FVector VelocityDir; // 0x64(0x0c)
	float Speed; // 0x70(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsLightDirection
// Size: 0x50 (Inherited: 0x00)
struct FEnvironmentalGlobalsLightDirection {
	struct FVector Direction; // 0x00(0x0c)
	struct FRotator Rotator; // 0x0c(0x0c)
	float AzimuthDegrees; // 0x18(0x04)
	float AltitudeDegrees; // 0x1c(0x04)
	float UnitIntensity; // 0x20(0x04)
	float Intensity; // 0x24(0x04)
	float AtmosphericIntensity; // 0x28(0x04)
	struct FLinearColor Color; // 0x2c(0x10)
	struct FLinearColor AtmosphericColor; // 0x3c(0x10)
	bool bInferredFromWorld; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsSeason
// Size: 0x24 (Inherited: 0x10)
struct FEnvironmentalGlobalsSeason : FEnvironmentalGlobalsSeasonLerp {
	float SeasonSmooth; // 0x10(0x04)
	float FallSmooth; // 0x14(0x04)
	float WinterSmooth; // 0x18(0x04)
	float SpringSmooth; // 0x1c(0x04)
	float SummerSmooth; // 0x20(0x04)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsIndoors
// Size: 0x18 (Inherited: 0x00)
struct FEnvironmentalGlobalsIndoors {
	float GameIndoors; // 0x00(0x04)
	float ProbeIndoors; // 0x04(0x04)
	float WeatherIndoors; // 0x08(0x04)
	float AudioIndoors; // 0x0c(0x04)
	float StreamingIndoors; // 0x10(0x04)
	char bValidGameIndoors : 1; // 0x14(0x01)
	char bValidProbeIndoors : 1; // 0x14(0x01)
	char bValidWeatherIndoors : 1; // 0x14(0x01)
	char bValidAudioIndoors : 1; // 0x14(0x01)
	char bValidStreamingIndoors : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsVelocityTracker
// Size: 0x30 (Inherited: 0x00)
struct FEnvironmentalGlobalsVelocityTracker {
	struct FVector VelocityDirection; // 0x00(0x0c)
	float Speed; // 0x0c(0x04)
	float AngularVelocity; // 0x10(0x04)
	struct FVector LastPosition; // 0x14(0x0c)
	struct FVector LastForward; // 0x20(0x0c)
	bool bInitialized; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsDropdownName
// Size: 0x10 (Inherited: 0x00)
struct FEnvironmentalGlobalsDropdownName {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsVectorOrColorName
// Size: 0x10 (Inherited: 0x10)
struct FEnvironmentalGlobalsVectorOrColorName : FEnvironmentalGlobalsDropdownName {
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsColorName
// Size: 0x10 (Inherited: 0x10)
struct FEnvironmentalGlobalsColorName : FEnvironmentalGlobalsDropdownName {
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsVectorName
// Size: 0x10 (Inherited: 0x10)
struct FEnvironmentalGlobalsVectorName : FEnvironmentalGlobalsDropdownName {
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsScalarName
// Size: 0x10 (Inherited: 0x10)
struct FEnvironmentalGlobalsScalarName : FEnvironmentalGlobalsDropdownName {
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsUnsetExtraVariables
// Size: 0x30 (Inherited: 0x00)
struct FEnvironmentalGlobalsUnsetExtraVariables {
	struct TArray<struct FName> UnsetScalars; // 0x00(0x10)
	struct TArray<struct FName> UnsetColors; // 0x10(0x10)
	struct TArray<struct FName> UnsetVectors; // 0x20(0x10)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsColorRunMode
// Size: 0x28 (Inherited: 0x00)
struct FEnvironmentalGlobalsColorRunMode {
	enum class EEnvironmentalGlobalsRunMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GameDefaultValue; // 0x04(0x10)
	struct FLinearColor ProbeDefaultValue; // 0x14(0x10)
	bool bUseGameDefaultValue; // 0x24(0x01)
	bool bUseProbeDefaultValue; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsScalarClamp
// Size: 0x0c (Inherited: 0x00)
struct FEnvironmentalGlobalsScalarClamp {
	float ClampMin; // 0x00(0x04)
	float ClampMax; // 0x04(0x04)
	enum class EEnvironmentalGlobalsScalarConversion ClampMinMaxConversion; // 0x08(0x01)
	char bUseMin : 1; // 0x09(0x01)
	char bUseMax : 1; // 0x09(0x01)
	char pad_9_2 : 6; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct EnvironmentalGlobals.EnvironmentalGlobalsScalarRunMode
// Size: 0x10 (Inherited: 0x00)
struct FEnvironmentalGlobalsScalarRunMode {
	enum class EEnvironmentalGlobalsRunMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GameDefaultValue; // 0x04(0x04)
	float ProbeDefaultValue; // 0x08(0x04)
	bool bUseGameDefaultValue; // 0x0c(0x01)
	bool bUseProbeDefaultValue; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

