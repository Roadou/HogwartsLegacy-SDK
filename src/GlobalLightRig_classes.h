// Class GlobalLightRig.BentDirectionalLightWindow
// Size: 0x230 (Inherited: 0x220)
struct UBentDirectionalLightWindow : USceneComponent {
	float TopBottomAngle; // 0x218(0x04)
	float LeftRightAngle; // 0x21c(0x04)
	float CosineTopBottomAngle; // 0x220(0x04)
	float CosineLeftRightAngle; // 0x224(0x04)
	float WindowBaseAngle; // 0x228(0x04)
	bool bEnabled; // 0x22c(0x01)
};

// Class GlobalLightRig.GlobalLightingBlendableBase
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendableBase : UObject {
};

// Class GlobalLightRig.GlobalLightingBlendableBentDirectionalLight
// Size: 0x50 (Inherited: 0x28)
struct UGlobalLightingBlendableBentDirectionalLight : UGlobalLightingBlendableBase {
	char pad_28[0x8]; // 0x28(0x08)
	struct FQuat SunDirection; // 0x30(0x10)
	float SunIntensityMod; // 0x40(0x04)
	float SkyLightIntensityMod; // 0x44(0x04)
	bool bValid; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class GlobalLightRig.BentDirectionalLightVolume
// Size: 0x2c8 (Inherited: 0x248)
struct ABentDirectionalLightVolume : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct FBentDirectionalLightParams Params; // 0x250(0x14)
	char pad_264[0x4]; // 0x264(0x04)
	struct UGlobalLightingBlendableBentDirectionalLight* GlobalLightingBlendable; // 0x268(0x08)
	struct UBoxComponent* BoundingBox; // 0x270(0x08)
	struct FBlendDomain BlendDomain; // 0x278(0x38)
	float Priority; // 0x2b0(0x04)
	float BlendRadius; // 0x2b4(0x04)
	float BlendWeight; // 0x2b8(0x04)
	bool bEnabled; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	float PositionalBlendWeight; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// Class GlobalLightRig.DirectionalLightDirection
// Size: 0x28 (Inherited: 0x28)
struct UDirectionalLightDirection : UObject {
};

// Class GlobalLightRig.DirectionalLightConstantDirection
// Size: 0x38 (Inherited: 0x28)
struct UDirectionalLightConstantDirection : UDirectionalLightDirection {
	struct FVector Direction; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GlobalLightRig.DirectionalLightConstantRotator
// Size: 0x38 (Inherited: 0x28)
struct UDirectionalLightConstantRotator : UDirectionalLightDirection {
	struct FRotator Direction; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GlobalLightRig.DirectionalLightFollowCamera
// Size: 0x30 (Inherited: 0x28)
struct UDirectionalLightFollowCamera : UDirectionalLightDirection {
	float FixedAltitude; // 0x28(0x04)
	bool bFixedAltitude; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class GlobalLightRig.DirectionalLightOpposeCamera
// Size: 0x30 (Inherited: 0x28)
struct UDirectionalLightOpposeCamera : UDirectionalLightDirection {
	float FixedAltitude; // 0x28(0x04)
	bool bFixedAltitude; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class GlobalLightRig.DirectionalLightSideLit
// Size: 0x30 (Inherited: 0x28)
struct UDirectionalLightSideLit : UDirectionalLightDirection {
	float Rotation; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class GlobalLightRig.DirectionalLightOpposePrimary
// Size: 0x28 (Inherited: 0x28)
struct UDirectionalLightOpposePrimary : UDirectionalLightDirection {
};

// Class GlobalLightRig.DirectionalLightParams
// Size: 0x28 (Inherited: 0x28)
struct UDirectionalLightParams : UObject {
};

// Class GlobalLightRig.DirectionalLightParamsFull
// Size: 0x108 (Inherited: 0x28)
struct UDirectionalLightParamsFull : UDirectionalLightParams {
	struct FDirectionalLightParameters Parameters; // 0x28(0xdc)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class GlobalLightRig.DirectionalLightParamsSimple
// Size: 0xb8 (Inherited: 0x28)
struct UDirectionalLightParamsSimple : UDirectionalLightParams {
	struct FDirectionalLightBasicParameters Basic; // 0x28(0x24)
	struct FDirectionalLightAdvancedParameters Advanced; // 0x4c(0x40)
	struct FDirectionalLightShafts LightShafts; // 0x8c(0x28)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class GlobalLightRig.DirectionalLightParamsLightShafts
// Size: 0x50 (Inherited: 0x28)
struct UDirectionalLightParamsLightShafts : UDirectionalLightParams {
	struct FDirectionalLightShafts LightShafts; // 0x28(0x28)
};

// Class GlobalLightRig.DirectionalLightParamsShadows
// Size: 0x48 (Inherited: 0x28)
struct UDirectionalLightParamsShadows : UDirectionalLightParams {
	struct FDirectionalLightShadows Shadows; // 0x28(0x1c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GlobalLightRig.DirectionalLightParamsOverrideFull
// Size: 0x118 (Inherited: 0x28)
struct UDirectionalLightParamsOverrideFull : UDirectionalLightParams {
	struct FDirectionalLightParametersOverride Parameters; // 0x28(0xec)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class GlobalLightRig.DirectionalLightParamsOverrideSimple
// Size: 0x78 (Inherited: 0x28)
struct UDirectionalLightParamsOverrideSimple : UDirectionalLightParams {
	struct FDirectionalLightBasicParametersOverride Basic; // 0x28(0x28)
	struct FDirectionalLightShaftsOverride LightShafts; // 0x50(0x28)
};

// Class GlobalLightRig.DirectionalLightParamsRelativeFull
// Size: 0x408 (Inherited: 0x28)
struct UDirectionalLightParamsRelativeFull : UDirectionalLightParams {
	struct FDirectionalLightParametersRelative Parameters; // 0x28(0x3e0)
};

// Class GlobalLightRig.DirectionalLightParamsRelativeSimple
// Size: 0x190 (Inherited: 0x28)
struct UDirectionalLightParamsRelativeSimple : UDirectionalLightParams {
	struct FDirectionalLightBasicParametersRelative Basic; // 0x28(0xd0)
	struct FDirectionalLightShaftsRelative LightShafts; // 0xf8(0x98)
};

// Class GlobalLightRig.DirectionalLightOff
// Size: 0x30 (Inherited: 0x28)
struct UDirectionalLightOff : UDirectionalLightParams {
	bool bForceVisibilityOff; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class GlobalLightRig.ExpHeightFogTransmuter
// Size: 0x28 (Inherited: 0x28)
struct UExpHeightFogTransmuter : UObject {
};

// Class GlobalLightRig.ExpHeightFogParams
// Size: 0x30 (Inherited: 0x28)
struct UExpHeightFogParams : UObject {
	struct UExpHeightFogTransmuter* Transmuter; // 0x28(0x08)
};

// Class GlobalLightRig.ExpHeightFogParamsNoTransmuter
// Size: 0x30 (Inherited: 0x30)
struct UExpHeightFogParamsNoTransmuter : UExpHeightFogParams {
};

// Class GlobalLightRig.ExpHeightFogParamsFull
// Size: 0x208 (Inherited: 0x30)
struct UExpHeightFogParamsFull : UExpHeightFogParams {
	struct FExpHeightFogParameters Parameters; // 0x30(0x1d8)
};

// Class GlobalLightRig.ExpHeightFogParamsBasic
// Size: 0x70 (Inherited: 0x30)
struct UExpHeightFogParamsBasic : UExpHeightFogParams {
	struct FExpHeightFogBasicParameters Basic; // 0x30(0x3c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsSecond
// Size: 0x40 (Inherited: 0x30)
struct UExpHeightFogParamsSecond : UExpHeightFogParams {
	struct FExpHeightFogSecondParameters Second; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideFull
// Size: 0x228 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideFull : UExpHeightFogParams {
	struct FExpHeightFogParametersOverride Parameters; // 0x30(0x1f8)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideBasic
// Size: 0x70 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideBasic : UExpHeightFogParams {
	struct FExpHeightFogBasicParametersOverride Basic; // 0x30(0x3c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideSecond
// Size: 0x40 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideSecond : UExpHeightFogParams {
	struct FExpHeightFogSecondParametersOverride Second; // 0x30(0x10)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideVolumetricFog
// Size: 0x88 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideVolumetricFog : UExpHeightFogParams {
	struct FExpHeightFogVolumetricParametersOverride VolumetricFog; // 0x30(0x54)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideFog
// Size: 0x140 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideFog : UExpHeightFogParams {
	struct FExpHeightFogBasicParametersOverride Basic; // 0x30(0x3c)
	struct FExpHeightFogSecondParametersOverride Second; // 0x6c(0x10)
	struct FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x7c(0x28)
	struct FExpHeightFogVolumetricParametersOverride VolumetricFog; // 0xa4(0x54)
	struct FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0xf8(0x48)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideVolumetricLighting
// Size: 0x68 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideVolumetricLighting : UExpHeightFogParams {
	struct FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x30(0x38)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideVolumetricNoise
// Size: 0x78 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideVolumetricNoise : UExpHeightFogParams {
	struct FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x30(0x48)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideVolumetricAdvanced
// Size: 0xa8 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideVolumetricAdvanced : UExpHeightFogParams {
	struct FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x30(0x78)
};

// Class GlobalLightRig.ExpHeightFogParamsOverrideVolumetricNoiseWind
// Size: 0x40 (Inherited: 0x30)
struct UExpHeightFogParamsOverrideVolumetricNoiseWind : UExpHeightFogParams {
	struct FVector AddWindVelocity; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeFull
// Size: 0x818 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeFull : UExpHeightFogParams {
	struct FExpHeightFogParametersRelative Parameters; // 0x30(0x7e4)
	char pad_814[0x4]; // 0x814(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeBasic
// Size: 0x188 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeBasic : UExpHeightFogParams {
	struct FExpHeightFogBasicParametersRelative Basic; // 0x30(0x154)
	char pad_184[0x4]; // 0x184(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeSecond
// Size: 0x90 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeSecond : UExpHeightFogParams {
	struct FExpHeightFogSecondParametersRelative Second; // 0x30(0x60)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeVolumetricFog
// Size: 0x1e8 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeVolumetricFog : UExpHeightFogParams {
	struct FExpHeightFogVolumetricParametersRelative VolumetricFog; // 0x30(0x1b8)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeFog
// Size: 0x510 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeFog : UExpHeightFogParams {
	struct FExpHeightFogBasicParametersRelative Basic; // 0x30(0x154)
	struct FExpHeightFogSecondParametersRelative Second; // 0x184(0x60)
	struct FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x1e4(0xb4)
	struct FExpHeightFogVolumetricParametersRelative VolumetricFog; // 0x298(0x1b8)
	struct FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x450(0xc0)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeVolumetricLighting
// Size: 0x1d0 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeVolumetricLighting : UExpHeightFogParams {
	struct FExpHeightFogVolumetricLightingParametersRelative VolumetricLighting; // 0x30(0x1a0)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeVolumetricNoise
// Size: 0xf0 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeVolumetricNoise : UExpHeightFogParams {
	struct FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x30(0xc0)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeVolumetricAdvanced
// Size: 0x198 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeVolumetricAdvanced : UExpHeightFogParams {
	struct FExpHeightFogVolumetricAdvancedParametersRelative VolumetricAdvanced; // 0x30(0x164)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class GlobalLightRig.ExpHeightFogParamsRelativeVolumetricFogExtinctionScale
// Size: 0x50 (Inherited: 0x30)
struct UExpHeightFogParamsRelativeVolumetricFogExtinctionScale : UExpHeightFogParams {
	struct FAdjustedValueFloat VolumetricFogExtinctionScale; // 0x30(0x20)
};

// Class GlobalLightRig.ExpHeightFogParamsTransmute
// Size: 0x30 (Inherited: 0x30)
struct UExpHeightFogParamsTransmute : UExpHeightFogParams {
};

// Class GlobalLightRig.GlobalLightingBlendable
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendable : UGlobalLightingBlendableBase {
};

// Class GlobalLightRig.GlobalLightingBlendableFull
// Size: 0x98 (Inherited: 0x28)
struct UGlobalLightingBlendableFull : UGlobalLightingBlendable {
	struct UDirectionalLightDirection* DirectionalLightDirection; // 0x28(0x08)
	struct UDirectionalLightParams* DirectionalLightParameters; // 0x30(0x08)
	struct UDirectionalLightDirection* SecondaryDirectionalLightDirection; // 0x38(0x08)
	struct UDirectionalLightParams* SecondaryDirectionalLightParameters; // 0x40(0x08)
	struct USkyLightParams* SkyLightParameters; // 0x48(0x08)
	struct USkyAtmosphereParams* SkyAtmosphereParameters; // 0x50(0x08)
	struct UExpHeightFogParams* ExpHeightFogParameters; // 0x58(0x08)
	struct UCloudLightingParams* VolumetricCloudsParameters; // 0x60(0x08)
	struct UCloudsPresetParams* CloudsPresetParameters; // 0x68(0x08)
	struct UCloudsWindParams* CloudsWindParameters; // 0x70(0x08)
	struct UProbeLightingParams* ProbeLightingParameters; // 0x78(0x08)
	struct TArray<struct UGlobalLightingCustomBlendablesValue*> CustomBlendables; // 0x80(0x10)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableUseDefaults
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingBlendableUseDefaults : UGlobalLightingBlendable {
	struct UGlobalLightingDefaults* Defaults; // 0x28(0x08)
	bool bDirectionalLightDirection; // 0x30(0x01)
	bool bDirectionalLightParameters; // 0x31(0x01)
	bool bSecondaryDirectionalLightDirection; // 0x32(0x01)
	bool bSecondaryDirectionalLightParameters; // 0x33(0x01)
	bool bSkyLightParameters; // 0x34(0x01)
	bool bSkyAtmosphereParameters; // 0x35(0x01)
	bool bExpHeightFogParameters; // 0x36(0x01)
	bool bVolumetricCloudsParameters; // 0x37(0x01)
	bool bCloudsPresetParameters; // 0x38(0x01)
	bool bCloudsWindParameters; // 0x39(0x01)
	bool bProbeLightingParameters; // 0x3a(0x01)
	bool bCustomBlendables; // 0x3b(0x01)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class GlobalLightRig.GlobalLightingBlendableDirectionalLight
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingBlendableDirectionalLight : UGlobalLightingBlendable {
	struct UDirectionalLightDirection* DirectionalLightDirection; // 0x28(0x08)
	struct UDirectionalLightParams* DirectionalLightParameters; // 0x30(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableDirectionalLightsOff
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightingBlendableDirectionalLightsOff : UGlobalLightingBlendable {
	bool bForceVisibilityOff; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableSkyLight
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableSkyLight : UGlobalLightingBlendable {
	struct USkyLightParams* SkyLightParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableAtmosphericFog
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendableAtmosphericFog : UGlobalLightingBlendable {
};

// Class GlobalLightRig.GlobalLightingBlendableSkyAtmosphere
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableSkyAtmosphere : UGlobalLightingBlendable {
	struct USkyAtmosphereParams* SkyAtmosphereParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableExpHeightFog
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableExpHeightFog : UGlobalLightingBlendable {
	struct UExpHeightFogParams* ExpHeightFogParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableVolumetricClouds
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableVolumetricClouds : UGlobalLightingBlendable {
	struct UCloudLightingParams* VolumetricCloudsParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableCloudsPreset
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableCloudsPreset : UGlobalLightingBlendable {
	struct UCloudsPresetParams* CloudsPresetParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableCloudsWind
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableCloudsWind : UGlobalLightingBlendable {
	struct UCloudsWindParams* CloudsWindParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableProbeLighting
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableProbeLighting : UGlobalLightingBlendable {
	struct UProbeLightingParams* ProbeLightingParameters; // 0x28(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableSecondaryLight
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingBlendableSecondaryLight : UGlobalLightingBlendable {
	struct UDirectionalLightDirection* SecondaryDirectionalLightDirection; // 0x28(0x08)
	struct UDirectionalLightParams* SecondaryDirectionalLightParameters; // 0x30(0x08)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableCustomBlendables
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingBlendableCustomBlendables : UGlobalLightingBlendable {
	struct TArray<struct UGlobalLightingCustomBlendablesValue*> CustomBlendables; // 0x28(0x10)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GlobalLightRig.GlobalLightingBlendableInterface
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendableInterface : UInterface {
};

// Class GlobalLightRig.GlobalLightingBlendableGTAOCustomBlendables
// Size: 0x50 (Inherited: 0x28)
struct UGlobalLightingBlendableGTAOCustomBlendables : UGlobalLightingBlendable {
	struct FCustomBlendableGTAO GTAO; // 0x28(0x24)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class GlobalLightRig.GlobalLightingBlendableGTAOFromAOVolume
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightingBlendableGTAOFromAOVolume : UGlobalLightingBlendable {
	struct AAmbientOcclusionVolume* AmbientOcclusionVolume; // 0x28(0x08)
};

// Class GlobalLightRig.AmbientOcclusionVolume
// Size: 0x950 (Inherited: 0x280)
struct AAmbientOcclusionVolume : AVolume {
	char pad_280[0x10]; // 0x280(0x10)
	struct FCustomBlendableGTAO GTAO; // 0x290(0x24)
	float BlendablePriority; // 0x2b4(0x04)
	float AmbientOcclusionIntensity; // 0x2b8(0x04)
	float AmbientOcclusionRadius; // 0x2bc(0x04)
	struct UTextureCube* AmbientCubemap; // 0x2c0(0x08)
	struct FLinearColor AmbientCubemapTint; // 0x2c8(0x10)
	float AmbientCubemapIntensity; // 0x2d8(0x04)
	float AmbientOcclusionStaticFraction; // 0x2dc(0x04)
	float AmbientOcclusionFadeDistance; // 0x2e0(0x04)
	float AmbientOcclusionFadeRadius; // 0x2e4(0x04)
	float AmbientOcclusionPower; // 0x2e8(0x04)
	float AmbientOcclusionBias; // 0x2ec(0x04)
	float AmbientOcclusionQuality; // 0x2f0(0x04)
	float AmbientOcclusionMipBlend; // 0x2f4(0x04)
	float AmbientOcclusionMipScale; // 0x2f8(0x04)
	float AmbientOcclusionMipThreshold; // 0x2fc(0x04)
	float Priority; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct FBlendDomain BlendDomain; // 0x308(0x38)
	float BlendRadius; // 0x340(0x04)
	float BlendWeight; // 0x344(0x04)
	char bUnbounded : 1; // 0x348(0x01)
	char bEnabled : 1; // 0x348(0x01)
	char AmbientOcclusionRadiusInWS : 1; // 0x348(0x01)
	char pad_348_3 : 5; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x34c(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x34c(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x34c(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x34d(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x34d(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x34d(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x34d(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x34d(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x34d(0x01)
	char pad_34D_6 : 2; // 0x34d(0x01)
	char pad_34E[0x2]; // 0x34e(0x02)
	struct FPostProcessSettings PostProcessSettings; // 0x350(0x5f0)
	struct UGlobalLightingBlendableGTAOFromAOVolume* GTAOBlendable; // 0x940(0x08)
	char pad_948[0x8]; // 0x948(0x08)

	void UpdatePostProcessSettings(); // Function GlobalLightRig.AmbientOcclusionVolume.UpdatePostProcessSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1b6a6e0
	void SetPriority(float NewPriority); // Function GlobalLightRig.AmbientOcclusionVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1b6a660
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValue
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValue : UObject {
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueAllowDefaults
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueAllowDefaults : UGlobalLightingCustomBlendablesValue {
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueScalar
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueScalar : UGlobalLightingCustomBlendablesValueAllowDefaults {
	struct FGlobalLightingCustomBlendableNameScalar Name; // 0x28(0x10)
	float Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColor
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueLinearColor : UGlobalLightingCustomBlendablesValueAllowDefaults {
	struct FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28(0x10)
	struct FLinearColor Value; // 0x38(0x10)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesLibrary : UBlueprintFunctionLibrary {

	bool GetGlobalLightingCustomBlendableScalarName(struct UObject* WorldContextObject, struct FName ScalarName, float& ScalarValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableScalarName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6a550
	bool GetGlobalLightingCustomBlendableScalar(struct UObject* WorldContextObject, struct FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6a420
	bool GetGlobalLightingCustomBlendableLinearColorName(struct UObject* WorldContextObject, struct FName ColorName, struct FLinearColor& ColorValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableLinearColorName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6a300
	bool GetGlobalLightingCustomBlendableLinearColor(struct UObject* WorldContextObject, struct FGlobalLightingCustomBlendableNameLinearColor Color, struct FLinearColor& ColorValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableLinearColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6a1c0
	bool GetDefaultGlobalLightingCustomBlendableScalarName(struct FName ScalarName, float& ScalarValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableScalarName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6a0e0
	bool GetDefaultGlobalLightingCustomBlendableScalar(struct FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b69fe0
	bool GetDefaultGlobalLightingCustomBlendableLinearColorName(struct FName ColorName, struct FLinearColor& ColorValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableLinearColorName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b69f10
	bool GetDefaultGlobalLightingCustomBlendableLinearColor(struct FGlobalLightingCustomBlendableNameLinearColor Color, struct FLinearColor& ColorValue); // Function GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableLinearColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b69e10
};

// Class GlobalLightRig.BlueprintGlobalLightingCustomBlendables
// Size: 0x48 (Inherited: 0x28)
struct UBlueprintGlobalLightingCustomBlendables : UObject {
	struct TArray<struct FBlueprintGlobalLightingCustomBlendablesScalar> Scalars; // 0x28(0x10)
	struct TArray<struct FBlueprintGlobalLightingCustomBlendablesLinearColor> Colors; // 0x38(0x10)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueScalarCurve
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueScalarCurve : UGlobalLightingCustomBlendablesValue {
	struct FGlobalLightingCustomBlendableNameScalar Name; // 0x28(0x10)
	struct FGlobalLightRigWorldModDriverName Source; // 0x38(0x08)
	struct UCurveFloat* Curve; // 0x40(0x08)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorCurve
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueLinearColorCurve : UGlobalLightingCustomBlendablesValue {
	struct FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28(0x10)
	struct FGlobalLightRigWorldModDriverName Source; // 0x38(0x08)
	struct UCurveLinearColor* Curve; // 0x40(0x08)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorDesaturate
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueLinearColorDesaturate : UGlobalLightingCustomBlendablesValue {
	struct FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28(0x10)
	float Desaturate; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorMultiply
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightingCustomBlendablesValueLinearColorMultiply : UGlobalLightingCustomBlendablesValue {
	struct FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28(0x10)
	float Intensity; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightingBlendableVDHW
// Size: 0x50 (Inherited: 0x28)
struct UGlobalLightingBlendableVDHW : UGlobalLightingBlendable {
	struct FCustomBlendableVDHW VDHW; // 0x28(0x20)
	enum class EGlobalLightingBlendableInputType OverrideSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class GlobalLightRig.GlobalLightingDefaults
// Size: 0x710 (Inherited: 0x30)
struct UGlobalLightingDefaults : UDataAsset {
	struct FRotator LightDirection; // 0x30(0x0c)
	struct FDirectionalLightParameters LightParameters; // 0x3c(0xdc)
	struct FZeroDirectionalLightSettings ZeroDirectionalLightSettings; // 0x118(0x08)
	struct FRotator SecondaryLightDirection; // 0x120(0x0c)
	struct FDirectionalLightParameters SecondaryLightParameters; // 0x12c(0xdc)
	struct FZeroDirectionalLightSettings SecondaryZeroDirectionalLightSettings; // 0x208(0x08)
	struct FSkyLightLightingParameters SkyLightParameters; // 0x210(0xa8)
	struct FSkyAtmosphereParameters SkyAtmosphereParameters; // 0x2b8(0x148)
	struct UMaterialInterface* SingleDirectionalLightMaterialOverride; // 0x400(0x08)
	struct UMaterialInterface* DualDirectionalLightMaterialOverride; // 0x408(0x08)
	struct FExpHeightFogParameters ExpHeightFogParameters; // 0x410(0x1d8)
	struct FVolumetricCloudsLightingParameters CloudLightingParameters; // 0x5e8(0x80)
	struct FProbeLightingParameters ProbeLightingParameters; // 0x668(0x30)
	struct FDataTableRowHandle CloudsPreset; // 0x698(0x10)
	struct FVolumetricCloudsWindParameters CloudsWindParameters; // 0x6a8(0x3c)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct TArray<struct UGlobalLightingCustomBlendablesValueAllowDefaults*> CustomBlendDefaultValues; // 0x6e8(0x10)
	bool bCameraExpHeightFogHeight; // 0x6f8(0x01)
	bool bCloudSceneLightingDefaultToDirectionalLight; // 0x6f9(0x01)
	char pad_6FA[0x6]; // 0x6fa(0x06)
	struct TArray<struct UGlobalLightingBlendable*> ExtraBlendables; // 0x700(0x10)
};

// Class GlobalLightRig.SkyAtmosphereLibrary
// Size: 0x28 (Inherited: 0x28)
struct USkyAtmosphereLibrary : UBlueprintFunctionLibrary {

	bool GetSunZenithLuminance(struct UObject* WorldContextObject, float& Luminance, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunZenithLuminance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6d5b0
	bool GetSunZenithColor(struct UObject* WorldContextObject, struct FLinearColor& SunColor, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunZenithColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6d490
	bool GetSunLuminanceFromDirection(struct UObject* WorldContextObject, struct FVector SunDirection, float& Luminance, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunLuminanceFromDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6d320
	bool GetSunLuminance(struct UObject* WorldContextObject, struct FGlobalLightingSunColorParams Params, float SunAngle, float& Luminance, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunLuminance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6d150
	bool GetSunColorFromDirection(struct UObject* WorldContextObject, struct FVector SunDirection, struct FLinearColor& SunColor, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunColorFromDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6cfd0
	bool GetSunColor(struct UObject* WorldContextObject, struct FGlobalLightingSunColorParams Params, float SunAngle, struct FLinearColor& SunColor, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6ce00
	bool GetSunBaseColor(struct UObject* WorldContextObject, struct FLinearColor& BaseSunColor, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GetSunBaseColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b6cce0
	bool GenerateSunColorCurve(struct UObject* WorldContextObject, struct FGlobalLightingGenerateSunColorCurve CurveParams, struct UCurveLinearColor* SunColorCurve, enum class ESkyAtmosphereDirectionalLight DirectionalLight); // Function GlobalLightRig.SkyAtmosphereLibrary.GenerateSunColorCurve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b6c9a0
};

// Class GlobalLightRig.GlobalLightingMaster
// Size: 0x1110 (Inherited: 0x248)
struct AGlobalLightingMaster : AActor {
	struct UGlobalLightingDefaults* Defaults; // 0x248(0x08)
	struct TArray<struct UGlobalLightingBlendable*> OverrideDefaults; // 0x250(0x10)
	struct FGlobalLightingDirectionalLightState CurrentDirectionalLight; // 0x260(0x110)
	struct FGlobalLightingDirectionalLightState CurrentSecondaryDirectionalLight; // 0x370(0x110)
	struct FSkyLightLightingParameters CurrentSkyLight; // 0x480(0xa8)
	struct FSkyAtmosphereParameters CurrentSkyAtmosphere; // 0x528(0x148)
	struct FExpHeightFogParameters CurrentExpHeightFog; // 0x670(0x1d8)
	struct FProbeLightingParameters CurrentProbeLighting; // 0x848(0x30)
	struct FVolumetricCloudsLightingParameters CurrentCloudsLighting; // 0x878(0x80)
	struct FVolumetricCloudsPresetParameters CurrentCloudsPreset; // 0x8f8(0x110)
	struct FVolumetricCloudsWindParameters CurrentCloudsWind; // 0xa08(0x3c)
	char pad_A44[0x62c]; // 0xa44(0x62c)
	float SkyAtmosphereHeightOffsetMeters; // 0x1070(0x04)
	int32_t UseExternalLightingComponents; // 0x1074(0x04)
	int32_t ControlLightingComponents; // 0x1078(0x04)
	int32_t HideExtraLightingComponents; // 0x107c(0x04)
	int32_t ControlFeatures; // 0x1080(0x04)
	float SkyLightZOffsetMeters; // 0x1084(0x04)
	float SkyLightMoveThresholdMeters; // 0x1088(0x04)
	float SkyLightUpdateThresholdSeconds; // 0x108c(0x04)
	float SkyLightAge; // 0x1090(0x04)
	float Priority; // 0x1094(0x04)
	bool bBounded; // 0x1098(0x01)
	bool bIsMaster; // 0x1099(0x01)
	char pad_109A[0x6]; // 0x109a(0x06)
	struct UDirectionalLightComponent* DirectionalLightComponent; // 0x10a0(0x08)
	struct UDirectionalLightComponent* SecondaryDirectionalLightComponent; // 0x10a8(0x08)
	struct USkyLightComponent* SkyLightComponent; // 0x10b0(0x08)
	struct UExponentialHeightFogComponent* ExpHeightFogComponent; // 0x10b8(0x08)
	struct USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x10c0(0x08)
	struct USkyOnlyComponent* SkyAtmosphereSkyOnlyComponent; // 0x10c8(0x08)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> CachedDirectionalLight; // 0x10d0(0x08)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> CachedSecondaryDirectionalLight; // 0x10d8(0x08)
	struct TWeakObjectPtr<struct USkyLightComponent> CachedSkyLight; // 0x10e0(0x08)
	struct TWeakObjectPtr<struct USkyAtmosphereComponent> CachedSkyAtmosphere; // 0x10e8(0x08)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> CachedExpHeightFog; // 0x10f0(0x08)
	struct TWeakObjectPtr<struct UVolumetricCloudsComponent> CachedVolumetricClouds; // 0x10f8(0x08)
	struct UPostProcessComponent* PostProcessComponent; // 0x1100(0x08)
	char pad_1108[0x8]; // 0x1108(0x08)

	void SetCinematicDefaults(struct UObject* WorldContextObject, struct UGlobalLightingDefaults* CinematicDefaults); // Function GlobalLightRig.GlobalLightingMaster.SetCinematicDefaults // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b6d820
	void GetGlobalLightingMaster(struct UObject* WorldContextObject, struct AGlobalLightingMaster*& GlobalLightingMaster); // Function GlobalLightRig.GlobalLightingMaster.GetGlobalLightingMaster // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b6cc10
	void GetCinematicDefaults(struct UObject* WorldContextObject, struct UGlobalLightingDefaults*& CinematicDefaults); // Function GlobalLightRig.GlobalLightingMaster.GetCinematicDefaults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b6cb40
	void ClearCinematicDefaults(struct UObject* WorldContextObject); // Function GlobalLightRig.GlobalLightingMaster.ClearCinematicDefaults // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b6c8a0
	void CheckWorld(); // Function GlobalLightRig.GlobalLightingMaster.CheckWorld // (Final|Native|Public) // @ game+0x1b6c880
	void CaptureSkyLight(); // Function GlobalLightRig.GlobalLightingMaster.CaptureSkyLight // (Final|Native|Public) // @ game+0x1b6c860
};

// Class GlobalLightRig.GlobalLightingMasterWithClouds
// Size: 0x1130 (Inherited: 0x1110)
struct AGlobalLightingMasterWithClouds : AGlobalLightingMaster {
	float RelativeHeightMeters; // 0x1108(0x04)
	struct URenderSettingsBlendDomainAsset* VisibilityBlendDomain; // 0x1110(0x08)
	float VisibilityBlendDomainThreshold; // 0x1118(0x04)
	struct UVolumetricCloudsComponent* VolumetricCloudsComponent; // 0x1120(0x08)
	char pad_1128[0x8]; // 0x1128(0x08)
};

// Class GlobalLightRig.GlobalLightingSingleton
// Size: 0x118 (Inherited: 0x28)
struct UGlobalLightingSingleton : UObject {
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FGlobalLightingMasterStack> MasterMap; // 0x28(0x50)
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FGlobalLightingBlendableList> BlendableListMap; // 0x78(0x50)
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct UWorldBaseHeightSingleton*> WorldBaseHeightMap; // 0xc8(0x50)

	void RegisterGlobalLightingObject(struct UObject* BlendableLightingObject); // Function GlobalLightRig.GlobalLightingSingleton.RegisterGlobalLightingObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b6d7a0
	void IsRegisteredGlobalLightingObject(struct UObject* BlendableLightingObject, bool& registered); // Function GlobalLightRig.GlobalLightingSingleton.IsRegisteredGlobalLightingObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1b6d6d0
	void DeregisterGlobalLightingObject(struct UObject* BlendableLightingObject); // Function GlobalLightRig.GlobalLightingSingleton.DeregisterGlobalLightingObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b6c920
};

// Class GlobalLightRig.BlendableGlobalLightingComponent
// Size: 0x280 (Inherited: 0x220)
struct UBlendableGlobalLightingComponent : USceneComponent {
	struct UGlobalLightingBlendable* GlobalLightingBlendable; // 0x220(0x08)
	struct FBlendDomain BlendDomain; // 0x228(0x38)
	float Priority; // 0x260(0x04)
	float BlendRadius; // 0x264(0x04)
	float BlendWeight; // 0x268(0x04)
	char bEnabled : 1; // 0x26c(0x01)
	char bUnbounded : 1; // 0x26c(0x01)
	char bCameraExpHeightFogHeight_DEPRICATED : 1; // 0x26c(0x01)
	char pad_26C_3 : 5; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	enum class EGlobalLightingFogZMode FogZMode; // 0x270(0x01)
	char pad_271[0xf]; // 0x271(0x0f)
};

// Class GlobalLightRig.BlendableGlobalLightingVolume
// Size: 0x2e0 (Inherited: 0x280)
struct ABlendableGlobalLightingVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct UGlobalLightingBlendable* GlobalLightingBlendable; // 0x288(0x08)
	struct FBlendDomain BlendDomain; // 0x290(0x38)
	float Priority; // 0x2c8(0x04)
	float BlendRadius; // 0x2cc(0x04)
	float BlendWeight; // 0x2d0(0x04)
	char bUnbounded : 1; // 0x2d4(0x01)
	char bEnabled : 1; // 0x2d4(0x01)
	char bCameraExpHeightFogHeight_DEPRICATED : 1; // 0x2d4(0x01)
	char pad_2D4_3 : 5; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	enum class EGlobalLightingFogZMode FogZMode; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFogDefaultsBase
// Size: 0x80 (Inherited: 0x30)
struct UBlendableGlobalLightingVolumeFogDefaultsBase : UDataAsset {
	enum class EGlobalLightingFogZMode FogZMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UExpHeightFogTransmuter* Transmuter; // 0x38(0x08)
	struct FBlendDomain BlendDomain; // 0x40(0x38)
	float Priority; // 0x78(0x04)
	float BlendRadius; // 0x7c(0x04)
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFogDefaults
// Size: 0x1c8 (Inherited: 0x80)
struct UBlendableGlobalLightingVolumeFogDefaults : UBlendableGlobalLightingVolumeFogDefaultsBase {
	struct FExpHeightFogBasicParametersOverride Basic; // 0x80(0x3c)
	struct FExpHeightFogSecondParametersOverride Second; // 0xbc(0x10)
	struct FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0xcc(0x28)
	struct FExpHeightFogVolumetricParametersOverride Volumetric; // 0xf4(0x54)
	struct FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x148(0x38)
	struct FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x180(0x48)
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFogRelativeDefaults
// Size: 0x560 (Inherited: 0x80)
struct UBlendableGlobalLightingVolumeFogRelativeDefaults : UBlendableGlobalLightingVolumeFogDefaultsBase {
	struct FExpHeightFogBasicParametersRelative Basic; // 0x80(0x154)
	struct FExpHeightFogSecondParametersRelative Second; // 0x1d4(0x60)
	struct FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x234(0xb4)
	struct FExpHeightFogVolumetricParametersRelative Volumetric; // 0x2e8(0x1b8)
	struct FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x4a0(0xc0)
};

// Class GlobalLightRig.GlobalLightingBlendableExpHeightFogVolume
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendableExpHeightFogVolume : UGlobalLightingBlendable {
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFogBase
// Size: 0x2e8 (Inherited: 0x280)
struct ABlendableGlobalLightingVolumeFogBase : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	enum class EGlobalLightingFogZMode FogZMode; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UExpHeightFogTransmuter* Transmuter; // 0x290(0x08)
	struct FBlendDomain BlendDomain; // 0x298(0x38)
	float Priority; // 0x2d0(0x04)
	float BlendRadius; // 0x2d4(0x04)
	float BlendWeight; // 0x2d8(0x04)
	bool bUnbounded; // 0x2dc(0x01)
	bool bEnabled; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	struct UGlobalLightingBlendableExpHeightFogVolume* GlobalLightingBlendable; // 0x2e0(0x08)
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFog
// Size: 0x4b0 (Inherited: 0x2e8)
struct ABlendableGlobalLightingVolumeFog : ABlendableGlobalLightingVolumeFogBase {
	struct FExpHeightFogBasicParametersOverride Basic; // 0x2e8(0x3c)
	struct FExpHeightFogSecondParametersOverride Second; // 0x324(0x10)
	struct FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x334(0x28)
	struct FExpHeightFogVolumetricParametersOverride Volumetric; // 0x35c(0x54)
	struct FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x3b0(0x38)
	struct FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x3e8(0x48)
	struct FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x430(0x78)
	struct UBlendableGlobalLightingVolumeFogDefaults* Defaults; // 0x4a8(0x08)

	void ReloadDefaults(); // Function GlobalLightRig.BlendableGlobalLightingVolumeFog.ReloadDefaults // (Final|Native|Public) // @ game+0x13244f0
};

// Class GlobalLightRig.BlendableGlobalLightingVolumeFogRelative
// Size: 0x7d0 (Inherited: 0x2e8)
struct ABlendableGlobalLightingVolumeFogRelative : ABlendableGlobalLightingVolumeFogBase {
	struct FExpHeightFogBasicParametersRelative Basic; // 0x2e8(0x154)
	struct FExpHeightFogSecondParametersRelative Second; // 0x43c(0x60)
	struct FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x49c(0xb4)
	struct FExpHeightFogVolumetricParametersRelative Volumetric; // 0x550(0x1b8)
	struct FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x708(0xc0)
	struct UBlendableGlobalLightingVolumeFogRelativeDefaults* Defaults; // 0x7c8(0x08)

	void ReloadDefaults(); // Function GlobalLightRig.BlendableGlobalLightingVolumeFogRelative.ReloadDefaults // (Final|Native|Public) // @ game+0x13244f0
};

// Class GlobalLightRig.GlobalLightRigMod
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigMod : UObject {
};

// Class GlobalLightRig.GlobalLightRigModOption
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOption : UObject {
};

// Class GlobalLightRig.GlobalLightRigModOptionDisable
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionDisable : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionNotes
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionNotes : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionProbeOnly
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionProbeOnly : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionGameOnly
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionGameOnly : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTypeMultiply
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTypeMultiply : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTypeAdd
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTypeAdd : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTypeMinimum
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTypeMinimum : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTypeMaximum
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTypeMaximum : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformNegate
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformNegate : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformAbs
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformAbs : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformOneMinus
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformOneMinus : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformSaturate
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformSaturate : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformSquare
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformSquare : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModOptionTransformNormalize
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModOptionTransformNormalize : UGlobalLightRigModOption {
};

// Class GlobalLightRig.GlobalLightRigModFloatBase
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModFloatBase : UGlobalLightRigMod {
};

// Class GlobalLightRig.GlobalLightRigModFloatCurve
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightRigModFloatCurve : UGlobalLightRigModFloatBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGlobalLightRigWorldModDriverName Source; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* Curve; // 0x38(0x08)
	enum class EGlobalLightRigModColorConversionType ColorConversion; // 0x40(0x01)
	enum class EGlobalLightRigModType Type; // 0x41(0x01)
	enum class EGlobalLightRigProbeMode Mode; // 0x42(0x01)
	bool bEnabled; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GlobalLightRig.GlobalLightRigModFloatConstant
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightRigModFloatConstant : UGlobalLightRigModFloatBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Value; // 0x2c(0x04)
	enum class EGlobalLightRigModColorConversionType ColorConversion; // 0x30(0x01)
	enum class EGlobalLightRigModType Type; // 0x31(0x01)
	enum class EGlobalLightRigProbeMode Mode; // 0x32(0x01)
	bool bEnabled; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GlobalLightRig.GlobalLightRigModFloatConstantNew
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightRigModFloatConstantNew : UGlobalLightRigModFloatBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Value; // 0x2c(0x04)
	struct TArray<struct UGlobalLightRigModOption*> Modifiers; // 0x30(0x10)
	enum class EGlobalLightRigModColorConversionType ColorConversion; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class GlobalLightRig.GlobalLightRigModFloatCurveNew
// Size: 0x58 (Inherited: 0x28)
struct UGlobalLightRigModFloatCurveNew : UGlobalLightRigModFloatBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGlobalLightRigWorldModDriverName Source; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* Curve; // 0x38(0x08)
	struct TArray<struct UGlobalLightRigModOption*> Modifiers; // 0x40(0x10)
	enum class EGlobalLightRigModColorConversionType ColorConversion; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class GlobalLightRig.GlobalLightRigModColorBase
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightRigModColorBase : UGlobalLightRigMod {
};

// Class GlobalLightRig.GlobalLightRigModColorCurve
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightRigModColorCurve : UGlobalLightRigModColorBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGlobalLightRigWorldModDriverName Source; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveLinearColor* Curve; // 0x38(0x08)
	enum class EGlobalLightRigModLinearColorType ColorType; // 0x40(0x01)
	enum class EGlobalLightRigModType Type; // 0x41(0x01)
	enum class EGlobalLightRigProbeMode Mode; // 0x42(0x01)
	bool bEnabled; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GlobalLightRig.GlobalLightRigModColorConstant
// Size: 0x40 (Inherited: 0x28)
struct UGlobalLightRigModColorConstant : UGlobalLightRigModColorBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor Color; // 0x2c(0x10)
	enum class EGlobalLightRigModLinearColorType ColorType; // 0x3c(0x01)
	enum class EGlobalLightRigModType Type; // 0x3d(0x01)
	enum class EGlobalLightRigProbeMode Mode; // 0x3e(0x01)
	bool bEnabled; // 0x3f(0x01)
};

// Class GlobalLightRig.GlobalLightRigModColorCurveNew
// Size: 0x58 (Inherited: 0x28)
struct UGlobalLightRigModColorCurveNew : UGlobalLightRigModColorBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGlobalLightRigWorldModDriverName Source; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveLinearColor* Curve; // 0x38(0x08)
	enum class EGlobalLightRigModLinearColorType ColorType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UGlobalLightRigModOption*> Modifiers; // 0x48(0x10)
};

// Class GlobalLightRig.GlobalLightRigModColorConstantNew
// Size: 0x50 (Inherited: 0x28)
struct UGlobalLightRigModColorConstantNew : UGlobalLightRigModColorBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor Color; // 0x2c(0x10)
	enum class EGlobalLightRigModLinearColorType ColorType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct UGlobalLightRigModOption*> Modifiers; // 0x40(0x10)
};

// Class GlobalLightRig.GlobalLightRigModCollection
// Size: 0x40 (Inherited: 0x30)
struct UGlobalLightRigModCollection : UDataAsset {
	struct TArray<struct UGlobalLightRigMod*> Mods; // 0x30(0x10)
};

// Class GlobalLightRig.GlobalLightingBlendableModsBase
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightingBlendableModsBase : UGlobalLightingBlendable {
};

// Class GlobalLightRig.GlobalLightingBlendableMods
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightingBlendableMods : UGlobalLightingBlendableModsBase {
	struct TArray<struct UGlobalLightRigMod*> Mods; // 0x28(0x10)
};

// Class GlobalLightRig.GlobalLightingBlendableModCollection
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightingBlendableModCollection : UGlobalLightingBlendableModsBase {
	struct UGlobalLightRigModCollection* ModCollection; // 0x28(0x08)
};

// Class GlobalLightRig.ExpHeightFogTransmuterGlobalLightRigMod
// Size: 0x38 (Inherited: 0x28)
struct UExpHeightFogTransmuterGlobalLightRigMod : UExpHeightFogTransmuter {
	struct TArray<struct UGlobalLightRigMod*> Mods; // 0x28(0x10)
};

// Class GlobalLightRig.ExpHeightFogTransmuterGlobalLightRigModCollection
// Size: 0x30 (Inherited: 0x28)
struct UExpHeightFogTransmuterGlobalLightRigModCollection : UExpHeightFogTransmuter {
	struct UGlobalLightRigModCollection* ModCollection; // 0x28(0x08)
};

// Class GlobalLightRig.GlobalLightRigModFloatExternal
// Size: 0x48 (Inherited: 0x28)
struct UGlobalLightRigModFloatExternal : UGlobalLightRigModFloatBase {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct UGlobalLightRigModOption*> Modifiers; // 0x30(0x10)
	enum class EGlobalLightRigModColorConversionType ColorConversion; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class GlobalLightRig.GlobalLightRigModFloatBlendDomain
// Size: 0x50 (Inherited: 0x48)
struct UGlobalLightRigModFloatBlendDomain : UGlobalLightRigModFloatExternal {
	struct URenderSettingsCustomBlendDomain* BlendDomain; // 0x48(0x08)
};

// Class GlobalLightRig.GlobalLightRigModFloatExposureExpressionEV100
// Size: 0x50 (Inherited: 0x48)
struct UGlobalLightRigModFloatExposureExpressionEV100 : UGlobalLightRigModFloatExternal {
	struct UExposureExpressionsExposureValue* ExposureExpression; // 0x48(0x08)
};

// Class GlobalLightRig.GlobalLightRigModFloatLerpVolumeScalar
// Size: 0x50 (Inherited: 0x48)
struct UGlobalLightRigModFloatLerpVolumeScalar : UGlobalLightRigModFloatExternal {
	struct FLerpVolumesScalarName Name; // 0x48(0x08)
};

// Class GlobalLightRig.GlobalLightRigModLerpControl
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightRigModLerpControl : UObject {
	enum class EGlobalLightRigModParam Param; // 0x28(0x01)
	bool bEnabled; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class GlobalLightRig.GlobalLightRigModLerpCurve
// Size: 0x38 (Inherited: 0x30)
struct UGlobalLightRigModLerpCurve : UGlobalLightRigModLerpControl {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class GlobalLightRig.GlobalLightRigModLerpBinary
// Size: 0x38 (Inherited: 0x30)
struct UGlobalLightRigModLerpBinary : UGlobalLightRigModLerpControl {
	bool bInvert; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GlobalLightRig.GlobalLightRigModLerpOnOff
// Size: 0x40 (Inherited: 0x38)
struct UGlobalLightRigModLerpOnOff : UGlobalLightRigModLerpBinary {
	float Cutoff; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightRigModLerpIfNotZero
// Size: 0x40 (Inherited: 0x38)
struct UGlobalLightRigModLerpIfNotZero : UGlobalLightRigModLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightRigModLerpIfOne
// Size: 0x40 (Inherited: 0x38)
struct UGlobalLightRigModLerpIfOne : UGlobalLightRigModLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.GlobalLightRigModLerpEase
// Size: 0x38 (Inherited: 0x30)
struct UGlobalLightRigModLerpEase : UGlobalLightRigModLerpControl {
	enum class EGlobalLightRigModLerpEasingType Easing; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float BlendExp; // 0x34(0x04)
};

// Class GlobalLightRig.ProbeLightingParams
// Size: 0x28 (Inherited: 0x28)
struct UProbeLightingParams : UObject {
};

// Class GlobalLightRig.ProbeLightingParamsFull
// Size: 0x58 (Inherited: 0x28)
struct UProbeLightingParamsFull : UProbeLightingParams {
	struct FProbeLightingParameters Parameters; // 0x28(0x30)
};

// Class GlobalLightRig.ProbeLightingParamsAdjustments
// Size: 0x38 (Inherited: 0x28)
struct UProbeLightingParamsAdjustments : UProbeLightingParams {
	struct FProbeLightingAdjustmentParameters Parameters; // 0x28(0x10)
};

// Class GlobalLightRig.ProbeLightingParamsToneMap
// Size: 0x38 (Inherited: 0x28)
struct UProbeLightingParamsToneMap : UProbeLightingParams {
	struct FProbeLightingToneMapParameters Parameters; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GlobalLightRig.ProbeLightingParamsContactShadows
// Size: 0x40 (Inherited: 0x28)
struct UProbeLightingParamsContactShadows : UProbeLightingParams {
	struct FProbeContactShadowsParameters Parameters; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.ProbeLightingParamsOverride
// Size: 0x68 (Inherited: 0x28)
struct UProbeLightingParamsOverride : UProbeLightingParams {
	struct FProbeLightingParametersOverride Parameters; // 0x28(0x3c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class GlobalLightRig.ProbeLightingParamsAdjustmentsOverride
// Size: 0x40 (Inherited: 0x28)
struct UProbeLightingParamsAdjustmentsOverride : UProbeLightingParams {
	struct FProbeLightingAdjustmentParametersOverride Parameters; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.ProbeLightingParamsToneMapOverride
// Size: 0x38 (Inherited: 0x28)
struct UProbeLightingParamsToneMapOverride : UProbeLightingParams {
	struct FProbeLightingToneMapParametersOverride Parameters; // 0x28(0x10)
};

// Class GlobalLightRig.ProbeLightingParamsContactShadowsOverride
// Size: 0x40 (Inherited: 0x28)
struct UProbeLightingParamsContactShadowsOverride : UProbeLightingParams {
	struct FProbeContactShadowsParametersOverride Parameters; // 0x28(0x18)
};

// Class GlobalLightRig.SkyAtmosphereParams
// Size: 0x28 (Inherited: 0x28)
struct USkyAtmosphereParams : UObject {
};

// Class GlobalLightRig.SkyAtmosphereParamsFull
// Size: 0x170 (Inherited: 0x28)
struct USkyAtmosphereParamsFull : USkyAtmosphereParams {
	struct FSkyAtmosphereParameters Parameters; // 0x28(0x148)
};

// Class GlobalLightRig.SkyAtmosphereParamsOverrideFull
// Size: 0x1a0 (Inherited: 0x28)
struct USkyAtmosphereParamsOverrideFull : USkyAtmosphereParams {
	struct FSkyAtmosphereParametersOverride Parameters; // 0x28(0x178)
};

// Class GlobalLightRig.SkyAtmosphereParamsOverrideScattering
// Size: 0x78 (Inherited: 0x28)
struct USkyAtmosphereParamsOverrideScattering : USkyAtmosphereParams {
	struct FSkyAtmosphereScatteringParametersOverride Scattering; // 0x28(0x50)
};

// Class GlobalLightRig.SkyAtmosphereParamsOverrideOzone
// Size: 0x50 (Inherited: 0x28)
struct USkyAtmosphereParamsOverrideOzone : USkyAtmosphereParams {
	struct FSkyAtmosphereOzoneParametersOverride Ozone; // 0x28(0x24)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class GlobalLightRig.SkyAtmosphereParamsOverrideArtDirection
// Size: 0x98 (Inherited: 0x28)
struct USkyAtmosphereParamsOverrideArtDirection : USkyAtmosphereParams {
	struct FSkyAtmosphereArtDirectionParametersOverride ArtDirection; // 0x28(0x70)
};

// Class GlobalLightRig.SkyAtmosphereParamsOverrideSkyOnly
// Size: 0x88 (Inherited: 0x28)
struct USkyAtmosphereParamsOverrideSkyOnly : USkyAtmosphereParams {
	struct FSkyAtmosphereSkyOnlyParametersOverride SkyOnly; // 0x28(0x60)
};

// Class GlobalLightRig.SkyLightParams
// Size: 0x28 (Inherited: 0x28)
struct USkyLightParams : UObject {
};

// Class GlobalLightRig.SkyLightParamsFull
// Size: 0xd0 (Inherited: 0x28)
struct USkyLightParamsFull : USkyLightParams {
	struct FSkyLightLightingParameters Parameters; // 0x28(0xa8)
};

// Class GlobalLightRig.SkyLightParamsSimple
// Size: 0x38 (Inherited: 0x28)
struct USkyLightParamsSimple : USkyLightParams {
	struct FSkyLightBasicParameters Basic; // 0x28(0x10)
};

// Class GlobalLightRig.SkyLightParamsHemisphere
// Size: 0x68 (Inherited: 0x28)
struct USkyLightParamsHemisphere : USkyLightParams {
	struct FSkyLightHemisphereParameters Hemisphere; // 0x28(0x3c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class GlobalLightRig.SkyLightParamsOverrideFull
// Size: 0xd8 (Inherited: 0x28)
struct USkyLightParamsOverrideFull : USkyLightParams {
	struct FSkyLightLightingParametersOverride Parameters; // 0x28(0xb0)
};

// Class GlobalLightRig.SkyLightParamsOverrideBasic
// Size: 0x40 (Inherited: 0x28)
struct USkyLightParamsOverrideBasic : USkyLightParams {
	struct FSkyLightBasicParametersOverride Basic; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GlobalLightRig.SkyLightParamsOverrideAdvanced
// Size: 0x60 (Inherited: 0x28)
struct USkyLightParamsOverrideAdvanced : USkyLightParams {
	struct FSkyLightAdvancedParametersOverride Advanced; // 0x28(0x38)
};

// Class GlobalLightRig.SkyLightParamsOverrideDFAO
// Size: 0x48 (Inherited: 0x28)
struct USkyLightParamsOverrideDFAO : USkyLightParams {
	struct FSkyLightDFAOParametersOverride DFAO; // 0x28(0x1c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GlobalLightRig.SkyLightParamsOverrideHemisphere
// Size: 0x68 (Inherited: 0x28)
struct USkyLightParamsOverrideHemisphere : USkyLightParams {
	struct FSkyLightHemisphereParametersOverride Hemisphere; // 0x28(0x3c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class GlobalLightRig.SkyLightParamsRelativeBasic
// Size: 0x90 (Inherited: 0x28)
struct USkyLightParamsRelativeBasic : USkyLightParams {
	struct FSkyLightBasicParametersRelative Basic; // 0x28(0x68)
};

// Class GlobalLightRig.SkyOnlyComponent
// Size: 0x580 (Inherited: 0x510)
struct USkyOnlyComponent : UStaticMeshComponent {
	struct UMaterialInterface* SingleDirectionalLightMaterial; // 0x510(0x08)
	struct UMaterialInterface* DualDirectionalLightMaterial; // 0x518(0x08)
	struct FSkyAtmosphereSkyOnlyParameters Parameters; // 0x520(0x50)
	struct UMaterialInterface* SingleDirectionalLightMaterialOverride; // 0x570(0x08)
	struct UMaterialInterface* DualDirectionalLightMaterialOverride; // 0x578(0x08)
};

// Class GlobalLightRig.SkyOnly
// Size: 0x2b0 (Inherited: 0x248)
struct ASkyOnly : AInfo {
	struct USkyOnlyComponent* SkyOnlyComponent; // 0x248(0x08)
	struct FSkyAtmosphereSkyOnlyParameters Parameters; // 0x250(0x50)
	bool bDualDirectionalLights; // 0x2a0(0x01)
	bool bEnabled; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	struct TWeakObjectPtr<struct USkyAtmosphereComponent> CachedVisibleSkyAtmosphere; // 0x2a4(0x08)
	char pad_2AC[0x4]; // 0x2ac(0x04)
};

// Class GlobalLightRig.CloudLightingParams
// Size: 0x28 (Inherited: 0x28)
struct UCloudLightingParams : UObject {
};

// Class GlobalLightRig.CloudLightingParamsFull
// Size: 0xb0 (Inherited: 0x28)
struct UCloudLightingParamsFull : UCloudLightingParams {
	struct FVolumetricCloudsLightingParameters Parameters; // 0x28(0x80)
	bool bSetSceneLighting; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class GlobalLightRig.CloudLightingParamsSimple
// Size: 0x60 (Inherited: 0x28)
struct UCloudLightingParamsSimple : UCloudLightingParams {
	struct FVolumetricCloudsBasicParameters Basic; // 0x28(0x18)
	struct FVolumetricCloudsSkyLightParameters SkyLight; // 0x40(0x1c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class GlobalLightRig.CloudLightingParamsOverrideFull
// Size: 0xc0 (Inherited: 0x28)
struct UCloudLightingParamsOverrideFull : UCloudLightingParams {
	struct FVolumetricCloudsLightingParametersOverride Parameters; // 0x28(0x94)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class GlobalLightRig.CloudLightingParamsOverrideBasic
// Size: 0x60 (Inherited: 0x28)
struct UCloudLightingParamsOverrideBasic : UCloudLightingParams {
	struct FVolumetricCloudsBasicParametersOverride Basic; // 0x28(0x14)
	struct FVolumetricCloudsSkyLightParametersOverride SkyLight; // 0x3c(0x20)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class GlobalLightRig.CloudLightingParamsSceneLightingSun
// Size: 0x48 (Inherited: 0x28)
struct UCloudLightingParamsSceneLightingSun : UCloudLightingParams {
	char bOverride_Color : 1; // 0x28(0x01)
	char bOverride_Intensity : 1; // 0x28(0x01)
	char bOverride_Saturation : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor Color; // 0x2c(0x10)
	float Intensity; // 0x3c(0x04)
	float Saturation; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GlobalLightRig.CloudLightingParamsSceneLighting
// Size: 0x50 (Inherited: 0x28)
struct UCloudLightingParamsSceneLighting : UCloudLightingParams {
	struct FVolumetricCloudsSceneLightRotatorParameters SceneLight; // 0x28(0x24)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class GlobalLightRig.CloudLightingParamsOverrideSceneLighting
// Size: 0x50 (Inherited: 0x28)
struct UCloudLightingParamsOverrideSceneLighting : UCloudLightingParams {
	struct FVolumetricCloudsSceneLightRotatorParametersOverride SceneLight; // 0x28(0x28)
};

// Class GlobalLightRig.CloudLightingParamsForceDirectionalSceneLighting
// Size: 0x28 (Inherited: 0x28)
struct UCloudLightingParamsForceDirectionalSceneLighting : UCloudLightingParams {
};

// Class GlobalLightRig.CloudsPresetParams
// Size: 0x28 (Inherited: 0x28)
struct UCloudsPresetParams : UObject {
};

// Class GlobalLightRig.CloudsPresetParamsFromPreset
// Size: 0x38 (Inherited: 0x28)
struct UCloudsPresetParamsFromPreset : UCloudsPresetParams {
	struct FDataTableRowHandle Preset; // 0x28(0x10)
};

// Class GlobalLightRig.CloudsPresetParamsRaw
// Size: 0x138 (Inherited: 0x28)
struct UCloudsPresetParamsRaw : UCloudsPresetParams {
	struct FVolumetricCloudsPresetParameters Parameters; // 0x28(0x110)
};

// Class GlobalLightRig.CloudsWindParams
// Size: 0x28 (Inherited: 0x28)
struct UCloudsWindParams : UObject {
};

// Class GlobalLightRig.CloudsWindParamsFull
// Size: 0x68 (Inherited: 0x28)
struct UCloudsWindParamsFull : UCloudsWindParams {
	struct FVolumetricCloudsWindParameters Parameters; // 0x28(0x3c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class GlobalLightRig.CloudsWindParamsOverride
// Size: 0x58 (Inherited: 0x28)
struct UCloudsWindParamsOverride : UCloudsWindParams {
	struct FVolumetricCloudsWindParametersOverride Parameters; // 0x28(0x30)
};

// Class GlobalLightRig.WorldBaseHeightSingleton
// Size: 0xb0 (Inherited: 0x28)
struct UWorldBaseHeightSingleton : UObject {
	struct FWorldBaseHeights Base; // 0x28(0x0c)
	struct FWorldBaseHeightsTracker Offsets; // 0x34(0x10)
	struct FWorldBaseHeights Final; // 0x44(0x0c)
	int32_t UpdateDisable; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UWorld* OwningWorld; // 0x58(0x08)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> SetFogComponent; // 0x60(0x08)
	struct TWeakObjectPtr<struct UVolumetricCloudsComponent> SetCloudsComponent; // 0x68(0x08)
	struct TWeakObjectPtr<struct USceneComponent> SetAtmosphereComponent; // 0x70(0x08)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> CachedFogComponent; // 0x78(0x08)
	struct TWeakObjectPtr<struct UVolumetricCloudsComponent> CachedCloudsComponent; // 0x80(0x08)
	struct TWeakObjectPtr<struct USceneComponent> CachedAtmosphereComponent; // 0x88(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> BaseOverrides; // 0x90(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> BaseHeightObjects; // 0xa0(0x10)
};

// Class GlobalLightRig.WorldBaseHeightInterface
// Size: 0x28 (Inherited: 0x28)
struct UWorldBaseHeightInterface : UInterface {
};

// Class GlobalLightRig.WorldBaseHeightBase
// Size: 0x298 (Inherited: 0x248)
struct AWorldBaseHeightBase : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	int32_t Affects; // 0x250(0x04)
	float Priority; // 0x254(0x04)
	struct FBlendDomain BlendDomain; // 0x258(0x38)
	bool bEnabled; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)

	void SetPriority(float NewPriority); // Function GlobalLightRig.WorldBaseHeightBase.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1b7c4e0
};

// Class GlobalLightRig.WorldBaseHeightInfinitePlane
// Size: 0x298 (Inherited: 0x298)
struct AWorldBaseHeightInfinitePlane : AWorldBaseHeightBase {
};

// Class GlobalLightRig.WorldBaseHeightShape
// Size: 0x2a0 (Inherited: 0x298)
struct AWorldBaseHeightShape : AWorldBaseHeightBase {
	float BlendRadiusPercentage; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

// Class GlobalLightRig.WorldBaseHeightRect
// Size: 0x2a0 (Inherited: 0x2a0)
struct AWorldBaseHeightRect : AWorldBaseHeightShape {
};

// Class GlobalLightRig.WorldBaseHeightDisk
// Size: 0x2a0 (Inherited: 0x2a0)
struct AWorldBaseHeightDisk : AWorldBaseHeightShape {
};

