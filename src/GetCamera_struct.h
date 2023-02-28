// ScriptStruct GetCamera.PerWorldCalcViewInfo
// Size: 0x50 (Inherited: 0x00)
struct FPerWorldCalcViewInfo {
	struct TMap<uint32_t, struct FCalcViewInfo> Views; // 0x00(0x50)
};

// ScriptStruct GetCamera.CalcViewInfo
// Size: 0x680 (Inherited: 0x00)
struct FCalcViewInfo {
	struct FPostProcessSettingsWeak PostProcessSettings; // 0x00(0x630)
	struct TWeakObjectPtr<struct AActor> ViewActor; // 0x630(0x08)
	uint32_t UniqueId; // 0x638(0x04)
	int32_t PlayerIndex; // 0x63c(0x04)
	int32_t ViewIndex; // 0x640(0x04)
	struct FVector ViewLocation; // 0x644(0x0c)
	struct FRotator ViewRotation; // 0x650(0x0c)
	float FOV; // 0x65c(0x04)
	float DesiredFOV; // 0x660(0x04)
	float LastEyeAdaptationExposure; // 0x664(0x04)
	float LastAverageSceneLuminance; // 0x668(0x04)
	float PreExposure; // 0x66c(0x04)
	uint32_t FrameNumber; // 0x670(0x04)
	enum class EWorldCalcSceneViewType ViewType; // 0x674(0x01)
	char pad_675[0xb]; // 0x675(0x0b)
};

// ScriptStruct GetCamera.PostProcessSettingsWeak
// Size: 0x630 (Inherited: 0x00)
struct FPostProcessSettingsWeak {
	struct FPostProcessSettings PostProcessSettings; // 0x00(0x5f0)
	struct FPostProcessSettingsObjects PostProcessSettingsObjects; // 0x5f0(0x38)
	char pad_628[0x8]; // 0x628(0x08)
};

// ScriptStruct GetCamera.PostProcessSettingsObjects
// Size: 0x38 (Inherited: 0x00)
struct FPostProcessSettingsObjects {
	struct TWeakObjectPtr<struct UTexture2D> BloomConvolutionTexture; // 0x00(0x08)
	struct TWeakObjectPtr<struct UTexture> BloomDirtMask; // 0x08(0x08)
	struct TWeakObjectPtr<struct UTextureCube> AmbientCubemap; // 0x10(0x08)
	struct TWeakObjectPtr<struct UCurveFloat> AutoExposureBiasCurve; // 0x18(0x08)
	struct TWeakObjectPtr<struct UTexture> AutoExposureMeterMask; // 0x20(0x08)
	struct TWeakObjectPtr<struct UTexture> LensFlareBokehShape; // 0x28(0x08)
	struct TWeakObjectPtr<struct UTexture> ColorGradingLUT; // 0x30(0x08)
};

