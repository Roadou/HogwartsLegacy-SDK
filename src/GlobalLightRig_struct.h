// Enum GlobalLightRig.EBentDirectionalLightWindowLocation
enum class EBentDirectionalLightWindowLocation : uint8 {
	TopLeft = 0,
	TopRight = 1,
	BottomRight = 2,
	BottomLeft = 3,
	Top = 4,
	Right = 5,
	Bottom = 6,
	Left = 7,
	Center = 8,
	EBentDirectionalLightWindowLocation_MAX = 9
};

// Enum GlobalLightRig.EGlobalLightingBlendableInputType
enum class EGlobalLightingBlendableInputType : uint8 {
	BaseValues = 0,
	CombinedValues = 1,
	EGlobalLightingBlendableInputType_MAX = 2
};

// Enum GlobalLightRig.EGlobalLightingBlendOps
enum class EGlobalLightingBlendOps : uint8 {
	LightDirection = 0,
	LightParameters = 1,
	SecondaryLightDirection = 2,
	SecondaryLightParameters = 3,
	SkyLightParameters = 4,
	ExpHeightFogParameters = 5,
	CloudsLightingParameters = 6,
	CloudsPresetParameters = 7,
	CloudsWindParameters = 8,
	ProbeLightingParameters = 9,
	SkyAtmosphereParameters = 10,
	CustomBlendables = 11,
	EGlobalLightingBlendOps_MAX = 12
};

// Enum GlobalLightRig.EGlobalLightingCustomBlendableType
enum class EGlobalLightingCustomBlendableType : uint8 {
	Scalar = 0,
	LinearColor = 1,
	EGlobalLightingCustomBlendableType_MAX = 2
};

// Enum GlobalLightRig.ESkyAtmosphereDirectionalLight
enum class ESkyAtmosphereDirectionalLight : uint8 {
	None = 0,
	Sun = 1,
	Moon = 2,
	Auto = 3,
	ESkyAtmosphereDirectionalLight_MAX = 4
};

// Enum GlobalLightRig.EZeroDirectionalLightMode
enum class EZeroDirectionalLightMode : uint8 {
	AllowZeroIntensity = 0,
	TurnOffLight = 1,
	ClampToMinimum = 2,
	EZeroDirectionalLightMode_MAX = 3
};

// Enum GlobalLightRig.EGlobalLightingMasterFeature
enum class EGlobalLightingMasterFeature : uint8 {
	ProbeLighting = 0,
	CloudsLighting = 1,
	CloudsPreset = 2,
	CloudsWind = 3,
	CloudsSceneLightDirection = 4,
	CloudsSceneLightColor = 5,
	CloudsSceneLightIntensity = 6,
	CloudsSceneLightSaturation = 7,
	EGlobalLightingMasterFeature_MAX = 8
};

// Enum GlobalLightRig.EGlobalLightingMasterComponent
enum class EGlobalLightingMasterComponent : uint8 {
	DirectionalLight = 0,
	SecondaryDirectionalLight = 1,
	SkyLight = 2,
	SkyAtmosphere = 3,
	ExponentialHeightFog = 4,
	VolumetricClouds = 5,
	EGlobalLightingMasterComponent_MAX = 6
};

// Enum GlobalLightRig.EGlobalLightingFogZMode
enum class EGlobalLightingFogZMode : uint8 {
	BaseOfVolume = 0,
	CenterOfVolume = 1,
	CameraZ = 2,
	PlayerZ = 3,
	WorldBase = 4,
	OffsetOnly = 5,
	OffsetIsAbsolute = 6,
	EGlobalLightingFogZMode_MAX = 7
};

// Enum GlobalLightRig.EGlobalLightRigModLinearColorType
enum class EGlobalLightRigModLinearColorType : uint8 {
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
	EGlobalLightRigModLinearColorType_MAX = 12
};

// Enum GlobalLightRig.EGlobalLightRigModColorConversionType
enum class EGlobalLightRigModColorConversionType : uint8 {
	None = 0,
	ColorTemperatureK = 1,
	BlackBodyK = 2,
	Saturation = 3,
	Brightness = 4,
	EGlobalLightRigModColorConversionType_MAX = 5
};

// Enum GlobalLightRig.EGlobalLightRigModTransform
enum class EGlobalLightRigModTransform : uint8 {
	None = 0,
	Negate = 1,
	Abs = 2,
	OneMinus = 3,
	Saturate = 4,
	Square = 5,
	Normalize = 6,
	EGlobalLightRigModTransform_MAX = 7
};

// Enum GlobalLightRig.EGlobalLightRigModType
enum class EGlobalLightRigModType : uint8 {
	Absolute = 0,
	Multiply = 1,
	Add = 2,
	Minimum = 3,
	Maximum = 4,
	EGlobalLightRigModType_MAX = 5
};

// Enum GlobalLightRig.EGlobalLightRigProbeMode
enum class EGlobalLightRigProbeMode : uint8 {
	GameAndProbeCapture = 0,
	GameOnly = 1,
	ProbeCaptureOnly = 2,
	EGlobalLightRigProbeMode_MAX = 3
};

// Enum GlobalLightRig.EGlobalLightRigModLerpEasingType
enum class EGlobalLightRigModLerpEasingType : uint8 {
	EaseIn = 0,
	EaseOut = 1,
	EaseInOut = 2,
	EGlobalLightRigModLerpEasingType_MAX = 3
};

// Enum GlobalLightRig.EGlobalLightRigModParamType
enum class EGlobalLightRigModParamType : uint8 {
	NoType = 0,
	FloatType = 1,
	BoolType = 2,
	ColorType = 3,
	LinearColorType = 4,
	VectorType = 5,
	TextureType = 6,
	EGlobalLightRigModParamType_MAX = 7
};

// Enum GlobalLightRig.EGlobalLightRigModParamFamily
enum class EGlobalLightRigModParamFamily : uint8 {
	NoFamily = 0,
	DirectionalLightDirection = 1,
	DirectionalLightParameters = 2,
	SkyLight = 3,
	SkyAtmosphere = 4,
	CloudLighting = 5,
	CloudsWind = 6,
	ProbeLighting = 7,
	ExponentialHeightFog = 8,
	EGlobalLightRigModParamFamily_MAX = 9
};

// Enum GlobalLightRig.EGlobalLightRigModParam
enum class EGlobalLightRigModParam : uint8 {
	ParamNone = 0,
	DirectionalLight_Direction = 1,
	DirectionalLight_Intensity = 2,
	DirectionalLight_LightColor = 3,
	DirectionalLight_Temperature = 4,
	DirectionalLight_UseTemperature = 5,
	DirectionalLight_SpecularScale = 6,
	DirectionalLight_IndirectLightingIntensity = 7,
	DirectionalLight_VolumetricScatteringIntensity = 8,
	DirectionalLight_AtmosphereSunLightPriority = 9,
	DirectionalLight_PseudoLight = 10,
	DirectionalLight_CloudShadowStrength = 11,
	DirectionalLight_CloudShadowOnAtmosphereStrength = 12,
	DirectionalLight_CloudShadowOnSurfaceStrength = 13,
	DirectionalLight_CloudShadowMinMax = 14,
	DirectionalLight_AtmosphereSunDiskColorScale = 15,
	DirectionalLight_EnableLightShaftOcclusion = 16,
	DirectionalLight_OcclusionMaskDarkness = 17,
	DirectionalLight_OcclusionDepthRange = 18,
	DirectionalLight_EnableLightShaftBloom = 19,
	DirectionalLight_BloomScale = 20,
	DirectionalLight_BloomThreshold = 21,
	DirectionalLight_BloomTint = 22,
	DirectionalLight_LightShaftOverrideDirection = 23,
	SkyLight_Intensity = 24,
	SkyLight_LightColor = 25,
	SkyLight_IndirectLightingIntensity = 26,
	SkyLight_VolumetricScatteringIntensity = 27,
	SkyLight_Hemisphere_OutsideIntensity = 28,
	SkyLight_Hemisphere_InsideIntensity = 29,
	SkyLight_Probe_OutsideMinimumIntensity = 30,
	SkyLight_Probe_InsideMinimumIntensity = 31,
	SkyLight_Probe_SkyOcclusionContrast = 32,
	SkyLight_Probe_SkyOcclusionExponent = 33,
	SkyAtmosphere_BottomRadius = 34,
	SkyAtmosphere_AtmosphereHeight = 35,
	SkyAtmosphere_GroundAlbedo = 36,
	SkyAtmosphere_MultiScatteringFactor = 37,
	SkyAtmosphere_RayleighScatteringScale = 38,
	SkyAtmosphere_RayleighScattering = 39,
	SkyAtmosphere_RayleighExponentialDistribution = 40,
	SkyAtmosphere_MieScatteringScale = 41,
	SkyAtmosphere_MieScattering = 42,
	SkyAtmosphere_MieAbsorptionScale = 43,
	SkyAtmosphere_MieAbsorption = 44,
	SkyAtmosphere_MieAnisotropy = 45,
	SkyAtmosphere_MieExponentialDistribution = 46,
	SkyAtmosphere_OzoneAbsorptionScale = 47,
	SkyAtmosphere_OzoneAbsorption = 48,
	SkyAtmosphere_OzoneTentDistributionTipAltitude = 49,
	SkyAtmosphere_OzoneTentDistributionTipValue = 50,
	SkyAtmosphere_OzoneTentDistributionWidth = 51,
	SkyAtmosphere_SkyLuminanceFactor = 52,
	SkyAtmosphere_SkyLuminanceFactorIntensity = 53,
	SkyAtmosphere_SkyDesaturation = 54,
	SkyAtmosphere_AerialPespectiveViewDistanceScale = 55,
	SkyAtmosphere_AerialPerspectiveStartDepth = 56,
	SkyAtmosphere_HeightFogContribution = 57,
	SkyAtmosphere_HeightFogContributionInscattering = 58,
	SkyAtmosphere_HeightFogContributionDirectionalInscaterring = 59,
	SkyAtmosphere_HeightFogAccurateInscatteringColor = 60,
	SkyAtmosphere_HeightFogContributionDesaturation = 61,
	SkyAtmosphere_HeightFogContributionDesaturationInscattering = 62,
	SkyAtmosphere_HeightFogContributionDesaturationDirectionalInscattering = 63,
	SkyAtmosphere_TransmittanceMinLightElevationAngle = 64,
	SkyAtmosphere_HorizonToZenithColorationTexture = 65,
	SkyAtmosphere_HorizonToZenithColorationU = 66,
	SkyAtmosphere_HorizonToZenithColorationIntensity = 67,
	SkyAtmosphere_HorizonToZenithColorationDesaturation = 68,
	SkyAtmosphere_HorizonToZenithFogOpticalDepthScale = 69,
	SkyAtmosphere_HorizonToZenithFogOpticalDepthPower = 70,
	SkyAtmosphere_HorizonToZenithFogIntensity = 71,
	SkyAtmosphere_HorizonToZenithFogDesaturation = 72,
	SkyAtmosphere_LightDirection0 = 73,
	SkyAtmosphere_LightDirection1 = 74,
	SkyAtmosphere_SkyOnlyOverallBrightness = 75,
	SkyAtmosphere_SkyOnlyOverallSaturation = 76,
	SkyAtmosphere_SkyOnlySkyModIntensity = 77,
	SkyAtmosphere_SkyOnlySkyModSaturation = 78,
	SkyAtmosphere_SkyOnlySkyModColor = 79,
	SkyAtmosphere_SkyOnlySunDiskModIntensity = 80,
	SkyAtmosphere_SkyOnlySunDiskModSaturation = 81,
	SkyAtmosphere_SkyOnlySunDiskModColor = 82,
	SkyAtmosphere_SkyOnlyMoonDiskModIntensity = 83,
	SkyAtmosphere_SkyOnlyMoonDiskModSaturation = 84,
	SkyAtmosphere_SkyOnlyMoonDiskModColor = 85,
	SkyAtmosphere_SkyOnlyTwilightBaseColorIntensity_DEPRECATED = 86,
	SkyAtmosphere_SkyOnlyTwilightBaseColorSaturation_DEPRECATED = 87,
	SkyAtmosphere_SkyOnlyTwilightBaseColorColor_DEPRECATED = 88,
	SkyAtmosphere_SkyOnlyTwilightModIntensity_DEPRECATED = 89,
	SkyAtmosphere_SkyOnlyTwilightModSaturation_DEPRECATED = 90,
	SkyAtmosphere_SkyOnlyTwilightModColor_DEPRECATED = 91,
	CloudLighting_Ambient = 92,
	CloudLighting_Light = 93,
	CloudLighting_Extinction = 94,
	CloudLighting_PowderExtinction = 95,
	CloudLighting_PowderStrength = 96,
	CloudLighting_FinalOutput = 97,
	CloudLighting_SkyLightCloudOutput = 98,
	CloudLighting_SkyLightCloudAlpha = 99,
	CloudLighting_SkyLightDesaturate = 100,
	CloudLighting_SkyLightGroundColor = 101,
	CloudLighting_ShadowScale = 102,
	CloudLighting_ShadowMapCloudShadowDensity = 103,
	CloudLighting_RayMarchCloudShadowScale = 104,
	CloudLighting_RayMarchShadowDensity = 105,
	CloudLighting_SkyLightShadowDensity = 106,
	CloudLighting_FogDensityMultiplier = 107,
	CloudLighting_HeightFogDensityMultiplier = 108,
	CloudLighting_GroundShadowStrength = 109,
	CloudLighting_CutOutDistanceMeters = 110,
	CloudLighting_CutOutFadeDistanceMeters = 111,
	CloudLighting_Direction = 112,
	CloudLighting_Color = 113,
	CloudLighting_Intensity = 114,
	CloudLighting_Saturation = 115,
	CloudsWind_WindSpeed = 116,
	CloudsWind_WindSkew = 117,
	CloudsWind_WeatherSpeed = 118,
	CloudsWind_SkyLightWeatherSpeedScale = 119,
	CloudsWind_HighAltitudeSpeed = 120,
	ProbeLighting_ProbeOutsideIntensity = 121,
	ProbeLighting_ProbeInsideIntensity = 122,
	ProbeLighting_ProbeOutsideSaturation = 123,
	ProbeLighting_ProbeInsideSaturation = 124,
	ProbeLighting_ProbeToneMapAmount = 125,
	ProbeLighting_ProbeToneMapMinIntensity = 126,
	ProbeLighting_ProbeToneMapMaxEV = 127,
	ProbeContactShadows_MinValue = 128,
	ProbeContactShadows_Length = 129,
	ProbeContactShadows_ConeAngle = 130,
	ProbeContactShadows_FalloffExponent = 131,
	ProbeContactShadows_DepthTolerance = 132,
	ExponentialHeightFog_ZOffset = 133,
	ExponentialHeightFog_FogDensity = 134,
	ExponentialHeightFog_FogHeightFalloff = 135,
	ExponentialHeightFog_FogInscatteringColor = 136,
	ExponentialHeightFog_FogInscatteringIntensity = 137,
	ExponentialHeightFog_FogInscatteringSaturation = 138,
	ExponentialHeightFog_FogInscatteringColorDirLightLuminanceModulate = 139,
	ExponentialHeightFog_FogMaxOpacity = 140,
	ExponentialHeightFog_StartDistance = 141,
	ExponentialHeightFog_FogCutoffDistance = 142,
	ExponentialHeightFog_DistantFogCloudShadowsMinimum = 143,
	ExponentialHeightFog_SecondFogDensity = 144,
	ExponentialHeightFog_SecondFogHeightFalloff = 145,
	ExponentialHeightFog_SecondFogHeightOffset = 146,
	ExponentialHeightFog_DirectionalInscatteringExponent = 147,
	ExponentialHeightFog_DirectionalInscatteringStartDistance = 148,
	ExponentialHeightFog_DirectionalInscatteringColor = 149,
	ExponentialHeightFog_DirectionalInscatteringIntensity = 150,
	ExponentialHeightFog_DirectionalInscatteringSaturation = 151,
	ExponentialHeightFog_DirectionalInscatteringColorDirLightLuminanceModulate = 152,
	ExponentialHeightFog_VolumetricFogScatteringDistribution = 153,
	ExponentialHeightFog_VolumetricFogAlbedo = 154,
	ExponentialHeightFog_VolumetricFogEmissive = 155,
	ExponentialHeightFog_VolumetricFogExtinctionScale = 156,
	ExponentialHeightFog_VolumetricFogDistance = 157,
	ExponentialHeightFog_OutsideVolumeSunMultiplier = 158,
	ExponentialHeightFog_VolumetricLightingDirectionalLightScattering = 159,
	ExponentialHeightFog_VolumetricLightingDirectionalLightDesaturation = 160,
	ExponentialHeightFog_VolumetricLightingShadowsNearMinimum = 161,
	ExponentialHeightFog_VolumetricLightingShadowsFarMinimum = 162,
	ExponentialHeightFog_VolumetricLightingShadowsNearDistance = 163,
	ExponentialHeightFog_VolumetricLightingShadowsFarDistance = 164,
	ExponentialHeightFog_VolumetricLightingCloudShadowsNearMinimum = 165,
	ExponentialHeightFog_VolumetricLightingCloudShadowsFarMinimum = 166,
	ExponentialHeightFog_VolumetricLightingCloudShadowsNearDistance = 167,
	ExponentialHeightFog_VolumetricLightingCloudShadowsFarDistance = 168,
	ExponentialHeightFog_VolumetricLightingHistoryWeight = 169,
	ExponentialHeightFog_VolumetricLightingHistoryWeightStableCell = 170,
	ExponentialHeightFog_VolumetricLightingHistoryWeightMovingLight = 171,
	ExponentialHeightFog_VolumetricInscatteringContribution = 172,
	ExponentialHeightFog_VolumetricDirectionalInscatteringContribution = 173,
	ExponentialHeightFog_VolumetricFogHeightFogNearStartDistance = 174,
	ExponentialHeightFog_VolumetricFogHeightFogNearFullDistance = 175,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendStartDistance = 176,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendFullDistance = 177,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendStrength = 178,
	ExponentialHeightFog_VolumetricFogHistoryWeight = 179,
	ExponentialHeightFog_VolumetricFogHistoryWeightFarFog = 180,
	ExponentialHeightFog_DensityTweakingLightingThreshold = 181,
	ExponentialHeightFog_DensityTweakingMinPercentage = 182,
	ExponentialHeightFog_AliasingReduction = 183,
	ExponentialHeightFog_VolumetricFogHighQualityDistance = 184,
	ExponentialHeightFog_EmptyCellSkyOcclusion = 185,
	ExponentialHeightFog_EnableVariableScatteringDistribution = 186,
	ExponentialHeightFog_MinScatteringDistribution = 187,
	ExponentialHeightFog_MaxScatteringDistribution = 188,
	ExponentialHeightFog_ScatteringDistributionInterpStart = 189,
	ExponentialHeightFog_ScatteringDistributionInterpEnd = 190,
	ExponentialHeightFog_FullDensityDistance = 191,
	ExponentialHeightFog_MinDensityFactor = 192,
	ExponentialHeightFog_InscatteringTextureTint_DEPRECATED = 193,
	ExponentialHeightFog_FullyDirectionalInscatteringColorDistance_DEPRECATED = 194,
	ExponentialHeightFog_NonDirectionalInscatteringColorDistance_DEPRECATED = 195,
	ExponentialHeightFog_InscatteringColorCubemapFactor_DEPRECATED = 196,
	EGlobalLightRigModParam_MAX = 197
};

