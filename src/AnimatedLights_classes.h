// Class AnimatedLights.AnimatedLightClusterComponent
// Size: 0x250 (Inherited: 0x220)
struct UAnimatedLightClusterComponent : USceneComponent {
	struct UAnimatedLightsClusterSettings* CullingSettings; // 0x218(0x08)
	struct TArray<struct TWeakObjectPtr<struct ULightComponent>> LightComponents; // 0x220(0x10)
	char pad_238[0x8]; // 0x238(0x08)
	float MaxVisibleDistance; // 0x240(0x04)
	float SleepDeltaTime; // 0x244(0x04)
	bool bCanForceUpdates; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)

	void RebuildLights(); // Function AnimatedLights.AnimatedLightClusterComponent.RebuildLights // (Final|Native|Public) // @ game+0x1c25b00
};

// Class AnimatedLights.AnimatedLightSettingsAsset
// Size: 0x68 (Inherited: 0x30)
struct UAnimatedLightSettingsAsset : UDataAsset {
	struct FAnimatedLightSettings Settings; // 0x30(0x34)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AnimatedLights.AnimatedLightClusterComponentAuto
// Size: 0x250 (Inherited: 0x250)
struct UAnimatedLightClusterComponentAuto : UAnimatedLightClusterComponent {
};

// Class AnimatedLights.AnimatedLightComponentBase
// Size: 0x260 (Inherited: 0x250)
struct UAnimatedLightComponentBase : UAnimatedLightClusterComponentAuto {
	float StartOffset; // 0x250(0x04)
	float DurationScale; // 0x254(0x04)
	char bDeepScanChildren : 1; // 0x258(0x01)
	char bEnabled : 1; // 0x258(0x01)
	char RandomizeStartOffset : 1; // 0x258(0x01)
	char pad_258_3 : 5; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float Time; // 0x25c(0x04)

	void IsAnimatedLightEnabled(bool& bIsEnabled); // Function AnimatedLights.AnimatedLightComponentBase.IsAnimatedLightEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c25a60
	void EnableAnimatedLight(bool bEnable); // Function AnimatedLights.AnimatedLightComponentBase.EnableAnimatedLight // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25550
	void DisableAnimatedLight(); // Function AnimatedLights.AnimatedLightComponentBase.DisableAnimatedLight // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25530
};

// Class AnimatedLights.AnimatedLightComponent
// Size: 0x2b0 (Inherited: 0x260)
struct UAnimatedLightComponent : UAnimatedLightComponentBase {
	struct UCurveLinearColor* ColorCurve_DEPRICATED; // 0x260(0x08)
	struct UCurveFloat* IntensityCurve_DEPRICATED; // 0x268(0x08)
	float WaveSpeed1; // 0x270(0x04)
	float WaveSpeed2; // 0x274(0x04)
	float MinIntensity; // 0x278(0x04)
	enum class EAnimatedLightComponentNoiseType IntensityNoiseType; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	float IntensityNoiseSpeed; // 0x280(0x04)
	float IntensityNoiseFactor; // 0x284(0x04)
	enum class EAnimatedLightComponentNoiseType HueNoiseType; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float HueNoiseSpeed; // 0x28c(0x04)
	float HueNoiseAmount; // 0x290(0x04)
	enum class EAnimatedLightComponentNoiseType SaturationNoiseType; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float SaturationNoiseSpeed; // 0x298(0x04)
	float SaturationNoiseAmount; // 0x29c(0x04)
	char UseMathBased : 1; // 0x2a0(0x01)
	char bAddIntensityNoise : 1; // 0x2a0(0x01)
	char bAddHSVNoise : 1; // 0x2a0(0x01)
	char bLoopColorCurve_DEPRICATED : 1; // 0x2a0(0x01)
	char bLoopIntensityCurve_DEPRICATED : 1; // 0x2a0(0x01)
	char pad_2A0_5 : 3; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// Class AnimatedLights.AnimatedLightComponentLean
// Size: 0x270 (Inherited: 0x260)
struct UAnimatedLightComponentLean : UAnimatedLightComponentBase {
	struct UAnimatedLightSettingsAsset* Settings; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class AnimatedLights.AnimatedLightPluginSettings
// Size: 0x40 (Inherited: 0x30)
struct UAnimatedLightPluginSettings : UDataAsset {
	struct TArray<struct FName> InOrderBuckets; // 0x30(0x10)
};

// Class AnimatedLights.AnimatedLightClusterComponentChildOfLight
// Size: 0x250 (Inherited: 0x250)
struct UAnimatedLightClusterComponentChildOfLight : UAnimatedLightClusterComponent {
};

// Class AnimatedLights.AnimatedLightWorldData
// Size: 0x120 (Inherited: 0x28)
struct UAnimatedLightWorldData : UObject {
	struct UAnimatedLightPluginSettings* Settings; // 0x28(0x08)
	char pad_30[0xf0]; // 0x30(0xf0)
};

// Class AnimatedLights.AnimatedLightsAPI
// Size: 0x28 (Inherited: 0x28)
struct UAnimatedLightsAPI : UBlueprintFunctionLibrary {

