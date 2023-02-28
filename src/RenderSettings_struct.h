// Enum RenderSettings.EDynamicCharacterLightRigChannel
enum class EDynamicCharacterLightRigChannel : uint8 {
	ChannelAuto = 0,
	ChannelOne = 1,
	ChannelTwo = 2,
	EDynamicCharacterLightRigChannel_MAX = 3
};

// Enum RenderSettings.ELightAdapatationMode
enum class ELightAdapatationMode : uint8 {
	LastFrameAutoExposure = 0,
	LastFrameAverageLuminance = 1,
	MinMaxExposureTarget = 2,
	AutoAdaptation = 3,
	AutoAdaptationBloom = 4,
	FixedExposure = 5,
	ELightAdapatationMode_MAX = 6
};

// Enum RenderSettings.EDynamicLightAdaptationEVValueType
enum class EDynamicLightAdaptationEVValueType : uint8 {
	Absolute = 0,
	MinMaxExposureTarget = 1,
	LastFrameAverageLuminanceDelta = 2,
	AutoAdaptationDelta = 3,
	AutoAdaptationBloomDelta = 4,
	EDynamicLightAdaptationEVValueType_MAX = 5
};

// Enum RenderSettings.ELightAdapatationEVModOp
enum class ELightAdapatationEVModOp : uint8 {
	Set = 0,
	Add = 1,
	Subtract = 2,
	Min = 3,
	Max = 4
};

// Enum RenderSettings.ELightAdapatationModOp
enum class ELightAdapatationModOp : uint8 {
	Set = 0,
	Multiply = 1,
	Divide = 2,
	Add = 3,
	Subtract = 4,
	Min = 5,
	Max = 6
};

// Enum RenderSettings.ELightAdapatationEVProperty
enum class ELightAdapatationEVProperty : uint8 {
	BaseEV = 0,
	OutdoorsDayTimeEVBoost = 1,
	MaxEV = 2,
	MinEV = 3,
	StartCutoffMaxEV = 4,
	StartCutoffMinEV = 5,
	ELightAdapatationEVProperty_MAX = 6
};

// Enum RenderSettings.ELightAdapatationProperty
enum class ELightAdapatationProperty : uint8 {
	BaseEV = 0,
	OutdoorsDayTimeEVBoost = 1,
	AdaptationStrengthPercent = 2,
	MinMaxExposureTarget = 3,
	MaxEV = 4,
	MinEV = 5,
	StartCutoffMaxEV = 6,
	StartCutoffMinEV = 7,
	ELightAdapatationProperty_MAX = 8
};

// Enum RenderSettings.EPostProcessingVarTexture
enum class EPostProcessingVarTexture : uint8 {
	None = 0,
	BloomDirtMask = 1,
	AutoExposureMeterMask = 2,
	LensFlareBokehShape = 3,
	ColorGradingLUT = 4,
	BloomConvolutionTexture = 5,
	AmbientCubemap = 6,
	EPostProcessingVarTexture_MAX = 7
};

// Enum RenderSettings.EPostProcessingVarVector2D
enum class EPostProcessingVarVector2D : uint8 {
	None = 0,
	BloomConvolutionCenterUV = 1,
	EPostProcessingVarVector2D_MAX = 2
};

// Enum RenderSettings.EPostProcessingVarInt
enum class EPostProcessingVarInt : uint8 {
	None = 0,
	ReflectionsType = 1,
	DepthOfFieldBladeCount = 2,
	MotionBlurTargetFPS = 3,
	EPostProcessingVarInt_MAX = 4
};

// Enum RenderSettings.EPostProcessingVarBool
enum class EPostProcessingVarBool : uint8 {
	None = 0,
	AutoExposureApplyPhysicalCameraExposure = 1,
	AmbientOcclusionRadiusInWS = 2,
	EPostProcessingVarBool_MAX = 3
};

// Enum RenderSettings.EPostProcessingVarColor
enum class EPostProcessingVarColor : uint8 {
	None = 0,
	FilmWhitePoint = 1,
	FilmShadowTint = 2,
	FilmChannelMixerRed = 3,
	FilmChannelMixerGreen = 4,
	FilmChannelMixerBlue = 5,
	SceneColorTint = 6,
	Bloom1Tint = 7,
	Bloom2Tint = 8,
	Bloom3Tint = 9,
	Bloom4Tint = 10,
	Bloom5Tint = 11,
	Bloom6Tint = 12,
	BloomDirtMaskTint = 13,
	AmbientCubemapTint = 14,
	LensFlareTint = 15,
	IndirectLightingColor = 16,
	ColorSaturation = 17,
	ColorContrast = 18,
	ColorGamma = 19,
	ColorGain = 20,
	ColorOffset = 21,
	ColorSaturationShadows = 22,
	ColorContrastShadows = 23,
	ColorGammaShadows = 24,
	ColorGainShadows = 25,
	ColorOffsetShadows = 26,
	ColorSaturationMidtones = 27,
	ColorContrastMidtones = 28,
	ColorGammaMidtones = 29,
	ColorGainMidtones = 30,
	ColorOffsetMidtones = 31,
	ColorSaturationHighlights = 32,
	ColorContrastHighlights = 33,
	ColorGammaHighlights = 34,
	ColorGainHighlights = 35,
	ColorOffsetHighlights = 36,
	ReflectionCaptureOutsideColorTint = 37,
	ReflectionCaptureInsideColorTint = 38,
	EPostProcessingVarColor_MAX = 39
};

