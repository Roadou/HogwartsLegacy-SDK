// Enum DayNight.ECelestialPointOfInterestType
enum class ECelestialPointOfInterestType : uint8 {
	Unknown = 0,
	Star = 1,
	MajorConstellation = 2,
	Constellation = 3,
	Zodiac = 4,
	MessierObject = 5,
	ECelestialPointOfInterestType_MAX = 6
};

// Enum DayNight.EDateTimeDayOfWeek
enum class EDateTimeDayOfWeek : uint8 {
	Monday = 0,
	Tuesday = 1,
	Wednesday = 2,
	Thursday = 3,
	Friday = 4,
	Saturday = 5,
	Sunday = 6,
	EDateTimeDayOfWeek_MAX = 7
};

// Enum DayNight.EDateTimeMonth
enum class EDateTimeMonth : uint8 {
	January = 0,
	February = 1,
	March = 2,
	April = 3,
	May = 4,
	June = 5,
	July = 6,
	August = 7,
	September = 8,
	October = 9,
	November = 10,
	December = 11,
	EDateTimeMonth_MAX = 12
};

// Enum DayNight.EHourAmPm
enum class EHourAmPm : uint8 {
	AM = 0,
	PM = 1,
	EHourAmPm_MAX = 2
};

// Enum DayNight.EDayNightReportEmissiveAdaptation
enum class EDayNightReportEmissiveAdaptation : uint8 {
	EmissiveAdaptationMinExposure = 0,
	EmissiveAdaptationMaxExposure = 1,
	EmissiveAdaptationTargetExposureEV = 2,
	EmissiveAdaptationFinalMultiplier = 3,
	EmissiveAdaptationOutdoorsDayTime = 4,
	EmissiveAdaptationEnabled = 5,
	EDayNightReportEmissiveAdaptation_MAX = 6
};

// Enum DayNight.EDayNightReportExposure
enum class EDayNightReportExposure : uint8 {
	ExposureMinMax = 0,
	ExposureBias = 1,
	ExposureHistMinMax = 2,
	ExposureSpeed = 3,
	ExposureLowHighPercent = 4,
	ExposureLastFrameLuminance = 5,
	ExposureLastFrameExposure = 6,
	ExposureLastFrameBright = 7,
	EDayNightReportExposure_MAX = 8
};

// Enum DayNight.EDayNightReportFog
enum class EDayNightReportFog : uint8 {
	FogDensity = 0,
	FogOpacity = 1,
	FogDistances = 2,
	FogInscattering = 3,
	FogVolumetric = 4,
	EDayNightReportFog_MAX = 5
};

// Enum DayNight.EDayNightReportAtmosphere
enum class EDayNightReportAtmosphere : uint8 {
	AtmosphereLightingAzi = 0,
	AtmosphereLightingAlt = 1,
	AtmosphereLightingIntensity = 2,
	AtmosphereLightingColor = 3,
	AtmosphereSunMultiplier = 4,
	AtmosphereDesaturation = 5,
	AtmosphereGroundOffset = 6,
	AtmosphereDensityOffset = 7,
	TwilightNightColorationU = 8,
	TwilightNightColorationVBase = 9,
	TwilightNightModColor = 10,
	TwilightNightIntensity = 11,
	TwilightNightDesaturation = 12,
	TwilightNightFogIntensity = 13,
	TwilightNightFogDesaturation = 14,
	TwilightNightFogStart = 15,
	TwilightNightFogEnd = 16,
	TwilightNightFogPower = 17,
	TwilightNightFogVNear = 18,
	TwilightNightFogVFar = 19,
	EDayNightReportAtmosphere_MAX = 20
};

// Enum DayNight.EDayNightReportLighting
enum class EDayNightReportLighting : uint8 {
	DirLightAzi = 0,
	DirLightAlt = 1,
	DirLightIntensity = 2,
	DirLightColor = 3,
	DirLightIndirectIntensity = 4,
	DirLightSpecularScale = 5,
	DirLightLightShaftBloom = 6,
	DirLightLightShaftOcclusion = 7,
	SkyLightIntensity = 8,
	SkyLightIndirectIntensity = 9,
	EDayNightReportLighting_MAX = 10
};

// Enum DayNight.EDayNightReportLightRig
enum class EDayNightReportLightRig : uint8 {
	LightRigSun = 0,
	LightRigMoon = 1,
	LightRigLight = 2,
	CloudLighting = 3,
	CloudSkylight = 4,
	CloudShadows = 5,
	EDayNightReportLightRig_MAX = 6
};

// Enum DayNight.EDayNightReportSky
enum class EDayNightReportSky : uint8 {
	NightNegOneDayOne = 0,
	NightDay = 1,
	Night = 2,
	Day = 3,
	NightSkyStrength = 4,
	SunAzi = 5,
	SunAlt = 6,
	SunDiskAzi = 7,
	SunDiskAlt = 8,
	SunLightAzi = 9,
	SunLightAlt = 10,
	SunVisibility = 11,
	SunScale = 12,
	MoonAzi = 13,
	MoonAlt = 14,
	MoonPhase = 15,
	MoonSize = 16,
	MoonVisibility = 17,
	MoonScale = 18,
	MoonSunAngle = 19,
	PlanetVenus = 20,
	PlanetMars = 21,
	PlanetJupiter = 22,
	PlanetSaturn = 23,
	EDayNightReportSky_MAX = 24
};

// Enum DayNight.EDayNightReportGeneral
enum class EDayNightReportGeneral : uint8 {
	DateTime = 0,
	Time = 1,
	NormalizedTime = 2,
	ProbeLerp = 3,
	ProbeIndex = 4,
	BlendDomainIndoors = 5,
	BlendDomainDayNight = 6,
	BlendDomainOvercast = 7,
	Eye = 8,
	GlobalSS = 9,
	EDayNightReportGeneral_MAX = 10
};

// Enum DayNight.EDayNightEventDirectionTrigger
enum class EDayNightEventDirectionTrigger : uint8 {
	Rising = 0,
	Setting = 1,
	RisingAndSetting = 2,
	EDayNightEventDirectionTrigger_MAX = 3
};

// Enum DayNight.EDayNightEventDirection
enum class EDayNightEventDirection : uint8 {
	Rising = 0,
	Setting = 1,
	EDayNightEventDirection_MAX = 2
};

// Enum DayNight.ESkyAtmosphereColorationComputeOutput
enum class ESkyAtmosphereColorationComputeOutput : uint8 {
	Composited = 0,
	ColorOnly = 1,
	IntensityOnly = 2,
	ColorRGBIntensityA = 3,
	ESkyAtmosphereColorationComputeOutput_MAX = 4
};

// Enum DayNight.ESkyAtmosphereColorationComputeType
enum class ESkyAtmosphereColorationComputeType : uint8 {
	SkyColorOnly = 0,
	SunLightOnly = 1,
	MoonLightOnly = 2,
	DirLightOnly = 3,
	SunLit = 4,
	MoonLit = 5,
	DirLit = 6,
	ESkyAtmosphereColorationComputeType_MAX = 7
};

// Enum DayNight.EDayNightLightControllerOp
enum class EDayNightLightControllerOp : uint8 {
	Disable = 0,
	SetLightValue = 1,
	ModulateLightValue = 2,
	EDayNightLightControllerOp_MAX = 3
};

// Enum DayNight.EDayNightLightSource
enum class EDayNightLightSource : uint8 {
	Sun = 0,
	Moon = 1,
	LerpingSun = 2,
	LerpingMoon = 3,
	Invalid = 4,
	EDayNightLightSource_MAX = 5
};

// Enum DayNight.EProbeNightLightMoonDirection
enum class EProbeNightLightMoonDirection : uint8 {
	FromSkyState = 0,
	OppositeSun = 1,
	FixedDirection = 2,
	EProbeNightLightMoonDirection_MAX = 3
};

// Enum DayNight.EDayNightTweakDirectionalLightMode
enum class EDayNightTweakDirectionalLightMode : uint8 {
	SunAndMoon = 0,
	SunOnly = 1,
	MoonOnly = 2,
	EDayNightTweakDirectionalLightMode_MAX = 3
};

// Enum DayNight.EDayNightInheritSunMode
enum class EDayNightInheritSunMode : uint8 {
	SunDiskOnly = 0,
	FullSunRecompute = 1,
	EDayNightInheritSunMode_MAX = 2
};

