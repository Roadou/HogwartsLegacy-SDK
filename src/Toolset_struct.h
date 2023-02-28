// Enum Toolset.EToolEffectType
enum class EToolEffectType : uint8 {
	ALPHA = 0,
	SCALE = 1,
	EToolEffectType_MAX = 2
};

// Enum Toolset.TriggerModeEnum
enum class TriggerModeEnum : uint8 {
	Off = 0,
	Weapon = 1,
	Vibration = 2,
	Feedback = 3,
	TriggerModeEnum_MAX = 4
};

// ScriptStruct Toolset.LEDFadeEffectProperty
// Size: 0x40 (Inherited: 0x00)
struct FLEDFadeEffectProperty {
	float FadeTime; // 0x00(0x04)
	struct FColor FadeToRGB; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

