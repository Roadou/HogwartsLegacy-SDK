// Enum USDClasses.EUsdUpAxis
enum class EUsdUpAxis : uint8 {
	YAxis = 0,
	ZAxis = 1,
	EUsdUpAxis_MAX = 2
};

// ScriptStruct USDClasses.UsdStageOptions
// Size: 0x08 (Inherited: 0x00)
struct FUsdStageOptions {
	float MetersPerUnit; // 0x00(0x04)
	enum class EUsdUpAxis UpAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