// Enum GlobalLightRig.EAdjustedValueMode
enum class EAdjustedValueMode : uint8 {
	NoChange = 0,
	Set = 1,
	Multiply = 2,
	Add = 3,
	Subtract = 4,
	Divide = 5,
	Percent = 6,
	ClampOriginal = 7,
	EAdjustedValueMode_MAX = 8
};

// Enum GlobalLightRig.EAdjustedValueBooleanMode
enum class EAdjustedValueBooleanMode : uint8 {
	Default = 0,
	On = 1,
	Off = 2,
	EAdjustedValueBooleanMode_MAX = 3
};

// Enum GlobalLightRig.ESkyLightSourceMode
enum class ESkyLightSourceMode : uint8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	RuntimeCapture = 2,
	RuntimeRender = 3,
	SkyAtmosphereCapturedScene = 4,
	ESkyLightSourceMode_MAX = 5
};

// Enum GlobalLightRig.EWorldBaseHeightAffect
enum class EWorldBaseHeightAffect : uint8 {
	Clouds = 0,
	ExponentialHeightFog = 1,
	Atmosphere = 2,
	EWorldBaseHeightAffect_MAX = 3
};

// ScriptStruct GlobalLightRig.BentDirectionalLightParams
// Size: 0x14 (Inherited: 0x00)
struct FBentDirectionalLightParams {
	float BlendStartAngle; // 0x00(0x04)
	float BlendEndAngle; // 0x04(0x04)
	float SunIntensitFactorEnd; // 0x08(0x04)
	float SkyLightIntensityFactorEnd; // 0x0c(0x04)
	bool bBlendSunLight; // 0x10(0x01)
	bool bBlendSkyLight; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct GlobalLightRig.BentDirectionalLightWindowPreview
// Size: 0x18 (Inherited: 0x00)
struct FBentDirectionalLightWindowPreview {
	struct UStaticMeshComponent* PaneComponent; // 0x00(0x08)
	struct TArray<struct UStaticMeshComponent*> DirectionComponents; // 0x08(0x10)
};

// ScriptStruct GlobalLightRig.BentDirectionalLightWindowAssets
// Size: 0x18 (Inherited: 0x00)
struct FBentDirectionalLightWindowAssets {
	struct UStaticMesh* PaneMesh; // 0x00(0x08)
	struct UStaticMesh* ArrowMesh; // 0x08(0x08)
	float PaneScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct GlobalLightRig.BentDirectionalLightWindowSolution
// Size: 0x14 (Inherited: 0x00)
struct FBentDirectionalLightWindowSolution {
	struct FVector SunDirection; // 0x00(0x0c)
	float DeltaCos; // 0x0c(0x04)
	bool bValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct GlobalLightRig.GlobalLightingLightDirection
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightingLightDirection {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Direction; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct GlobalLightRig.DirectionalLightParametersOverride
// Size: 0xec (Inherited: 0x00)
struct FDirectionalLightParametersOverride {
	struct FDirectionalLightBasicParametersOverride Basic; // 0x00(0x28)
	struct FDirectionalLightAdvancedParametersOverride Advanced; // 0x28(0x44)
	struct FDirectionalLightShaftsOverride LightShafts; // 0x6c(0x28)
	struct FDirectionalLightShadowsOverride Shadows; // 0x94(0x20)
	struct FDirectionalLightDistanceFieldShadowsOverride DistanceFieldShadows; // 0xb4(0x10)
	struct FDirectionalLightCascadedShadowMapsOverride CascadedShadowMaps; // 0xc4(0x28)
};

// ScriptStruct GlobalLightRig.DirectionalLightCascadedShadowMapsOverride
// Size: 0x28 (Inherited: 0x00)
struct FDirectionalLightCascadedShadowMapsOverride {
	char bOverride_DynamicShadowDistanceMovableLight : 1; // 0x00(0x01)
	char bOverride_DynamicShadowCascades : 1; // 0x00(0x01)
	char bOverride_CascadeDistributionExponent : 1; // 0x00(0x01)
	char bOverride_CascadeTransitionFraction : 1; // 0x00(0x01)
	char bOverride_ShadowDistanceFadeoutFraction : 1; // 0x00(0x01)
	char bOverride_FarShadowCascadeCount : 1; // 0x00(0x01)
	char bOverride_FarShadowDistance : 1; // 0x00(0x01)
	char bOverride_CachedDirectionalShadowDistance : 1; // 0x00(0x01)
	char bOverride_bUseCachedDirectionalShadowMaps : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DynamicShadowDistanceMovableLight; // 0x04(0x04)
	int32_t DynamicShadowCascades; // 0x08(0x04)
	float CascadeDistributionExponent; // 0x0c(0x04)
	float CascadeTransitionFraction; // 0x10(0x04)
	float ShadowDistanceFadeoutFraction; // 0x14(0x04)
	int32_t FarShadowCascadeCount; // 0x18(0x04)
	float FarShadowDistance; // 0x1c(0x04)
	float CachedDirectionalShadowDistance; // 0x20(0x04)
	bool bUseCachedDirectionalShadowMaps; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct GlobalLightRig.DirectionalLightDistanceFieldShadowsOverride
// Size: 0x10 (Inherited: 0x00)
struct FDirectionalLightDistanceFieldShadowsOverride {
	char bOverride_UseRayTracedDistanceFieldShadows : 1; // 0x00(0x01)
	char bOverride_RayStartOffsetDepthScale : 1; // 0x00(0x01)
	char bOverride_DistanceFieldShadowDistance : 1; // 0x00(0x01)
	char bOverride_TraceDistance : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	bool bUseRayTracedDistanceFieldShadows; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RayStartOffsetDepthScale; // 0x04(0x04)
	float DistanceFieldShadowDistance; // 0x08(0x04)
	float TraceDistance; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.DirectionalLightShadowsOverride
// Size: 0x20 (Inherited: 0x00)
struct FDirectionalLightShadowsOverride {
	char bOverride_ShadowResolutionScale : 1; // 0x00(0x01)
	char bOverride_ShadowBias : 1; // 0x00(0x01)
	char bOverride_ShadowSlopeBias : 1; // 0x00(0x01)
	char bOverride_ShadowSharpen : 1; // 0x00(0x01)
	char bOverride_ContactShadowLength : 1; // 0x00(0x01)
	char bOverride_ContactShadowLengthWorldSpace : 1; // 0x00(0x01)
	char bOverride_ContactShadowLengthInWS : 1; // 0x00(0x01)
	char bOverride_CastVolumetricShadow : 1; // 0x00(0x01)
	char bOverride_CastTranslucentShadows : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ShadowResolutionScale; // 0x04(0x04)
	float ShadowBias; // 0x08(0x04)
	float ShadowSlopeBias; // 0x0c(0x04)
	float ShadowSharpen; // 0x10(0x04)
	float ContactShadowLength; // 0x14(0x04)
	float ContactShadowLengthWorldSpace; // 0x18(0x04)
	bool bContactShadowLengthInWS; // 0x1c(0x01)
	bool bCastVolumetricShadow; // 0x1d(0x01)
	bool bCastTranslucentShadows; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct GlobalLightRig.DirectionalLightShaftsOverride
// Size: 0x28 (Inherited: 0x00)
struct FDirectionalLightShaftsOverride {
	char bOverride_EnableLightShaftOcclusion : 1; // 0x00(0x01)
	char bOverride_OcclusionMaskDarkness : 1; // 0x00(0x01)
	char bOverride_OcclusionDepthRange : 1; // 0x00(0x01)
	char bOverride_EnableLightShaftBloom : 1; // 0x00(0x01)
	char bOverride_BloomScale : 1; // 0x00(0x01)
	char bOverride_BloomThreshold : 1; // 0x00(0x01)
	char bOverride_BloomTint : 1; // 0x00(0x01)
	char bOverride_LightShaftOverrideDirection : 1; // 0x00(0x01)
	bool bEnableLightShaftOcclusion; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float OcclusionMaskDarkness; // 0x04(0x04)
	float OcclusionDepthRange; // 0x08(0x04)
	bool bEnableLightShaftBloom; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float BloomScale; // 0x10(0x04)
	float BloomThreshold; // 0x14(0x04)
	struct FColor BloomTint; // 0x18(0x04)
	struct FVector LightShaftOverrideDirection; // 0x1c(0x0c)
};

// ScriptStruct GlobalLightRig.DirectionalLightAdvancedParametersOverride
// Size: 0x44 (Inherited: 0x00)
struct FDirectionalLightAdvancedParametersOverride {
	char bOverride_LightSourceAngle : 1; // 0x00(0x01)
	char bOverride_LightSourceSoftAngle : 1; // 0x00(0x01)
	char bOverride_LightingChannels : 1; // 0x00(0x01)
	char bOverride_AffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char bOverride_AffectTranslucentLighting : 1; // 0x00(0x01)
	char bOverride_Transmission : 1; // 0x00(0x01)
	char bOverride_UsedAsAtmosphereSunLight : 1; // 0x00(0x01)
	char bOverride_ProbeOnly : 1; // 0x00(0x01)
	char bOverride_ShadowCascadeBiasDistribution : 1; // 0x01(0x01)
	char bOverride_AtmosphereSunLightIndex : 1; // 0x01(0x01)
	char bOverride_CloudShadowStrength : 1; // 0x01(0x01)
	char bOverride_CloudShadowOnAtmosphereStrength : 1; // 0x01(0x01)
	char bOverride_CloudShadowOnSurfaceStrength : 1; // 0x01(0x01)
	char bOverride_CloudShadowMinMax : 1; // 0x01(0x01)
	char bOverride_AtmosphereSunDiskColorScale : 1; // 0x01(0x01)
	char bOverride_bPerPixelAtmosphereTransmittance : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ShadowCascadeBiasDistribution; // 0x04(0x04)
	float LightSourceAngle; // 0x08(0x04)
	float LightSourceSoftAngle; // 0x0c(0x04)
	struct FLightingChannels LightingChannels; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float CloudShadowStrength; // 0x14(0x04)
	float CloudShadowOnAtmosphereStrength; // 0x18(0x04)
	float CloudShadowOnSurfaceStrength; // 0x1c(0x04)
	struct FVector2D CloudShadowMinMax; // 0x20(0x08)
	int32_t AtmosphereSunLightIndex; // 0x28(0x04)
	struct FLinearColor AtmosphereSunDiskColorScale; // 0x2c(0x10)
	bool bPerPixelAtmosphereTransmittance; // 0x3c(0x01)
	bool bAffectDynamicIndirectLighting; // 0x3d(0x01)
	bool bAffectTranslucentLighting; // 0x3e(0x01)
	bool bTransmission; // 0x3f(0x01)
	bool bUsedAsAtmosphereSunLight; // 0x40(0x01)
	bool bProbeOnly; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
};

// ScriptStruct GlobalLightRig.DirectionalLightBasicParametersOverride
// Size: 0x28 (Inherited: 0x00)
struct FDirectionalLightBasicParametersOverride {
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_LightColor : 1; // 0x00(0x01)
	char bOverride_Temperature : 1; // 0x00(0x01)
	char bOverride_UseTemperature : 1; // 0x00(0x01)
	char bOverride_SpecularScale : 1; // 0x00(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x00(0x01)
	char bOverride_VolumetricScatteringIntensity : 1; // 0x00(0x01)
	char bOverride_AtmosphereSunLightPriority : 1; // 0x00(0x01)
	char bOverride_bPseudoLight : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Intensity; // 0x04(0x04)
	struct FColor LightColor; // 0x08(0x04)
	float Temperature; // 0x0c(0x04)
	bool bUseTemperature; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SpecularScale; // 0x14(0x04)
	float IndirectLightingIntensity; // 0x18(0x04)
	float VolumetricScatteringIntensity; // 0x1c(0x04)
	float AtmosphereSunLightPriority; // 0x20(0x04)
	bool bPseudoLight; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct GlobalLightRig.DirectionalLightParametersRelative
// Size: 0x3e0 (Inherited: 0x00)
struct FDirectionalLightParametersRelative {
	struct FDirectionalLightBasicParametersRelative Basic; // 0x00(0xd0)
	struct FDirectionalLightAdvancedParametersRelative Advanced; // 0xd0(0x4c)
	struct FDirectionalLightShaftsRelative LightShafts; // 0x11c(0x98)
	struct FDirectionalLightShadowsRelative Shadows; // 0x1b4(0xc4)
	struct FDirectionalLightDistanceFieldShadowsRelative DistanceFieldShadows; // 0x278(0x64)
	struct FDirectionalLightCascadedShadowMapsRelative CascadedShadowMaps; // 0x2dc(0x104)
};

// ScriptStruct GlobalLightRig.DirectionalLightCascadedShadowMapsRelative
// Size: 0x104 (Inherited: 0x00)
struct FDirectionalLightCascadedShadowMapsRelative {
	struct FAdjustedValueFloat DynamicShadowDistanceMovableLight; // 0x00(0x20)
	struct FAdjustedValueInt DynamicShadowCascades; // 0x20(0x20)
	struct FAdjustedValueFloat CascadeDistributionExponent; // 0x40(0x20)
	struct FAdjustedValueFloat CascadeTransitionFraction; // 0x60(0x20)
	struct FAdjustedValueFloat ShadowDistanceFadeoutFraction; // 0x80(0x20)
	struct FAdjustedValueInt FarShadowCascadeCount; // 0xa0(0x20)
	struct FAdjustedValueFloat FarShadowDistance; // 0xc0(0x20)
	struct FAdjustedValueFloat CachedDirectionalShadowDistance; // 0xe0(0x20)
	struct FAdjustedValueBoolean bUseCachedDirectionalShadowMaps; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct GlobalLightRig.AdjustedValueBoolean
// Size: 0x01 (Inherited: 0x00)
struct FAdjustedValueBoolean {
	enum class EAdjustedValueBooleanMode Value; // 0x00(0x01)
};

// ScriptStruct GlobalLightRig.AdjustedValueFloat
// Size: 0x20 (Inherited: 0x00)
struct FAdjustedValueFloat {
	enum class EAdjustedValueMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	float ClampMin; // 0x08(0x04)
	bool bClampMin; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ClampMax; // 0x10(0x04)
	bool bClampMax; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ValidateMin; // 0x18(0x04)
	float ValidateMax; // 0x1c(0x04)
};

// ScriptStruct GlobalLightRig.AdjustedValueInt
// Size: 0x20 (Inherited: 0x00)
struct FAdjustedValueInt {
	enum class EAdjustedValueMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
	int32_t ClampMin; // 0x08(0x04)
	bool bClampMin; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ClampMax; // 0x10(0x04)
	bool bClampMax; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t ValidateMin; // 0x18(0x04)
	int32_t ValidateMax; // 0x1c(0x04)
};

// ScriptStruct GlobalLightRig.DirectionalLightDistanceFieldShadowsRelative
// Size: 0x64 (Inherited: 0x00)
struct FDirectionalLightDistanceFieldShadowsRelative {
	struct FAdjustedValueBoolean bUseRayTracedDistanceFieldShadows; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat RayStartOffsetDepthScale; // 0x04(0x20)
	struct FAdjustedValueFloat DistanceFieldShadowDistance; // 0x24(0x20)
	struct FAdjustedValueFloat TraceDistance; // 0x44(0x20)
};

// ScriptStruct GlobalLightRig.DirectionalLightShadowsRelative
// Size: 0xc4 (Inherited: 0x00)
struct FDirectionalLightShadowsRelative {
	struct FAdjustedValueFloat ShadowResolutionScale; // 0x00(0x20)
	struct FAdjustedValueFloat ShadowBias; // 0x20(0x20)
	struct FAdjustedValueFloat ShadowSlopeBias; // 0x40(0x20)
	struct FAdjustedValueFloat ShadowSharpen; // 0x60(0x20)
	struct FAdjustedValueFloat ContactShadowLength; // 0x80(0x20)
	struct FAdjustedValueFloat ContactShadowLengthWorldSpace; // 0xa0(0x20)
	struct FAdjustedValueBoolean bContactShadowLengthInWS; // 0xc0(0x01)
	struct FAdjustedValueBoolean bCastVolumetricShadow; // 0xc1(0x01)
	struct FAdjustedValueBoolean bCastTranslucentShadows; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
};

// ScriptStruct GlobalLightRig.DirectionalLightShaftsRelative
// Size: 0x98 (Inherited: 0x00)
struct FDirectionalLightShaftsRelative {
	char bOverride_BloomTint : 1; // 0x00(0x01)
	char bOverride_LightShaftOverrideDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	struct FAdjustedValueBoolean bEnableLightShaftOcclusion; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FAdjustedValueFloat OcclusionMaskDarkness; // 0x04(0x20)
	struct FAdjustedValueFloat OcclusionDepthRange; // 0x24(0x20)
	struct FAdjustedValueBoolean bEnableLightShaftBloom; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FAdjustedValueFloat BloomScale; // 0x48(0x20)
	struct FAdjustedValueFloat BloomThreshold; // 0x68(0x20)
	struct FColor BloomTint; // 0x88(0x04)
	struct FVector LightShaftOverrideDirection; // 0x8c(0x0c)
};

// ScriptStruct GlobalLightRig.DirectionalLightAdvancedParametersRelative
// Size: 0x4c (Inherited: 0x00)
struct FDirectionalLightAdvancedParametersRelative {
	char bOverride_LightingChannels : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat LightSourceAngle; // 0x04(0x20)
	struct FAdjustedValueFloat LightSourceSoftAngle; // 0x24(0x20)
	struct FLightingChannels LightingChannels; // 0x44(0x01)
	struct FAdjustedValueBoolean bAffectDynamicIndirectLighting; // 0x45(0x01)
	struct FAdjustedValueBoolean bAffectTranslucentLighting; // 0x46(0x01)
	struct FAdjustedValueBoolean bTransmission; // 0x47(0x01)
	struct FAdjustedValueBoolean bUsedAsAtmosphereSunLight; // 0x48(0x01)
	struct FAdjustedValueBoolean bProbeOnly; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
};

// ScriptStruct GlobalLightRig.DirectionalLightBasicParametersRelative
// Size: 0xd0 (Inherited: 0x00)
struct FDirectionalLightBasicParametersRelative {
	char bOverride_LightColor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat Intensity; // 0x04(0x20)
	struct FColor LightColor; // 0x24(0x04)
	struct FAdjustedValueFloat Temperature; // 0x28(0x20)
	struct FAdjustedValueBoolean bUseTemperature; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FAdjustedValueFloat SpecularScale; // 0x4c(0x20)
	struct FAdjustedValueFloat IndirectLightingIntensity; // 0x6c(0x20)
	struct FAdjustedValueFloat VolumetricScatteringIntensity; // 0x8c(0x20)
	struct FAdjustedValueFloat AtmosphereSunLightPriority; // 0xac(0x20)
	struct FAdjustedValueBoolean bPseudoLight; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// ScriptStruct GlobalLightRig.DirectionalLightParameters
// Size: 0xdc (Inherited: 0x00)
struct FDirectionalLightParameters {
	struct FDirectionalLightBasicParameters Basic; // 0x00(0x24)
	struct FDirectionalLightAdvancedParameters Advanced; // 0x24(0x40)
	struct FDirectionalLightShafts LightShafts; // 0x64(0x28)
	struct FDirectionalLightShadows Shadows; // 0x8c(0x1c)
	struct FDirectionalLightDistanceFieldShadows DistanceFieldShadows; // 0xa8(0x10)
	struct FDirectionalLightCascadedShadowMaps CascadedShadowMaps; // 0xb8(0x24)
};

// ScriptStruct GlobalLightRig.DirectionalLightCascadedShadowMaps
// Size: 0x24 (Inherited: 0x00)
struct FDirectionalLightCascadedShadowMaps {
	float DynamicShadowDistanceMovableLight; // 0x00(0x04)
	int32_t DynamicShadowCascades; // 0x04(0x04)
	float CascadeDistributionExponent; // 0x08(0x04)
	float CascadeTransitionFraction; // 0x0c(0x04)
	float ShadowDistanceFadeoutFraction; // 0x10(0x04)
	int32_t FarShadowCascadeCount; // 0x14(0x04)
	float FarShadowDistance; // 0x18(0x04)
	float CachedDirectionalShadowDistance; // 0x1c(0x04)
	bool bUseCachedDirectionalShadowMaps; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct GlobalLightRig.DirectionalLightDistanceFieldShadows
// Size: 0x10 (Inherited: 0x00)
struct FDirectionalLightDistanceFieldShadows {
	bool bUseRayTracedDistanceFieldShadows; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RayStartOffsetDepthScale; // 0x04(0x04)
	float DistanceFieldShadowDistance; // 0x08(0x04)
	float TraceDistance; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.DirectionalLightShadows
// Size: 0x1c (Inherited: 0x00)
struct FDirectionalLightShadows {
	float ShadowResolutionScale; // 0x00(0x04)
	float ShadowBias; // 0x04(0x04)
	float ShadowSlopeBias; // 0x08(0x04)
	float ShadowSharpen; // 0x0c(0x04)
	float ContactShadowLength; // 0x10(0x04)
	float ContactShadowLengthWorldSpace; // 0x14(0x04)
	bool bContactShadowLengthInWS; // 0x18(0x01)
	bool bCastVolumetricShadow; // 0x19(0x01)
	bool bCastTranslucentShadows; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct GlobalLightRig.DirectionalLightShafts
// Size: 0x28 (Inherited: 0x00)
struct FDirectionalLightShafts {
	bool bEnableLightShaftOcclusion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OcclusionMaskDarkness; // 0x04(0x04)
	float OcclusionDepthRange; // 0x08(0x04)
	bool bEnableLightShaftBloom; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float BloomScale; // 0x10(0x04)
	float BloomThreshold; // 0x14(0x04)
	struct FColor BloomTint; // 0x18(0x04)
	struct FVector LightShaftOverrideDirection; // 0x1c(0x0c)
};

// ScriptStruct GlobalLightRig.DirectionalLightAdvancedParameters
// Size: 0x40 (Inherited: 0x00)
struct FDirectionalLightAdvancedParameters {
	float ShadowCascadeBiasDistribution; // 0x00(0x04)
	float LightSourceAngle; // 0x04(0x04)
	float LightSourceSoftAngle; // 0x08(0x04)
	struct FLightingChannels LightingChannels; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float CloudShadowStrength; // 0x10(0x04)
	float CloudShadowOnAtmosphereStrength; // 0x14(0x04)
	float CloudShadowOnSurfaceStrength; // 0x18(0x04)
	struct FVector2D CloudShadowMinMax; // 0x1c(0x08)
	int32_t AtmosphereSunLightIndex; // 0x24(0x04)
	struct FLinearColor AtmosphereSunDiskColorScale; // 0x28(0x10)
	bool bPerPixelAtmosphereTransmittance; // 0x38(0x01)
	bool bAffectDynamicIndirectLighting; // 0x39(0x01)
	bool bAffectTranslucentLighting; // 0x3a(0x01)
	bool bTransmission; // 0x3b(0x01)
	bool bUsedAsAtmosphereSunLight; // 0x3c(0x01)
	bool bProbeOnly; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct GlobalLightRig.DirectionalLightBasicParameters
// Size: 0x24 (Inherited: 0x00)
struct FDirectionalLightBasicParameters {
	float Intensity; // 0x00(0x04)
	struct FColor LightColor; // 0x04(0x04)
	float Temperature; // 0x08(0x04)
	bool bUseTemperature; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SpecularScale; // 0x10(0x04)
	float IndirectLightingIntensity; // 0x14(0x04)
	float VolumetricScatteringIntensity; // 0x18(0x04)
	float AtmosphereSunLightPriority; // 0x1c(0x04)
	bool bPseudoLight; // 0x20(0x01)
	bool bExponentialIntensityBlend; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct GlobalLightRig.ExpHeightFogParametersOverride
// Size: 0x1f8 (Inherited: 0x00)
struct FExpHeightFogParametersOverride {
	struct FExpHeightFogBasicParametersOverride Basic; // 0x00(0x3c)
	struct FExpHeightFogSecondParametersOverride Second; // 0x3c(0x10)
	struct FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x4c(0x28)
	struct FExpHeightFogVolumetricParametersOverride Volumetric; // 0x74(0x54)
	struct FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0xc8(0x38)
	struct FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x100(0x48)
	struct FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x148(0x78)
	struct FExpHeightFogInscatteringTextureParametersOverride InscatteringTexture; // 0x1c0(0x38)
};

// ScriptStruct GlobalLightRig.ExpHeightFogInscatteringTextureParametersOverride
// Size: 0x38 (Inherited: 0x00)
struct FExpHeightFogInscatteringTextureParametersOverride {
	char bOverride_InscatteringColorCubemap : 1; // 0x00(0x01)
	char bOverride_InscatteringColorCubemapAngle : 1; // 0x00(0x01)
	char bOverride_InscatteringTextureTint : 1; // 0x00(0x01)
	char bOverride_FullyDirectionalInscatteringColorDistance : 1; // 0x00(0x01)
	char bOverride_NonDirectionalInscatteringColorDistance : 1; // 0x00(0x01)
	char bOverride_bUseSkyLight : 1; // 0x00(0x01)
	char bOverride_InscatteringColorCubemapFactor : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTextureCube* InscatteringColorCubemap; // 0x08(0x08)
	float InscatteringColorCubemapAngle; // 0x10(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x14(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x24(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x28(0x04)
	bool bUseSkyLight; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float InscatteringColorCubemapFactor; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricAdvancedParametersOverride
// Size: 0x78 (Inherited: 0x00)
struct FExpHeightFogVolumetricAdvancedParametersOverride {
	char bOverride_DensityTweakingLightingThreshold : 1; // 0x00(0x01)
	char bOverride_DensityTweakingMinPercentage : 1; // 0x00(0x01)
	char bOverride_AliasingReduction : 1; // 0x00(0x01)
	char bOverride_VolumetricFogHighQualityDistance : 1; // 0x00(0x01)
	char bOverride_EmptyCellSkyOcclusion : 1; // 0x00(0x01)
	char bOverride_bEnableVariableScatteringDistribution : 1; // 0x00(0x01)
	char bOverride_MinScatteringDistribution : 1; // 0x00(0x01)
	char bOverride_MaxScatteringDistribution : 1; // 0x00(0x01)
	char bOverride_ScatteringDistributionInterpStart : 1; // 0x01(0x01)
	char bOverride_ScatteringDistributionInterpEnd : 1; // 0x01(0x01)
	char bOverride_FullDensityDistance : 1; // 0x01(0x01)
	char bOverride_MinDensityFactor : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DensityTweakingLightingThreshold; // 0x04(0x04)
	float DensityTweakingMinPercentage; // 0x08(0x04)
	float AliasingReduction; // 0x0c(0x04)
	float VolumetricFogHighQualityDistance; // 0x10(0x04)
	float EmptyCellSkyOcclusion; // 0x14(0x04)
	bool bEnableVariableScatteringDistribution; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MinScatteringDistribution; // 0x1c(0x04)
	float MaxScatteringDistribution; // 0x20(0x04)
	float ScatteringDistributionInterpStart; // 0x24(0x04)
	float ScatteringDistributionInterpEnd; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FExpHeightFogVolumetricFogDensityMapParametersOverride DensityMap; // 0x30(0x40)
	float FullDensityDistance; // 0x70(0x04)
	float MinDensityFactor; // 0x74(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricFogDensityMapParametersOverride
// Size: 0x40 (Inherited: 0x00)
struct FExpHeightFogVolumetricFogDensityMapParametersOverride {
	char bOverride_FalloffStartMap : 1; // 0x00(0x01)
	char bOverride_DensityMultiplierMap : 1; // 0x00(0x01)
	char bOverride_DensityMapOrigin : 1; // 0x00(0x01)
	char bOverride_DensityMapSize : 1; // 0x00(0x01)
	char bOverride_DensityMapFalloffLength : 1; // 0x00(0x01)
	char bOverride_DensityMapFalloffStartRange : 1; // 0x00(0x01)
	char bOverride_DensityMapDensityRange : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture* FalloffStartMap; // 0x08(0x08)
	struct UTexture* DensityMultiplierMap; // 0x10(0x08)
	struct FVector2D DensityMapOrigin; // 0x18(0x08)
	struct FVector2D DensityMapSize; // 0x20(0x08)
	float DensityMapFalloffLength; // 0x28(0x04)
	struct FVector2D DensityMapFalloffStartRange; // 0x2c(0x08)
	struct FVector2D DensityMapDensityRange; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricNoiseParametersOverride
// Size: 0x48 (Inherited: 0x00)
struct FExpHeightFogVolumetricNoiseParametersOverride {
	char bOverride_NoiseMinFactor : 1; // 0x00(0x01)
	char bOverride_NoiseMaxFactor : 1; // 0x00(0x01)
	char bOverride_NoiseTilingSize : 1; // 0x00(0x01)
	char bOverride_NoiseSmoothStepMin : 1; // 0x00(0x01)
	char bOverride_NoiseSmoothStepMax : 1; // 0x00(0x01)
	char bOverride_BlueNoiseTexture : 1; // 0x00(0x01)
	char bOverride_WindFactor : 1; // 0x00(0x01)
	char bOverride_AddWindVelocity : 1; // 0x00(0x01)
	char bOverride_DensityTweakingLightingThreshold : 1; // 0x01(0x01)
	char bOverride_DensityTweakingMinPercentage : 1; // 0x01(0x01)
	char bOverride_AliasingReduction : 1; // 0x01(0x01)
	char bOverride_FullDensityDistance : 1; // 0x01(0x01)
	char bOverride_MinDensityFactor : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NoiseMinFactor; // 0x04(0x04)
	float NoiseMaxFactor; // 0x08(0x04)
	float NoiseTilingSize; // 0x0c(0x04)
	float NoiseSmoothStepMin; // 0x10(0x04)
	float NoiseSmoothStepMax; // 0x14(0x04)
	float WindFactor; // 0x18(0x04)
	struct FVector AddWindVelocity; // 0x1c(0x0c)
	struct UTexture* BlueNoiseTexture; // 0x28(0x08)
	float DensityTweakingLightingThreshold; // 0x30(0x04)
	float DensityTweakingMinPercentage; // 0x34(0x04)
	float AliasingReduction; // 0x38(0x04)
	float FullDensityDistance; // 0x3c(0x04)
	float MinDensityFactor; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricLightingParametersOverride
// Size: 0x38 (Inherited: 0x00)
struct FExpHeightFogVolumetricLightingParametersOverride {
	char bOverride_VolumetricLightingDirectionalLightScattering : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingDirectionalLightDesaturation : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingShadowsNearMinimum : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingShadowsFarMinimum : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingShadowsNearDistance : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingShadowsFarDistance : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingCloudShadowsNearMinimum : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingCloudShadowsFarMinimum : 1; // 0x00(0x01)
	char bOverride_VolumetricLightingCloudShadowsNearDistance : 1; // 0x01(0x01)
	char bOverride_VolumetricLightingCloudShadowsFarDistance : 1; // 0x01(0x01)
	char bOverride_VolumetricLightingHistoryWeight : 1; // 0x01(0x01)
	char bOverride_VolumetricLightingHistoryWeightStableCell : 1; // 0x01(0x01)
	char bOverride_VolumetricLightingHistoryWeightMovingLight : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float VolumetricLightingDirectionalLightScattering; // 0x04(0x04)
	float VolumetricLightingDirectionalLightDesaturation; // 0x08(0x04)
	float VolumetricLightingShadowsNearMinimum; // 0x0c(0x04)
	float VolumetricLightingShadowsFarMinimum; // 0x10(0x04)
	float VolumetricLightingShadowsNearDistance; // 0x14(0x04)
	float VolumetricLightingShadowsFarDistance; // 0x18(0x04)
	float VolumetricLightingCloudShadowsNearMinimum; // 0x1c(0x04)
	float VolumetricLightingCloudShadowsFarMinimum; // 0x20(0x04)
	float VolumetricLightingCloudShadowsNearDistance; // 0x24(0x04)
	float VolumetricLightingCloudShadowsFarDistance; // 0x28(0x04)
	float VolumetricLightingHistoryWeight; // 0x2c(0x04)
	float VolumetricLightingHistoryWeightStableCell; // 0x30(0x04)
	float VolumetricLightingHistoryWeightMovingLight; // 0x34(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricParametersOverride
// Size: 0x54 (Inherited: 0x00)
struct FExpHeightFogVolumetricParametersOverride {
	char bOverride_bVolumetricFog : 1; // 0x00(0x01)
	char bOverride_VolumetricFogScatteringDistribution : 1; // 0x00(0x01)
	char bOverride_VolumetricFogAlbedo : 1; // 0x00(0x01)
	char bOverride_VolumetricFogEmissive : 1; // 0x00(0x01)
	char bOverride_VolumetricFogExtinctionScale : 1; // 0x00(0x01)
	char bOverride_VolumetricFogDistance : 1; // 0x00(0x01)
	char bOverride_bOverrideLightColorsWithFogInscatteringColors : 1; // 0x00(0x01)
	char bOverride_VolumetricFogStaticLightingScatteringIntensity : 1; // 0x00(0x01)
	char bOverride_VolumetricFogDepthDistributionScale : 1; // 0x01(0x01)
	char bOverride_VolumetricFogHistoryWeight : 1; // 0x01(0x01)
	char bOverride_VolumetricFogHistoryWeightFarFog : 1; // 0x01(0x01)
	char bOverride_OutsideVolumeSunMultiplier : 1; // 0x01(0x01)
	char bOverride_VolumetricInscatteringContribution : 1; // 0x01(0x01)
	char bOverride_VolumetricDirectionalInscatteringContribution : 1; // 0x01(0x01)
	char bOverride_VolumetricFogHeightFogNearStartDistance : 1; // 0x01(0x01)
	char bOverride_VolumetricFogHeightFogNearFullDistance : 1; // 0x01(0x01)
	char bOverride_VolumetricFogHeightFogColorationBlendStartDistance : 1; // 0x02(0x01)
	char bOverride_VolumetricFogHeightFogColorationBlendFullDistance : 1; // 0x02(0x01)
	char bOverride_VolumetricFogHeightFogColorationBlendStrength : 1; // 0x02(0x01)
	char pad_2_3 : 5; // 0x02(0x01)
	bool bVolumetricFog; // 0x03(0x01)
	float VolumetricFogScatteringDistribution; // 0x04(0x04)
	struct FColor VolumetricFogAlbedo; // 0x08(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x0c(0x10)
	float VolumetricFogExtinctionScale; // 0x1c(0x04)
	float VolumetricFogDistance; // 0x20(0x04)
	float OutsideVolumeSunMultiplier; // 0x24(0x04)
	float VolumetricInscatteringContribution; // 0x28(0x04)
	float VolumetricDirectionalInscatteringContribution; // 0x2c(0x04)
	float VolumetricFogHeightFogNearStartDistance; // 0x30(0x04)
	float VolumetricFogHeightFogNearFullDistance; // 0x34(0x04)
	float VolumetricFogHeightFogColorationBlendStartDistance; // 0x38(0x04)
	float VolumetricFogHeightFogColorationBlendFullDistance; // 0x3c(0x04)
	float VolumetricFogHeightFogColorationBlendStrength; // 0x40(0x04)
	float VolumetricFogDepthDistributionScale; // 0x44(0x04)
	float VolumetricFogHistoryWeight; // 0x48(0x04)
	float VolumetricFogHistoryWeightFarFog; // 0x4c(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
};

// ScriptStruct GlobalLightRig.ExpHeightFogDirectionalInscatteringParametersOverride
// Size: 0x28 (Inherited: 0x00)
struct FExpHeightFogDirectionalInscatteringParametersOverride {
	char bOverride_DirectionalInscatteringExponent : 1; // 0x00(0x01)
	char bOverride_DirectionalInscatteringStartDistance : 1; // 0x00(0x01)
	char bOverride_DirectionalInscatteringColor : 1; // 0x00(0x01)
	char bOverride_DirectionalInscatteringIntensity : 1; // 0x00(0x01)
	char bOverride_DirectionalInscatteringSaturation : 1; // 0x00(0x01)
	char bOverride_DirectionalInscatteringColorDirLightLuminanceModulate : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DirectionalInscatteringExponent; // 0x04(0x04)
	float DirectionalInscatteringStartDistance; // 0x08(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x0c(0x10)
	float DirectionalInscatteringIntensity; // 0x1c(0x04)
	float DirectionalInscatteringSaturation; // 0x20(0x04)
	float DirectionalInscatteringColorDirLightLuminanceModulate; // 0x24(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogSecondParametersOverride
// Size: 0x10 (Inherited: 0x00)
struct FExpHeightFogSecondParametersOverride {
	char bOverride_FogDensity : 1; // 0x00(0x01)
	char bOverride_FogHeightFalloff : 1; // 0x00(0x01)
	char bOverride_FogHeightOffset : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FogDensity; // 0x04(0x04)
	float FogHeightFalloff; // 0x08(0x04)
	float FogHeightOffset; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogBasicParametersOverride
// Size: 0x3c (Inherited: 0x00)
struct FExpHeightFogBasicParametersOverride {
	char bOverride_ZOffset : 1; // 0x00(0x01)
	char bOverride_FogDensity : 1; // 0x00(0x01)
	char bOverride_FogHeightFalloff : 1; // 0x00(0x01)
	char bOverride_FogInscatteringColor : 1; // 0x00(0x01)
	char bOverride_FogMaxOpacity : 1; // 0x00(0x01)
	char bOverride_StartDistance : 1; // 0x00(0x01)
	char bOverride_FogCutoffDistance : 1; // 0x00(0x01)
	char bOverride_FogInscatteringIntensity : 1; // 0x00(0x01)
	char bOverride_FogInscatteringSaturation : 1; // 0x01(0x01)
	char bOverride_DistantFogCloudShadowsMinimum : 1; // 0x01(0x01)
	char bOverride_FogInscatteringColorDirLightLuminanceModulate : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ZOffset; // 0x04(0x04)
	float FogDensity; // 0x08(0x04)
	float FogHeightFalloff; // 0x0c(0x04)
	struct FLinearColor FogInscatteringColor; // 0x10(0x10)
	float FogInscatteringIntensity; // 0x20(0x04)
	float FogInscatteringSaturation; // 0x24(0x04)
	float FogInscatteringColorDirLightLuminanceModulate; // 0x28(0x04)
	float FogMaxOpacity; // 0x2c(0x04)
	float StartDistance; // 0x30(0x04)
	float FogCutoffDistance; // 0x34(0x04)
	float DistantFogCloudShadowsMinimum; // 0x38(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogParametersRelative
// Size: 0x7e4 (Inherited: 0x00)
struct FExpHeightFogParametersRelative {
	struct FExpHeightFogBasicParametersRelative Basic; // 0x00(0x154)
	struct FExpHeightFogSecondParametersRelative Second; // 0x154(0x60)
	struct FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x1b4(0xb4)
	struct FExpHeightFogVolumetricParametersRelative Volumetric; // 0x268(0x1b8)
	struct FExpHeightFogVolumetricLightingParametersRelative VolumetricLighting; // 0x420(0x1a0)
	struct FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x5c0(0xc0)
	struct FExpHeightFogVolumetricAdvancedParametersRelative VolumetricAdvanced; // 0x680(0x164)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricAdvancedParametersRelative
// Size: 0x164 (Inherited: 0x00)
struct FExpHeightFogVolumetricAdvancedParametersRelative {
	struct FAdjustedValueFloat DensityTweakingLightingThreshold; // 0x00(0x20)
	struct FAdjustedValueFloat DensityTweakingMinPercentage; // 0x20(0x20)
	struct FAdjustedValueFloat AliasingReduction; // 0x40(0x20)
	struct FAdjustedValueFloat VolumetricFogHighQualityDistance; // 0x60(0x20)
	struct FAdjustedValueFloat EmptyCellSkyOcclusion; // 0x80(0x20)
	struct FAdjustedValueBoolean bEnableVariableScatteringDistribution; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FAdjustedValueFloat MinScatteringDistribution; // 0xa4(0x20)
	struct FAdjustedValueFloat MaxScatteringDistribution; // 0xc4(0x20)
	struct FAdjustedValueFloat ScatteringDistributionInterpStart; // 0xe4(0x20)
	struct FAdjustedValueFloat ScatteringDistributionInterpEnd; // 0x104(0x20)
	struct FAdjustedValueFloat FullDensityDistance; // 0x124(0x20)
	struct FAdjustedValueFloat MinDensityFactor; // 0x144(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricNoiseParametersRelative
// Size: 0xc0 (Inherited: 0x00)
struct FExpHeightFogVolumetricNoiseParametersRelative {
	struct FAdjustedValueFloat NoiseMinFactor; // 0x00(0x20)
	struct FAdjustedValueFloat NoiseMaxFactor; // 0x20(0x20)
	struct FAdjustedValueFloat NoiseTilingSize; // 0x40(0x20)
	struct FAdjustedValueFloat NoiseSmoothStepMin; // 0x60(0x20)
	struct FAdjustedValueFloat NoiseSmoothStepMax; // 0x80(0x20)
	struct FAdjustedValueFloat WindFactor; // 0xa0(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricLightingParametersRelative
// Size: 0x1a0 (Inherited: 0x00)
struct FExpHeightFogVolumetricLightingParametersRelative {
	struct FAdjustedValueFloat VolumetricLightingDirectionalLightScattering; // 0x00(0x20)
	struct FAdjustedValueFloat VolumetricLightingDirectionalLightDesaturation; // 0x20(0x20)
	struct FAdjustedValueFloat VolumetricLightingShadowsNearMinimum; // 0x40(0x20)
	struct FAdjustedValueFloat VolumetricLightingShadowsFarMinimum; // 0x60(0x20)
	struct FAdjustedValueFloat VolumetricLightingShadowsNearDistance; // 0x80(0x20)
	struct FAdjustedValueFloat VolumetricLightingShadowsFarDistance; // 0xa0(0x20)
	struct FAdjustedValueFloat VolumetricLightingCloudShadowsNearMinimum; // 0xc0(0x20)
	struct FAdjustedValueFloat VolumetricLightingCloudShadowsFarMinimum; // 0xe0(0x20)
	struct FAdjustedValueFloat VolumetricLightingCloudShadowsNearDistance; // 0x100(0x20)
	struct FAdjustedValueFloat VolumetricLightingCloudShadowsFarDistance; // 0x120(0x20)
	struct FAdjustedValueFloat VolumetricLightingHistoryWeight; // 0x140(0x20)
	struct FAdjustedValueFloat VolumetricLightingHistoryWeightStableCell; // 0x160(0x20)
	struct FAdjustedValueFloat VolumetricLightingHistoryWeightMovingLight; // 0x180(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricParametersRelative
// Size: 0x1b8 (Inherited: 0x00)
struct FExpHeightFogVolumetricParametersRelative {
	char bOverride_VolumetricFogAlbedo : 1; // 0x00(0x01)
	char bOverride_VolumetricFogEmissive : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	struct FAdjustedValueBoolean bVolumetricFog; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FAdjustedValueFloat VolumetricFogScatteringDistribution; // 0x04(0x20)
	struct FColor VolumetricFogAlbedo; // 0x24(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x28(0x10)
	struct FAdjustedValueFloat VolumetricFogExtinctionScale; // 0x38(0x20)
	struct FAdjustedValueFloat VolumetricFogDistance; // 0x58(0x20)
	struct FAdjustedValueFloat OutsideVolumeSunMultiplier; // 0x78(0x20)
	struct FAdjustedValueFloat VolumetricInscatteringContribution; // 0x98(0x20)
	struct FAdjustedValueFloat VolumetricDirectionalInscatteringContribution; // 0xb8(0x20)
	struct FAdjustedValueFloat VolumetricFogHeightFogNearStartDistance; // 0xd8(0x20)
	struct FAdjustedValueFloat VolumetricFogHeightFogNearFullDistance; // 0xf8(0x20)
	struct FAdjustedValueFloat VolumetricFogHeightFogColorationBlendStartDistance; // 0x118(0x20)
	struct FAdjustedValueFloat VolumetricFogHeightFogColorationBlendFullDistance; // 0x138(0x20)
	struct FAdjustedValueFloat VolumetricFogHeightFogColorationBlendStrength; // 0x158(0x20)
	struct FAdjustedValueFloat VolumetricFogHistoryWeight; // 0x178(0x20)
	struct FAdjustedValueFloat VolumetricFogHistoryWeightFarFog; // 0x198(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogDirectionalInscatteringParametersRelative
// Size: 0xb4 (Inherited: 0x00)
struct FExpHeightFogDirectionalInscatteringParametersRelative {
	char bOverride_DirectionalInscatteringColor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat DirectionalInscatteringExponent; // 0x04(0x20)
	struct FAdjustedValueFloat DirectionalInscatteringStartDistance; // 0x24(0x20)
	struct FLinearColor DirectionalInscatteringColor; // 0x44(0x10)
	struct FAdjustedValueFloat DirectionalInscatteringIntensity; // 0x54(0x20)
	struct FAdjustedValueFloat DirectionalInscatteringSaturation; // 0x74(0x20)
	struct FAdjustedValueFloat DirectionalInscatteringColorDirLightLuminanceModulate; // 0x94(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogSecondParametersRelative
// Size: 0x60 (Inherited: 0x00)
struct FExpHeightFogSecondParametersRelative {
	struct FAdjustedValueFloat FogDensity; // 0x00(0x20)
	struct FAdjustedValueFloat FogHeightFalloff; // 0x20(0x20)
	struct FAdjustedValueFloat FogHeightOffset; // 0x40(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogBasicParametersRelative
// Size: 0x154 (Inherited: 0x00)
struct FExpHeightFogBasicParametersRelative {
	char bOverride_FogInscatteringColor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat ZOffset; // 0x04(0x20)
	struct FAdjustedValueFloat FogDensity; // 0x24(0x20)
	struct FAdjustedValueFloat FogHeightFalloff; // 0x44(0x20)
	struct FLinearColor FogInscatteringColor; // 0x64(0x10)
	struct FAdjustedValueFloat FogInscatteringIntensity; // 0x74(0x20)
	struct FAdjustedValueFloat FogInscatteringSaturation; // 0x94(0x20)
	struct FAdjustedValueFloat FogInscatteringColorDirLightLuminanceModulate; // 0xb4(0x20)
	struct FAdjustedValueFloat FogMaxOpacity; // 0xd4(0x20)
	struct FAdjustedValueFloat StartDistance; // 0xf4(0x20)
	struct FAdjustedValueFloat FogCutoffDistance; // 0x114(0x20)
	struct FAdjustedValueFloat DistantFogCloudShadowsMinimum; // 0x134(0x20)
};

// ScriptStruct GlobalLightRig.ExpHeightFogParameters
// Size: 0x1d8 (Inherited: 0x00)
struct FExpHeightFogParameters {
	struct FExpHeightFogBasicParameters Basic; // 0x00(0x3c)
	struct FExpHeightFogSecondParameters Second; // 0x3c(0x0c)
	struct FExpHeightFogDirectionalInscatteringParameters DirectionalInscattering; // 0x48(0x24)
	struct FExpHeightFogVolumetricParameters Volumetric; // 0x6c(0x54)
	struct FExpHeightFogVolumetricLightingParameters VolumetricLighting; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FExpHeightFogVolumetricNoiseParameters VolumetricNoise; // 0xf8(0x48)
	struct FExpHeightFogVolumetricAdvancedParameters VolumetricAdvanced; // 0x140(0x68)
	struct FExpHeightFogInscatteringTextureParameters InscatteringTexture; // 0x1a8(0x30)
};

// ScriptStruct GlobalLightRig.ExpHeightFogInscatteringTextureParameters
// Size: 0x30 (Inherited: 0x00)
struct FExpHeightFogInscatteringTextureParameters {
	struct UTextureCube* InscatteringColorCubemap; // 0x00(0x08)
	float InscatteringColorCubemapAngle; // 0x08(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x0c(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x1c(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x20(0x04)
	bool bUseSkyLight; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float InscatteringColorCubemapFactor; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricAdvancedParameters
// Size: 0x68 (Inherited: 0x00)
struct FExpHeightFogVolumetricAdvancedParameters {
	float DensityTweakingLightingThreshold; // 0x00(0x04)
	float DensityTweakingMinPercentage; // 0x04(0x04)
	float AliasingReduction; // 0x08(0x04)
	float VolumetricFogHighQualityDistance; // 0x0c(0x04)
	float EmptyCellSkyOcclusion; // 0x10(0x04)
	bool bEnableVariableScatteringDistribution; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinScatteringDistribution; // 0x18(0x04)
	float MaxScatteringDistribution; // 0x1c(0x04)
	float ScatteringDistributionInterpStart; // 0x20(0x04)
	float ScatteringDistributionInterpEnd; // 0x24(0x04)
	struct FExpHeightFogVolumetricFogDensityMapParameters DensityMap; // 0x28(0x38)
	float FullDensityDistance; // 0x60(0x04)
	float MinDensityFactor; // 0x64(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricFogDensityMapParameters
// Size: 0x38 (Inherited: 0x00)
struct FExpHeightFogVolumetricFogDensityMapParameters {
	struct UTexture* FalloffStartMap; // 0x00(0x08)
	struct UTexture* DensityMultiplierMap; // 0x08(0x08)
	struct FVector2D DensityMapOrigin; // 0x10(0x08)
	struct FVector2D DensityMapSize; // 0x18(0x08)
	float DensityMapFalloffLength; // 0x20(0x04)
	struct FVector2D DensityMapFalloffStartRange; // 0x24(0x08)
	struct FVector2D DensityMapDensityRange; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricNoiseParameters
// Size: 0x48 (Inherited: 0x00)
struct FExpHeightFogVolumetricNoiseParameters {
	float NoiseMinFactor; // 0x00(0x04)
	float NoiseMaxFactor; // 0x04(0x04)
	float NoiseTilingSize; // 0x08(0x04)
	float NoiseSmoothStepMin; // 0x0c(0x04)
	float NoiseSmoothStepMax; // 0x10(0x04)
	float WindFactor; // 0x14(0x04)
	struct FVector AddWindVelocity; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture* BlueNoiseTexture; // 0x28(0x08)
	float DensityTweakingLightingThreshold; // 0x30(0x04)
	float DensityTweakingMinPercentage; // 0x34(0x04)
	float AliasingReduction; // 0x38(0x04)
	float FullDensityDistance; // 0x3c(0x04)
	float MinDensityFactor; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricLightingParameters
// Size: 0x34 (Inherited: 0x00)
struct FExpHeightFogVolumetricLightingParameters {
	float VolumetricLightingDirectionalLightScattering; // 0x00(0x04)
	float VolumetricLightingDirectionalLightDesaturation; // 0x04(0x04)
	float VolumetricLightingShadowsNearMinimum; // 0x08(0x04)
	float VolumetricLightingShadowsFarMinimum; // 0x0c(0x04)
	float VolumetricLightingShadowsNearDistance; // 0x10(0x04)
	float VolumetricLightingShadowsFarDistance; // 0x14(0x04)
	float VolumetricLightingCloudShadowsNearMinimum; // 0x18(0x04)
	float VolumetricLightingCloudShadowsFarMinimum; // 0x1c(0x04)
	float VolumetricLightingCloudShadowsNearDistance; // 0x20(0x04)
	float VolumetricLightingCloudShadowsFarDistance; // 0x24(0x04)
	float VolumetricLightingHistoryWeight; // 0x28(0x04)
	float VolumetricLightingHistoryWeightStableCell; // 0x2c(0x04)
	float VolumetricLightingHistoryWeightMovingLight; // 0x30(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogVolumetricParameters
// Size: 0x54 (Inherited: 0x00)
struct FExpHeightFogVolumetricParameters {
	bool bVolumetricFog; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VolumetricFogScatteringDistribution; // 0x04(0x04)
	struct FColor VolumetricFogAlbedo; // 0x08(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x0c(0x10)
	float VolumetricFogExtinctionScale; // 0x1c(0x04)
	float VolumetricFogDistance; // 0x20(0x04)
	float OutsideVolumeSunMultiplier; // 0x24(0x04)
	float VolumetricInscatteringContribution; // 0x28(0x04)
	float VolumetricDirectionalInscatteringContribution; // 0x2c(0x04)
	float VolumetricFogHeightFogNearStartDistance; // 0x30(0x04)
	float VolumetricFogHeightFogNearFullDistance; // 0x34(0x04)
	float VolumetricFogHeightFogColorationBlendStartDistance; // 0x38(0x04)
	float VolumetricFogHeightFogColorationBlendFullDistance; // 0x3c(0x04)
	float VolumetricFogHeightFogColorationBlendStrength; // 0x40(0x04)
	float VolumetricFogDepthDistributionScale; // 0x44(0x04)
	float VolumetricFogHistoryWeight; // 0x48(0x04)
	float VolumetricFogHistoryWeightFarFog; // 0x4c(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
};

// ScriptStruct GlobalLightRig.ExpHeightFogDirectionalInscatteringParameters
// Size: 0x24 (Inherited: 0x00)
struct FExpHeightFogDirectionalInscatteringParameters {
	float DirectionalInscatteringExponent; // 0x00(0x04)
	float DirectionalInscatteringStartDistance; // 0x04(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x08(0x10)
	float DirectionalInscatteringIntensity; // 0x18(0x04)
	float DirectionalInscatteringSaturation; // 0x1c(0x04)
	float DirectionalInscatteringColorDirLightLuminanceModulate; // 0x20(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogSecondParameters
// Size: 0x0c (Inherited: 0x00)
struct FExpHeightFogSecondParameters {
	float FogDensity; // 0x00(0x04)
	float FogHeightFalloff; // 0x04(0x04)
	float FogHeightOffset; // 0x08(0x04)
};

// ScriptStruct GlobalLightRig.ExpHeightFogBasicParameters
// Size: 0x3c (Inherited: 0x00)
struct FExpHeightFogBasicParameters {
	float ZOffset; // 0x00(0x04)
	float FogDensity; // 0x04(0x04)
	float FogHeightFalloff; // 0x08(0x04)
	struct FLinearColor FogInscatteringColor; // 0x0c(0x10)
	float FogInscatteringIntensity; // 0x1c(0x04)
	float FogInscatteringSaturation; // 0x20(0x04)
	float FogInscatteringColorDirLightLuminanceModulate; // 0x24(0x04)
	float FogMaxOpacity; // 0x28(0x04)
	float StartDistance; // 0x2c(0x04)
	float FogCutoffDistance; // 0x30(0x04)
	float DistantFogCloudShadowsMinimum; // 0x34(0x04)
	float ZBase; // 0x38(0x04)
};

// ScriptStruct GlobalLightRig.GlobalLightingBlendableAction
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightingBlendableAction {
	struct UObject* Owner; // 0x00(0x08)
	struct UGlobalLightingBlendableBase* Blendable; // 0x08(0x08)
	float Priority; // 0x10(0x04)
	float weight; // 0x14(0x04)
	struct FActiveGlobalLightingBlendOps CachedActiveBlendOps; // 0x18(0x04)
	enum class EGlobalLightingBlendableInputType InputType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct GlobalLightRig.ActiveGlobalLightingBlendOps
// Size: 0x04 (Inherited: 0x00)
struct FActiveGlobalLightingBlendOps {
	int32_t BlendOps; // 0x00(0x04)
};

// ScriptStruct GlobalLightRig.BlendableFogZInfo
// Size: 0x14 (Inherited: 0x00)
struct FBlendableFogZInfo {
	float BaseZ; // 0x00(0x04)
	float EyeZ; // 0x04(0x04)
	float PlayerZ; // 0x08(0x04)
	float CurrentZ; // 0x0c(0x04)
	bool bEyeZValid; // 0x10(0x01)
	bool bPlayerZValid; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct GlobalLightRig.CustomBlendableGTAO
// Size: 0x24 (Inherited: 0x00)
struct FCustomBlendableGTAO {
	char bOverride_Enabled : 1; // 0x00(0x01)
	char bOverride_UseNormals : 1; // 0x00(0x01)
	char bOverride_FilterWidth : 1; // 0x00(0x01)
	char bOverride_ThicknessBlend : 1; // 0x00(0x01)
	char bOverride_FalloffEnd : 1; // 0x00(0x01)
	char bOverride_FalloffStartRatio : 1; // 0x00(0x01)
	char bOverride_NumAngles : 1; // 0x00(0x01)
	char bOverride_PauseJitter : 1; // 0x00(0x01)
	char bOverride_UpsampleDepthAware : 1; // 0x01(0x01)
	char bOverride_Downsample : 1; // 0x01(0x01)
	char bOverride_TemporalFilter : 1; // 0x01(0x01)
	char bOverride_SpatialFilter : 1; // 0x01(0x01)
	char bOverride_Combined : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	bool bEnabled; // 0x02(0x01)
	bool bUseNormals; // 0x03(0x01)
	int32_t FilterWidth; // 0x04(0x04)
	float ThicknessBlend; // 0x08(0x04)
	float FalloffEnd; // 0x0c(0x04)
	float FalloffStartRatio; // 0x10(0x04)
	int32_t NumAngles; // 0x14(0x04)
	float PauseJitter; // 0x18(0x04)
	bool bUpsampleDepthAware; // 0x1c(0x01)
	bool bDownsample; // 0x1d(0x01)
	bool bTemporalFilter; // 0x1e(0x01)
	bool bSpatialFilter; // 0x1f(0x01)
	bool bCombined; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct GlobalLightRig.GlobalLightingCustomBlendableName
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightingCustomBlendableName {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct GlobalLightRig.GlobalLightingCustomBlendableNameLinearColor
// Size: 0x10 (Inherited: 0x10)
struct FGlobalLightingCustomBlendableNameLinearColor : FGlobalLightingCustomBlendableName {
};

// ScriptStruct GlobalLightRig.GlobalLightingCustomBlendableNameScalar
// Size: 0x10 (Inherited: 0x10)
struct FGlobalLightingCustomBlendableNameScalar : FGlobalLightingCustomBlendableName {
};

// ScriptStruct GlobalLightRig.BlueprintGlobalLightingCustomBlendablesLinearColor
// Size: 0x20 (Inherited: 0x00)
struct FBlueprintGlobalLightingCustomBlendablesLinearColor {
	struct FName ColorName; // 0x00(0x08)
	struct FLinearColor DefaultValue; // 0x08(0x10)
	struct FName HermesMessage; // 0x18(0x08)
};

// ScriptStruct GlobalLightRig.BlueprintGlobalLightingCustomBlendablesScalar
// Size: 0x14 (Inherited: 0x00)
struct FBlueprintGlobalLightingCustomBlendablesScalar {
	struct FName ScalarName; // 0x00(0x08)
	float DefaultValue; // 0x08(0x04)
	struct FName HermesMessage; // 0x0c(0x08)
};

// ScriptStruct GlobalLightRig.CustomBlendableVDHW
// Size: 0x20 (Inherited: 0x00)
struct FCustomBlendableVDHW {
	char bOverride_bMovingCameraSupport : 1; // 0x00(0x01)
	char bOverride_MovingCameraStartSpeed : 1; // 0x00(0x01)
	char bOverride_MovingCameraEndSpeed : 1; // 0x00(0x01)
	char bOverride_MovingCameraStartRotation : 1; // 0x00(0x01)
	char bOverride_MovingCameraEndRotation : 1; // 0x00(0x01)
	char bOverride_bExposureShiftSupport : 1; // 0x00(0x01)
	char bOverride_ExposureShiftStart : 1; // 0x00(0x01)
	char bOverride_ExposureShiftEnd : 1; // 0x00(0x01)
	bool bMovingCameraSupport; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MovingCameraStartSpeed; // 0x04(0x04)
	float MovingCameraEndSpeed; // 0x08(0x04)
	float MovingCameraStartRotation; // 0x0c(0x04)
	float MovingCameraEndRotation; // 0x10(0x04)
	bool bExposureShiftSupport; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ExposureShiftStart; // 0x18(0x04)
	float ExposureShiftEnd; // 0x1c(0x04)
};

// ScriptStruct GlobalLightRig.GlobalLightingSunColorParams
// Size: 0x24 (Inherited: 0x00)
struct FGlobalLightingSunColorParams {
	struct FLinearColor BaseSunColor; // 0x00(0x10)
	float WhiteAngle; // 0x10(0x04)
	float HoldSunsetColorAngle; // 0x14(0x04)
	float AstronomicalTwilight; // 0x18(0x04)
	float Desaturate; // 0x1c(0x04)
	bool bNormalizeColors; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct GlobalLightRig.GlobalLightingGenerateSunColorCurve
// Size: 0x38 (Inherited: 0x24)
struct FGlobalLightingGenerateSunColorCurve : FGlobalLightingSunColorParams {
	float SunAngleStart; // 0x24(0x04)
	float SunAngleEnd; // 0x28(0x04)
	float SunAngleIncrement; // 0x2c(0x04)
	float ErrorTolerance; // 0x30(0x04)
	bool bCubic; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct GlobalLightRig.ZeroDirectionalLightSettings
// Size: 0x08 (Inherited: 0x00)
struct FZeroDirectionalLightSettings {
	enum class EZeroDirectionalLightMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ClampToMinimum; // 0x04(0x04)
};

// ScriptStruct GlobalLightRig.GlobalLightingDirectionalLightBlendState
// Size: 0xf0 (Inherited: 0x00)
struct FGlobalLightingDirectionalLightBlendState {
	struct FDirectionalLightParameters Parameters; // 0x00(0xdc)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FQuat Rotation; // 0xe0(0x10)
};

// ScriptStruct GlobalLightRig.GlobalLightingDirectionalLightDirection
// Size: 0x30 (Inherited: 0x00)
struct FGlobalLightingDirectionalLightDirection {
	struct FQuat Rotation; // 0x00(0x10)
	struct FRotator Rotator; // 0x10(0x0c)
	struct FVector Direction; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GlobalLightRig.GlobalLightingDirectionalLightState
// Size: 0x110 (Inherited: 0x30)
struct FGlobalLightingDirectionalLightState : FGlobalLightingDirectionalLightDirection {
	struct FDirectionalLightParameters Parameters; // 0x28(0xdc)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GlobalLightRig.GlobalLightingMasterCreateTransient
// Size: 0x28 (Inherited: 0x00)
struct FGlobalLightingMasterCreateTransient {
	struct UGlobalLightingDefaults* DefaultsOverride; // 0x00(0x08)
	int32_t UseExternalLightingComponents; // 0x08(0x04)
	int32_t ControlLightingComponents; // 0x0c(0x04)
	int32_t HideExtraLightingComponents; // 0x10(0x04)
	int32_t ControlFeatures; // 0x14(0x04)
	bool bWantClouds; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CloudsRelativeHeightMeters; // 0x1c(0x04)
	bool bSetCloudsRelativeHeightMeters; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GlobalLightRig.GlobalLightingBlendableList
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightingBlendableList {
	struct TArray<struct UObject*> Blendables; // 0x00(0x10)
};

// ScriptStruct GlobalLightRig.GlobalLightingMasterStack
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightingMasterStack {
	struct TWeakObjectPtr<struct AGlobalLightingMaster> CurrentMaster; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct AGlobalLightingMaster>> MasterList; // 0x08(0x10)
	struct TWeakObjectPtr<struct UGlobalLightingDefaults> CinematicOverrideDefaults; // 0x18(0x08)
};

// ScriptStruct GlobalLightRig.GlobalLightRigWorldModDriverName
// Size: 0x08 (Inherited: 0x00)
struct FGlobalLightRigWorldModDriverName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GlobalLightRig.GlobalLightRigWorldModDrivers
// Size: 0xa0 (Inherited: 0x00)
struct FGlobalLightRigWorldModDrivers {
	struct FGlobalLightRigModDrivers Defaults; // 0x00(0x50)
	struct TMap<struct UWorld*, struct FGlobalLightRigModDrivers> WorldMap; // 0x50(0x50)
};

// ScriptStruct GlobalLightRig.GlobalLightRigModDrivers
// Size: 0x50 (Inherited: 0x00)
struct FGlobalLightRigModDrivers {
	struct TMap<struct FName, float> ModDrivers; // 0x00(0x50)
};

// ScriptStruct GlobalLightRig.LerpParameterAtlas
// Size: 0x90 (Inherited: 0x00)
struct FLerpParameterAtlas {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct GlobalLightRig.ProbeLightingParameters
// Size: 0x30 (Inherited: 0x00)
struct FProbeLightingParameters {
	struct FProbeLightingAdjustmentParameters Adjustments; // 0x00(0x10)
	struct FProbeLightingToneMapParameters ToneMap; // 0x10(0x0c)
	struct FProbeContactShadowsParameters ContactShadows; // 0x1c(0x14)
};

// ScriptStruct GlobalLightRig.ProbeContactShadowsParameters
// Size: 0x14 (Inherited: 0x00)
struct FProbeContactShadowsParameters {
	float ProbeContactShadowsMinValue; // 0x00(0x04)
	float ProbeContactShadowsLength; // 0x04(0x04)
	float ProbeContactShadowsConeAngle; // 0x08(0x04)
	float ProbeContactShadowsFalloffExponent; // 0x0c(0x04)
	float ProbeContactShadowsDepthTolerance; // 0x10(0x04)
};

// ScriptStruct GlobalLightRig.ProbeLightingToneMapParameters
// Size: 0x0c (Inherited: 0x00)
struct FProbeLightingToneMapParameters {
	float ProbeToneMapAmount; // 0x00(0x04)
	float ProbeToneMapMinIntensity; // 0x04(0x04)
	float ProbeToneMapMaxEV; // 0x08(0x04)
};

// ScriptStruct GlobalLightRig.ProbeLightingAdjustmentParameters
// Size: 0x10 (Inherited: 0x00)
struct FProbeLightingAdjustmentParameters {
	float ProbeOutsideIntensity; // 0x00(0x04)
	float ProbeInsideIntensity; // 0x04(0x04)
	float ProbeOutsideSaturation; // 0x08(0x04)
	float ProbeInsideSaturation; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.ProbeLightingParametersOverride
// Size: 0x3c (Inherited: 0x00)
struct FProbeLightingParametersOverride {
	struct FProbeLightingAdjustmentParametersOverride Adjustments; // 0x00(0x14)
	struct FProbeLightingToneMapParametersOverride ToneMap; // 0x14(0x10)
	struct FProbeContactShadowsParametersOverride ContactShadows; // 0x24(0x18)
};

// ScriptStruct GlobalLightRig.ProbeContactShadowsParametersOverride
// Size: 0x18 (Inherited: 0x00)
struct FProbeContactShadowsParametersOverride {
	char bOverride_ProbeContactShadowsMinValue : 1; // 0x00(0x01)
	char bOverride_ProbeContactShadowsLength : 1; // 0x00(0x01)
	char bOverride_ProbeContactShadowsConeAngle : 1; // 0x00(0x01)
	char bOverride_ProbeContactShadowsFalloffExponent : 1; // 0x00(0x01)
	char bOverride_ProbeContactShadowsDepthTolerance : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbeContactShadowsMinValue; // 0x04(0x04)
	float ProbeContactShadowsLength; // 0x08(0x04)
	float ProbeContactShadowsConeAngle; // 0x0c(0x04)
	float ProbeContactShadowsFalloffExponent; // 0x10(0x04)
	float ProbeContactShadowsDepthTolerance; // 0x14(0x04)
};

// ScriptStruct GlobalLightRig.ProbeLightingToneMapParametersOverride
// Size: 0x10 (Inherited: 0x00)
struct FProbeLightingToneMapParametersOverride {
	char bOverride_ProbeToneMapAmount : 1; // 0x00(0x01)
	char bOverride_ProbeToneMapMinIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeToneMapMaxEV : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbeToneMapAmount; // 0x04(0x04)
	float ProbeToneMapMinIntensity; // 0x08(0x04)
	float ProbeToneMapMaxEV; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.ProbeLightingAdjustmentParametersOverride
// Size: 0x14 (Inherited: 0x00)
struct FProbeLightingAdjustmentParametersOverride {
	char bOverride_ProbeOutsideIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeInsideIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeOutsideSaturation : 1; // 0x00(0x01)
	char bOverride_ProbeInsideSaturation : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbeOutsideIntensity; // 0x04(0x04)
	float ProbeInsideIntensity; // 0x08(0x04)
	float ProbeOutsideSaturation; // 0x0c(0x04)
	float ProbeInsideSaturation; // 0x10(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereParametersOverride
// Size: 0x178 (Inherited: 0x00)
struct FSkyAtmosphereParametersOverride {
	struct FSkyAtmospherePlanetParametersOverride Planet; // 0x00(0x10)
	struct FSkyAtmosphereScatteringParametersOverride Scattering; // 0x10(0x50)
	struct FSkyAtmosphereOzoneParametersOverride Ozone; // 0x60(0x24)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSkyAtmosphereArtDirectionParametersOverride ArtDirection; // 0x88(0x70)
	struct FSkyAtmosphereSkyOnlyParametersOverride SkyOnly; // 0xf8(0x60)
	struct FSkyAtmosphereOverrideDirectionParametersOverride OverrideDirection; // 0x158(0x1c)
	char pad_174[0x4]; // 0x174(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereOverrideDirectionParametersOverride
// Size: 0x1c (Inherited: 0x00)
struct FSkyAtmosphereOverrideDirectionParametersOverride {
	char bOverride_LightDirection0 : 1; // 0x00(0x01)
	char bOverride_LightDirection1 : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector LightDirection0; // 0x04(0x0c)
	struct FVector LightDirection1; // 0x10(0x0c)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereSkyOnlyParametersOverride
// Size: 0x60 (Inherited: 0x00)
struct FSkyAtmosphereSkyOnlyParametersOverride {
	char bOverride_OverallBrightness : 1; // 0x00(0x01)
	char bOverride_OverallSaturation : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OverallBrightness; // 0x04(0x04)
	float OverallSaturation; // 0x08(0x04)
	struct FSkyAtmosphereSkyOnlyColorParameterOverride SkyMod; // 0x0c(0x1c)
	struct FSkyAtmosphereSkyOnlyColorParameterOverride SunDiskMod; // 0x28(0x1c)
	struct FSkyAtmosphereSkyOnlyColorParameterOverride MoonDiskMod; // 0x44(0x1c)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereSkyOnlyColorParameterOverride
// Size: 0x1c (Inherited: 0x00)
struct FSkyAtmosphereSkyOnlyColorParameterOverride {
	char bOverride_Color : 1; // 0x00(0x01)
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Saturation : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	float Intensity; // 0x14(0x04)
	float Saturation; // 0x18(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereArtDirectionParametersOverride
// Size: 0x70 (Inherited: 0x00)
struct FSkyAtmosphereArtDirectionParametersOverride {
	char bOverride_SkyLuminanceFactor : 1; // 0x00(0x01)
	char bOverride_SkyLuminanceFactorIntensity : 1; // 0x00(0x01)
	char bOverride_SkyDesaturation : 1; // 0x00(0x01)
	char bOverride_AerialPespectiveViewDistanceScale : 1; // 0x00(0x01)
	char bOverride_AerialPerspectiveStartDepth : 1; // 0x00(0x01)
	char bOverride_HeightFogContribution : 1; // 0x00(0x01)
	char bOverride_HeightFogContributionInscattering : 1; // 0x00(0x01)
	char bOverride_HeightFogContributionDirectionalInscaterring : 1; // 0x00(0x01)
	char bOverride_HeightFogAccurateInscatteringColor : 1; // 0x01(0x01)
	char bOverride_HeightFogContributionDesaturation : 1; // 0x01(0x01)
	char bOverride_TransmittanceMinLightElevationAngle : 1; // 0x01(0x01)
	char bOverride_HorizonToZenithColorationTexture : 1; // 0x01(0x01)
	char bOverride_HorizonToZenithColorationU : 1; // 0x01(0x01)
	char bOverride_HorizonToZenithColorationIntensity : 1; // 0x01(0x01)
	char bOverride_HorizonToZenithColorationDesaturation : 1; // 0x01(0x01)
	char bOverride_HeightFogContributionDesaturationInscattering : 1; // 0x01(0x01)
	char bOverride_HeightFogContributionDesaturationDirectionalInscattering : 1; // 0x02(0x01)
	char bOverride_HorizonToZenithFogOpticalDepthScale : 1; // 0x02(0x01)
	char bOverride_HorizonToZenithFogOpticalDepthPower : 1; // 0x02(0x01)
	char bOverride_HorizonToZenithFogIntensity : 1; // 0x02(0x01)
	char bOverride_HorizonToZenithFogDesaturation : 1; // 0x02(0x01)
	char pad_2_5 : 3; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FLinearColor SkyLuminanceFactor; // 0x04(0x10)
	float SkyLuminanceFactorIntensity; // 0x14(0x04)
	float SkyDesaturation; // 0x18(0x04)
	float AerialPespectiveViewDistanceScale; // 0x1c(0x04)
	float AerialPerspectiveStartDepth; // 0x20(0x04)
	float HeightFogContribution; // 0x24(0x04)
	float HeightFogContributionInscattering; // 0x28(0x04)
	float HeightFogContributionDirectionalInscaterring; // 0x2c(0x04)
	float HeightFogAccurateInscatteringColor; // 0x30(0x04)
	float HeightFogContributionDesaturation; // 0x34(0x04)
	float HeightFogContributionDesaturationInscattering; // 0x38(0x04)
	float HeightFogContributionDesaturationDirectionalInscattering; // 0x3c(0x04)
	float TransmittanceMinLightElevationAngle; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UTexture2D* HorizonToZenithColorationTexture; // 0x48(0x08)
	float HorizonToZenithColorationU; // 0x50(0x04)
	float HorizonToZenithColorationIntensity; // 0x54(0x04)
	float HorizonToZenithColorationDesaturation; // 0x58(0x04)
	float HorizonToZenithFogOpticalDepthScale; // 0x5c(0x04)
	float HorizonToZenithFogOpticalDepthPower; // 0x60(0x04)
	float HorizonToZenithFogIntensity; // 0x64(0x04)
	float HorizonToZenithFogDesaturation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereOzoneParametersOverride
// Size: 0x24 (Inherited: 0x00)
struct FSkyAtmosphereOzoneParametersOverride {
	char bOverride_OzoneAbsorptionScale : 1; // 0x00(0x01)
	char bOverride_OzoneAbsorption : 1; // 0x00(0x01)
	char bOverride_OzoneTentDistributionTipAltitude : 1; // 0x00(0x01)
	char bOverride_OzoneTentDistributionTipValue : 1; // 0x00(0x01)
	char bOverride_OzoneTentDistributionWidth : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OzoneAbsorptionScale; // 0x04(0x04)
	struct FLinearColor OzoneAbsorption; // 0x08(0x10)
	float OzoneTentDistributionTipAltitude; // 0x18(0x04)
	float OzoneTentDistributionTipValue; // 0x1c(0x04)
	float OzoneTentDistributionWidth; // 0x20(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereScatteringParametersOverride
// Size: 0x50 (Inherited: 0x00)
struct FSkyAtmosphereScatteringParametersOverride {
	char bOverride_MultiScatteringFactor : 1; // 0x00(0x01)
	char bOverride_RayleighScatteringScale : 1; // 0x00(0x01)
	char bOverride_RayleighScattering : 1; // 0x00(0x01)
	char bOverride_RayleighExponentialDistribution : 1; // 0x00(0x01)
	char bOverride_MieScatteringScale : 1; // 0x00(0x01)
	char bOverride_MieScattering : 1; // 0x00(0x01)
	char bOverride_MieAbsorptionScale : 1; // 0x00(0x01)
	char bOverride_MieAbsorption : 1; // 0x00(0x01)
	char bOverride_MieAnisotropy : 1; // 0x01(0x01)
	char bOverride_MieExponentialDistribution : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MultiScatteringFactor; // 0x04(0x04)
	float RayleighScatteringScale; // 0x08(0x04)
	struct FLinearColor RayleighScattering; // 0x0c(0x10)
	float RayleighExponentialDistribution; // 0x1c(0x04)
	float MieScatteringScale; // 0x20(0x04)
	struct FLinearColor MieScattering; // 0x24(0x10)
	float MieAbsorptionScale; // 0x34(0x04)
	struct FLinearColor MieAbsorption; // 0x38(0x10)
	float MieAnisotropy; // 0x48(0x04)
	float MieExponentialDistribution; // 0x4c(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmospherePlanetParametersOverride
// Size: 0x10 (Inherited: 0x00)
struct FSkyAtmospherePlanetParametersOverride {
	char bOverride_BottomRadius : 1; // 0x00(0x01)
	char bOverride_AtmosphereHeight : 1; // 0x00(0x01)
	char bOverride_GroundAlbedo : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BottomRadius; // 0x04(0x04)
	float AtmosphereHeight; // 0x08(0x04)
	struct FColor GroundAlbedo; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereParameters
// Size: 0x148 (Inherited: 0x00)
struct FSkyAtmosphereParameters {
	struct FSkyAtmospherePlanetParameters Planet; // 0x00(0x0c)
	struct FSkyAtmosphereScatteringParameters Scattering; // 0x0c(0x4c)
	struct FSkyAtmosphereOzoneParameters Ozone; // 0x58(0x20)
	struct FSkyAtmosphereArtDirectionParameters ArtDirection; // 0x78(0x68)
	struct FSkyAtmosphereSkyOnlyParameters SkyOnly; // 0xe0(0x50)
	struct FSkyAtmosphereOverrideDirectionParameters OverrideDirection; // 0x130(0x18)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereOverrideDirectionParameters
// Size: 0x18 (Inherited: 0x00)
struct FSkyAtmosphereOverrideDirectionParameters {
	struct FVector LightDirection0; // 0x00(0x0c)
	struct FVector LightDirection1; // 0x0c(0x0c)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereSkyOnlyParameters
// Size: 0x50 (Inherited: 0x00)
struct FSkyAtmosphereSkyOnlyParameters {
	float OverallBrightness; // 0x00(0x04)
	float OverallSaturation; // 0x04(0x04)
	struct FSkyAtmosphereSkyOnlyColorParameter SkyMod; // 0x08(0x18)
	struct FSkyAtmosphereSkyOnlyColorParameter SunDiskMod; // 0x20(0x18)
	struct FSkyAtmosphereSkyOnlyColorParameter MoonDiskMod; // 0x38(0x18)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereSkyOnlyColorParameter
// Size: 0x18 (Inherited: 0x00)
struct FSkyAtmosphereSkyOnlyColorParameter {
	struct FLinearColor Color; // 0x00(0x10)
	float Intensity; // 0x10(0x04)
	float Saturation; // 0x14(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereArtDirectionParameters
// Size: 0x68 (Inherited: 0x00)
struct FSkyAtmosphereArtDirectionParameters {
	struct FLinearColor SkyLuminanceFactor; // 0x00(0x10)
	float SkyLuminanceFactorIntensity; // 0x10(0x04)
	float SkyDesaturation; // 0x14(0x04)
	float AerialPespectiveViewDistanceScale; // 0x18(0x04)
	float AerialPerspectiveStartDepth; // 0x1c(0x04)
	float HeightFogContribution; // 0x20(0x04)
	float HeightFogContributionInscattering; // 0x24(0x04)
	float HeightFogContributionDirectionalInscaterring; // 0x28(0x04)
	float HeightFogAccurateInscatteringColor; // 0x2c(0x04)
	float HeightFogContributionDesaturation; // 0x30(0x04)
	float HeightFogContributionDesaturationInscattering; // 0x34(0x04)
	float HeightFogContributionDesaturationDirectionalInscattering; // 0x38(0x04)
	float TransmittanceMinLightElevationAngle; // 0x3c(0x04)
	struct UTexture2D* HorizonToZenithColorationTexture; // 0x40(0x08)
	float HorizonToZenithColorationU; // 0x48(0x04)
	float HorizonToZenithColorationIntensity; // 0x4c(0x04)
	float HorizonToZenithColorationDesaturation; // 0x50(0x04)
	float HorizonToZenithFogOpticalDepthScale; // 0x54(0x04)
	float HorizonToZenithFogOpticalDepthPower; // 0x58(0x04)
	float HorizonToZenithFogIntensity; // 0x5c(0x04)
	float HorizonToZenithFogDesaturation; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereOzoneParameters
// Size: 0x20 (Inherited: 0x00)
struct FSkyAtmosphereOzoneParameters {
	float OzoneAbsorptionScale; // 0x00(0x04)
	struct FLinearColor OzoneAbsorption; // 0x04(0x10)
	float OzoneTentDistributionTipAltitude; // 0x14(0x04)
	float OzoneTentDistributionTipValue; // 0x18(0x04)
	float OzoneTentDistributionWidth; // 0x1c(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmosphereScatteringParameters
// Size: 0x4c (Inherited: 0x00)
struct FSkyAtmosphereScatteringParameters {
	float MultiScatteringFactor; // 0x00(0x04)
	float RayleighScatteringScale; // 0x04(0x04)
	struct FLinearColor RayleighScattering; // 0x08(0x10)
	float RayleighExponentialDistribution; // 0x18(0x04)
	float MieScatteringScale; // 0x1c(0x04)
	struct FLinearColor MieScattering; // 0x20(0x10)
	float MieAbsorptionScale; // 0x30(0x04)
	struct FLinearColor MieAbsorption; // 0x34(0x10)
	float MieAnisotropy; // 0x44(0x04)
	float MieExponentialDistribution; // 0x48(0x04)
};

// ScriptStruct GlobalLightRig.SkyAtmospherePlanetParameters
// Size: 0x0c (Inherited: 0x00)
struct FSkyAtmospherePlanetParameters {
	float BottomRadius; // 0x00(0x04)
	float AtmosphereHeight; // 0x04(0x04)
	struct FColor GroundAlbedo; // 0x08(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightLightingParametersOverride
// Size: 0xb0 (Inherited: 0x00)
struct FSkyLightLightingParametersOverride {
	struct FSkyLightBasicParametersOverride Basic; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSkyLightAdvancedParametersOverride Advanced; // 0x18(0x38)
	struct FSkyLightShadowParametersOverride Shadows; // 0x50(0x06)
	char pad_56[0x2]; // 0x56(0x02)
	struct FSkyLightDFAOParametersOverride DFAO; // 0x58(0x1c)
	struct FSkyLightHemisphereParametersOverride Hemisphere; // 0x74(0x3c)
};

// ScriptStruct GlobalLightRig.SkyLightHemisphereParametersOverride
// Size: 0x3c (Inherited: 0x00)
struct FSkyLightHemisphereParametersOverride {
	char bOverride_bUseHemisphereLight : 1; // 0x00(0x01)
	char bOverride_HemiTopColor : 1; // 0x00(0x01)
	char bOverride_HemiBottomColor : 1; // 0x00(0x01)
	char bOverride_HemiOutsideIntensity : 1; // 0x00(0x01)
	char bOverride_HemiInsideIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeOutsideMinimumIntensity : 1; // 0x00(0x01)
	char bOverride_ProbeInsideMinimumIntensity : 1; // 0x00(0x01)
	char bOverride_SkyOcclusionContrast : 1; // 0x00(0x01)
	char bOverride_SkyOcclusionExponent : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bUseHemisphereLight; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FLinearColor HemiTopColor; // 0x04(0x10)
	struct FLinearColor HemiBottomColor; // 0x14(0x10)
	float HemiOutsideIntensity; // 0x24(0x04)
	float HemiInsideIntensity; // 0x28(0x04)
	float ProbeOutsideMinimumIntensity; // 0x2c(0x04)
	float ProbeInsideMinimumIntensity; // 0x30(0x04)
	float SkyOcclusionContrast; // 0x34(0x04)
	float SkyOcclusionExponent; // 0x38(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightDFAOParametersOverride
// Size: 0x1c (Inherited: 0x00)
struct FSkyLightDFAOParametersOverride {
	char bOverride_OcclusionMaxDistance : 1; // 0x00(0x01)
	char bOverride_Contrast : 1; // 0x00(0x01)
	char bOverride_OcclusionExponent : 1; // 0x00(0x01)
	char bOverride_MinOcclusion : 1; // 0x00(0x01)
	char bOverride_OcclusionTint : 1; // 0x00(0x01)
	char bOverride_OcclusionCombineMode : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OcclusionMaxDistance; // 0x04(0x04)
	float Contrast; // 0x08(0x04)
	float OcclusionExponent; // 0x0c(0x04)
	float MinOcclusion; // 0x10(0x04)
	struct FColor OcclusionTint; // 0x14(0x04)
	enum class EOcclusionCombineMode OcclusionCombineMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GlobalLightRig.SkyLightShadowParametersOverride
// Size: 0x06 (Inherited: 0x00)
struct FSkyLightShadowParametersOverride {
	char bOverride_CastShadows : 1; // 0x00(0x01)
	char bOverride_CastVolumetricShadow : 1; // 0x00(0x01)
	char bOverride_CastStaticShadow : 1; // 0x00(0x01)
	char bOverride_CastDynamicShadow : 1; // 0x00(0x01)
	char bOverride_CastRaytracedShadow : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	bool bCastShadows; // 0x01(0x01)
	bool bCastStaticShadow; // 0x02(0x01)
	bool bCastDynamicShadow; // 0x03(0x01)
	bool bCastVolumetricShadow; // 0x04(0x01)
	bool bCastRaytracedShadow; // 0x05(0x01)
};

// ScriptStruct GlobalLightRig.SkyLightAdvancedParametersOverride
// Size: 0x38 (Inherited: 0x00)
struct FSkyLightAdvancedParametersOverride {
	char bOverride_AffectTranslucentLighting : 1; // 0x00(0x01)
	char bOverride_Transmission : 1; // 0x00(0x01)
	char bOverride_ProbeOnly : 1; // 0x00(0x01)
	char bOverride_bAffectReflection : 1; // 0x00(0x01)
	char bOverride_Mobility : 1; // 0x00(0x01)
	char bOverride_SourceMode : 1; // 0x00(0x01)
	char bOverride_Cubemap : 1; // 0x00(0x01)
	char bOverride_SourceCubemapAngle : 1; // 0x00(0x01)
	char bOverride_CubemapResolution : 1; // 0x01(0x01)
	char bOverride_SkyDistanceThreshold : 1; // 0x01(0x01)
	char bOverride_bCaptureEmissiveOnly : 1; // 0x01(0x01)
	char bOverride_bLowerHemisphereIsBlack : 1; // 0x01(0x01)
	char bOverride_LowerHemisphereColor : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	enum class EComponentMobility Mobility; // 0x02(0x01)
	enum class ESkyLightSourceMode SourceMode; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTextureCube* CubeMap; // 0x08(0x08)
	float SourceCubemapAngle; // 0x10(0x04)
	int32_t CubemapResolution; // 0x14(0x04)
	float SkyDistanceThreshold; // 0x18(0x04)
	bool bCaptureEmissiveOnly; // 0x1c(0x01)
	bool bLowerHemisphereIsBlack; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x20(0x10)
	bool bAffectTranslucentLighting; // 0x30(0x01)
	bool bTransmission; // 0x31(0x01)
	bool bAffectReflection; // 0x32(0x01)
	bool bProbeOnly; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightBasicParametersOverride
// Size: 0x14 (Inherited: 0x00)
struct FSkyLightBasicParametersOverride {
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_LightColor : 1; // 0x00(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x00(0x01)
	char bOverride_VolumetricScatteringIntensity : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Intensity; // 0x04(0x04)
	struct FColor LightColor; // 0x08(0x04)
	float IndirectLightingIntensity; // 0x0c(0x04)
	float VolumetricScatteringIntensity; // 0x10(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightLightingParameters
// Size: 0xa8 (Inherited: 0x00)
struct FSkyLightLightingParameters {
	struct FSkyLightBasicParameters Basic; // 0x00(0x10)
	struct FSkyLightAdvancedParameters Advanced; // 0x10(0x38)
	struct FSkyLightShadowParameters Shadows; // 0x48(0x05)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FSkyLightDFAOParameters DFAO; // 0x50(0x18)
	struct FSkyLightHemisphereParameters Hemisphere; // 0x68(0x3c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightHemisphereParameters
// Size: 0x3c (Inherited: 0x00)
struct FSkyLightHemisphereParameters {
	bool bUseHemisphereLight; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor HemiTopColor; // 0x04(0x10)
	struct FLinearColor HemiBottomColor; // 0x14(0x10)
	float HemiOutsideIntensity; // 0x24(0x04)
	float HemiInsideIntensity; // 0x28(0x04)
	float ProbeOutsideMinimumIntensity; // 0x2c(0x04)
	float ProbeInsideMinimumIntensity; // 0x30(0x04)
	float SkyOcclusionContrast; // 0x34(0x04)
	float SkyOcclusionExponent; // 0x38(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightDFAOParameters
// Size: 0x18 (Inherited: 0x00)
struct FSkyLightDFAOParameters {
	float OcclusionMaxDistance; // 0x00(0x04)
	float Contrast; // 0x04(0x04)
	float OcclusionExponent; // 0x08(0x04)
	float MinOcclusion; // 0x0c(0x04)
	struct FColor OcclusionTint; // 0x10(0x04)
	enum class EOcclusionCombineMode OcclusionCombineMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GlobalLightRig.SkyLightShadowParameters
// Size: 0x05 (Inherited: 0x00)
struct FSkyLightShadowParameters {
	bool bCastShadows; // 0x00(0x01)
	bool bCastStaticShadow; // 0x01(0x01)
	bool bCastDynamicShadow; // 0x02(0x01)
	bool bCastVolumetricShadow; // 0x03(0x01)
	bool bCastRaytracedShadow; // 0x04(0x01)
};

// ScriptStruct GlobalLightRig.SkyLightAdvancedParameters
// Size: 0x38 (Inherited: 0x00)
struct FSkyLightAdvancedParameters {
	enum class EComponentMobility Mobility; // 0x00(0x01)
	enum class ESkyLightSourceMode SourceMode; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UTextureCube* CubeMap; // 0x08(0x08)
	float SourceCubemapAngle; // 0x10(0x04)
	int32_t CubemapResolution; // 0x14(0x04)
	float SkyDistanceThreshold; // 0x18(0x04)
	bool bCaptureEmissiveOnly; // 0x1c(0x01)
	bool bLowerHemisphereIsBlack; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x20(0x10)
	bool bAffectTranslucentLighting; // 0x30(0x01)
	bool bTransmission; // 0x31(0x01)
	bool bAffectReflection; // 0x32(0x01)
	bool bProbeOnly; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightBasicParameters
// Size: 0x10 (Inherited: 0x00)
struct FSkyLightBasicParameters {
	float Intensity; // 0x00(0x04)
	struct FColor LightColor; // 0x04(0x04)
	float IndirectLightingIntensity; // 0x08(0x04)
	float VolumetricScatteringIntensity; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.SkyLightBasicParametersRelative
// Size: 0x68 (Inherited: 0x00)
struct FSkyLightBasicParametersRelative {
	char bOverride_LightColor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAdjustedValueFloat Intensity; // 0x04(0x20)
	struct FColor LightColor; // 0x24(0x04)
	struct FAdjustedValueFloat IndirectLightingIntensity; // 0x28(0x20)
	struct FAdjustedValueFloat VolumetricScatteringIntensity; // 0x48(0x20)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsWindParametersOverride
// Size: 0x30 (Inherited: 0x00)
struct FVolumetricCloudsWindParametersOverride {
	char bOverride_WindSpeed : 1; // 0x00(0x01)
	char bOverride_WindSkew : 1; // 0x00(0x01)
	char bOverride_WeatherSpeed : 1; // 0x00(0x01)
	char bOverride_SkyLightWeatherSpeedScale : 1; // 0x00(0x01)
	char bOverride_HighAltitudeSpeed : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector WindSpeed; // 0x04(0x0c)
	float WindSkew; // 0x10(0x04)
	struct FVector WeatherSpeed; // 0x14(0x0c)
	float SkyLightWeatherSpeedScale; // 0x20(0x04)
	struct FVector HighAltitudeSpeed; // 0x24(0x0c)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsLightingParametersOverride
// Size: 0x94 (Inherited: 0x00)
struct FVolumetricCloudsLightingParametersOverride {
	struct FVolumetricCloudsBasicParametersOverride Basic; // 0x00(0x14)
	struct FVolumetricCloudsSkyLightParametersOverride SkyLight; // 0x14(0x20)
	struct FVolumetricCloudsShadowParametersOverride Shadows; // 0x34(0x18)
	struct FVolumetricCloudsAdvancedParametersOverride Advanced; // 0x4c(0x10)
	char pad_5C[0x10]; // 0x5c(0x10)
	struct FVolumetricCloudsSceneLightParametersOverride SceneLight; // 0x6c(0x28)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSceneLightParametersOverride
// Size: 0x28 (Inherited: 0x00)
struct FVolumetricCloudsSceneLightParametersOverride {
	char bOverride_Direction : 1; // 0x00(0x01)
	char bOverride_Color : 1; // 0x00(0x01)
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Saturation : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Direction; // 0x04(0x0c)
	struct FLinearColor Color; // 0x10(0x10)
	float Intensity; // 0x20(0x04)
	float Saturation; // 0x24(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsAdvancedParametersOverride
// Size: 0x10 (Inherited: 0x00)
struct FVolumetricCloudsAdvancedParametersOverride {
	char bOverride_FogDensityMultiplier : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FogDensityMultiplier; // 0x04(0x04)
	char bOverride_HeightFogDensityMultiplier : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HeightFogDensityMultiplier; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsShadowParametersOverride
// Size: 0x18 (Inherited: 0x00)
struct FVolumetricCloudsShadowParametersOverride {
	char bOverride_ShadowScale : 1; // 0x00(0x01)
	char bOverride_ShadowMapCloudShadowDensity : 1; // 0x00(0x01)
	char bOverride_RayMarchCloudShadowScale : 1; // 0x00(0x01)
	char bOverride_RayMarchShadowDensity : 1; // 0x00(0x01)
	char bOverride_SkyLightShadowDensity : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ShadowScale; // 0x04(0x04)
	float ShadowMapCloudShadowDensity; // 0x08(0x04)
	float RayMarchCloudShadowScale; // 0x0c(0x04)
	float RayMarchShadowDensity; // 0x10(0x04)
	float SkyLightShadowDensity; // 0x14(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSkyLightParametersOverride
// Size: 0x20 (Inherited: 0x00)
struct FVolumetricCloudsSkyLightParametersOverride {
	char bOverride_CloudOutput : 1; // 0x00(0x01)
	char bOverride_CloudAlpha : 1; // 0x00(0x01)
	char bOverride_Desaturate : 1; // 0x00(0x01)
	char bOverride_GroundColor : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CloudOutput; // 0x04(0x04)
	float CloudAlpha; // 0x08(0x04)
	float Desaturate; // 0x0c(0x04)
	struct FLinearColor GroundColor; // 0x10(0x10)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsBasicParametersOverride
// Size: 0x14 (Inherited: 0x00)
struct FVolumetricCloudsBasicParametersOverride {
	char bOverride_Ambient : 1; // 0x00(0x01)
	char bOverride_Light : 1; // 0x00(0x01)
	char bOverride_Extinction : 1; // 0x00(0x01)
	char bOverride_PowderExtinction : 1; // 0x00(0x01)
	char bOverride_PowderStrength : 1; // 0x00(0x01)
	char bOverride_FinalOutput : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Ambient; // 0x04(0x04)
	float Light; // 0x08(0x04)
	float PowderExtinction; // 0x0c(0x04)
	float FinalOutput; // 0x10(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSceneLightRotatorParametersOverride
// Size: 0x28 (Inherited: 0x00)
struct FVolumetricCloudsSceneLightRotatorParametersOverride {
	char bOverride_Direction : 1; // 0x00(0x01)
	char bOverride_Color : 1; // 0x00(0x01)
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Saturation : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRotator Direction; // 0x04(0x0c)
	struct FLinearColor Color; // 0x10(0x10)
	float Intensity; // 0x20(0x04)
	float Saturation; // 0x24(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsGroundShadowParametersOverride
// Size: 0x10 (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowParametersOverride {
	char bOverride_ShadowStrength : 1; // 0x00(0x01)
	char bOverride_CutOutDistanceMeters : 1; // 0x00(0x01)
	char bOverride_CutOutFadeDistanceMeters : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ShadowStrength; // 0x04(0x04)
	float CutOutDistanceMeters; // 0x08(0x04)
	float CutOutFadeDistanceMeters; // 0x0c(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsWindParameters
// Size: 0x3c (Inherited: 0x3c)
struct FVolumetricCloudsWindParameters : FVolumetricCloudsWeatherWindParams {
};

// ScriptStruct GlobalLightRig.VolumetricCloudsPresetParameters
// Size: 0x110 (Inherited: 0x108)
struct FVolumetricCloudsPresetParameters : FVolumetricCloudsPresetParams {
	float HeightOffset; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsLightingParameters
// Size: 0x80 (Inherited: 0x00)
struct FVolumetricCloudsLightingParameters {
	struct FVolumetricCloudsBasicParameters Basic; // 0x00(0x18)
	struct FVolumetricCloudsSkyLightParameters SkyLight; // 0x18(0x1c)
	struct FVolumetricCloudsShadowParameters Shadows; // 0x34(0x14)
	struct FVolumetricCloudsAdvancedParameters Advanced; // 0x48(0x08)
	char pad_50[0xc]; // 0x50(0x0c)
	struct FVolumetricCloudsSceneLightParameters SceneLight; // 0x5c(0x24)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSceneLightParameters
// Size: 0x24 (Inherited: 0x00)
struct FVolumetricCloudsSceneLightParameters {
	struct FVector Direction; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float Intensity; // 0x1c(0x04)
	float Saturation; // 0x20(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsAdvancedParameters
// Size: 0x08 (Inherited: 0x00)
struct FVolumetricCloudsAdvancedParameters {
	float FogDensityMultiplier; // 0x00(0x04)
	float HeightFogDensityMultiplier; // 0x04(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsShadowParameters
// Size: 0x14 (Inherited: 0x00)
struct FVolumetricCloudsShadowParameters {
	float ShadowScale; // 0x00(0x04)
	float ShadowMapCloudShadowDensity; // 0x04(0x04)
	float RayMarchCloudShadowScale; // 0x08(0x04)
	float RayMarchShadowDensity; // 0x0c(0x04)
	float SkyLightShadowDensity; // 0x10(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSkyLightParameters
// Size: 0x1c (Inherited: 0x00)
struct FVolumetricCloudsSkyLightParameters {
	float CloudOutput; // 0x00(0x04)
	float CloudAlpha; // 0x04(0x04)
	float Desaturate; // 0x08(0x04)
	struct FLinearColor GroundColor; // 0x0c(0x10)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsBasicParameters
// Size: 0x18 (Inherited: 0x00)
struct FVolumetricCloudsBasicParameters {
	float Ambient; // 0x00(0x04)
	float Light; // 0x04(0x04)
	float Extinction; // 0x08(0x04)
	float PowderExtinction; // 0x0c(0x04)
	float PowderStrength; // 0x10(0x04)
	float FinalOutput; // 0x14(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsSceneLightRotatorParameters
// Size: 0x24 (Inherited: 0x00)
struct FVolumetricCloudsSceneLightRotatorParameters {
	struct FRotator Direction; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float Intensity; // 0x1c(0x04)
	float Saturation; // 0x20(0x04)
};

// ScriptStruct GlobalLightRig.VolumetricCloudsGroundShadowParameters
// Size: 0x0c (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowParameters {
	float ShadowStrength; // 0x00(0x04)
	float CutOutDistanceMeters; // 0x04(0x04)
	float CutOutFadeDistanceMeters; // 0x08(0x04)
};

// ScriptStruct GlobalLightRig.WorldBaseHeights
// Size: 0x0c (Inherited: 0x00)
struct FWorldBaseHeights {
	float CloudsZ; // 0x00(0x04)
	float ExpHeightFogZ; // 0x04(0x04)
	float AtmosphereZ; // 0x08(0x04)
};

// ScriptStruct GlobalLightRig.WorldBaseHeightsTracker
// Size: 0x10 (Inherited: 0x0c)
struct FWorldBaseHeightsTracker : FWorldBaseHeights {
	int32_t Force; // 0x0c(0x04)
};

