// Enum AnimatedLights.EAnimatedLightComponentNoiseType
enum class EAnimatedLightComponentNoiseType : uint8 {
	AddAndSubtract = 0,
	AddOnly = 1,
	SubtractOnly = 2,
	EAnimatedLightComponentNoiseType_MAX = 3
};

// Enum AnimatedLights.EAnimatedLightExtraParameterValue
enum class EAnimatedLightExtraParameterValue : uint8 {
	LightColor = 0,
	LightIntensity = 1,
	LightColorTimesIntensity = 2,
	LightColorAndIntensity = 3,
	OriginalColor = 4,
	OriginalIntensity = 5,
	OriginalColorTimesIntensity = 6,
	OriginalColorAndIntensity = 7,
	DeltaColor = 8,
	DeltaIntensity = 9,
	DeltaColorAndIntensity = 10,
	RelativeIntensity = 11,
	EAnimatedLightExtraParameterValue_MAX = 12
};

// ScriptStruct AnimatedLights.AnimatedLightSettings
// Size: 0x34 (Inherited: 0x00)
struct FAnimatedLightSettings {
	float WaveSpeed1; // 0x00(0x04)
	float WaveSpeed2; // 0x04(0x04)
	float MinIntensity; // 0x08(0x04)
	enum class EAnimatedLightComponentNoiseType IntensityNoiseType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float IntensityNoiseSpeed; // 0x10(0x04)
	float IntensityNoiseFactor; // 0x14(0x04)
	enum class EAnimatedLightComponentNoiseType HueNoiseType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HueNoiseSpeed; // 0x1c(0x04)
	float HueNoiseAmount; // 0x20(0x04)
	enum class EAnimatedLightComponentNoiseType SaturationNoiseType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SaturationNoiseSpeed; // 0x28(0x04)
	float SaturationNoiseAmount; // 0x2c(0x04)
	char bIntensityFlicker : 1; // 0x30(0x01)
	char bAddIntensityNoise : 1; // 0x30(0x01)
	char bAddHSVNoise : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct AnimatedLights.AnimatedLightState
// Size: 0x14 (Inherited: 0x00)
struct FAnimatedLightState {
	float HueNoise; // 0x00(0x04)
	float SaturationNoise; // 0x04(0x04)
	float IntensityMod; // 0x08(0x04)
	float NoiseIntensity; // 0x0c(0x04)
	float IntensityNoiseFactor; // 0x10(0x04)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraParameter
// Size: 0x10 (Inherited: 0x00)
struct FAnimatedLightExtraParameter {
	struct FName Parameter; // 0x00(0x08)
	float ToleranceThreshold; // 0x08(0x04)
	enum class EAnimatedLightExtraParameterValue Value; // 0x0c(0x01)
	enum class ELightUnits OutputIntensityUnits; // 0x0d(0x01)
	char bOnlyUpdateOnce : 1; // 0x0e(0x01)
	char bUseOutputIntensityUnits : 1; // 0x0e(0x01)
	char pad_E_2 : 6; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraParameterRuntime
// Size: 0x28 (Inherited: 0x10)
struct FAnimatedLightExtraParameterRuntime : FAnimatedLightExtraParameter {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x10(0x08)
	struct FLinearColor LastValue; // 0x18(0x10)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraNiagaraParameter
// Size: 0x30 (Inherited: 0x28)
struct FAnimatedLightExtraNiagaraParameter : FAnimatedLightExtraParameterRuntime {
	struct TWeakObjectPtr<struct UNiagaraComponent> NiagaraComponent; // 0x28(0x08)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraSetupNiagaraParameter
// Size: 0x18 (Inherited: 0x10)
struct FAnimatedLightExtraSetupNiagaraParameter : FAnimatedLightExtraParameter {
	struct UNiagaraComponent* NiagaraComponent; // 0x10(0x08)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraMaterialParameter
// Size: 0x30 (Inherited: 0x28)
struct FAnimatedLightExtraMaterialParameter : FAnimatedLightExtraParameterRuntime {
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> Material; // 0x28(0x08)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraSetupMaterialParameter
// Size: 0x18 (Inherited: 0x10)
struct FAnimatedLightExtraSetupMaterialParameter : FAnimatedLightExtraParameter {
	struct UMaterialInstanceDynamic* Material; // 0x10(0x08)
};

// ScriptStruct AnimatedLights.AnimatedLightExtraCachedLightSettings
// Size: 0x08 (Inherited: 0x00)
struct FAnimatedLightExtraCachedLightSettings {
	enum class ELightUnits IntensityUnits; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CosHalfConeAngle; // 0x04(0x04)
};