// Enum DayNight.ELightRigCurveParam
enum class ELightRigCurveParam : uint8 {
	LightRigParamNone = 0,
	DirectionalLight_Direction = 1,
	DirectionalLight_Intensity = 2,
	DirectionalLight_LightColor = 3,
	DirectionalLight_Temperature = 4,
	DirectionalLight_UseTemperature = 5,
	DirectionalLight_SpecularScale = 6,
	DirectionalLight_IndirectLightingIntensity = 7,
	DirectionalLight_VolumetricScatteringIntensity = 8,
	DirectionalLight_AtmosphereSunLightPriority = 9,
	DirectionalLight_EnableLightShaftOcclusion = 10,
	DirectionalLight_OcclusionMaskDarkness = 11,
	DirectionalLight_OcclusionDepthRange = 12,
	DirectionalLight_EnableLightShaftBloom = 13,
	DirectionalLight_BloomScale = 14,
	DirectionalLight_BloomThreshold = 15,
	DirectionalLight_BloomTint = 16,
	DirectionalLight_LightShaftOverrideDirection = 17,
	SkyAtmosphere_BottomRadius = 18,
	SkyAtmosphere_AtmosphereHeight = 19,
	SkyAtmosphere_GroundAlbedo = 20,
	SkyAtmosphere_MultiScatteringFactor = 21,
	SkyAtmosphere_RayleighScatteringScale = 22,
	SkyAtmosphere_RayleighScattering = 23,
	SkyAtmosphere_RayleighExponentialDistribution = 24,
	SkyAtmosphere_MieScatteringScale = 25,
	SkyAtmosphere_MieScattering = 26,
	SkyAtmosphere_MieAbsorptionScale = 27,
	SkyAtmosphere_MieAbsorption = 28,
	SkyAtmosphere_MieAnisotropy = 29,
	SkyAtmosphere_MieExponentialDistribution = 30,
	SkyAtmosphere_OzoneAbsorptionScale = 31,
	SkyAtmosphere_OzoneAbsorption = 32,
	SkyAtmosphere_OzoneTentDistributionTipAltitude = 33,
	SkyAtmosphere_OzoneTentDistributionTipValue = 34,
	SkyAtmosphere_OzoneTentDistributionWidth = 35,
	SkyAtmosphere_SkyLuminanceFactor = 36,
	SkyAtmosphere_SkyLuminanceFactorIntensity = 37,
	SkyAtmosphere_SkyDesaturation = 38,
	SkyAtmosphere_AerialPespectiveViewDistanceScale = 39,
	SkyAtmosphere_HeightFogContribution = 40,
	SkyAtmosphere_HeightFogContributionInscattering = 41,
	SkyAtmosphere_HeightFogContributionDirectionalInscaterring = 42,
	SkyAtmosphere_HeightFogAccurateInscatteringColor = 43,
	SkyAtmosphere_HeightFogContributionDesaturation = 44,
	SkyAtmosphere_HeightFogContributionDesaturationInscattering = 45,
	SkyAtmosphere_HeightFogContributionDesaturationDirectionalInscattering = 46,
	SkyAtmosphere_TransmittanceMinLightElevationAngle = 47,
	SkyAtmosphere_HorizonToZenithColorationU = 48,
	SkyAtmosphere_HorizonToZenithColorationIntensity = 49,
	SkyAtmosphere_HorizonToZenithColorationDesaturation = 50,
	SkyAtmosphere_HorizonToZenithFogOpticalDepthScale = 51,
	SkyAtmosphere_HorizonToZenithFogOpticalDepthPower = 52,
	SkyAtmosphere_HorizonToZenithFogIntensity = 53,
	SkyAtmosphere_HorizonToZenithFogDesaturation = 54,
	SkyAtmosphere_SkyOnlyOverallBrightness = 55,
	SkyAtmosphere_SkyOnlyOverallSaturation = 56,
	SkyAtmosphere_SkyOnlySkyModIntensity = 57,
	SkyAtmosphere_SkyOnlySkyModSaturation = 58,
	SkyAtmosphere_SkyOnlySkyModColor = 59,
	SkyAtmosphere_SkyOnlySunDiskModIntensity = 60,
	SkyAtmosphere_SkyOnlySunDiskModSaturation = 61,
	SkyAtmosphere_SkyOnlySunDiskModColor = 62,
	SkyAtmosphere_SkyOnlyMoonDiskModIntensity = 63,
	SkyAtmosphere_SkyOnlyMoonDiskModSaturation = 64,
	SkyAtmosphere_SkyOnlyMoonDiskModColor = 65,
	SkyAtmosphere_SkyOnlyTwilightBaseColorIntensity = 66,
	SkyAtmosphere_SkyOnlyTwilightBaseColorSaturation = 67,
	SkyAtmosphere_SkyOnlyTwilightBaseColorColor = 68,
	SkyAtmosphere_SkyOnlyTwilightModIntensity = 69,
	SkyAtmosphere_SkyOnlyTwilightModSaturation = 70,
	SkyAtmosphere_SkyOnlyTwilightModColor = 71,
	SkyAtmosphere_LightDirection0 = 72,
	SkyAtmosphere_LightDirection1 = 73,
	SkyLight_Intensity = 74,
	SkyLight_LightColor = 75,
	SkyLight_IndirectLightingIntensity = 76,
	SkyLight_VolumetricScatteringIntensity = 77,
	SkyLight_Hemisphere_OutsideIntensity = 78,
	SkyLight_Hemisphere_InsideIntensity = 79,
	SkyLight_Probe_OutsideMinimumIntensity = 80,
	SkyLight_Probe_InsideMinimumIntensity = 81,
	SkyLight_Probe_SkyOcclusionContrast = 82,
	SkyLight_Probe_SkyOcclusionExponent = 83,
	CloudLighting_Ambient = 84,
	CloudLighting_Light = 85,
	CloudLighting_Extinction = 86,
	CloudLighting_PowderExtinction = 87,
	CloudLighting_PowderStrength = 88,
	CloudLighting_FinalOutput = 89,
	CloudLighting_SkyLightCloudOutput = 90,
	CloudLighting_SkyLightCloudAlpha = 91,
	CloudLighting_SkyLightDesaturate = 92,
	CloudLighting_SkyLightGroundColor = 93,
	CloudLighting_ShadowScale = 94,
	CloudLighting_FogDensityMultiplier = 95,
	CloudLighting_GroundShadowStrength = 96,
	CloudLighting_Direction = 97,
	CloudLighting_Color = 98,
	CloudLighting_Intensity = 99,
	CloudLighting_Saturation = 100,
	ProbeLighting_ProbeOutsideIntensity = 101,
	ProbeLighting_ProbeInsideIntensity = 102,
	ProbeLighting_ProbeOutsideSaturation = 103,
	ProbeLighting_ProbeInsideSaturation = 104,
	ProbeLighting_ProbeToneMapAmount = 105,
	ProbeLighting_ProbeToneMapMinIntensity = 106,
	ProbeLighting_ProbeToneMapMaxEV = 107,
	ProbeContactShadows_MinValue = 108,
	ProbeContactShadows_Length = 109,
	ProbeContactShadows_ConeAngle = 110,
	ProbeContactShadows_FalloffExponent = 111,
	ProbeContactShadows_DepthTolerance = 112,
	ExponentialHeightFog_ZOffset = 113,
	ExponentialHeightFog_FogDensity = 114,
	ExponentialHeightFog_FogHeightFalloff = 115,
	ExponentialHeightFog_FogInscatteringColor = 116,
	ExponentialHeightFog_FogInscatteringIntensity = 117,
	ExponentialHeightFog_FogInscatteringSaturation = 118,
	ExponentialHeightFog_FogInscatteringColorDirLightLuminanceModulate = 119,
	ExponentialHeightFog_FogMaxOpacity = 120,
	ExponentialHeightFog_StartDistance = 121,
	ExponentialHeightFog_FogCutoffDistance = 122,
	ExponentialHeightFog_DistantFogCloudShadowsMinimum = 123,
	ExponentialHeightFog_SecondFogDensity = 124,
	ExponentialHeightFog_SecondFogHeightFalloff = 125,
	ExponentialHeightFog_SecondFogHeightOffset = 126,
	ExponentialHeightFog_DirectionalInscatteringExponent = 127,
	ExponentialHeightFog_DirectionalInscatteringStartDistance = 128,
	ExponentialHeightFog_DirectionalInscatteringColor = 129,
	ExponentialHeightFog_DirectionalInscatteringIntensity = 130,
	ExponentialHeightFog_DirectionalInscatteringSaturation = 131,
	ExponentialHeightFog_DirectionalInscatteringColorDirLightLuminanceModulate = 132,
	ExponentialHeightFog_VolumetricFogScatteringDistribution = 133,
	ExponentialHeightFog_VolumetricFogAlbedo = 134,
	ExponentialHeightFog_VolumetricFogEmissive = 135,
	ExponentialHeightFog_VolumetricFogExtinctionScale = 136,
	ExponentialHeightFog_VolumetricFogDistance = 137,
	ExponentialHeightFog_OutsideVolumeSunMultiplier = 138,
	ExponentialHeightFog_VolumetricLightingDirectionalLightScattering = 139,
	ExponentialHeightFog_VolumetricLightingDirectionalLightDesaturation = 140,
	ExponentialHeightFog_VolumetricLightingShadowsNearMinimum = 141,
	ExponentialHeightFog_VolumetricLightingShadowsFarMinimum = 142,
	ExponentialHeightFog_VolumetricLightingShadowsNearDistance = 143,
	ExponentialHeightFog_VolumetricLightingShadowsFarDistance = 144,
	ExponentialHeightFog_VolumetricLightingCloudShadowsNearMinimum = 145,
	ExponentialHeightFog_VolumetricLightingCloudShadowsFarMinimum = 146,
	ExponentialHeightFog_VolumetricLightingCloudShadowsNearDistance = 147,
	ExponentialHeightFog_VolumetricLightingCloudShadowsFarDistance = 148,
	ExponentialHeightFog_VolumetricInscatteringContribution = 149,
	ExponentialHeightFog_VolumetricDirectionalInscatteringContribution = 150,
	ExponentialHeightFog_VolumetricFogHeightFogNearStartDistance = 151,
	ExponentialHeightFog_VolumetricFogHeightFogNearFullDistance = 152,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendStartDistance = 153,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendFullDistance = 154,
	ExponentialHeightFog_VolumetricFogHeightFogColorationBlendStrength = 155,
	ExponentialHeightFog_InscatteringTextureTint_DEPRECATED = 156,
	ExponentialHeightFog_FullyDirectionalInscatteringColorDistance_DEPRECATED = 157,
	ExponentialHeightFog_NonDirectionalInscatteringColorDistance_DEPRECATED = 158,
	ExponentialHeightFog_InscatteringColorCubemapFactor_DEPRECATED = 159,
	ELightRigCurveParam_MAX = 160
};

// Enum DayNight.ELightParameterTimeBlendInput
enum class ELightParameterTimeBlendInput : uint8 {
	TimeOfDay = 0,
	NormalizedTime = 1,
	ELightParameterTimeBlendInput_MAX = 2
};

// Enum DayNight.ELightParameterSmoothingTimeBase
enum class ELightParameterSmoothingTimeBase : uint8 {
	Seconds = 0,
	Minutes = 1,
	Hours = 2,
	ELightParameterSmoothingTimeBase_MAX = 3
};

// Enum DayNight.ELightParameterSmoothingTimeSource
enum class ELightParameterSmoothingTimeSource : uint8 {
	RealTime = 0,
	TimeOfDay = 1,
	NormalizedTime = 2,
	ELightParameterSmoothingTimeSource_MAX = 3
};

// Enum DayNight.ELightRigCurveLinearColorType
enum class ELightRigCurveLinearColorType : uint8 {
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
	ELightRigCurveLinearColorType_MAX = 12
};