// Enum RenderSettings.EPostProcessingVarScalar
enum class EPostProcessingVarScalar : uint8 {
	None = 0,
	WhiteTemp = 1,
	WhiteTint = 2,
	ColorCorrectionHighlightsMin = 3,
	ColorCorrectionShadowsMax = 4,
	BlueCorrection = 5,
	ExpandGamut = 6,
	ToneCurveAmount = 7,
	FilmSlope = 8,
	FilmToe = 9,
	FilmShoulder = 10,
	FilmBlackClip = 11,
	FilmWhiteClip = 12,
	FilmShadowTintBlend = 13,
	FilmShadowTintAmount = 14,
	FilmSaturation = 15,
	FilmContrast = 16,
	FilmToeAmount = 17,
	FilmHealAmount = 18,
	FilmDynamicRange = 19,
	SceneFringeIntensity = 20,
	ChromaticAberrationStartOffset = 21,
	BloomIntensity = 22,
	BloomThreshold = 23,
	BloomCross = 24,
	BloomSizeScale = 25,
	Bloom1Size = 26,
	Bloom2Size = 27,
	Bloom3Size = 28,
	Bloom4Size = 29,
	Bloom5Size = 30,
	Bloom6Size = 31,
	BloomConvolutionSize = 32,
	BloomConvolutionPreFilterMin = 33,
	BloomConvolutionPreFilterMax = 34,
	BloomConvolutionPreFilterMult = 35,
	BloomConvolutionBufferScale = 36,
	BloomDirtMaskIntensity = 37,
	AmbientCubemapIntensity = 38,
	CameraShutterSpeed = 39,
	CameraISO = 40,
	DepthOfFieldFstop = 41,
	DepthOfFieldMinFstop = 42,
	AutoExposureBias = 43,
	AutoExposureBiasVFX = 44,
	AutoExposureLowPercent = 45,
	AutoExposureHighPercent = 46,
	AutoExposureMinBrightness = 47,
	AutoExposureMaxBrightness = 48,
	AutoExposureSpeedUp = 49,
	AutoExposureSpeedDown = 50,
	HistogramLogMin = 51,
	HistogramLogMax = 52,
	PreExposureResetValue = 53,
	LensFlareIntensity = 54,
	LensFlareBokehSize = 55,
	LensFlareThreshold = 56,
	VignetteIntensity = 57,
	GrainJitter = 58,
	GrainIntensity = 59,
	AmbientOcclusionIntensity = 60,
	AmbientOcclusionStaticFraction = 61,
	AmbientOcclusionRadius = 62,
	AmbientOcclusionFadeDistance = 63,
	AmbientOcclusionFadeRadius = 64,
	AmbientOcclusionPower = 65,
	AmbientOcclusionBias = 66,
	AmbientOcclusionQuality = 67,
	AmbientOcclusionMipBlend = 68,
	AmbientOcclusionMipScale = 69,
	AmbientOcclusionMipThreshold = 70,
	AmbientOcclusionTemporalBlendWeight = 71,
	AmbientOcclusionSkinIntensity = 72,
	IndirectLightingIntensity = 73,
	ProbeToneMapAmount = 74,
	ProbeToneMapMinIntensity = 75,
	ProbeToneMapMaxEV = 76,
	ProbeOutsideIntensity = 77,
	ProbeInsideIntensity = 78,
	ProbeOutsideSaturation = 79,
	ProbeInsideSaturation = 80,
	ProbeContactShadowsMinValue = 81,
	ProbeContactShadowsLength = 82,
	ProbeContactShadowsConeAngle = 83,
	ProbeContactShadowsFalloffExponent = 84,
	ProbeContactShadowsDepthTolerance = 85,
	ColorGradingIntensity = 86,
	DepthOfFieldSensorWidth = 87,
	DepthOfFieldFocalDistance = 88,
	DepthOfFieldDepthBlurAmount = 89,
	DepthOfFieldDepthBlurRadius = 90,
	DepthOfFieldFocalRegion = 91,
	DepthOfFieldNearTransitionRegion = 92,
	DepthOfFieldFarTransitionRegion = 93,
	DepthOfFieldScale = 94,
	DepthOfFieldNearBlurSize = 95,
	DepthOfFieldFarBlurSize = 96,
	DepthOfFieldOcclusion = 97,
	DepthOfFieldSkyFocusDistance = 98,
	DepthOfFieldVignetteSize = 99,
	MotionBlurAmount = 100,
	MotionBlurMax = 101,
	MotionBlurPerObjectSize = 102,
	ReflectionCaptureOutsideSaturation = 103,
	ReflectionCaptureInsideSaturation = 104,
	ScreenSpaceReflectionIntensity = 105,
	ScreenSpaceReflectionQuality = 106,
	ScreenSpaceReflectionMaxRoughness = 107,
	ScreenPercentage = 108,
	EPostProcessingVarScalar_MAX = 109
};

// Enum RenderSettings.ERenderSettingsCustomBlendDomainBucket
enum class ERenderSettingsCustomBlendDomainBucket : uint8 {
	First = 0,
	Normal = 1,
	Last = 2,
	Custom = 3,
	ERenderSettingsCustomBlendDomainBucket_MAX = 4
};

// Enum RenderSettings.ELastFrameExposureValue
enum class ELastFrameExposureValue : uint8 {
	AverageLuminance = 0,
	AverageHistogramLuminance = 1,
	AutoExposure = 2,
	Brightness = 3,
	FilteredAverageLuminance = 4,
	FilteredAverageHistogramLuminance = 5,
	FilteredAutoExposure = 6,
	FilteredBrightness = 7,
	ELastFrameExposureValue_MAX = 8
};

// Enum RenderSettings.ERenderSettingsVolumeOvercastType
enum class ERenderSettingsVolumeOvercastType : uint8 {
	ClearAndOvercast = 0,
	ClearOnly = 1,
	OvercastOnly = 2,
	ERenderSettingsVolumeOvercastType_MAX = 3
};

// Enum RenderSettings.ERenderSettingsVolumeDayNightType
enum class ERenderSettingsVolumeDayNightType : uint8 {
	DayAndNight = 0,
	DayOnly = 1,
	NightOnly = 2,
	ERenderSettingsVolumeDayNightType_MAX = 3
};

// Enum RenderSettings.ERenderSettingsVolumeIndoorsOutdoorsType
enum class ERenderSettingsVolumeIndoorsOutdoorsType : uint8 {
	IndoorsAndOutdoors = 0,
	OutdoorsOnly = 1,
	IndoorsOnly = 2,
	ERenderSettingsVolumeIndoorsOutdoorsType_MAX = 3
};

// Enum RenderSettings.ERenderSettingsIndoorsType
enum class ERenderSettingsIndoorsType : uint8 {
	Indoors = 0,
	SmoothedIndoors = 1,
	ProbeIndoors = 2,
	SmoothedProbeIndoors = 3,
	StreamingIndoors = 4,
	ERenderSettingsIndoorsType_MAX = 5
};

// Enum RenderSettings.EBlendDomainLightingMode
enum class EBlendDomainLightingMode : uint8 {
	GameAndProbeCapture = 0,
	GameOnly = 1,
	ProbeCaptureOnly = 2,
	EBlendDomainLightingMode_MAX = 3
};

// Enum RenderSettings.EBlendDomainOvercast
enum class EBlendDomainOvercast : uint8 {
	ClearAndOvercast = 0,
	ClearOnly = 1,
	OvercastOnly = 2,
	EBlendDomainOvercast_MAX = 3
};

// Enum RenderSettings.EBlendDomainDayNight
enum class EBlendDomainDayNight : uint8 {
	DayAndNight = 0,
	DayOnly = 1,
	NightOnly = 2,
	EBlendDomainDayNight_MAX = 3
};

// Enum RenderSettings.EBlendDomainIndoorsOutdoors
enum class EBlendDomainIndoorsOutdoors : uint8 {
	IndoorsAndOutdoors = 0,
	OutdoorsOnly = 1,
	IndoorsOnly = 2,
	EBlendDomainIndoorsOutdoors_MAX = 3
};

// Enum RenderSettings.ERenderSettingsBlendDomainConsoleLienMode
enum class ERenderSettingsBlendDomainConsoleLienMode : uint8 {
	IsZero = 0,
	IsOne = 1,
	GreaterThanOneHalf = 2,
	LessThanOneHalf = 3,
	ERenderSettingsBlendDomainConsoleLienMode_MAX = 4
};

// Enum RenderSettings.ERenderSettingsEditAssetType
enum class ERenderSettingsEditAssetType : uint8 {
	Library = 0,
	PostProcessingGroups = 1,
	Exposure = 2,
	ColorGrading = 3,
	DistanceFog = 4,
	EmissiveAdaptation = 5,
	CharacterLightRig = 6,
	Probes = 7,
	ERenderSettingsEditAssetType_MAX = 8
};

// Enum RenderSettings.ERenderSettingsCustomBlendDomainFormat
enum class ERenderSettingsCustomBlendDomainFormat : uint8 {
	Default = 0,
	ZeroToOne = 1,
	NoIfZero = 2,
	YesIfOne = 3,
	OnlyNoIfZero = 4,
	OnlyYesIfOne = 5,
	OnlyNoIfNotOne = 6,
	OnlyYesIfNotZero = 7,
	HideIfDefault = 8,
	Hide = 9,
	ERenderSettingsCustomBlendDomainFormat_MAX = 10
};

