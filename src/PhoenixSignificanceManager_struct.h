// Enum PhoenixSignificanceManager.ESignificanceBiasEnum
enum class ESignificanceBiasEnum : uint8 {
	SIGNIFICANCE_BIAS_LOW = 0,
	SIGNIFICANCE_BIAS_DEFAULT = 1,
	SIGNIFICANCE_BIAS_HIGH = 2,
	SIGNIFICANCE_BIAS_CRITICAL = 3,
	SIGNIFICANCE_BIAS_MAX = 4
};

// ScriptStruct PhoenixSignificanceManager.BudgeterPayload
// Size: 0x08 (Inherited: 0x00)
struct FBudgeterPayload {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct PhoenixSignificanceManager.ClothBudgeterPayload
// Size: 0x10 (Inherited: 0x08)
struct FClothBudgeterPayload : FBudgeterPayload {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct PhoenixSignificanceManager.LODBudgeterPayload
// Size: 0x108 (Inherited: 0x08)
struct FLODBudgeterPayload : FBudgeterPayload {
	char pad_8[0x100]; // 0x08(0x100)
};

// ScriptStruct PhoenixSignificanceManager.LODInfo
// Size: 0x0c (Inherited: 0x00)
struct FLODInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct PhoenixSignificanceManager.BudgeterTickFunction
// Size: 0x48 (Inherited: 0x40)
struct FBudgeterTickFunction : FTickFunction {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct PhoenixSignificanceManager.SceneRigBudgeterPayload
// Size: 0x28 (Inherited: 0x08)
struct FSceneRigBudgeterPayload : FBudgeterPayload {
	char pad_8[0x20]; // 0x08(0x20)
};

