// Enum BTUtilityAI.EUtilitySelectionMethod
enum class EUtilitySelectionMethod : uint8 {
	FirstScore = 0,
	HighestScore = 1,
	WeightedRandom = 2,
	EUtilitySelectionMethod_MAX = 3
};

// Enum BTUtilityAI.EScoreOverrideReturnConfigurationType
enum class EScoreOverrideReturnConfigurationType : uint8 {
	Value_A = 0,
	Value_B = 1,
	Value_Custom = 2,
	Value_MAX = 3
};

// Enum BTUtilityAI.EConsiderationCurveType
enum class EConsiderationCurveType : uint8 {
	Custom = 0,
	Linear_Up = 1,
	Linear_Down = 2,
	EConsiderationCurveType_MAX = 3
};

// Enum BTUtilityAI.EUtilityTrackedErrorType
enum class EUtilityTrackedErrorType : uint8 {
	Error_Unspecified = 0,
	Error_InvalidActor = 1,
	Error_InvalidPath = 2,
	Error_MissingNavmesh = 3,
	Error_MAX = 4
};

// Enum BTUtilityAI.EUtilityArithmeticOperation
enum class EUtilityArithmeticOperation : uint8 {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EUtilityArithmeticOperation_MAX = 6
};

// ScriptStruct BTUtilityAI.ConsiderationWithDisplayName
// Size: 0x18 (Inherited: 0x00)
struct FConsiderationWithDisplayName {
	struct FString DisplayName; // 0x00(0x10)
	struct UQualifierConsideration* Consideration; // 0x10(0x08)
};

// ScriptStruct BTUtilityAI.ScoreOverrideReturnConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FScoreOverrideReturnConfiguration {
	enum class EScoreOverrideReturnConfigurationType MultiplierToReturn; // 0x00(0x04)
	float CustomMultiplier; // 0x04(0x04)
	enum class EScoreOverrideReturnConfigurationType RankToReturn; // 0x08(0x04)
	float CustomRank; // 0x0c(0x04)
	enum class EScoreOverrideReturnConfigurationType BonusToReturn; // 0x10(0x04)
	float CustomBonus; // 0x14(0x04)
};

// ScriptStruct BTUtilityAI.UtilityPlaceholder
// Size: 0x01 (Inherited: 0x00)
struct FUtilityPlaceholder {
	char pad_0[0x1]; // 0x00(0x01)
};

