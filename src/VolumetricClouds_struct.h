// Enum VolumetricClouds.ECoverageShapeType
enum class ECoverageShapeType : uint8 {
	SPHERE = 0,
	BOX = 1,
	ECoverageShapeType_MAX = 2
};

// Enum VolumetricClouds.EPreviewMode
enum class EPreviewMode : uint8 {
	NONE = 0,
	DEFAULT = 1,
	WEATHER_COVERAGE = 2,
	WEATHER_TYPE = 3,
	WEATHER_PRECIPITATION = 4,
	EPreviewMode_MAX = 5
};

// ScriptStruct VolumetricClouds.VolumetricCloudsPresetParams
// Size: 0x108 (Inherited: 0x08)
struct FVolumetricCloudsPresetParams : FTableRowBase {
	struct FVolumetricCloudsWeatherCoverageParams WeatherCoverage; // 0x08(0x38)
	struct FVolumetricCloudsWeatherTypeParams WeatherType; // 0x40(0x24)
	struct FVolumetricCloudsWeatherPrecipitationParams WeatherPrecipitation; // 0x64(0x24)
	struct FVolumetricCloudsHighAltitudeParams HighAltitude; // 0x88(0x40)
	struct FVolumetricCloudsDetailParams Detail; // 0xc8(0x28)
	struct UTexture2D* OverrideWeather; // 0xf0(0x08)
	struct UTexture2D* OverrideTypeLut; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsDetailParams
// Size: 0x28 (Inherited: 0x00)
struct FVolumetricCloudsDetailParams {
	float Density; // 0x00(0x04)
	float WeatherScale; // 0x04(0x04)
	float ShapeScale; // 0x08(0x04)
	float ErosionDetail; // 0x0c(0x04)
	float ErosionDetailScale; // 0x10(0x04)
	float AnvilBias; // 0x14(0x04)
	float LayerRadius; // 0x18(0x04)
	float LayerVerticalHeight; // 0x1c(0x04)
	float LayerAltitudeOffset; // 0x20(0x04)
	float CoverageCameraFade; // 0x24(0x04)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsHighAltitudeParams
// Size: 0x40 (Inherited: 0x00)
struct FVolumetricCloudsHighAltitudeParams {
	float Chance; // 0x00(0x04)
	float Focus; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
	struct FIntVector Scale; // 0x0c(0x0c)
	struct FVector Offset; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* ChannelPackedTexture; // 0x28(0x08)
	float TextureScale; // 0x30(0x04)
	struct FVector ChannelMask; // 0x34(0x0c)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsWeatherPrecipitationParams
// Size: 0x24 (Inherited: 0x00)
struct FVolumetricCloudsWeatherPrecipitationParams {
	float Chance; // 0x00(0x04)
	float Focus; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
	struct FIntVector Scale; // 0x0c(0x0c)
	struct FVector Offset; // 0x18(0x0c)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsWeatherTypeParams
// Size: 0x24 (Inherited: 0x00)
struct FVolumetricCloudsWeatherTypeParams {
	float Chance; // 0x00(0x04)
	float Focus; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
	struct FIntVector Scale; // 0x0c(0x0c)
	struct FVector Offset; // 0x18(0x0c)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsWeatherCoverageParams
// Size: 0x38 (Inherited: 0x00)
struct FVolumetricCloudsWeatherCoverageParams {
	float Chance; // 0x00(0x04)
	float Focus; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
	struct FIntVector PerlinScale; // 0x0c(0x0c)
	float PerlinIntensity; // 0x18(0x04)
	struct FIntVector WorleyScale; // 0x1c(0x0c)
	float WorleyIntensity; // 0x28(0x04)
	struct FVector Offset; // 0x2c(0x0c)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsLightingParams
// Size: 0x70 (Inherited: 0x00)
struct FVolumetricCloudsLightingParams {
	float Ambient; // 0x00(0x04)
	float Light; // 0x04(0x04)
	float Extinction; // 0x08(0x04)
	float PowderExtinction; // 0x0c(0x04)
	float PowderStrength; // 0x10(0x04)
	float FinalOutput; // 0x14(0x04)
	float SkyLightCloudsOutput; // 0x18(0x04)
	float SkyLightCloudsAlpha; // 0x1c(0x04)
	float SkyLightDesaturate; // 0x20(0x04)
	struct FLinearColor SkyLightGroundColor; // 0x24(0x10)
	float ShadowScale; // 0x34(0x04)
	float ShadowMapCloudShadowDensity; // 0x38(0x04)
	float RayMarchCloudShadowScale; // 0x3c(0x04)
	float RayMarchShadowDensity; // 0x40(0x04)
	float SkyLightShadowDensity; // 0x44(0x04)
	float FogDensityMultiplier; // 0x48(0x04)
	float HeightFogDensityMultiplier; // 0x4c(0x04)
	struct FVector LightDirection; // 0x50(0x0c)
	struct FVector LightColor; // 0x5c(0x0c)
	float LightIntensity; // 0x68(0x04)
	float LightSaturation; // 0x6c(0x04)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsWeatherWindParams
// Size: 0x3c (Inherited: 0x00)
struct FVolumetricCloudsWeatherWindParams {
	bool UseWindSystemDirection; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WindSpeedScale; // 0x04(0x04)
	float WeatherSpeedScale; // 0x08(0x04)
	float HighAltitudeSpeedScale; // 0x0c(0x04)
	struct FVector WindSpeed; // 0x10(0x0c)
	struct FVector WeatherSpeed; // 0x1c(0x0c)
	struct FVector HighAltitudeSpeed; // 0x28(0x0c)
	float WindSkew; // 0x34(0x04)
	float SkyLightWeatherSpeedScale; // 0x38(0x04)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsWeatherState
// Size: 0x20 (Inherited: 0x00)
struct FVolumetricCloudsWeatherState {
	float Temperature; // 0x00(0x04)
	float TemperatureChange; // 0x04(0x04)
	float TemperatureDifference; // 0x08(0x04)
	float CloudChance; // 0x0c(0x04)
	float RainChance; // 0x10(0x04)
	struct FVector Wind; // 0x14(0x0c)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsParams
// Size: 0x280 (Inherited: 0x00)
struct FVolumetricCloudsParams {
	char pad_0[0x4]; // 0x00(0x04)
	float CoverageChance; // 0x04(0x04)
	float CoverageFocus; // 0x08(0x04)
	float CoverageIntensity; // 0x0c(0x04)
	struct FVector4 PerlinCoverageFrequency; // 0x10(0x10)
	struct FVector4 WorleyCoverageFrequency; // 0x20(0x10)
	struct FVector CoverageOffset; // 0x30(0x0c)
	float WeatherScaleZRatio; // 0x3c(0x04)
	float TypeChance; // 0x40(0x04)
	float TypeFocus; // 0x44(0x04)
	float TypeIntensity; // 0x48(0x04)
	struct FVector TypeFrequency; // 0x4c(0x0c)
	struct FVector TypeOffset; // 0x58(0x0c)
	float DensityMultiplier; // 0x64(0x04)
	float DetailStrength; // 0x68(0x04)
	float DetailScale; // 0x6c(0x04)
	float AnvilBias; // 0x70(0x04)
	float PrecipitationChance; // 0x74(0x04)
	float PrecipitationFocus; // 0x78(0x04)
	float PrecipitationIntensity; // 0x7c(0x04)
	struct FVector PrecipitationFrequency; // 0x80(0x0c)
	struct FVector PrecipitationOffset; // 0x8c(0x0c)
	float HighAltitudeChance; // 0x98(0x04)
	float HighAltitudeFocus; // 0x9c(0x04)
	float HighAltitudeIntensity; // 0xa0(0x04)
	struct FVector HighAltitudeFrequency; // 0xa4(0x0c)
	struct UTexture2D* HighAltitudeClouds; // 0xb0(0x08)
	float HighAltitudeScale; // 0xb8(0x04)
	struct FVector HighAltitudeChannelMask; // 0xbc(0x0c)
	struct FVector HighAltitudeOffset; // 0xc8(0x0c)
	float GroundShadowsStrength; // 0xd4(0x04)
	float GroundShadowsWeatherMapPreMultiply; // 0xd8(0x04)
	float GroundShadowsRoilStrength; // 0xdc(0x04)
	float ShapeScale; // 0xe0(0x04)
	struct FVector2D TopBottom; // 0xe4(0x08)
	float ShadowScale; // 0xec(0x04)
	float ShadowMapCloudShadowDensity; // 0xf0(0x04)
	float RayMarchCloudShadowScale; // 0xf4(0x04)
	struct FVector LightDirection; // 0xf8(0x0c)
	struct FVector LightColor; // 0x104(0x0c)
	float LightIntensity; // 0x110(0x04)
	float LightSaturation; // 0x114(0x04)
	struct FLinearColor AmbientTop; // 0x118(0x10)
	struct FLinearColor AmbientBottom; // 0x128(0x10)
	float AmbientBlend; // 0x138(0x04)
	float LightBlend; // 0x13c(0x04)
	float OutputBlend; // 0x140(0x04)
	float SkyLightCloudsAlpha; // 0x144(0x04)
	float SkyLightCloudsOutput; // 0x148(0x04)
	float SkyLightDesaturate; // 0x14c(0x04)
	struct FLinearColor SkyLightGroundColor; // 0x150(0x10)
	float ForwardScattering; // 0x160(0x04)
	float BackwardScattering; // 0x164(0x04)
	struct FLinearColor ExtinctionColor; // 0x168(0x10)
	struct FLinearColor ScatteringColor; // 0x178(0x10)
	float Extinction; // 0x188(0x04)
	float PowderExtinction; // 0x18c(0x04)
	float PowderStrength; // 0x190(0x04)
	float WindSkew; // 0x194(0x04)
	float WispyClumpy; // 0x198(0x04)
	float HighAltitudeHeight; // 0x19c(0x04)
	float RayMarchShadowDensity; // 0x1a0(0x04)
	float SkyLightShadowDensity; // 0x1a4(0x04)
	float FogDensityMultiplier; // 0x1a8(0x04)
	float HeightFogDensityMultiplier; // 0x1ac(0x04)
	float WeatherScale; // 0x1b0(0x04)
	bool UseWindSystemDirection; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	float WindSpeedScale; // 0x1b8(0x04)
	float WeatherSpeedScale; // 0x1bc(0x04)
	float HighAltitudeSpeedScale; // 0x1c0(0x04)
	struct FVector WindSpeed; // 0x1c4(0x0c)
	char pad_1D0[0xc]; // 0x1d0(0x0c)
	struct FVector WeatherSpeed; // 0x1dc(0x0c)
	char pad_1E8[0x18]; // 0x1e8(0x18)
	struct FVector4 HighAltitudeWind; // 0x200(0x10)
	char pad_210[0xc]; // 0x210(0x0c)
	float SkyLightWeatherSpeedScale; // 0x21c(0x04)
	float LayerRadius; // 0x220(0x04)
	float LayerAltitudeOffset; // 0x224(0x04)
	float LayerVerticalHeight; // 0x228(0x04)
	float CoverageCameraFade; // 0x22c(0x04)
	struct UTexture2D* CloudTypeLUT; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
	struct UTexture2D* OverrideWeather; // 0x240(0x08)
	struct FVector ShapeNoiseMainScale; // 0x248(0x0c)
	struct FVector ShapeNoiseSecondaryScale; // 0x254(0x0c)
	struct FVector ShapeNoiseTertiaryScale; // 0x260(0x0c)
	struct FVector DetailNoiseScale; // 0x26c(0x0c)
	char bUseGroundShadowsWeatherMapPreMultiply : 1; // 0x278(0x01)
	char bEnabled : 1; // 0x278(0x01)
	char bOptimize : 1; // 0x278(0x01)
	char bUseSkyAtmosphere : 1; // 0x278(0x01)
	char bAllowOverrideLightDirection : 1; // 0x278(0x01)
	char bAllowOverrideLightColor : 1; // 0x278(0x01)
	char bAllowOverrideLightIntensity : 1; // 0x278(0x01)
	char bAllowOverrideLightSaturation : 1; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsGroundShadowsState
// Size: 0x20 (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowsState {
	struct TWeakObjectPtr<struct ULightComponent> LightComponent; // 0x00(0x08)
	struct UMaterialInstanceDynamic* LightFunctionMID; // 0x08(0x08)
	struct TWeakObjectPtr<struct UTexture2DAlias> WeatherMap; // 0x10(0x08)
	struct TWeakObjectPtr<struct UTexture> RoilTexture; // 0x18(0x08)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsGroundShadowsParams
// Size: 0x60 (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowsParams {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UMaterialParameterCollection* MPC; // 0x08(0x08)
	float LightFunctionScaleFactor; // 0x10(0x04)
	float Opacity; // 0x14(0x04)
	float Sharpening; // 0x18(0x04)
	float WindMultiplier; // 0x1c(0x04)
	struct UCurveFloat* DensityVsPreMultiply; // 0x20(0x08)
	struct UCurveFloat* HardnessVsLightHeight; // 0x28(0x08)
	struct FVolumetricCloudsGroundShadowsRoilParams Roil; // 0x30(0x28)
	bool bModulateByLightHeight; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsGroundShadowsRoilParams
// Size: 0x28 (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowsRoilParams {
	struct UTexture* Texture; // 0x00(0x08)
	float OnOff; // 0x08(0x04)
	float Strength; // 0x0c(0x04)
	float WhispStrength; // 0x10(0x04)
	float WhispStartAlpha; // 0x14(0x04)
	float SpeedFactor; // 0x18(0x04)
	float SpeedPerpFactor; // 0x1c(0x04)
	float Tiling; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct VolumetricClouds.VolumetricCloudsGroundShadowsCutOut
// Size: 0x08 (Inherited: 0x00)
struct FVolumetricCloudsGroundShadowsCutOut {
	float DistanceMeters; // 0x00(0x04)
	float FadeDistanceMeters; // 0x04(0x04)
};

