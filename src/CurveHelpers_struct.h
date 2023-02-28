// Enum CurveHelpers.ESampleTextureToColorNormalizeMode
enum class ESampleTextureToColorNormalizeMode : uint8 {
	Intensity = 0,
	Luminance = 1,
	LuminanceBT709 = 2,
	LuminanceRMY = 3,
	LuminanceYIQ = 4,
	LuminanceATM = 5,
	Magnitude = 6,
	MagnitudeRG = 7,
	MagnitudeGB = 8,
	MagnitudeRB = 9,
	RedComponent = 10,
	GreenComponent = 11,
	BlueComponent = 12,
	MaxComponent = 13,
	ESampleTextureToColorNormalizeMode_MAX = 14
};

// Enum CurveHelpers.ESampleTextureToCurveAlphaChannel
enum class ESampleTextureToCurveAlphaChannel : uint8 {
	TextureAlpha = 0,
	FixedAlpha = 1,
	AlphaIsOne = 2,
	AlphaIsZero = 3,
	AlphaIsIntensity = 4,
	ESampleTextureToCurveAlphaChannel_MAX = 5
};

// Enum CurveHelpers.ESampleTextureToCurveType
enum class ESampleTextureToCurveType : uint8 {
	SampleAlongU = 0,
	SampleAlongV = 1,
	ESampleTextureToCurveType_MAX = 2
};

// ScriptStruct CurveHelpers.SampleTextureToCurve
// Size: 0x48 (Inherited: 0x00)
struct FSampleTextureToCurve {
	enum class ESampleTextureToCurveType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartUV; // 0x04(0x04)
	float EndUV; // 0x08(0x04)
	float OtherCoordBase; // 0x0c(0x04)
	float CurveStartT; // 0x10(0x04)
	float CurveEndT; // 0x14(0x04)
	enum class ESampleTextureToColorNormalizeMode ColorNormalize; // 0x18(0x01)
	enum class ESampleTextureToColorNormalizeMode CurveNormalize; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float Desaturate; // 0x1c(0x04)
	int32_t QuantizeColorsBits; // 0x20(0x04)
	float ColorScale; // 0x24(0x04)
	enum class ESampleTextureToCurveAlphaChannel AlphaChannel; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float FixedAlpha; // 0x2c(0x04)
	enum class ESampleTextureToColorNormalizeMode AlphaIntensity; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AlphaScale; // 0x34(0x04)
	float CurveErrorTolerancePercent; // 0x38(0x04)
	bool bCubicKeys; // 0x3c(0x01)
	bool bUseCurveErrorTolerance; // 0x3d(0x01)
	bool bUseColorNormalize; // 0x3e(0x01)
	bool bUseCurveNormalize; // 0x3f(0x01)
	bool bUseDesaturate; // 0x40(0x01)
	bool bUseQuantizeColors; // 0x41(0x01)
	bool bUseColorScale; // 0x42(0x01)
	bool bDoAlpha; // 0x43(0x01)
	bool bOverrideAlphaIntensity; // 0x44(0x01)
	bool bUseAlphaScale; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct CurveHelpers.BlueprintCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FBlueprintCurveKey {
	enum class ERichCurveInterpMode InterpMode; // 0x00(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x01(0x01)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