// Enum RenderSettings.ESimpleUpdatePumpComponentMode
enum class ESimpleUpdatePumpComponentMode : uint8 {
	UPM_ALWAYS = 0,
	UPM_EDITORONLY = 1,
	UPM_GAMEONLY = 2,
	UPM_NEVER = 3,
	UPM_MAX = 4
};

// ScriptStruct RenderSettings.WorldAdaptationOverrideInterfaces
// Size: 0x50 (Inherited: 0x00)
struct FWorldAdaptationOverrideInterfaces {
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FAdaptationOverrideInterfaces> WorldMap; // 0x00(0x50)
};

// ScriptStruct RenderSettings.AdaptationOverrideInterfaces
// Size: 0x20 (Inherited: 0x00)
struct FAdaptationOverrideInterfaces {
	struct TArray<struct TWeakObjectPtr<struct UObject>> PriorityAdaptationOverrides; // 0x00(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> StackedAdaptationOverrides; // 0x10(0x10)
};

// ScriptStruct RenderSettings.DirectPostProcessingEval
// Size: 0x5f0 (Inherited: 0x00)
struct FDirectPostProcessingEval {
	struct FPostProcessSettings PostProcessSettings; // 0x00(0x5f0)
};

// ScriptStruct RenderSettings.DistanceFogCompute
// Size: 0x10 (Inherited: 0x00)
struct FDistanceFogCompute {
	struct UPostProcessComponent* FogPostProcess; // 0x00(0x08)
	struct UMaterialInterface* ActivePPMaterial; // 0x08(0x08)
};

// ScriptStruct RenderSettings.DistanceFogName
// Size: 0x08 (Inherited: 0x00)
struct FDistanceFogName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.DistanceFogOverrides
// Size: 0x20 (Inherited: 0x00)
struct FDistanceFogOverrides {
	char bOverride_OnOff : 1; // 0x00(0x01)
	char bOverride_FogGradientHorizonOffset : 1; // 0x00(0x01)
	char bOverride_MaxFogOpacityPercent : 1; // 0x00(0x01)
	char bOverride_StartDistance : 1; // 0x00(0x01)
	char bOverride_FullDistance : 1; // 0x00(0x01)
	char bOverride_Thickness : 1; // 0x00(0x01)
	char bOverride_BlendSceneColorPercent : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OnOff; // 0x04(0x04)
	float FogGradientHorizonOffset; // 0x08(0x04)
	float MaxFogOpacityPercent; // 0x0c(0x04)
	float StartDistance; // 0x10(0x04)
	float FullDistance; // 0x14(0x04)
	float Thickness; // 0x18(0x04)
	float BlendSceneColorPercent; // 0x1c(0x04)
};

// ScriptStruct RenderSettings.DistanceFog
// Size: 0x1c0 (Inherited: 0x00)
struct FDistanceFog {
	char bOverride_FogColor : 1; // 0x00(0x01)
	char bOverride_StartDistance : 1; // 0x00(0x01)
	char bOverride_FullDistance : 1; // 0x00(0x01)
	char bOverride_CutoffDistance : 1; // 0x00(0x01)
	char bOverride_Thickness : 1; // 0x00(0x01)
	char bOverride_MaxFogOpacityPercent : 1; // 0x00(0x01)
	char bOverride_BlendSceneColorPercent : 1; // 0x00(0x01)
	char bOverride_SkyBlendPercent : 1; // 0x00(0x01)
	char bOverride_SkyDesaturation : 1; // 0x01(0x01)
	char bOverride_SkyIntensityBoost : 1; // 0x01(0x01)
	char bOverride_SkySamplingHorizonAngle : 1; // 0x01(0x01)
	char bOverride_SkySamplingUseCameraZ : 1; // 0x01(0x01)
	char bOverride_FastAtmosphereHorizonBump : 1; // 0x01(0x01)
	char bOverride_FogPPMaterial : 1; // 0x01(0x01)
	char bOverride_ExtraA : 1; // 0x01(0x01)
	char bOverride_ExtraB : 1; // 0x01(0x01)
	char bOverride_ExtraC : 1; // 0x02(0x01)
	char bOverride_ExtraD : 1; // 0x02(0x01)
	char bOverride_FogGradientHorizonOffset : 1; // 0x02(0x01)
	char bFogColorGradient : 1; // 0x02(0x01)
	char pad_2_4 : 4; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName Name; // 0x04(0x08)
	float OnOff; // 0x0c(0x04)
	struct FLinearColor FogColor; // 0x10(0x10)
	struct FLinearColor FogColorZenith; // 0x20(0x10)
	struct FLinearColor FogColorNadir; // 0x30(0x10)
	float FogGradientHorizonOffset; // 0x40(0x04)
	float MaxFogOpacityPercent; // 0x44(0x04)
	float StartDistance; // 0x48(0x04)
	float FullDistance; // 0x4c(0x04)
	float CutoffDistance; // 0x50(0x04)
	float Thickness; // 0x54(0x04)
	float BlendSceneColorPercent; // 0x58(0x04)
	float SkyBlendPercent; // 0x5c(0x04)
	float SkyDesaturation; // 0x60(0x04)
	float SkyIntensityBoost; // 0x64(0x04)
	float SkySamplingHorizonAngle; // 0x68(0x04)
	float SkySamplingUseCameraZ; // 0x6c(0x04)
	float FastAtmosphereHorizonBump; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UMaterialInterface* FogPPMaterial; // 0x78(0x08)
	struct FDistanceFogExtraVariables ExtraLerp; // 0x80(0xa0)
	struct FDistanceFogExtraVariables ExtraSet; // 0x120(0xa0)
};

// ScriptStruct RenderSettings.DistanceFogExtraVariables
// Size: 0xa0 (Inherited: 0x00)
struct FDistanceFogExtraVariables {
	struct TMap<struct FName, float> Scalars; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> Colors; // 0x50(0x50)
};

// ScriptStruct RenderSettings.DistanceFogDayNight
// Size: 0x14 (Inherited: 0x00)
struct FDistanceFogDayNight {
	struct FVector SunDirection; // 0x00(0x0c)
	float NightDay; // 0x0c(0x04)
	float MoonBrightness; // 0x10(0x04)
};

