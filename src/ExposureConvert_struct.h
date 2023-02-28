// Enum ExposureConvert.EEngineHDRColorGamut
enum class EEngineHDRColorGamut : uint8 {
	Rec709_sRGB = 0,
	DCI_P3 = 1,
	Rec2020_BT2020 = 2,
	ACES = 3,
	ACEScg = 4,
	EEngineHDRColorGamut_MAX = 5
};

// Enum ExposureConvert.EEngineHDROutputDevice
enum class EEngineHDROutputDevice : uint8 {
	sRGB = 0,
	Rec709 = 1,
	ExplicitGammaMapping = 2,
	ACES1000nit_ST2084_DolbyPQ = 3,
	ACES2000nit_ST2084_DolbyPQ = 4,
	ACES1000nit_ScRGB = 5,
	ACES2000nit_ScRGB = 6,
	LinearEXR = 7,
	LinearFinalColor = 8,
	LinearFinalColorToneCurve = 9,
	ACES_SSST_ST2084_DolbyPQ = 10,
	ACES_SSTS_ScRGB = 11,
	EEngineHDROutputDevice_MAX = 12
};

// ScriptStruct ExposureConvert.LastRenderedExposureFilterTimeConstants
// Size: 0x08 (Inherited: 0x00)
struct FLastRenderedExposureFilterTimeConstants {
	float AutoExposure; // 0x00(0x04)
	float AverageLuminance; // 0x04(0x04)
};

// ScriptStruct ExposureConvert.LastRenderedExposurePair
// Size: 0x68 (Inherited: 0x00)
struct FLastRenderedExposurePair {
	struct FLastRenderedExposure Current; // 0x00(0x20)
	struct FLastRenderedExposure Filtered; // 0x20(0x20)
	struct FLastRenderedExposureRunningAverage History; // 0x40(0x28)
};

// ScriptStruct ExposureConvert.LastRenderedExposureRunningAverage
// Size: 0x28 (Inherited: 0x00)
struct FLastRenderedExposureRunningAverage {
	struct FLastRenderedExposure Average; // 0x00(0x20)
	int32_t Samples; // 0x20(0x04)
	int32_t TotalSamples; // 0x24(0x04)
};

// ScriptStruct ExposureConvert.LastRenderedExposure
// Size: 0x20 (Inherited: 0x00)
struct FLastRenderedExposure {
	float AutoExposureEV100; // 0x00(0x04)
	float AverageViewLuminanceEV100; // 0x04(0x04)
	float AverageLuminanceEV100; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t FrameNumber; // 0x10(0x08)
	bool bValid; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ExposureConvert.LastRenderedExposureUnreal
// Size: 0x10 (Inherited: 0x00)
struct FLastRenderedExposureUnreal {
	float AutoExposure; // 0x00(0x04)
	float AverageViewLuminance; // 0x04(0x04)
	float AverageLuminance; // 0x08(0x04)
	float AverageBrightness; // 0x0c(0x04)
};

// ScriptStruct ExposureConvert.LastRenderedExposureWithExpiration
// Size: 0x28 (Inherited: 0x20)
struct FLastRenderedExposureWithExpiration : FLastRenderedExposure {
	int64_t MaxAge; // 0x20(0x08)
};

// ScriptStruct ExposureConvert.PostProcessExposureValues
// Size: 0x40 (Inherited: 0x00)
struct FPostProcessExposureValues {
	char pad_0[0x8]; // 0x00(0x08)
	float AutoExposureMinBrightness; // 0x08(0x04)
	float AutoExposureMaxBrightness; // 0x0c(0x04)
	float AutoExposureBiasBase; // 0x10(0x04)
	float AutoExposureBiasVFX; // 0x14(0x04)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x18(0x08)
	float AutoExposureSpeedUp; // 0x20(0x04)
	float AutoExposureSpeedDown; // 0x24(0x04)
	float HistogramLogMin; // 0x28(0x04)
	float HistogramLogMax; // 0x2c(0x04)
	float BloomIntensity; // 0x30(0x04)
	float BloomThreshold; // 0x34(0x04)
	struct UTexture* AutoExposureMeterMask; // 0x38(0x08)
};

// ScriptStruct ExposureConvert.PostProcessExposureValuesUnreal
// Size: 0x40 (Inherited: 0x40)
struct FPostProcessExposureValuesUnreal : FPostProcessExposureValues {
};

// ScriptStruct ExposureConvert.PostProcessExposureValuesEV100
// Size: 0x40 (Inherited: 0x40)
struct FPostProcessExposureValuesEV100 : FPostProcessExposureValues {
};

// ScriptStruct ExposureConvert.PostProcessExposureValuesEV100FinalBias
// Size: 0x48 (Inherited: 0x40)
struct FPostProcessExposureValuesEV100FinalBias : FPostProcessExposureValuesEV100 {
	float AutoExposureCurveBias; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ExposureConvert.PostProcessExposureValuesUnitless
// Size: 0x40 (Inherited: 0x40)
struct FPostProcessExposureValuesUnitless : FPostProcessExposureValues {
};