	bool SetAnimatedLightIntensity(struct ULightComponent* Light, float Intensity, bool bSetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.SetAnimatedLightIntensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c260e0
	bool SetAnimatedLightColorIntensity(struct ULightComponent* Light, struct FLinearColor Color, float Intensity, bool bSetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.SetAnimatedLightColorIntensity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c25f90
	bool SetAnimatedLightColor(struct ULightComponent* Light, struct FLinearColor Color, bool bSetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.SetAnimatedLightColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c25e70
	void IsAnimatedLight(struct ULightComponent* Light, bool& bIsAnimatedLight); // Function AnimatedLights.AnimatedLightsAPI.IsAnimatedLight // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c25990
	bool GetAnimatedLightIntensity(struct ULightComponent* Light, float& Intensity, bool bGetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.GetAnimatedLightIntensity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c25870
	bool GetAnimatedLightColorIntensity(struct ULightComponent* Light, struct FLinearColor& Color, float& Intensity, bool bGetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.GetAnimatedLightColorIntensity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1c25700
	bool GetAnimatedLightColor(struct ULightComponent* Light, struct FLinearColor& Color, bool bGetEvenIfNotAnimated); // Function AnimatedLights.AnimatedLightsAPI.GetAnimatedLightColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1c255e0
};

// Class AnimatedLights.AnimatedLightParametersComponentBase
// Size: 0x220 (Inherited: 0x220)
struct UAnimatedLightParametersComponentBase : USceneComponent {
};

// Class AnimatedLights.AnimatedLightParametersComponentAuto
// Size: 0x230 (Inherited: 0x220)
struct UAnimatedLightParametersComponentAuto : UAnimatedLightParametersComponentBase {
	struct ULightComponent* ForceLightComponent; // 0x218(0x08)
	bool bUseForceLightComponent; // 0x220(0x01)
	char pad_229[0x7]; // 0x229(0x07)
};

// Class AnimatedLights.AnimatedLightParametersComponent
// Size: 0x250 (Inherited: 0x230)
struct UAnimatedLightParametersComponent : UAnimatedLightParametersComponentAuto {
	struct TArray<struct FAnimatedLightExtraSetupMaterialParameter> MaterialParameters; // 0x228(0x10)
	struct TArray<struct FAnimatedLightExtraSetupNiagaraParameter> NiagaraParameters; // 0x238(0x10)

	bool RemoveAnimatedLightParameters(); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25e40
	bool RemoveAnimatedLightParameter(struct FName Parameter); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25da0
	bool RemoveAnimatedLightNiagaraParameters(struct UNiagaraComponent* NiagaraComponent); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightNiagaraParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25d00
	bool RemoveAnimatedLightNiagaraParameter(struct FName Parameter); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightNiagaraParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25c60
	bool RemoveAnimatedLightMaterialParameters(struct UMaterialInstanceDynamic* MaterialInstanceDynamic); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightMaterialParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25bc0
	bool RemoveAnimatedLightMaterialParameter(struct FName Parameter); // Function AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightMaterialParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25b20
	bool AddAnimatedLightNiagaraParameters(struct UNiagaraComponent* NiagaraComponent, struct TArray<struct FAnimatedLightExtraParameter> ParameterList); // Function AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightNiagaraParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25400
	bool AddAnimatedLightNiagaraParameter(struct UNiagaraComponent* NiagaraComponent, struct FAnimatedLightExtraParameter Parameter); // Function AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightNiagaraParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1c25300
	bool AddAnimatedLightMaterialParameters(struct UMaterialInstanceDynamic* MaterialInstanceDynamic, struct TArray<struct FAnimatedLightExtraParameter> ParameterList); // Function AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightMaterialParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x1c251d0
	bool AddAnimatedLightMaterialParameter(struct UMaterialInstanceDynamic* MaterialInstanceDynamic, struct FAnimatedLightExtraParameter Parameter); // Function AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightMaterialParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1c250d0
};

// Class AnimatedLights.AnimatedLightsClusterSettings
// Size: 0x58 (Inherited: 0x30)
struct UAnimatedLightsClusterSettings : UDataAsset {
	float TickEveryFrameDistanceMeters; // 0x30(0x04)
	float SlowTickDistanceMeters; // 0x34(0x04)
	float SlowTickRateSeconds; // 0x38(0x04)
	float MaxTickEveryFrameDistanceMeters; // 0x3c(0x04)
	float MaxSlowTickDistanceMeters; // 0x40(0x04)
	float InverseRange; // 0x44(0x04)
	float MaxInverseRange; // 0x48(0x04)
	float SlowTickInverseRange; // 0x4c(0x04)
	bool bAutoScale; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void SetRange(float NewTickEveryFrameDistanceMeters, float NewSlowTickDistanceMeters); // Function AnimatedLights.AnimatedLightsClusterSettings.SetRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1c261f0
};

// Class AnimatedLights.AnimatedLightsSingleton
// Size: 0x250 (Inherited: 0x248)
struct AAnimatedLightsSingleton : AActor {
	struct UAnimatedLightWorldData* WorldData; // 0x248(0x08)
};