// ScriptStruct RenderSettings.DynamicCharacterLightRigLight
// Size: 0x40 (Inherited: 0x00)
struct FDynamicCharacterLightRigLight {
	struct ULightComponent* Light; // 0x00(0x08)
	struct FName ComponentName; // 0x08(0x08)
	float DayIntensity; // 0x10(0x04)
	float NightIntensity; // 0x14(0x04)
	struct FDynamicCharacterLightRigFillLight FillLight; // 0x18(0x08)
	struct FDynamicCharacterLightRigAzimuthFollowLight AzimuthFollow; // 0x20(0x04)
	struct FDynamicCharacterLightRigAltitudeFollowLight AltitudeFollow; // 0x24(0x0c)
	bool bOffAtNight; // 0x30(0x01)
	bool bFillLight; // 0x31(0x01)
	bool bAzimuthFollow; // 0x32(0x01)
	bool bAltitudeFollow; // 0x33(0x01)
	bool bModulateWithTemperature; // 0x34(0x01)
	bool bDisableDirectionalLightBelowHorizon; // 0x35(0x01)
	bool bAllowAdaptation; // 0x36(0x01)
	bool bEnable; // 0x37(0x01)
	struct FColor DebugColor; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RenderSettings.DynamicCharacterLightRigAltitudeFollowLight
// Size: 0x0c (Inherited: 0x00)
struct FDynamicCharacterLightRigAltitudeFollowLight {
	float AltitudeOffset; // 0x00(0x04)
	float MinAltitude; // 0x04(0x04)
	float MaxAltitude; // 0x08(0x04)
};

// ScriptStruct RenderSettings.DynamicCharacterLightRigAzimuthFollowLight
// Size: 0x04 (Inherited: 0x00)
struct FDynamicCharacterLightRigAzimuthFollowLight {
	float AzimuthOffset; // 0x00(0x04)
};

// ScriptStruct RenderSettings.DynamicCharacterLightRigFillLight
// Size: 0x08 (Inherited: 0x00)
struct FDynamicCharacterLightRigFillLight {
	float AwayIntensityPercent; // 0x00(0x04)
	float TowardsIntensityPercent; // 0x04(0x04)
};

// ScriptStruct RenderSettings.DynamicCharacterLightRigLightUpdate
// Size: 0x68 (Inherited: 0x00)
struct FDynamicCharacterLightRigLightUpdate {
	struct AActor* Owner; // 0x00(0x08)
	float DayNightLerp; // 0x08(0x04)
	float TemperatureMod; // 0x0c(0x04)
	float IntensityMod; // 0x10(0x04)
	float Adaptation; // 0x14(0x04)
	struct FVector OwnerPosition; // 0x18(0x0c)
	struct FVector OwnerDirection; // 0x24(0x0c)
	struct FVector CameraPosition; // 0x30(0x0c)
	struct FVector CameraDirection; // 0x3c(0x0c)
	struct FVector DirectionalLight; // 0x48(0x0c)
	float DirectionalLightIntensity; // 0x54(0x04)
	float DirectionalLightAzimuthDegrees; // 0x58(0x04)
	float DirectionalLightAltitudeDegrees; // 0x5c(0x04)
	bool bDirectionalLight; // 0x60(0x01)
	bool bEnabled; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct RenderSettings.CharacterLightRigAdjustmentsName
// Size: 0x08 (Inherited: 0x00)
struct FCharacterLightRigAdjustmentsName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.CharacterLightRigAdjustments
// Size: 0x18 (Inherited: 0x00)
struct FCharacterLightRigAdjustments {
	struct FName Name; // 0x00(0x08)
	float IntensityMod; // 0x08(0x04)
	float TemperatureMod; // 0x0c(0x04)
	float DayNightLerp; // 0x10(0x04)
	bool bIntensityMod; // 0x14(0x01)
	bool bOverrideTemperatureMod; // 0x15(0x01)
	bool bOverrideDayNightLerp; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct RenderSettings.CharacterLightRigAdjustmentsCompute
// Size: 0x01 (Inherited: 0x00)
struct FCharacterLightRigAdjustmentsCompute {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct RenderSettings.EmissiveAdaptationStateCompute
// Size: 0xe0 (Inherited: 0x00)
struct FEmissiveAdaptationStateCompute {
	struct FEmissiveAdaptationWorldState WorldState; // 0x00(0x98)
	struct FEmissiveAdaptationLerpSettings VolumeSettings; // 0x98(0x40)
	float PPBloomIntensity; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct RenderSettings.EmissiveAdaptationLerpSettings
// Size: 0x40 (Inherited: 0x00)
struct FEmissiveAdaptationLerpSettings {
	float BloomTargetEV; // 0x00(0x04)
	float BloomBaseEV; // 0x04(0x04)
	float BloomIntensityCorrection; // 0x08(0x04)
	float BloomOutdoorsDaytimeBoostEV; // 0x0c(0x04)
	float AutoExposureAdaptationBoostEV; // 0x10(0x04)
	float LuminanceAdaptationBoostEV; // 0x14(0x04)
	float LuminanceAdaptationClampMinEV; // 0x18(0x04)
	float LuminanceAdaptationClampMaxEV; // 0x1c(0x04)
	struct FExposureExpressionsExtrasLerp Extras; // 0x20(0x20)
};

// ScriptStruct RenderSettings.EmissiveAdaptationWorldState
// Size: 0x98 (Inherited: 0x00)
struct FEmissiveAdaptationWorldState {
	struct UWorld* World; // 0x00(0x08)
	struct FVector Eye; // 0x08(0x0c)
	float NightDay; // 0x14(0x04)
	float Overcast; // 0x18(0x04)
	float OutdoorsIndoors; // 0x1c(0x04)
	float FilteredOutdoorsIndoors; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FLastRenderedExposurePair LastExposure; // 0x28(0x68)
	bool bDayNightSystemValid; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct RenderSettings.EmissiveAdaptationFinalState
// Size: 0x88 (Inherited: 0x00)
struct FEmissiveAdaptationFinalState {
	float MinExposureEV100; // 0x00(0x04)
	float MaxExposureEV100; // 0x04(0x04)
	float BiasPow2; // 0x08(0x04)
	float MinExposure; // 0x0c(0x04)
	float MaxExposure; // 0x10(0x04)
	float Bias; // 0x14(0x04)
	float InverseBias; // 0x18(0x04)
	float LastFrameAverageLuminanceEV100; // 0x1c(0x04)
	float LastFrameAutoExposureEV100; // 0x20(0x04)
	float LastFrameAverageLuminanceFilteredEV100; // 0x24(0x04)
	float LastFrameAutoExposureFilteredEV100; // 0x28(0x04)
	float LastFrameAverageLuminance; // 0x2c(0x04)
	float LastFrameAutoExposure; // 0x30(0x04)
	float LastFrameAverageLuminanceFiltered; // 0x34(0x04)
	float LastFrameAutoExposureFiltered; // 0x38(0x04)
	float BloomTargetEV100; // 0x3c(0x04)
	float BloomFinalMultiplier; // 0x40(0x04)
	float BloomFinalMultiplierOutdoorsDaytime; // 0x44(0x04)
	float BloomUncorrectedMultiplier; // 0x48(0x04)
	float BloomMultiplierMin; // 0x4c(0x04)
	float BloomMultiplierMax; // 0x50(0x04)
	float BloomCorrectionFactor; // 0x54(0x04)
	float AutoFinalMultiplier; // 0x58(0x04)
	float AutoFinalMultiplierOutdoorsDaytime; // 0x5c(0x04)
	float LuminanceFinalMultiplier; // 0x60(0x04)
	float LuminanceFinalMultiplierFiltered; // 0x64(0x04)
	float LuminanceMultiplierMin; // 0x68(0x04)
	float LuminanceMultiplierMax; // 0x6c(0x04)
	float Indoors; // 0x70(0x04)
	float FilteredIndoors; // 0x74(0x04)
	float OutdoorsDayTime; // 0x78(0x04)
	float OutdoorsDayTimeBoostEV; // 0x7c(0x04)
	float OutdoorsDayTimeBoostFactor; // 0x80(0x04)
	bool bEnabled; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct RenderSettings.LightAdaptationTracker
// Size: 0x98 (Inherited: 0x00)
struct FLightAdaptationTracker {
	struct TArray<struct TWeakObjectPtr<struct ULightAdaptationComponent>> Components; // 0x00(0x10)
	struct FEmissiveAdaptationFinalState LastState; // 0x10(0x88)
};

// ScriptStruct RenderSettings.DynamicLightAdaptationSettingsBase
// Size: 0x48 (Inherited: 0x00)
struct FDynamicLightAdaptationSettingsBase {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseEV; // 0x08(0x04)
	float OutdoorsDayTimeEVBoost; // 0x0c(0x04)
	float AdaptationStrengthPercent; // 0x10(0x04)
	float MinMaxExposureTarget; // 0x14(0x04)
	float MaxEV; // 0x18(0x04)
	float MinEV; // 0x1c(0x04)
	float StartCutoffMaxEV; // 0x20(0x04)
	float StartCutoffMinEV; // 0x24(0x04)
	float AutoExposureUpdateTolerance; // 0x28(0x04)
	int32_t FreezeAdaptationAfterFrames; // 0x2c(0x04)
	enum class ELightAdapatationMode Mode; // 0x30(0x01)
	bool bUseExposureBias; // 0x31(0x01)
	bool bFiltered; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct UCurveFloat* ExposureCompensationCurve; // 0x38(0x08)
	bool bApplyCompensation; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct RenderSettings.DynamicLightAdaptationSettings
// Size: 0x60 (Inherited: 0x48)
struct FDynamicLightAdaptationSettings : FDynamicLightAdaptationSettingsBase {
	struct UDynamicLightAdaptationModSettingsInterface* ModInterface; // 0x48(0x08)
	struct TArray<struct UDynamicLightAdaptationModSettingsInterface*> ModInterfaces; // 0x50(0x10)
};

// ScriptStruct RenderSettings.DynamicLightAdaptationEVValueClamp
// Size: 0x1c (Inherited: 0x00)
struct FDynamicLightAdaptationEVValueClamp {
	struct FDynamicLightAdaptationEVValue MinEV; // 0x00(0x0c)
	struct FDynamicLightAdaptationEVValue MaxEV; // 0x0c(0x0c)
	char bUseMinEV : 1; // 0x18(0x01)
	char bUseMaxEV : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct RenderSettings.DynamicLightAdaptationEVValue
// Size: 0x0c (Inherited: 0x00)
struct FDynamicLightAdaptationEVValue {
	enum class EDynamicLightAdaptationEVValueType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EVValue; // 0x04(0x04)
	float MinMaxTarget; // 0x08(0x04)
};

// ScriptStruct RenderSettings.PlayerCentricPostProcessingOverrides
// Size: 0x10 (Inherited: 0x00)
struct FPlayerCentricPostProcessingOverrides {
	struct TArray<struct FPlayerCentricPostProcessingOverride> OverrideStack; // 0x00(0x10)
};

// ScriptStruct RenderSettings.PlayerCentricPostProcessingOverride
// Size: 0x10 (Inherited: 0x00)
struct FPlayerCentricPostProcessingOverride {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	float PostProcessingViewpoint; // 0x08(0x04)
	float LerpAlpha; // 0x0c(0x04)
};

// ScriptStruct RenderSettings.PostProcessingVarColorCurve
// Size: 0x218 (Inherited: 0x00)
struct FPostProcessingVarColorCurve {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EPostProcessingVarColor Var; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeCurveLinearColor Curve; // 0x10(0x208)
};

// ScriptStruct RenderSettings.PostProcessingVarScalarCurve
// Size: 0x98 (Inherited: 0x00)
struct FPostProcessingVarScalarCurve {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EPostProcessingVarScalar Var; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
};

// ScriptStruct RenderSettings.SimpleBlendDomain
// Size: 0x10 (Inherited: 0x00)
struct FSimpleBlendDomain {
	struct TArray<struct URenderSettingsCustomBlendDomain*> Blends; // 0x00(0x10)
};

// ScriptStruct RenderSettings.BlendDomainLegacy
// Size: 0x28 (Inherited: 0x00)
struct FBlendDomainLegacy {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EBlendDomainIndoorsOutdoors IndoorsOutdoorsBlend; // 0x08(0x01)
	enum class ERenderSettingsIndoorsType IndoorsType; // 0x09(0x01)
	enum class EBlendDomainDayNight DayNightBlend; // 0x0a(0x01)
	enum class EBlendDomainOvercast OvercastClearBlend; // 0x0b(0x01)
	enum class EBlendDomainLightingMode LightingMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x10(0x10)
	struct FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x20(0x08)
};

// ScriptStruct RenderSettings.BlendDomainIndoorsOutdoorsCurve
// Size: 0x08 (Inherited: 0x00)
struct FBlendDomainIndoorsOutdoorsCurve {
	struct UCurveFloat* IndoorsOutdoorsCurve; // 0x00(0x08)
};

// ScriptStruct RenderSettings.BlendDomainNormalizedTimeCurve
// Size: 0x10 (Inherited: 0x00)
struct FBlendDomainNormalizedTimeCurve {
	struct UCurveFloat* NormalizedTimeCurve; // 0x00(0x08)
	bool bMirrorAroundNoon; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RenderSettings.BlendDomain
// Size: 0x38 (Inherited: 0x28)
struct FBlendDomain : FBlendDomainLegacy {
	struct TArray<struct URenderSettingsCustomBlendDomain*> CustomBlends; // 0x28(0x10)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomains
// Size: 0x50 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomains {
	struct TArray<struct URenderSettingsCustomBlendDomainBase*> AllDomains; // 0x00(0x10)
	struct TArray<struct URenderSettingsCustomBlendDomainBase*> PreComputeDomainsFirst; // 0x10(0x10)
	struct TArray<struct URenderSettingsCustomBlendDomainBase*> PreComputeDomainsNormal; // 0x20(0x10)
	struct TArray<struct URenderSettingsCustomBlendDomainBase*> PreComputeDomainsLast; // 0x30(0x10)
	struct TArray<struct URenderSettingsCustomBlendDomainBase*> PreComputeDomainsCustom; // 0x40(0x10)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainOverrides
// Size: 0x68 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainOverrides {
	struct TArray<struct TWeakObjectPtr<struct UObject>> InterfaceOverrides; // 0x00(0x10)
	struct FRenderSettingsCustomBlendDomainValueOverrides ValueOverrides; // 0x10(0x58)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainValueStore
// Size: 0x58 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainValueStore {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, float> Values; // 0x08(0x50)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainValueOverrides
// Size: 0x58 (Inherited: 0x58)
struct FRenderSettingsCustomBlendDomainValueOverrides : FRenderSettingsCustomBlendDomainValueStore {
};

// ScriptStruct RenderSettings.RenderSettingsPreComputedBlendDomainNameBase
// Size: 0x10 (Inherited: 0x00)
struct FRenderSettingsPreComputedBlendDomainNameBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPreComputedBlendDomainName
// Size: 0x10 (Inherited: 0x10)
struct FRenderSettingsPreComputedBlendDomainName : FRenderSettingsPreComputedBlendDomainNameBase {
};

// ScriptStruct RenderSettings.RenderSettingsPreComputedLastBlendDomainName
// Size: 0x10 (Inherited: 0x10)
struct FRenderSettingsPreComputedLastBlendDomainName : FRenderSettingsPreComputedBlendDomainNameBase {
};

// ScriptStruct RenderSettings.RenderSettingsPreComputedNormalBlendDomainName
// Size: 0x10 (Inherited: 0x10)
struct FRenderSettingsPreComputedNormalBlendDomainName : FRenderSettingsPreComputedBlendDomainNameBase {
};

// ScriptStruct RenderSettings.RenderSettingsPreComputedFirstBlendDomainName
// Size: 0x10 (Inherited: 0x10)
struct FRenderSettingsPreComputedFirstBlendDomainName : FRenderSettingsPreComputedBlendDomainNameBase {
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainNameWithValue
// Size: 0x0c (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainNameWithValue {
	struct FRenderSettingsCustomBlendDomainName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.BlendDomainState
// Size: 0xf8 (Inherited: 0x00)
struct FBlendDomainState {
	struct TMap<struct FName, float> BlendDomains; // 0x00(0x50)
	struct TMap<struct FName, struct FVector> Vectors; // 0x50(0x50)
	struct TMap<struct FName, float> Scalars; // 0xa0(0x50)
	bool bLowQuality; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct RenderSettings.RenderSettingsBlendDomainConsoleLien
// Size: 0x50 (Inherited: 0x00)
struct FRenderSettingsBlendDomainConsoleLien {
	struct FBlendDomain BlendDomain; // 0x00(0x38)
	bool bOnlyAfterBeginPlay; // 0x38(0x01)
	enum class ERenderSettingsBlendDomainConsoleLienMode Mode; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FConsoleVariableLienEntry> ConsoleVariables; // 0x40(0x10)
};

// ScriptStruct RenderSettings.RenderSettingsEmissiveAdaptationName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsEmissiveAdaptationName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsEmissiveAdaptation
// Size: 0x90 (Inherited: 0x00)
struct FRenderSettingsEmissiveAdaptation {
	char bOverride_BloomTarget : 1; // 0x00(0x01)
	char bOverride_BloomBaseEV : 1; // 0x00(0x01)
	char bOverride_BloomIntensityCorrection : 1; // 0x00(0x01)
	char bOverride_BloomOutdoorsDaytimeBoostEV : 1; // 0x00(0x01)
	char bOverride_AutoExposureAdaptationBoostEV : 1; // 0x00(0x01)
	char bOverride_LuminanceAdaptationBoostEV : 1; // 0x00(0x01)
	char bOverride_LuminanceAdaptationMinEV : 1; // 0x00(0x01)
	char bOverride_LuminanceAdaptationMaxEV : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UExposureExpressionsExposureValue* BloomTargetExpression; // 0x10(0x08)
	struct UExposureExpressionsExposureValue* BloomBaseExpression; // 0x18(0x08)
	float BloomIntensityCorrection; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UExposureExpressionsExposureValue* BloomOutdoorsDaytimeBoostExpression; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* AutoExposureAdaptationBoostExpression; // 0x30(0x08)
	struct UExposureExpressionsExposureValue* LuminanceAdaptationBoostExpression; // 0x38(0x08)
	struct UExposureExpressionsExposureValue* LuminanceAdaptationMinExpression; // 0x40(0x08)
	struct UExposureExpressionsExposureValue* LuminanceAdaptationMaxExpression; // 0x48(0x08)
	struct FExposureExpressionsExtras Extras; // 0x50(0x40)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainConsoleEntry
// Size: 0x20 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainConsoleEntry {
	struct FName domain; // 0x00(0x08)
	struct FString ConsoleVariable; // 0x08(0x10)
	float ExplicitCompare; // 0x18(0x04)
	bool bInvertValue; // 0x1c(0x01)
	bool bUseExplicitCompare; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct RenderSettings.RenderSettingsCustomBlendDomainEntry
// Size: 0x28 (Inherited: 0x00)
struct FRenderSettingsCustomBlendDomainEntry {
	struct FName domain; // 0x00(0x08)
	float DefaultValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRenderSettingsPreComputedLastBlendDomainName DefaultValueBlendDomain; // 0x10(0x10)
	bool bInvertDefaultValueBlendDomain; // 0x20(0x01)
	bool bUseDefaultValueBlendDomain; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct RenderSettings.RenderSettingsPostProcessing
// Size: 0x5c (Inherited: 0x00)
struct FRenderSettingsPostProcessing {
	char bOverride_Exposure : 1; // 0x00(0x01)
	char bOverride_ColorGrading : 1; // 0x00(0x01)
	char bOverride_Film : 1; // 0x00(0x01)
	char bOverride_LensFX : 1; // 0x00(0x01)
	char bOverride_Bloom : 1; // 0x00(0x01)
	char bOverride_MotionBlur : 1; // 0x00(0x01)
	char bOverride_DepthOfField : 1; // 0x00(0x01)
	char bOverride_Ambient : 1; // 0x00(0x01)
	char bOverride_ScreenSpaceReflections : 1; // 0x01(0x01)
	char bOverride_Probes : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FRenderSettingsPostProcessingGroupName PostProcessingGroup; // 0x04(0x08)
	struct FRenderSettingsPPExposureName Exposure; // 0x0c(0x08)
	struct FRenderSettingsPPColorGradingName ColorGrading; // 0x14(0x08)
	struct FRenderSettingsPPFilmName Film; // 0x1c(0x08)
	struct FRenderSettingsPPLensFXName LensFX; // 0x24(0x08)
	struct FRenderSettingsPPBloomName Bloom; // 0x2c(0x08)
	struct FRenderSettingsPPMotionBlurName MotionBlur; // 0x34(0x08)
	struct FRenderSettingsPPDepthOfFieldName DepthOfField; // 0x3c(0x08)
	struct FRenderSettingsPPAmbientName Ambient; // 0x44(0x08)
	struct FRenderSettingsPPScreenSpaceReflectionsName ScreenSpaceReflections; // 0x4c(0x08)
	struct FRenderSettingsPPProbesName Probes; // 0x54(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPProbesName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPProbesName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPScreenSpaceReflectionsName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPScreenSpaceReflectionsName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPAmbientName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPAmbientName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPDepthOfFieldName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPDepthOfFieldName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPMotionBlurName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPMotionBlurName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPBloomName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPBloomName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPLensFXName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPLensFXName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPFilmName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPFilmName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPColorGradingName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPColorGradingName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPExposureName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPPExposureName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPostProcessingGroupName
// Size: 0x08 (Inherited: 0x00)
struct FRenderSettingsPostProcessingGroupName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPostProcessingGroup
// Size: 0x5c (Inherited: 0x00)
struct FRenderSettingsPostProcessingGroup {
	char bOverride_Exposure : 1; // 0x00(0x01)
	char bOverride_ColorGrading : 1; // 0x00(0x01)
	char bOverride_Film : 1; // 0x00(0x01)
	char bOverride_LensFX : 1; // 0x00(0x01)
	char bOverride_Bloom : 1; // 0x00(0x01)
	char bOverride_MotionBlur : 1; // 0x00(0x01)
	char bOverride_DepthOfField : 1; // 0x00(0x01)
	char bOverride_Ambient : 1; // 0x00(0x01)
	char bOverride_ScreenSpaceReflections : 1; // 0x01(0x01)
	char bOverride_Probes : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	struct FRenderSettingsPPExposureName Exposure; // 0x0c(0x08)
	struct FRenderSettingsPPColorGradingName ColorGrading; // 0x14(0x08)
	struct FRenderSettingsPPFilmName Film; // 0x1c(0x08)
	struct FRenderSettingsPPLensFXName LensFX; // 0x24(0x08)
	struct FRenderSettingsPPBloomName Bloom; // 0x2c(0x08)
	struct FRenderSettingsPPMotionBlurName MotionBlur; // 0x34(0x08)
	struct FRenderSettingsPPDepthOfFieldName DepthOfField; // 0x3c(0x08)
	struct FRenderSettingsPPAmbientName Ambient; // 0x44(0x08)
	struct FRenderSettingsPPScreenSpaceReflectionsName ScreenSpaceReflections; // 0x4c(0x08)
	struct FRenderSettingsPPProbesName Probes; // 0x54(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPAmbient
// Size: 0x60 (Inherited: 0x00)
struct FRenderSettingsPPAmbient {
	char bOverride_AmbientOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x00(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x00(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float AmbientOcclusionIntensity; // 0x0c(0x04)
	float AmbientOcclusionRadius; // 0x10(0x04)
	struct FRenderSettingsPPAmbientOcclusionAdvanced AdvancedAO; // 0x14(0x2c)
	struct UTextureCube* AmbientCubemap; // 0x40(0x08)
	struct FLinearColor AmbientCubemapTint; // 0x48(0x10)
	float AmbientCubemapIntensity; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPAmbientOcclusionAdvanced
// Size: 0x2c (Inherited: 0x00)
struct FRenderSettingsPPAmbientOcclusionAdvanced {
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x01(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AmbientOcclusionStaticFraction; // 0x04(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float AmbientOcclusionFadeDistance; // 0x0c(0x04)
	float AmbientOcclusionFadeRadius; // 0x10(0x04)
	float AmbientOcclusionPower; // 0x14(0x04)
	float AmbientOcclusionBias; // 0x18(0x04)
	float AmbientOcclusionQuality; // 0x1c(0x04)
	float AmbientOcclusionMipBlend; // 0x20(0x04)
	float AmbientOcclusionMipScale; // 0x24(0x04)
	float AmbientOcclusionMipThreshold; // 0x28(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPBloom
// Size: 0xe8 (Inherited: 0x00)
struct FRenderSettingsPPBloom {
	char bOverride_Method : 1; // 0x00(0x01)
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Threshold : 1; // 0x00(0x01)
	char bOverride_Cross : 1; // 0x00(0x01)
	char bOverride_ConvolutionTexture : 1; // 0x00(0x01)
	char bOverride_DirtMaskIntensity : 1; // 0x00(0x01)
	char bOverride_DirtMaskTint : 1; // 0x00(0x01)
	char bOverride_DirtMask : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	enum class EBloomMethod Method; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Intensity; // 0x10(0x04)
	float Threshold; // 0x14(0x04)
	float Cross; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* ConvolutionTexture; // 0x20(0x08)
	struct FRenderSettingsPPBloomAdvanced Advanced; // 0x28(0x9c)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UTexture* DirtMask; // 0xc8(0x08)
	float DirtMaskIntensity; // 0xd0(0x04)
	struct FLinearColor DirtMaskTint; // 0xd4(0x10)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPBloomAdvanced
// Size: 0x9c (Inherited: 0x00)
struct FRenderSettingsPPBloomAdvanced {
	char bOverride_Tint1 : 1; // 0x00(0x01)
	char bOverride_Size1 : 1; // 0x00(0x01)
	char bOverride_Size2 : 1; // 0x00(0x01)
	char bOverride_Tint2 : 1; // 0x00(0x01)
	char bOverride_Tint3 : 1; // 0x00(0x01)
	char bOverride_Size3 : 1; // 0x00(0x01)
	char bOverride_Tint4 : 1; // 0x00(0x01)
	char bOverride_Size4 : 1; // 0x00(0x01)
	char bOverride_Tint5 : 1; // 0x01(0x01)
	char bOverride_Size5 : 1; // 0x01(0x01)
	char bOverride_Tint6 : 1; // 0x01(0x01)
	char bOverride_Size6 : 1; // 0x01(0x01)
	char bOverride_SizeScale : 1; // 0x01(0x01)
	char bOverride_ConvolutionSize : 1; // 0x01(0x01)
	char bOverride_ConvolutionCenterUV : 1; // 0x01(0x01)
	char bOverride_ConvolutionPreFilterMin : 1; // 0x01(0x01)
	char bOverride_ConvolutionPreFilterMax : 1; // 0x02(0x01)
	char bOverride_ConvolutionPreFilterMult : 1; // 0x02(0x01)
	char bOverride_ConvolutionBufferScale : 1; // 0x02(0x01)
	char pad_2_3 : 5; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SizeScale; // 0x04(0x04)
	float Size1; // 0x08(0x04)
	float Size2; // 0x0c(0x04)
	float Size3; // 0x10(0x04)
	float Size4; // 0x14(0x04)
	float Size5; // 0x18(0x04)
	float Size6; // 0x1c(0x04)
	struct FLinearColor Tint1; // 0x20(0x10)
	struct FLinearColor Tint2; // 0x30(0x10)
	struct FLinearColor Tint3; // 0x40(0x10)
	struct FLinearColor Tint4; // 0x50(0x10)
	struct FLinearColor Tint5; // 0x60(0x10)
	struct FLinearColor Tint6; // 0x70(0x10)
	float ConvolutionSize; // 0x80(0x04)
	struct FVector2D ConvolutionCenterUV; // 0x84(0x08)
	float ConvolutionPreFilterMin; // 0x8c(0x04)
	float ConvolutionPreFilterMax; // 0x90(0x04)
	float ConvolutionPreFilterMult; // 0x94(0x04)
	float ConvolutionBufferScale; // 0x98(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPColorGrading
// Size: 0x1d0 (Inherited: 0x00)
struct FRenderSettingsPPColorGrading {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x00(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x00(0x01)
	char bOverride_SceneColorTint : 1; // 0x00(0x01)
	char bOverride_BlueCorrection : 1; // 0x00(0x01)
	char bOverride_ExpandGamut : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float WhiteTemp; // 0x0c(0x04)
	float WhiteTint; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FRenderSettingsPPColorCorrection ColorGradingGlobal; // 0x20(0x60)
	struct FRenderSettingsPPColorCorrection ColorGradingShadows; // 0x80(0x60)
	float ColorCorrectionShadowsMax; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
	struct FRenderSettingsPPColorCorrection ColorGradingMidtones; // 0xf0(0x60)
	struct FRenderSettingsPPColorCorrection ColorGradingHighlights; // 0x150(0x60)
	float ColorCorrectionHighlightsMin; // 0x1b0(0x04)
	struct FLinearColor SceneColorTint; // 0x1b4(0x10)
	float BlueCorrection; // 0x1c4(0x04)
	float ExpandGamut; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPColorCorrection
// Size: 0x60 (Inherited: 0x00)
struct FRenderSettingsPPColorCorrection {
	char bOverride_Saturation : 1; // 0x00(0x01)
	char bOverride_Contrast : 1; // 0x00(0x01)
	char bOverride_Gamma : 1; // 0x00(0x01)
	char bOverride_Gain : 1; // 0x00(0x01)
	char bOverride_Offset : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 Saturation; // 0x10(0x10)
	struct FVector4 Contrast; // 0x20(0x10)
	struct FVector4 Gamma; // 0x30(0x10)
	struct FVector4 Gain; // 0x40(0x10)
	struct FVector4 Offset; // 0x50(0x10)
};

// ScriptStruct RenderSettings.RenderSettingsPPDepthOfField
// Size: 0x2c (Inherited: 0x00)
struct FRenderSettingsPPDepthOfField {
	char bOverride_SensorWidth : 1; // 0x00(0x01)
	char bOverride_FocalDistance : 1; // 0x00(0x01)
	char bOverride_DepthBlurAmount : 1; // 0x00(0x01)
	char bOverride_DepthBlurRadius : 1; // 0x00(0x01)
	char bOverride_Occlusion : 1; // 0x00(0x01)
	char bOverride_Fstop : 1; // 0x00(0x01)
	char bOverride_MinFstop : 1; // 0x00(0x01)
	char bOverride_BladeCount : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float SensorWidth; // 0x0c(0x04)
	float FocalDistance; // 0x10(0x04)
	float DepthBlurAmount; // 0x14(0x04)
	float DepthBlurRadius; // 0x18(0x04)
	float Occlusion; // 0x1c(0x04)
	float Fstop; // 0x20(0x04)
	float MinFstop; // 0x24(0x04)
	int32_t BladeCount; // 0x28(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPExposure
// Size: 0x48 (Inherited: 0x00)
struct FRenderSettingsPPExposure {
	char bOverride_AutoExposureMethod : 1; // 0x00(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x00(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x00(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x00(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x00(0x01)
	char bOverride_AutoExposureBias : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float AutoExposureMinBrightness; // 0x10(0x04)
	float AutoExposureMaxBrightness; // 0x14(0x04)
	float AutoExposureSpeedUp; // 0x18(0x04)
	float AutoExposureSpeedDown; // 0x1c(0x04)
	float AutoExposureBias; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRenderSettingsPPExposureAdvanced Advanced; // 0x28(0x20)
};

// ScriptStruct RenderSettings.RenderSettingsPPExposureAdvanced
// Size: 0x20 (Inherited: 0x00)
struct FRenderSettingsPPExposureAdvanced {
	char bOverride_AutoExposureLowPercent : 1; // 0x00(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x00(0x01)
	char bOverride_HistogramLogMin : 1; // 0x00(0x01)
	char bOverride_HistogramLogMax : 1; // 0x00(0x01)
	char bOverride_AutoExposureMeterMask : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutoExposureLowPercent; // 0x04(0x04)
	float AutoExposureHighPercent; // 0x08(0x04)
	float HistogramLogMin; // 0x0c(0x04)
	float HistogramLogMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture* AutoExposureMeterMask; // 0x18(0x08)
};

// ScriptStruct RenderSettings.RenderSettingsPPFilm
// Size: 0x90 (Inherited: 0x00)
struct FRenderSettingsPPFilm {
	char bOverride_FilmSlope : 1; // 0x00(0x01)
	char bOverride_FilmToe : 1; // 0x00(0x01)
	char bOverride_FilmShoulder : 1; // 0x00(0x01)
	char bOverride_FilmBlackClip : 1; // 0x00(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x00(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x00(0x01)
	char bOverride_FilmSaturation : 1; // 0x00(0x01)
	char bOverride_FilmContrast : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float FilmSlope; // 0x0c(0x04)
	float FilmToe; // 0x10(0x04)
	float FilmShoulder; // 0x14(0x04)
	float FilmBlackClip; // 0x18(0x04)
	float FilmWhiteClip; // 0x1c(0x04)
	struct FLinearColor FilmWhitePoint; // 0x20(0x10)
	float FilmSaturation; // 0x30(0x04)
	float FilmContrast; // 0x34(0x04)
	struct FRenderSettingsPPFilmAdvanced Advanced; // 0x38(0x58)
};

// ScriptStruct RenderSettings.RenderSettingsPPFilmAdvanced
// Size: 0x58 (Inherited: 0x00)
struct FRenderSettingsPPFilmAdvanced {
	char bOverride_FilmShadowTint : 1; // 0x00(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x00(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x00(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x00(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x00(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x00(0x01)
	char bOverride_FilmToeAmount : 1; // 0x00(0x01)
	char bOverride_FilmHealAmount : 1; // 0x00(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FLinearColor FilmShadowTint; // 0x04(0x10)
	float FilmShadowTintBlend; // 0x14(0x04)
	float FilmShadowTintAmount; // 0x18(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1c(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x2c(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x3c(0x10)
	float FilmToeAmount; // 0x4c(0x04)
	float FilmHealAmount; // 0x50(0x04)
	float FilmDynamicRange; // 0x54(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPLensFX
// Size: 0x28 (Inherited: 0x00)
struct FRenderSettingsPPLensFX {
	char bOverride_VignetteIntensity : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float VignetteIntensity; // 0x0c(0x04)
	struct FRenderSettingsPPGrain Grain; // 0x10(0x0c)
	struct FRenderSettingsPPChromaticAberration ChromaticAberration; // 0x1c(0x0c)
};

// ScriptStruct RenderSettings.RenderSettingsPPChromaticAberration
// Size: 0x0c (Inherited: 0x00)
struct FRenderSettingsPPChromaticAberration {
	char bOverride_SceneFringeIntensity : 1; // 0x00(0x01)
	char bOverride_StartOffset : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SceneFringeIntensity; // 0x04(0x04)
	float StartOffset; // 0x08(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPGrain
// Size: 0x0c (Inherited: 0x00)
struct FRenderSettingsPPGrain {
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Jitter : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Jitter; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPMotionBlur
// Size: 0x18 (Inherited: 0x00)
struct FRenderSettingsPPMotionBlur {
	char bOverride_Amount : 1; // 0x00(0x01)
	char bOverride_Max : 1; // 0x00(0x01)
	char bOverride_PerObjectSize : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float Amount; // 0x0c(0x04)
	float Max; // 0x10(0x04)
	float PerObjectSize; // 0x14(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPProbes
// Size: 0x18 (Inherited: 0x00)
struct FRenderSettingsPPProbes {
	struct FName Name; // 0x00(0x08)
	struct FRenderSettingsPPProbesToneMapping ToneMapping; // 0x08(0x10)
};

// ScriptStruct RenderSettings.RenderSettingsPPProbesToneMapping
// Size: 0x10 (Inherited: 0x00)
struct FRenderSettingsPPProbesToneMapping {
	char bOverride_ProbeToneMapAmount : 1; // 0x00(0x01)
	char bOverride_ProbeToneMapMinIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeToneMapMaxEV : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbeToneMapAmount; // 0x04(0x04)
	float ProbeToneMapMinIntensity; // 0x08(0x04)
	float ProbeToneMapMaxEV; // 0x0c(0x04)
};

// ScriptStruct RenderSettings.RenderSettingsPPScreenSpaceReflections
// Size: 0x18 (Inherited: 0x00)
struct FRenderSettingsPPScreenSpaceReflections {
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Quality : 1; // 0x00(0x01)
	char bOverride_MaxRoughness : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	float Intensity; // 0x0c(0x04)
	float Quality; // 0x10(0x04)
	float MaxRoughness; // 0x14(0x04)
};