// Enum DayNight.ELightRigCurveColorConversionType
enum class ELightRigCurveColorConversionType : uint8 {
	None = 0,
	ColorTemperatureK = 1,
	BlackBodyK = 2,
	Saturation = 3,
	Brightness = 4,
	ELightRigCurveColorConversionType_MAX = 5
};

// Enum DayNight.ELightRigCurveType
enum class ELightRigCurveType : uint8 {
	Absolute = 0,
	Multiply = 1,
	Add = 2,
	Minimum = 3,
	Maximum = 4,
	ELightRigCurveType_MAX = 5
};

// Enum DayNight.ELightRigMode
enum class ELightRigMode : uint8 {
	GameAndProbeCapture = 0,
	GameOnly = 1,
	ProbeCaptureOnly = 2,
	ELightRigMode_MAX = 3
};

// Enum DayNight.ELerpEasingType
enum class ELerpEasingType : uint8 {
	EaseIn = 0,
	EaseOut = 1,
	EaseInOut = 2,
	ELerpEasingType_MAX = 3
};

// Enum DayNight.EDayNightLightRigOverrideInit
enum class EDayNightLightRigOverrideInit : uint8 {
	Defaults = 0,
	NewMoon = 1,
	FullMoon = 2,
	ProbeNight = 3,
	EDayNightLightRigOverrideInit_MAX = 4
};

// Enum DayNight.EDayNightBlendOps
enum class EDayNightBlendOps : uint8 {
	DirectionalLightDirection = 0,
	DirectionalLightBasic = 1,
	DirectionalLightShafts = 2,
	SkyLightBasic = 3,
	SkyLightHemisphere = 4,
	SkyAtmosphere = 5,
	VolumetricCloudsBasic = 6,
	VolumetricCloudsAdvanced = 7,
	VolumetricCloudsShadow = 8,
	VolumetricCloudsSkyLight = 9,
	VolumetricCloudsGroundShadow = 10,
	VolumetricCloudsSceneLight = 11,
	ProbeLightingAdjustment = 12,
	ProbeLightingToneMap = 13,
	ProbeContactShadows = 14,
	EDayNightBlendOps_MAX = 15
};

// Enum DayNight.EDayNightCloudSceneLightingSource
enum class EDayNightCloudSceneLightingSource : uint8 {
	DirectionalLight = 0,
	SunLight = 1,
	SunDisk = 2,
	MoonLight = 3,
	Manual = 4,
	Automatic = 5,
	EDayNightCloudSceneLightingSource_MAX = 6
};

// Enum DayNight.EDayNightLightRigSetupInit
enum class EDayNightLightRigSetupInit : uint8 {
	Defaults = 0,
	Sun = 1,
	EDayNightLightRigSetupInit_MAX = 2
};

// Enum DayNight.EFixedSunPositionType
enum class EFixedSunPositionType : uint8 {
	Noon = 0,
	Midnight = 1,
	SunRise = 2,
	SunSet = 3,
	Rising = 4,
	Setting = 5,
	EFixedSunPositionType_MAX = 6
};

// Enum DayNight.EFixedSunPositionInputType
enum class EFixedSunPositionInputType : uint8 {
	AltitudeDegrees = 0,
	PercentageOfTransit = 1,
	PercentageOfTransitOrMidnight = 2,
	EFixedSunPositionInputType_MAX = 3
};

// Enum DayNight.EMoonPathMode
enum class EMoonPathMode : uint8 {
	SunRelative = 0,
	MoonRelative = 1,
	Absolute = 2,
	EMoonPathMode_MAX = 3
};

// Enum DayNight.EMoonPhaseName
enum class EMoonPhaseName : uint8 {
	NewMoon = 0,
	WaxingCrescent = 1,
	FirstQuarter = 2,
	WaxingGibbous = 3,
	FullMoon = 4,
	WaningGibbous = 5,
	LastQuarter = 6,
	WaningCrescent = 7,
	EMoonPhaseName_MAX = 8
};

// Enum DayNight.ESwitchableStarrySkyMode
enum class ESwitchableStarrySkyMode : uint8 {
	Normal = 0,
	Highlight = 1,
	ESwitchableStarrySkyMode_MAX = 2
};

// Enum DayNight.EVisiblePlanets
enum class EVisiblePlanets : uint8 {
	Venus = 0,
	Mars = 1,
	Jupiter = 2,
	Saturn = 3,
	EVisiblePlanets_MAX = 4
};

// Enum DayNight.ETimeDateChangeValueType
enum class ETimeDateChangeValueType : uint8 {
	None = 0,
	Relative = 1,
	Absolute = 2,
	ETimeDateChangeValueType_MAX = 3
};

// Enum DayNight.EDayNightTimeOverrideMode
enum class EDayNightTimeOverrideMode : uint8 {
	DateTime = 0,
	TimeOnly = 1,
	EDayNightTimeOverrideMode_MAX = 2
};

// Enum DayNight.ETimeOverrideType
enum class ETimeOverrideType : uint8 {
	ActualTime = 0,
	NormalizedTime = 1,
	ETimeOverrideType_MAX = 2
};

// Enum DayNight.ELightProbeCaptureMode
enum class ELightProbeCaptureMode : uint8 {
	Off = 0,
	GlobalSlot = 1,
	LocalTime = 2,
	ELightProbeCaptureMode_MAX = 3
};

