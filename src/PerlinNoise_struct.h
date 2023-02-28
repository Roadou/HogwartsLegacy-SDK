// Enum PerlinNoise.EPerlinNoiseOctaveMode
enum class EPerlinNoiseOctaveMode : uint8 {
	All = 0,
	Odd = 1,
	Even = 2,
	Thirds = 3,
	EPerlinNoiseOctaveMode_MAX = 4
};

// ScriptStruct PerlinNoise.NoiseTextureNormalMap
// Size: 0x20 (Inherited: 0x00)
struct FNoiseTextureNormalMap {
	struct TArray<struct FColor> ColorData; // 0x00(0x10)
	int32_t Width; // 0x10(0x04)
	int32_t Height; // 0x14(0x04)
	bool bLinearColor; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PerlinNoise.NoiseTextureColor
// Size: 0x20 (Inherited: 0x00)
struct FNoiseTextureColor {
	struct TArray<struct FColor> ColorData; // 0x00(0x10)
	int32_t Width; // 0x10(0x04)
	int32_t Height; // 0x14(0x04)
	bool bLinearColor; // 0x18(0x01)
	bool bWantMask; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct PerlinNoise.NoiseImage
// Size: 0x28 (Inherited: 0x00)
struct FNoiseImage {
	struct TArray<float> NoiseData; // 0x00(0x10)
	int32_t Width; // 0x10(0x04)
	int32_t Height; // 0x14(0x04)
	float Min; // 0x18(0x04)
	float Max; // 0x1c(0x04)
	float InverseDynamicRange; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PerlinNoise.OctaveNoiseParams
// Size: 0x1c (Inherited: 0x00)
struct FOctaveNoiseParams {
	int32_t Octaves; // 0x00(0x04)
	enum class EPerlinNoiseOctaveMode OctaveMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float OctavePersistence; // 0x08(0x04)
	float BaseFrequency; // 0x0c(0x04)
	float Amplitude; // 0x10(0x04)
	float Seed; // 0x14(0x04)
	bool bTilable; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct PerlinNoise.NoiseParams4D
// Size: 0x1c (Inherited: 0x00)
struct FNoiseParams4D {
	float LumpinessX; // 0x00(0x04)
	float LumpinessY; // 0x04(0x04)
	float LumpinessZ; // 0x08(0x04)
	float LumpinessW; // 0x0c(0x04)
	float Amplitude; // 0x10(0x04)
	float Seed; // 0x14(0x04)
	bool bTilable; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct PerlinNoise.NoiseParams3D
// Size: 0x18 (Inherited: 0x00)
struct FNoiseParams3D {
	float LumpinessX; // 0x00(0x04)
	float LumpinessY; // 0x04(0x04)
	float LumpinessZ; // 0x08(0x04)
	float Amplitude; // 0x0c(0x04)
	float Seed; // 0x10(0x04)
	bool bTilable; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct PerlinNoise.NoiseParams2D
// Size: 0x14 (Inherited: 0x00)
struct FNoiseParams2D {
	float LumpinessX; // 0x00(0x04)
	float LumpinessY; // 0x04(0x04)
	float Amplitude; // 0x08(0x04)
	float Seed; // 0x0c(0x04)
	bool bTilable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct PerlinNoise.NoiseParams
// Size: 0x10 (Inherited: 0x00)
struct FNoiseParams {
	float Lumpiness; // 0x00(0x04)
	float Amplitude; // 0x04(0x04)
	float Seed; // 0x08(0x04)
	bool bTilable; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

