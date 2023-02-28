// Enum Wind.EWindSourceEnvelopeTriggerEvent
enum class EWindSourceEnvelopeTriggerEvent : uint8 {
	Trigger = 0,
	Done = 1,
	EWindSourceEnvelopeTriggerEvent_MAX = 2
};

// Enum Wind.EWindGustSimplexNoiseMode
enum class EWindGustSimplexNoiseMode : uint8 {
	Constant = 0,
	Simple = 1,
	XYPlane = 2,
	Full3D = 3,
	EWindGustSimplexNoiseMode_MAX = 4
};

// Enum Wind.EWindDirectionCompass
enum class EWindDirectionCompass : uint8 {
	North = 0,
	NorthEast = 1,
	East = 2,
	SouthEast = 3,
	South = 4,
	SouthWest = 5,
	West = 6,
	NorthWest = 7,
	EWindDirectionCompass_MAX = 8
};

// Enum Wind.EBeaufortWindScale
enum class EBeaufortWindScale : uint8 {
	Calm = 0,
	LightAir = 1,
	LightBreeze = 2,
	GentleBreeze = 3,
	ModerateBreeze = 4,
	FreshBreeze = 5,
	StrongBreeze = 6,
	ModerateGale = 7,
	FreshGale = 8,
	StrongGale = 9,
	WholeGale = 10,
	Storm = 11,
	Hurricane = 12,
	EBeaufortWindScale_MAX = 13
};

// Enum Wind.EWindVortexEnvelopeAffects
enum class EWindVortexEnvelopeAffects : uint8 {
	Speed = 0,
	Height = 1,
	Radius = 2,
	Strength = 3,
	EWindVortexEnvelopeAffects_MAX = 4
};

// Enum Wind.EWindPointEnvelopeAffects
enum class EWindPointEnvelopeAffects : uint8 {
	Speed = 0,
	Radius = 1,
	Strength = 2,
	EWindPointEnvelopeAffects_MAX = 3
};

// Enum Wind.EWindDirectionalEnvelopeAffects
enum class EWindDirectionalEnvelopeAffects : uint8 {
	Speed = 0,
	Strength = 1,
	EWindDirectionalEnvelopeAffects_MAX = 2
};

// ScriptStruct Wind.WindAffectedScales
// Size: 0x34 (Inherited: 0x00)
struct FWindAffectedScales {
	struct FWindAffectedScale ScaleX; // 0x00(0x10)
	struct FWindAffectedScale ScaleY; // 0x10(0x10)
	struct FWindAffectedScale ScaleZ; // 0x20(0x10)
	char bUseScaleX : 1; // 0x30(0x01)
	char bUseScaleY : 1; // 0x30(0x01)
	char bUseScaleZ : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Wind.WindAffectedScale
// Size: 0x10 (Inherited: 0x00)
struct FWindAffectedScale {
	struct FVector2D ScaleMinMax; // 0x00(0x08)
	struct FVector2D WindSpeedMinMax; // 0x08(0x08)
};