// ScriptStruct DayNight.ProceduralQuadParams
// Size: 0x1c (Inherited: 0x00)
struct FProceduralQuadParams {
	float XSize; // 0x00(0x04)
	float YSize; // 0x04(0x04)
	float DefaultZ; // 0x08(0x04)
	float UVTiling; // 0x0c(0x04)
	bool bUseUVs; // 0x10(0x01)
	bool bHasCollision; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FColor VertexColor; // 0x14(0x04)
	bool bUseVertexColors; // 0x18(0x01)
	bool bCreateNormals; // 0x19(0x01)
	bool bCreateTangents; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct DayNight.CelestialHaloMeshParameters
// Size: 0x10 (Inherited: 0x00)
struct FCelestialHaloMeshParameters {
	int32_t MeshSlices; // 0x00(0x04)
	float MeshInnerRadius; // 0x04(0x04)
	float MeshOuterRadius; // 0x08(0x04)
	bool bUVAsAngleRadius; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct DayNight.CelestialDiskMeshParameters
// Size: 0x0c (Inherited: 0x00)
struct FCelestialDiskMeshParameters {
	int32_t MeshSlices; // 0x00(0x04)
	float MeshRadius; // 0x04(0x04)
	bool bUVAsAngleRadius; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DayNight.CelestialPointOfInterest
// Size: 0x30 (Inherited: 0x00)
struct FCelestialPointOfInterest {
	struct FName Name; // 0x00(0x08)
	enum class ECelestialPointOfInterestType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float AzimuthDegrees; // 0x0c(0x04)
	float AltitudeDegrees; // 0x10(0x04)
	struct FVector TopographicDirection; // 0x14(0x0c)
	struct FName HighlightConstellation; // 0x20(0x08)
	struct FName HighlightStar; // 0x28(0x08)
};

// ScriptStruct DayNight.CelestialPointOfInterestResolvedEntry
// Size: 0x30 (Inherited: 0x08)
struct FCelestialPointOfInterestResolvedEntry : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	enum class ECelestialPointOfInterestType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector DirectionToStar; // 0x14(0x0c)
	struct FName HighlightConstellation; // 0x20(0x08)
	struct FName HighlightStar; // 0x28(0x08)
};

// ScriptStruct DayNight.CelestialPointOfInterestEntry
// Size: 0x38 (Inherited: 0x08)
struct FCelestialPointOfInterestEntry : FTableRowBase {
	enum class ECelestialPointOfInterestType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName HighlightConstellation; // 0x0c(0x08)
	struct FName HighlightStar; // 0x14(0x08)
	float RightAscentionHours; // 0x1c(0x04)
	float RightAscentionMinutes; // 0x20(0x04)
	float RightAscentionSeconds; // 0x24(0x04)
	float DeclinationDegrees; // 0x28(0x04)
	float DeclinationMinutes; // 0x2c(0x04)
	float DeclinationSeconds; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct DayNight.CelestialPointOfInterestName
// Size: 0x08 (Inherited: 0x00)
struct FCelestialPointOfInterestName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct DayNight.TimeInput
// Size: 0x0c (Inherited: 0x00)
struct FTimeInput {
	int32_t Hour; // 0x00(0x04)
	int32_t Minute; // 0x04(0x04)
	enum class EHourAmPm AmPm; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DayNight.DateInput
// Size: 0x0c (Inherited: 0x00)
struct FDateInput {
	enum class EDateTimeMonth Month; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Day; // 0x04(0x04)
	int32_t Year; // 0x08(0x04)
};

// ScriptStruct DayNight.DateTimeInput
// Size: 0x18 (Inherited: 0x00)
struct FDateTimeInput {
	enum class EDateTimeMonth Month; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Day; // 0x04(0x04)
	int32_t Year; // 0x08(0x04)
	int32_t Hour; // 0x0c(0x04)
	enum class EHourAmPm AmPm; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Minute; // 0x14(0x04)
};

// ScriptStruct DayNight.DateTimeScenario
// Size: 0x20 (Inherited: 0x08)
struct FDateTimeScenario : FTableRowBase {
	int32_t Month; // 0x08(0x04)
	int32_t Day; // 0x0c(0x04)
	int32_t Year; // 0x10(0x04)
	int32_t Hour; // 0x14(0x04)
	int32_t Minute; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DayNight.DayNightCSVReportOptions
// Size: 0x24 (Inherited: 0x00)
struct FDayNightCSVReportOptions {
	int32_t GeneralOptions; // 0x00(0x04)
	int32_t DayNightOptions; // 0x04(0x04)
	int32_t LightRigOptions; // 0x08(0x04)
	int32_t LightingOptions; // 0x0c(0x04)
	int32_t AtmosphereOptions; // 0x10(0x04)
	int32_t FogOptions; // 0x14(0x04)
	int32_t ExposureOptions; // 0x18(0x04)
	int32_t EmissiveAdaptationOptions; // 0x1c(0x04)
	bool bEverything; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct DayNight.DayNightEventSystem
// Size: 0x1b0 (Inherited: 0x00)
struct FDayNightEventSystem {
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FDayNightReceiverEvents> EventMap; // 0x00(0x50)
	struct TArray<struct FDayNightEventSystemLastState> LastStates; // 0x50(0x10)
	struct TMap<struct FName, struct FDayNightGlobalEvents> GlobalEventMap; // 0x60(0x50)
	struct FDayNightEventSystemLastState GlobalLastState; // 0xb0(0x18)
	struct FDayNightEventsCurrentState GlobalCurrentState; // 0xc8(0x30)
	char pad_F8[0xb8]; // 0xf8(0xb8)
};

// ScriptStruct DayNight.DayNightEventsCurrentState
// Size: 0x30 (Inherited: 0x00)
struct FDayNightEventsCurrentState {
	float NormalizedTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime GameDateTime; // 0x08(0x08)
	struct FTimespan DeltaTime; // 0x10(0x08)
	struct FDayNightEventsCurrentAltitude Sun; // 0x18(0x08)
	struct FDayNightEventsCurrentAltitude Moon; // 0x20(0x08)
	enum class EMoonPhaseName MoonPhase; // 0x28(0x01)
	bool bValid; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct DayNight.DayNightEventsCurrentAltitude
// Size: 0x08 (Inherited: 0x00)
struct FDayNightEventsCurrentAltitude {
	float Altitude; // 0x00(0x04)
	enum class EDayNightEventDirection Direction; // 0x04(0x01)
	bool bValid; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct DayNight.DayNightEventSystemLastState
// Size: 0x18 (Inherited: 0x00)
struct FDayNightEventSystemLastState {
	struct FDateTime DateTime; // 0x00(0x08)
	float SunAltitude; // 0x08(0x04)
	float MoonAltitude; // 0x0c(0x04)
	bool bFirstRun; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DayNight.DayNightEventTrackers
// Size: 0x10 (Inherited: 0x00)
struct FDayNightEventTrackers {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DayNight.DayNightGlobalEvents
// Size: 0x20 (Inherited: 0x10)
struct FDayNightGlobalEvents : FDayNightEventTrackers {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct DayNight.DayNightReceiverEvents
// Size: 0x18 (Inherited: 0x10)
struct FDayNightReceiverEvents : FDayNightEventTrackers {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct DayNight.DayNightMoonAltitudeEvent
// Size: 0x14 (Inherited: 0x00)
struct FDayNightMoonAltitudeEvent {
	float MoonAltitudeDegrees; // 0x00(0x04)
	enum class EMoonPhaseName MoonPhase; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float NightThreshold; // 0x08(0x04)
	enum class EDayNightEventDirectionTrigger DirectionTrigger; // 0x0c(0x01)
	bool bAllowFireOnBeginPlay; // 0x0d(0x01)
	bool bAllowFireOnDiscontinuity; // 0x0e(0x01)
	bool bUseMoonPhase; // 0x0f(0x01)
	bool bUseNightThreshold; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DayNight.DayNightSunAltitudeChangeEvent
// Size: 0x14 (Inherited: 0x00)
struct FDayNightSunAltitudeChangeEvent {
	float SunAltitudeChangeDegrees; // 0x00(0x04)
	enum class EDayNightEventDirectionTrigger Direction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SunMinAltitudeDegrees; // 0x08(0x04)
	float SunMaxAltitudeDegrees; // 0x0c(0x04)
	bool bAllowFireOnBeginPlay; // 0x10(0x01)
	bool bAllowFireOnDiscontinuity; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct DayNight.DayNightSunAltitudeEvent
// Size: 0x08 (Inherited: 0x00)
struct FDayNightSunAltitudeEvent {
	float SunAltitudeDegrees; // 0x00(0x04)
	enum class EDayNightEventDirectionTrigger DirectionTrigger; // 0x04(0x01)
	bool bAllowFireOnBeginPlay; // 0x05(0x01)
	bool bAllowFireOnDiscontinuity; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct DayNight.DayNightNormalizedTimeEvent
// Size: 0x10 (Inherited: 0x00)
struct FDayNightNormalizedTimeEvent {
	struct FTimeInput NormalizedTime; // 0x00(0x0c)
	bool bAllowFireOnBeginPlay; // 0x0c(0x01)
	bool bAllowFireOnDiscontinuity; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct DayNight.DayNightGameTimeEvent
// Size: 0x10 (Inherited: 0x00)
struct FDayNightGameTimeEvent {
	struct FTimeInput GameTime; // 0x00(0x0c)
	bool bAllowFireOnBeginPlay; // 0x0c(0x01)
	bool bAllowFireOnDiscontinuity; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct DayNight.DayNightLightSkyAtmosphereComputeDirLight
// Size: 0x4c (Inherited: 0x00)
struct FDayNightLightSkyAtmosphereComputeDirLight {
	struct FVector Direction; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	struct FLinearColor ColorMod; // 0x1c(0x10)
	float Intensity; // 0x2c(0x04)
	float SkyIntensityMod; // 0x30(0x04)
	float AltitudeDegrees; // 0x34(0x04)
	float Priority; // 0x38(0x04)
	char pad_3C[0x10]; // 0x3c(0x10)
};

// ScriptStruct DayNight.DayNightLightSkyAtmosphereComputeParams
// Size: 0x78 (Inherited: 0x00)
struct FDayNightLightSkyAtmosphereComputeParams {
	struct FDayNightLightSkyAtmosphereComputeDirectionalLightParams SunParams; // 0x00(0x30)
	struct FDayNightLightSkyAtmosphereComputeDirectionalLightParams MoonParams; // 0x30(0x30)
	struct FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams; // 0x60(0x10)
	float Desaturation; // 0x70(0x04)
	bool bDesaturateWithOvercast; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct DayNight.DayNightLightSkyAtmosphereComputeSampleDirectionParams
// Size: 0x10 (Inherited: 0x00)
struct FDayNightLightSkyAtmosphereComputeSampleDirectionParams {
	float SampleOffsetAltitudeDegrees; // 0x00(0x04)
	float MinimumSampleAltitudeDegrees; // 0x04(0x04)
	float MaximumSampleAltitudeDegrees; // 0x08(0x04)
	bool bMirrorLowerHemisphere; // 0x0c(0x01)
	bool bUseMinimumSampleAltitudeDegrees; // 0x0d(0x01)
	bool bUseMaximumSampleAltitudeDegrees; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct DayNight.DayNightLightSkyAtmosphereComputeDirectionalLightParams
// Size: 0x30 (Inherited: 0x00)
struct FDayNightLightSkyAtmosphereComputeDirectionalLightParams {
	float LightIntensityMod; // 0x00(0x04)
	float SkyIntensityMod; // 0x04(0x04)
	struct FLinearColor ColorMod; // 0x08(0x10)
	float FullColorDegrees; // 0x18(0x04)
	float NoColorDegrees; // 0x1c(0x04)
	float FullIntensityDegrees; // 0x20(0x04)
	float MinIntensityDegrees; // 0x24(0x04)
	float StartFadeIntensityDegrees; // 0x28(0x04)
	float EndFadeIntensityDegrees; // 0x2c(0x04)
};

// ScriptStruct DayNight.DayNightLightControllerDirectionalBoost
// Size: 0x0c (Inherited: 0x00)
struct FDayNightLightControllerDirectionalBoost {
	float LightHalfAngleMin; // 0x00(0x04)
	float LightHalfAngleMax; // 0x04(0x04)
	float BoostPercentage; // 0x08(0x04)
};

// ScriptStruct DayNight.DayNightLightRigResults
// Size: 0x8a8 (Inherited: 0x00)
struct FDayNightLightRigResults {
	struct FDayNightLightRigState ActiveLight; // 0x00(0x2c8)
	struct FDayNightLightRigState Sunlight; // 0x2c8(0x2c8)
	struct FDayNightLightRigState MoonLight; // 0x590(0x2c8)
	float Night0Day1; // 0x858(0x04)
	float SunLightInfluence; // 0x85c(0x04)
	float MoonLightInfluence; // 0x860(0x04)
	enum class EDayNightLightSource LightSource; // 0x864(0x01)
	char pad_865[0x3]; // 0x865(0x03)
	struct FLightParameterSmoothingTime Time; // 0x868(0x18)
	int32_t BlendOps; // 0x880(0x04)
	float SunAltitudeDegrees; // 0x884(0x04)
	float MoonAltitudeDegrees; // 0x888(0x04)
	float NormalizedTime; // 0x88c(0x04)
	bool bUsingSecondaryDirectionalLight; // 0x890(0x01)
	char pad_891[0x7]; // 0x891(0x07)
	struct FString DebugModReport; // 0x898(0x10)
};

// ScriptStruct DayNight.LightParameterSmoothingTime
// Size: 0x18 (Inherited: 0x00)
struct FLightParameterSmoothingTime {
	float RealTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime TimeOfDay; // 0x08(0x08)
	float NormalizedTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DayNight.DayNightLightRigSetup
// Size: 0x2b8 (Inherited: 0x00)
struct FDayNightLightRigSetup {
	struct FDirectionalLightBasicParameters DirectionalLight; // 0x00(0x24)
	struct FDirectionalLightShafts DirectionalLightShafts; // 0x24(0x28)
	struct FSkyLightBasicParameters SkyLight; // 0x4c(0x10)
	struct FSkyLightHemisphereParameters SkyLightHemisphere; // 0x5c(0x3c)
	struct FSkyAtmosphereParameters SkyAtmosphere; // 0x98(0x148)
	struct FVolumetricCloudsBasicParameters CloudLighting; // 0x1e0(0x18)
	struct FVolumetricCloudsAdvancedParameters CloudsAdvanced; // 0x1f8(0x08)
	struct FVolumetricCloudsShadowParameters CloudsShadows; // 0x200(0x14)
	struct FVolumetricCloudsSkyLightParameters CloudsSkyLight; // 0x214(0x1c)
	char pad_230[0xc]; // 0x230(0x0c)
	struct FDayNightCloudSceneLighting CloudSceneLighting; // 0x23c(0x28)
	struct FVolumetricCloudsSceneLightParameters CloudsSceneLight; // 0x264(0x24)
	struct FProbeLightingAdjustmentParameters ProbeLightingAdjustments; // 0x288(0x10)
	struct FProbeLightingToneMapParameters ProbeLightingToneMap; // 0x298(0x0c)
	struct FProbeContactShadowsParameters ProbeContactShadows; // 0x2a4(0x14)
};

// ScriptStruct DayNight.DayNightCloudSceneLighting
// Size: 0x28 (Inherited: 0x00)
struct FDayNightCloudSceneLighting {
	enum class EDayNightCloudSceneLightingSource LightDirection; // 0x00(0x01)
	enum class EDayNightCloudSceneLightingSource LightColor; // 0x01(0x01)
	enum class EDayNightCloudSceneLightingSource LightIntensity; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Saturation; // 0x04(0x04)
	struct FRotator ManualLightDirection; // 0x08(0x0c)
	struct FLinearColor ManualLightColor; // 0x14(0x10)
	float ManualLightIntensity; // 0x24(0x04)
};

// ScriptStruct DayNight.DayNightLightRigState
// Size: 0x2c8 (Inherited: 0x2b8)
struct FDayNightLightRigState : FDayNightLightRigSetup {
	struct FVector Direction; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// ScriptStruct DayNight.NightLightRigLerpParameterAtlas
// Size: 0x98 (Inherited: 0x00)
struct FNightLightRigLerpParameterAtlas {
	struct FLerpParameterAtlas LerpAtlas; // 0x00(0x90)
	float LerpT; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct DayNight.DayNightLightRigStateWithTime
// Size: 0x2e0 (Inherited: 0x2c8)
struct FDayNightLightRigStateWithTime : FDayNightLightRigState {
	struct FLightParameterSmoothingTime Time; // 0x2c8(0x18)
};

// ScriptStruct DayNight.LightParameterSmoothingDeltaTime
// Size: 0x0c (Inherited: 0x00)
struct FLightParameterSmoothingDeltaTime {
	float DeltaRealTimeSeconds; // 0x00(0x04)
	float DeltaTimeOfDayHours; // 0x04(0x04)
	float DeltaNormalizedTimeHours; // 0x08(0x04)
};

// ScriptStruct DayNight.LightParameterSmoothingDiscontinuitySettings
// Size: 0x0c (Inherited: 0x00)
struct FLightParameterSmoothingDiscontinuitySettings {
	float MaxDeltaRealTimeSeconds; // 0x00(0x04)
	float MaxDeltaTimeOfDayHours; // 0x04(0x04)
	float MaxDeltaNormalizedTimeHours; // 0x08(0x04)
};

// ScriptStruct DayNight.DayNightLightRigOverride
// Size: 0x2f0 (Inherited: 0x00)
struct FDayNightLightRigOverride {
	struct FDirectionalLightBasicParametersOverride DirectionalLight; // 0x00(0x28)
	struct FDirectionalLightShaftsOverride DirectionalLightShafts; // 0x28(0x28)
	struct FSkyLightBasicParametersOverride SkyLight; // 0x50(0x14)
	struct FSkyLightHemisphereParametersOverride SkyLightHemisphere; // 0x64(0x3c)
	struct FSkyAtmosphereParametersOverride SkyAtmosphere; // 0xa0(0x178)
	struct FVolumetricCloudsBasicParametersOverride CloudLighting; // 0x218(0x14)
	struct FVolumetricCloudsAdvancedParametersOverride CloudsAdvanced; // 0x22c(0x10)
	struct FVolumetricCloudsShadowParametersOverride CloudsShadows; // 0x23c(0x18)
	struct FVolumetricCloudsSkyLightParametersOverride CloudsSkyLight; // 0x254(0x20)
	char pad_274[0x10]; // 0x274(0x10)
	struct FDayNightCloudSceneLightingOverride CloudSceneLighting; // 0x284(0x2c)
	struct FProbeLightingAdjustmentParametersOverride ProbeLightingAdjustments; // 0x2b0(0x14)
	struct FProbeLightingToneMapParametersOverride ProbeLightingToneMap; // 0x2c4(0x10)
	struct FProbeContactShadowsParametersOverride ProbeContactShadows; // 0x2d4(0x18)
	char pad_2EC[0x4]; // 0x2ec(0x04)
};

// ScriptStruct DayNight.DayNightCloudSceneLightingOverride
// Size: 0x2c (Inherited: 0x00)
struct FDayNightCloudSceneLightingOverride {
	enum class EDayNightCloudSceneLightingSource LightDirection; // 0x00(0x01)
	enum class EDayNightCloudSceneLightingSource LightColor; // 0x01(0x01)
	enum class EDayNightCloudSceneLightingSource LightIntensity; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Saturation; // 0x04(0x04)
	struct FRotator ManualLightDirection; // 0x08(0x0c)
	struct FLinearColor ManualLightColor; // 0x14(0x10)
	float ManualLightIntensity; // 0x24(0x04)
	char bOverride_LightDirection : 1; // 0x28(0x01)
	char bOverride_LightColor : 1; // 0x28(0x01)
	char bOverride_LightIntensity : 1; // 0x28(0x01)
	char bOverride_Saturation : 1; // 0x28(0x01)
	char pad_28_4 : 4; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct DayNight.DayNightMasterComputeOnlyPerLevel
// Size: 0x28 (Inherited: 0x00)
struct FDayNightMasterComputeOnlyPerLevel {
	struct FName Level; // 0x00(0x08)
	struct FString LevelPartialMatch; // 0x08(0x10)
	struct ADayNightMasterComputeOnly* ComputeDefault; // 0x18(0x08)
	bool bUseSubString; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DayNight.DayNightCompassParams
// Size: 0x10 (Inherited: 0x00)
struct FDayNightCompassParams {
	float RadiusMeters; // 0x00(0x04)
	float Scale; // 0x04(0x04)
	float OffsetMeters; // 0x08(0x04)
	float WorldAzimuthOffsetDegrees; // 0x0c(0x04)
};

// ScriptStruct DayNight.UberExposureColorGradingValues
// Size: 0x50 (Inherited: 0x00)
struct FUberExposureColorGradingValues {
	struct FString ColorSaturationValue; // 0x00(0x10)
	struct FString ColorContrastValue; // 0x10(0x10)
	struct FString ColorGammaValue; // 0x20(0x10)
	struct FString ColorGainValue; // 0x30(0x10)
	struct FString ColorOffsetValue; // 0x40(0x10)
};

// ScriptStruct DayNight.UberExposureColorGradingHighlightsValues
// Size: 0x60 (Inherited: 0x50)
struct FUberExposureColorGradingHighlightsValues : FUberExposureColorGradingValues {
	struct FString HighlightsMinValue; // 0x50(0x10)
};

// ScriptStruct DayNight.UberExposureColorGradingMidtonesValues
// Size: 0x50 (Inherited: 0x50)
struct FUberExposureColorGradingMidtonesValues : FUberExposureColorGradingValues {
};

// ScriptStruct DayNight.UberExposureColorGradingShadowsValues
// Size: 0x60 (Inherited: 0x50)
struct FUberExposureColorGradingShadowsValues : FUberExposureColorGradingValues {
	struct FString ShadowsMaxValue; // 0x50(0x10)
};

// ScriptStruct DayNight.UberExposureColorGradingGlobalValues
// Size: 0x50 (Inherited: 0x50)
struct FUberExposureColorGradingGlobalValues : FUberExposureColorGradingValues {
};

// ScriptStruct DayNight.UberExposureColorGrading
// Size: 0x30 (Inherited: 0x00)
struct FUberExposureColorGrading {
	char bUseColorSaturation : 1; // 0x00(0x01)
	char bUseColorContrast : 1; // 0x00(0x01)
	char bUseColorGamma : 1; // 0x00(0x01)
	char bUseColorGain : 1; // 0x00(0x01)
	char bUseColorOffset : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveLinearColor* ColorSaturation; // 0x08(0x08)
	struct UCurveLinearColor* ColorContrast; // 0x10(0x08)
	struct UCurveLinearColor* ColorGamma; // 0x18(0x08)
	struct UCurveLinearColor* ColorGain; // 0x20(0x08)
	struct UCurveLinearColor* ColorOffset; // 0x28(0x08)
};

// ScriptStruct DayNight.UberExposureColorGradingHighlights
// Size: 0x40 (Inherited: 0x30)
struct FUberExposureColorGradingHighlights : FUberExposureColorGrading {
	char bUseHighlightsMin : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* HighlightsMin; // 0x38(0x08)
};

// ScriptStruct DayNight.UberExposureColorGradingMidtones
// Size: 0x30 (Inherited: 0x30)
struct FUberExposureColorGradingMidtones : FUberExposureColorGrading {
};

// ScriptStruct DayNight.UberExposureColorGradingShadows
// Size: 0x40 (Inherited: 0x30)
struct FUberExposureColorGradingShadows : FUberExposureColorGrading {
	char bUseShadowsMax : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* ShadowsMax; // 0x38(0x08)
};

// ScriptStruct DayNight.UberExposureColorGradingGlobal
// Size: 0x30 (Inherited: 0x30)
struct FUberExposureColorGradingGlobal : FUberExposureColorGrading {
};

// ScriptStruct DayNight.DayNightWorldInfo
// Size: 0x280 (Inherited: 0x00)
struct FDayNightWorldInfo {
	struct UEphemerisBasis* LevelDefaultBasis; // 0x00(0x08)
	struct UEphemerisBasis* ForceBasis; // 0x08(0x08)
	struct UEphemerisBasis* OverrideBasis; // 0x10(0x08)
	struct UDayNightMasterComponent* Master; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
	struct TArray<struct TWeakObjectPtr<struct UObject>> DayNightOverrides; // 0x38(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> BasisOverrides; // 0x48(0x10)
	struct TSet<struct TWeakObjectPtr<struct UDayNightLightControllerComponent>> LightControllers; // 0x58(0x50)
	struct FTimeOverrides TimeOverrides; // 0xa8(0x10)
	struct FSkyStateOverrides SkyStateOverrides; // 0xb8(0x10)
	struct FDayNightEventSystem EventSystem; // 0xc8(0x1b0)
	bool bEventSystemReset; // 0x278(0x01)
	bool bMissingComputeMasterTemplate; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// ScriptStruct DayNight.SkyStateOverrides
// Size: 0x10 (Inherited: 0x00)
struct FSkyStateOverrides {
	struct TArray<struct TWeakObjectPtr<struct UObject>> SkyStateOverrides; // 0x00(0x10)
};

// ScriptStruct DayNight.TimeOverrides
// Size: 0x10 (Inherited: 0x00)
struct FTimeOverrides {
	struct TArray<struct TWeakObjectPtr<struct UObject>> TimeOverrides; // 0x00(0x10)
};

// ScriptStruct DayNight.EarthShadow
// Size: 0x20 (Inherited: 0x00)
struct FEarthShadow {
	struct UStaticMeshComponent* MeshComponent; // 0x00(0x08)
	struct UStaticMesh* Mesh; // 0x08(0x08)
	float ZOffsetMeters; // 0x10(0x04)
	float ScaleXY; // 0x14(0x04)
	bool bZOffsetRelativeToWorldMinZ; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DayNight.EphemerisComputer
// Size: 0x148 (Inherited: 0x00)
struct FEphemerisComputer {
	struct FEphemerisDayInfo AstronomicalDayInfo; // 0x00(0x78)
	struct FEphemerisDayInfo DayInfo; // 0x78(0x78)
	struct UEphemerisBasis* Basis; // 0xf0(0x08)
	struct TMap<struct UEphemerisSubroutine*, struct UObject*> SubroutineData; // 0xf8(0x50)
};

// ScriptStruct DayNight.EphemerisDayInfo
// Size: 0x78 (Inherited: 0x00)
struct FEphemerisDayInfo {
	struct FDateTime Date; // 0x00(0x08)
	struct FAziAltTime SunRise; // 0x08(0x10)
	struct FAziAltTime SunSet; // 0x18(0x10)
	struct FAziAltTime SolarTransit; // 0x28(0x10)
	struct FAziAltTime SolarMidnight; // 0x38(0x10)
	struct FTimespan DayLength; // 0x48(0x08)
	struct FTimespan SunRiseTime; // 0x50(0x08)
	struct FTimespan SunSetTime; // 0x58(0x08)
	struct FTimespan SolarTransitTime; // 0x60(0x08)
	struct FTimespan SolarMidnightTime; // 0x68(0x08)
	bool bSunRiseValid; // 0x70(0x01)
	bool bSunSetValid; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct DayNight.AziAltTime
// Size: 0x10 (Inherited: 0x00)
struct FAziAltTime {
	struct FAzimuthAltitude AziAlt; // 0x00(0x08)
	struct FDateTime DateTime; // 0x08(0x08)
};

// ScriptStruct DayNight.AzimuthAltitude
// Size: 0x08 (Inherited: 0x00)
struct FAzimuthAltitude {
	float Azimuth; // 0x00(0x04)
	float Altitude; // 0x04(0x04)
};

// ScriptStruct DayNight.EphemeralSkyState
// Size: 0x190 (Inherited: 0x00)
struct FEphemeralSkyState {
	struct UEphemerisBasis* Basis; // 0x00(0x08)
	struct FDateTime DateTime; // 0x08(0x08)
	struct FEphemeralSunState Sun; // 0x10(0x1c)
	struct FTopographicDirection Sunlight; // 0x2c(0x14)
	struct FTopographicDirection SunDisk; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
	struct FDateTime OverrideSunDateTime; // 0x58(0x08)
	struct FSolarNormalizedTime NormalizedTime; // 0x60(0x04)
	struct FEphemeralMoonState Moon; // 0x64(0x60)
	struct FTopographicDirection MoonLight; // 0xc4(0x14)
	struct FEphemeralPlanetState Venus; // 0xd8(0x1c)
	struct FEphemeralPlanetState Mars; // 0xf4(0x1c)
	struct FEphemeralPlanetState Jupiter; // 0x110(0x1c)
	struct FEphemeralPlanetState Saturn; // 0x12c(0x1c)
	char pad_148[0x8]; // 0x148(0x08)
	struct FEphemeralCelestialSphereState CelestialSphere; // 0x150(0x20)
	float NightDayNegOneToOne; // 0x170(0x04)
	float NightDayLerp; // 0x174(0x04)
	float NightLerp; // 0x178(0x04)
	float DayLerp; // 0x17c(0x04)
	float NightSkyStrength; // 0x180(0x04)
	bool bTimeLerped; // 0x184(0x01)
	bool bNormalizedTimeValid; // 0x185(0x01)
	bool bSunValid; // 0x186(0x01)
	bool bMoonValid; // 0x187(0x01)
	bool bPlanetsValid; // 0x188(0x01)
	bool bCelestialSphereValid; // 0x189(0x01)
	bool bComputed; // 0x18a(0x01)
	bool bUsingSecondaryDirectionalLight; // 0x18b(0x01)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct DayNight.EphemeralCelestialSphereState
// Size: 0x20 (Inherited: 0x00)
struct FEphemeralCelestialSphereState {
	struct FRotator Rotator; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
};

// ScriptStruct DayNight.TopographicDirection
// Size: 0x14 (Inherited: 0x00)
struct FTopographicDirection {
	struct FVector Direction; // 0x00(0x0c)
	float AzimuthDegrees; // 0x0c(0x04)
	float AltitudeDegrees; // 0x10(0x04)
};

// ScriptStruct DayNight.EphemeralPlanetState
// Size: 0x1c (Inherited: 0x14)
struct FEphemeralPlanetState : FTopographicDirection {
	float SunLighting; // 0x14(0x04)
	float SunAngleDegrees; // 0x18(0x04)
};

// ScriptStruct DayNight.EphemeralMoonState
// Size: 0x60 (Inherited: 0x14)
struct FEphemeralMoonState : FTopographicDirection {
	struct FVector Up; // 0x14(0x0c)
	struct FVector Right; // 0x20(0x0c)
	struct FVector LocalSunLight; // 0x2c(0x0c)
	float UnitSize; // 0x38(0x04)
	float Phase; // 0x3c(0x04)
	float DiskPhase; // 0x40(0x04)
	enum class EMoonPhaseName PhaseName; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float Blood; // 0x48(0x04)
	float MoonPeriodDaysOverride; // 0x4c(0x04)
	float DiskScale; // 0x50(0x04)
	float AboveHorizon; // 0x54(0x04)
	float Visibility; // 0x58(0x04)
	float SunAngleDegrees; // 0x5c(0x04)
};

// ScriptStruct DayNight.SolarNormalizedTime
// Size: 0x04 (Inherited: 0x00)
struct FSolarNormalizedTime {
	float NormalizedTime; // 0x00(0x04)
};

// ScriptStruct DayNight.EphemeralSunState
// Size: 0x1c (Inherited: 0x14)
struct FEphemeralSunState : FTopographicDirection {
	float DiskScale; // 0x14(0x04)
	float Visibility; // 0x18(0x04)
};

// ScriptStruct DayNight.EphemerisBasisPerLevel
// Size: 0x28 (Inherited: 0x00)
struct FEphemerisBasisPerLevel {
	struct FName Level; // 0x00(0x08)
	struct FString LevelPartialMatch; // 0x08(0x10)
	struct UEphemerisBasis* Basis; // 0x18(0x08)
	bool bUseSubString; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DayNight.AzimuthAltitudeDegrees
// Size: 0x08 (Inherited: 0x00)
struct FAzimuthAltitudeDegrees {
	float AzimuthDegrees; // 0x00(0x04)
	float AltitudeDegrees; // 0x04(0x04)
};

// ScriptStruct DayNight.ManualMoonSetup
// Size: 0x18 (Inherited: 0x00)
struct FManualMoonSetup {
	enum class EMoonPhaseName Phase; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PhasePercent; // 0x04(0x04)
	float LightingAngle; // 0x08(0x04)
	float SizeFactorPercent; // 0x0c(0x04)
	float BloodPercent; // 0x10(0x04)
	bool bOverride_Phase; // 0x14(0x01)
	bool bOverride_SizeFactor; // 0x15(0x01)
	bool bOverride_Blood; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct DayNight.FixedSunPosition
// Size: 0x28 (Inherited: 0x00)
struct FFixedSunPosition {
	enum class EFixedSunPositionType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Direction; // 0x04(0x0c)
	float AltitudeDegrees; // 0x10(0x04)
	float AzimuthDegrees; // 0x14(0x04)
	struct FTimespan StartTime; // 0x18(0x08)
	struct FTimespan EndTime; // 0x20(0x08)
};

// ScriptStruct DayNight.FixedSunPositionInput
// Size: 0x08 (Inherited: 0x00)
struct FFixedSunPositionInput {
	float Altitude; // 0x00(0x04)
	enum class EFixedSunPositionInputType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct DayNight.MoonPath
// Size: 0x528 (Inherited: 0x00)
struct FMoonPath {
	struct FDateTime Date; // 0x00(0x08)
	struct FRuntimeFloatCurve MoonAltitudeVsMoonAzimuth; // 0x08(0x88)
	struct FRuntimeCurveVector MoonUpVsMoonAzimuth; // 0x90(0x188)
	struct FRuntimeCurveVector MoonRightVsMoonAzimuth; // 0x218(0x188)
	struct FRuntimeCurveVector MoonAzisVsMoonAltitude; // 0x3a0(0x188)
};

// ScriptStruct DayNight.MoonPathSettings
// Size: 0x0c (Inherited: 0x00)
struct FMoonPathSettings {
	int32_t SamplePoints; // 0x00(0x04)
	float CubicTension; // 0x04(0x04)
	bool bHighAccuracyPosition; // 0x08(0x01)
	bool bTrueTopoCentric; // 0x09(0x01)
	bool bRemoveRedundantKeys; // 0x0a(0x01)
	bool bCubicInterpolation; // 0x0b(0x01)
};

// ScriptStruct DayNight.EphemerisSubroutineIdealSunPathPreview
// Size: 0x188 (Inherited: 0x00)
struct FEphemerisSubroutineIdealSunPathPreview {
	struct FEphemerisDayInfo DayInfo; // 0x00(0x78)
	struct FRuntimeFloatCurve AzimuthCurve; // 0x78(0x88)
	struct FRuntimeFloatCurve AltitudeCurve; // 0x100(0x88)
};

// ScriptStruct DayNight.GeocentricOrbitsAdvanced
// Size: 0x34 (Inherited: 0x00)
struct FGeocentricOrbitsAdvanced {
	int32_t Samples; // 0x00(0x04)
	int32_t SubSamples; // 0x04(0x04)
	struct FVector2D TagScale; // 0x08(0x08)
	float OrbitRadiusMeters; // 0x10(0x04)
	float SplineMeshScale; // 0x14(0x04)
	bool bHideAzimuthAltitude; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FColor SunTextColor; // 0x1c(0x04)
	struct FColor MoonTextColor; // 0x20(0x04)
	struct FColor VenusTextColor; // 0x24(0x04)
	struct FColor MarsTextColor; // 0x28(0x04)
	struct FColor JupiterTextColor; // 0x2c(0x04)
	struct FColor SaturnTextColor; // 0x30(0x04)
};

// ScriptStruct DayNight.GeocentricOrbitsShow
// Size: 0x08 (Inherited: 0x00)
struct FGeocentricOrbitsShow {
	bool bSunPath; // 0x00(0x01)
	bool bShowSunExtra; // 0x01(0x01)
	bool bMoonPath; // 0x02(0x01)
	bool bShowMoonPhase; // 0x03(0x01)
	bool bVenusPath; // 0x04(0x01)
	bool bMarsPath; // 0x05(0x01)
	bool bJupiterPath; // 0x06(0x01)
	bool bSaturnPath; // 0x07(0x01)
};

// ScriptStruct DayNight.GeocentricOrbit
// Size: 0x68 (Inherited: 0x00)
struct FGeocentricOrbit {
	struct FGeocentricOrbitResources Resources; // 0x00(0x28)
	struct USplineComponent* Spline; // 0x28(0x08)
	struct USceneComponent* SplineMeshRoot; // 0x30(0x08)
	struct TArray<struct USceneComponent*> Extras; // 0x38(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x48(0x10)
	struct TArray<struct USplineMeshComponent*> SplineMeshes; // 0x58(0x10)
};

// ScriptStruct DayNight.GeocentricOrbitResources
// Size: 0x28 (Inherited: 0x00)
struct FGeocentricOrbitResources {
	struct UStaticMesh* MarkerMesh; // 0x00(0x08)
	struct UMaterialInterface* MarkerMaterial; // 0x08(0x08)
	struct UMaterialInterface* TextMaterial; // 0x10(0x08)
	struct UStaticMesh* VectorMesh; // 0x18(0x08)
	struct UMaterialInterface* VectorMaterial; // 0x20(0x08)
};

// ScriptStruct DayNight.GeocentricOrbitPoint
// Size: 0x30 (Inherited: 0x00)
struct FGeocentricOrbitPoint {
	struct FVector TopographicDir; // 0x00(0x0c)
	struct FVector Up; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FAzimuthAltitudeDegrees AzimuthAltitude; // 0x24(0x08)
	bool bBasisValid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct DayNight.GeocentricOrbitCreateBaseParams
// Size: 0x1c (Inherited: 0x00)
struct FGeocentricOrbitCreateBaseParams {
	struct FName Name; // 0x00(0x08)
	float RadiusMeters; // 0x08(0x04)
	struct FColor TagColor; // 0x0c(0x04)
	struct FVector2D TagScale; // 0x10(0x08)
	char bLinear : 1; // 0x18(0x01)
	char bShowTags : 1; // 0x18(0x01)
	char bShowBasis : 1; // 0x18(0x01)
	char bDebugDraw : 1; // 0x18(0x01)
	char bHiddenInGame : 1; // 0x18(0x01)
	char pad_18_5 : 3; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct DayNight.GeocentricOrbitCreateParams
// Size: 0x40 (Inherited: 0x1c)
struct FGeocentricOrbitCreateParams : FGeocentricOrbitCreateBaseParams {
	struct FTopographicObserver TopographicPosition; // 0x1c(0x14)
	struct FDateTime StartDateTime; // 0x30(0x08)
	int32_t Samples; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DayNight.TopographicObserver
// Size: 0x14 (Inherited: 0x00)
struct FTopographicObserver {
	float LatitudeDegrees; // 0x00(0x04)
	float LongitudeDegrees; // 0x04(0x04)
	int32_t TimeZone; // 0x08(0x04)
	float AltitudeMeters; // 0x0c(0x04)
	float WorldAzimuthOffsetDegrees; // 0x10(0x04)
};

// ScriptStruct DayNight.GeocentricOrbitInputPoint
// Size: 0x60 (Inherited: 0x00)
struct FGeocentricOrbitInputPoint {
	struct FVector TopographicDir; // 0x00(0x0c)
	struct FVector Up; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector LocalSunLight; // 0x24(0x0c)
	struct FAzimuthAltitudeDegrees AzimuthAltitude; // 0x30(0x08)
	struct FDateTime StartDateTime; // 0x38(0x08)
	struct FDateTime EndDateTime; // 0x40(0x08)
	struct FString Extra; // 0x48(0x10)
	int32_t Phase; // 0x58(0x04)
	bool bBasisValid; // 0x5c(0x01)
	bool bTimeOnly; // 0x5d(0x01)
	bool bSubsample; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// ScriptStruct DayNight.MilkyWay
// Size: 0x80 (Inherited: 0x00)
struct FMilkyWay {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x10(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x20(0x10)
	float BaseBrightness; // 0x30(0x04)
	float Contrast; // 0x34(0x04)
	float Desaturation; // 0x38(0x04)
	struct FLinearColor SolidColor; // 0x3c(0x10)
	float SolidColorBlend; // 0x4c(0x04)
	float AlphaEdgePower; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* MoonBrightnessModifier; // 0x58(0x08)
	struct UCurveFloat* MoonFadePower; // 0x60(0x08)
	struct FMilkyWayCorrection Correction; // 0x68(0x10)
	bool bCorrection; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct DayNight.MilkyWayCorrection
// Size: 0x10 (Inherited: 0x00)
struct FMilkyWayCorrection {
	struct FVector Rotation; // 0x00(0x0c)
	float VCorrect; // 0x0c(0x04)
};

// ScriptStruct DayNight.MoonDisk
// Size: 0xd0 (Inherited: 0x00)
struct FMoonDisk {
	struct UProceduralMeshComponent* MeshComponent; // 0x00(0x08)
	struct UMaterial* BaseMaterial; // 0x08(0x08)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x10(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x18(0x08)
	struct FMoonDiskParameters Parameters; // 0x20(0x38)
	struct FMoonDiskComputedState CurrentState; // 0x58(0x6c)
	struct FCelestialDiskMeshParameters MeshParameters; // 0xc4(0x0c)
};

// ScriptStruct DayNight.MoonDiskComputedState
// Size: 0x6c (Inherited: 0x00)
struct FMoonDiskComputedState {
	struct FMoonDiskState State; // 0x00(0x58)
	float Distance; // 0x58(0x04)
	float Size; // 0x5c(0x04)
	float Brightness; // 0x60(0x04)
	float Earthshine; // 0x64(0x04)
	float MoonCosineRadius; // 0x68(0x04)
};

// ScriptStruct DayNight.MoonDiskState
// Size: 0x58 (Inherited: 0x00)
struct FMoonDiskState {
	struct FVector MoonDir; // 0x00(0x0c)
	struct FVector MoonUp; // 0x0c(0x0c)
	float SizeFactor; // 0x18(0x04)
	float Phase; // 0x1c(0x04)
	struct FVector Sunlight; // 0x20(0x0c)
	struct FVector LocalSunLight; // 0x2c(0x0c)
	float UnitSunIntensity; // 0x38(0x04)
	float MoonAltitudeAngle; // 0x3c(0x04)
	float SunAltitudeAngle; // 0x40(0x04)
	float SunMoonAngle; // 0x44(0x04)
	float SunWashoutStrength; // 0x48(0x04)
	float IllusionScale; // 0x4c(0x04)
	float BloodFactor; // 0x50(0x04)
	bool bValid; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct DayNight.MoonDiskParameters
// Size: 0x38 (Inherited: 0x00)
struct FMoonDiskParameters {
	float DayEmissiveTarget; // 0x00(0x04)
	float DayEmissiveMax; // 0x04(0x04)
	float NightEmissiveTarget; // 0x08(0x04)
	float NightEmissiveMax; // 0x0c(0x04)
	float Earthshine; // 0x10(0x04)
	float EarthShineMax; // 0x14(0x04)
	float EarthShineWinterFactor; // 0x18(0x04)
	float SunMoonFullWashoutAngle; // 0x1c(0x04)
	float SunMoonNoWashoutAngle; // 0x20(0x04)
	float AlbedoFloor; // 0x24(0x04)
	float DetailScale; // 0x28(0x04)
	float SpaceLightingPower; // 0x2c(0x04)
	float Size; // 0x30(0x04)
	float Distance; // 0x34(0x04)
};

// ScriptStruct DayNight.StarrySkyHighlights
// Size: 0x20 (Inherited: 0x00)
struct FStarrySkyHighlights {
	struct TArray<struct FName> Constellations; // 0x00(0x10)
	struct TArray<struct FName> Stars; // 0x10(0x10)
};

// ScriptStruct DayNight.StarrySkyCurveParameters
// Size: 0x38 (Inherited: 0x00)
struct FStarrySkyCurveParameters {
	struct UCurveFloat* IntensityMod; // 0x00(0x08)
	struct UCurveFloat* MagnitudeCutoff; // 0x08(0x08)
	struct UCurveFloat* MoonFadeRadius; // 0x10(0x08)
	struct UCurveFloat* MoonFadeHardness; // 0x18(0x08)
	struct UCurveFloat* Desaturation; // 0x20(0x08)
	struct UCurveFloat* HorizonFadePower; // 0x28(0x08)
	float TwinkleIntensity; // 0x30(0x04)
	float TwinkleSpeed; // 0x34(0x04)
};

// ScriptStruct DayNight.StarrySkyParameters
// Size: 0x20 (Inherited: 0x00)
struct FStarrySkyParameters {
	float IntensityMod; // 0x00(0x04)
	float MagnitudeCutoff; // 0x04(0x04)
	float MoonFadeRadius; // 0x08(0x04)
	float MoonFadeHardness; // 0x0c(0x04)
	float Desaturation; // 0x10(0x04)
	float HorizonFadePower; // 0x14(0x04)
	float TwinkleIntensity; // 0x18(0x04)
	float TwinkleSpeed; // 0x1c(0x04)
};

// ScriptStruct DayNight.StarrySkyHighlightParameters
// Size: 0x18 (Inherited: 0x00)
struct FStarrySkyHighlightParameters {
	float HighlightIntensity; // 0x00(0x04)
	float HighlightMagnitudeEmphasis; // 0x04(0x04)
	float HighlightDesaturate; // 0x08(0x04)
	float HighlightUseSurge; // 0x0c(0x04)
	float HighlightSurgeSpeed; // 0x10(0x04)
	float HighlightStarOnlyFactor; // 0x14(0x04)
};

// ScriptStruct DayNight.Planet
// Size: 0x38 (Inherited: 0x00)
struct FPlanet {
	struct UProceduralMeshComponent* MeshComponent; // 0x00(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	struct FLinearColor Color; // 0x18(0x10)
	float Brightness; // 0x28(0x04)
	float DayModulate; // 0x2c(0x04)
	float SizeModulate; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct DayNight.PlanetParams
// Size: 0x08 (Inherited: 0x00)
struct FPlanetParams {
	struct UMaterialInterface* BaseMaterial; // 0x00(0x08)
};

// ScriptStruct DayNight.SolarDay
// Size: 0x178 (Inherited: 0x00)
struct FSolarDay {
	struct FEphemerisDayInfo DayInfo; // 0x00(0x78)
	struct FRichCurve AzimuthCurve; // 0x78(0x80)
	struct FRichCurve AltitudeCurve; // 0xf8(0x80)
};

// ScriptStruct DayNight.SolarDayCreateParams
// Size: 0x08 (Inherited: 0x00)
struct FSolarDayCreateParams {
	int32_t Samples; // 0x00(0x04)
	float ErrorThreshold; // 0x04(0x04)
};

// ScriptStruct DayNight.SunDisk
// Size: 0x118 (Inherited: 0x00)
struct FSunDisk {
	struct UProceduralMeshComponent* MeshComponent; // 0x00(0x08)
	struct UMaterial* BaseMaterial; // 0x08(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x10(0x08)
	struct FSunDiskParameters Parameters; // 0x18(0x48)
	struct FSunDiskCorona Corona; // 0x60(0x48)
	struct FSunDiskOverrides OverrideState; // 0xa8(0x14)
	float OverrideStateLerpAlpha; // 0xbc(0x04)
	struct FSunDiskComputedState CurrentState; // 0xc0(0x4c)
	struct FCelestialDiskMeshParameters MeshParameters; // 0x10c(0x0c)
};

// ScriptStruct DayNight.SunDiskComputedState
// Size: 0x4c (Inherited: 0x00)
struct FSunDiskComputedState {
	struct FSunDiskState State; // 0x00(0x1c)
	float Distance; // 0x1c(0x04)
	float Size; // 0x20(0x04)
	float BaseScale; // 0x24(0x04)
	struct FLinearColor Color; // 0x28(0x10)
	float Desaturation; // 0x38(0x04)
	float Brightness; // 0x3c(0x04)
	float HorizonZ; // 0x40(0x04)
	float CoronaBrightnessFactor; // 0x44(0x04)
	float CoronaAlphaFactor; // 0x48(0x04)
};

// ScriptStruct DayNight.SunDiskState
// Size: 0x1c (Inherited: 0x00)
struct FSunDiskState {
	struct FVector SunDir; // 0x00(0x0c)
	float SunAltitudeAngle; // 0x0c(0x04)
	float SunAzimuthAngle; // 0x10(0x04)
	float SunIllusionScale; // 0x14(0x04)
	bool bValid; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct DayNight.SunDiskCorona
// Size: 0x48 (Inherited: 0x00)
struct FSunDiskCorona {
	struct UProceduralMeshComponent* MeshComponent; // 0x00(0x08)
	struct UMaterialInterface* BaseMaterial; // 0x08(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x10(0x08)
	struct UCurveFloat* BrightnessCurve; // 0x18(0x08)
	struct UCurveFloat* AlphaCurve; // 0x20(0x08)
	struct UCurveFloat* ScaleCurve; // 0x28(0x08)
	struct FCelestialHaloMeshParameters MeshParameters; // 0x30(0x10)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct DayNight.SunDiskParameters
// Size: 0x48 (Inherited: 0x00)
struct FSunDiskParameters {
	bool bAreaBasedEmissive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BaseSizeEmissive; // 0x04(0x04)
	float MinEmissive; // 0x08(0x04)
	float MaxEmissive; // 0x0c(0x04)
	float EmissiveFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* DiskOnlyBrightnessModCurve; // 0x18(0x08)
	struct UCurveFloat* BrightnessModCurve; // 0x20(0x08)
	struct UCurveFloat* ColorTempCurve; // 0x28(0x08)
	struct UCurveLinearColor* ColorCurve; // 0x30(0x08)
	bool bManualColoration; // 0x38(0x01)
	bool bBlackBodyColorTemp; // 0x39(0x01)
	bool bNormalizeUnrealColorTemp; // 0x3a(0x01)
	bool bUseColorTemp; // 0x3b(0x01)
	bool bUseBrightnessMod; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Size; // 0x40(0x04)
	float Distance; // 0x44(0x04)
};

// ScriptStruct DayNight.TimeChangeRequest
// Size: 0x30 (Inherited: 0x00)
struct FTimeChangeRequest {
	struct FTimeDateChangeValue Year; // 0x00(0x08)
	struct FTimeDateChangeValue Month; // 0x08(0x08)
	struct FTimeDateChangeValue Day; // 0x10(0x08)
	struct FTimeDateChangeValue Hours; // 0x18(0x08)
	struct FTimeDateChangeValue Minutes; // 0x20(0x08)
	struct FTimeDateChangeValue Seconds; // 0x28(0x08)
};

// ScriptStruct DayNight.TimeDateChangeValue
// Size: 0x08 (Inherited: 0x00)
struct FTimeDateChangeValue {
	int32_t Value; // 0x00(0x04)
	enum class ETimeDateChangeValueType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct DayNight.TimeController
// Size: 0xb0 (Inherited: 0x00)
struct FTimeController {
	struct UTimeSource* TimeDateSource; // 0x00(0x08)
	struct FDateTime FilteredTime; // 0x08(0x08)
	struct FTimeLerp TimeTransition; // 0x10(0x98)
	float RateTarget; // 0xa8(0x04)
	float RateFilter; // 0xac(0x04)
};

// ScriptStruct DayNight.TimeLerp
// Size: 0x98 (Inherited: 0x00)
struct FTimeLerp {
	struct FRichCurve ChangeCurve; // 0x00(0x80)
	struct FDateTime StartTime; // 0x80(0x08)
	float Age; // 0x88(0x04)
	float CurveDuration; // 0x8c(0x04)
	float bEaseOut; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct DayNight.TimeDateSourceStackVolume
// Size: 0x10 (Inherited: 0x00)
struct FTimeDateSourceStackVolume {
	struct TArray<struct UTimeSourceVolume*> TimeSources; // 0x00(0x10)
};

// ScriptStruct DayNight.TimeDateSourceStack
// Size: 0x10 (Inherited: 0x00)
struct FTimeDateSourceStack {
	struct TArray<struct UTimeSource*> TimeSources; // 0x00(0x10)
};

// ScriptStruct DayNight.LightProbeCaptureTimeSlot
// Size: 0xa0 (Inherited: 0x08)
struct FLightProbeCaptureTimeSlot : FWLightProbesCaptureEvaluator {
	struct FLightProbeCaptureSetupComputer Computer; // 0x08(0x88)
	struct FWLightProbesBlendData ProbesBlendData; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct DayNight.LightProbeCaptureSetupComputer
// Size: 0x88 (Inherited: 0x00)
struct FLightProbeCaptureSetupComputer {
	struct FEphemerisDayInfo DayInfo; // 0x00(0x78)
	struct TArray<struct FLightProbeCaptureTimeInterval> CaptureTimeIntervals; // 0x78(0x10)
};

// ScriptStruct DayNight.LightProbeCaptureTimeInterval
// Size: 0xa0 (Inherited: 0x00)
struct FLightProbeCaptureTimeInterval {
	struct FDateTime CaptureDateTime; // 0x00(0x08)
	float NormalizedStartTime; // 0x08(0x04)
	float DurationHours; // 0x0c(0x04)
	struct FRuntimeFloatCurve TimeLerpCurve; // 0x10(0x88)
	bool bFlipTimeLerpCurveT; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct DayNight.LightProbeCaptureTimeInput
// Size: 0x20 (Inherited: 0x00)
struct FLightProbeCaptureTimeInput {
	struct FTimeInput Time; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* LerpCurve; // 0x10(0x08)
	bool bFlipLerpCurveT; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DayNight.TimeSourceSlotSetupName
// Size: 0x08 (Inherited: 0x00)
struct FTimeSourceSlotSetupName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct DayNight.TimeSourceSlotValidTime
// Size: 0x18 (Inherited: 0x00)
struct FTimeSourceSlotValidTime {
	struct FName Name; // 0x00(0x08)
	struct FDateTime DateTime; // 0x08(0x08)
	struct FTimespan Duration; // 0x10(0x08)
};

// ScriptStruct DayNight.TimeSourceSlotSetupTime
// Size: 0x14 (Inherited: 0x00)
struct FTimeSourceSlotSetupTime {
	struct FName Name; // 0x00(0x08)
	struct FTimeInput Time; // 0x08(0x0c)
};

