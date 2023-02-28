// Enum GameplayMods.EPostCalculationRoundingType
enum class EPostCalculationRoundingType : uint8 {
	RoundToNearest = 0,
	TowardsZero = 1,
	AwayFromZero = 2,
	EPostCalculationRoundingType_MAX = 3
};

// Enum GameplayMods.EModExternalInputMethod
enum class EModExternalInputMethod : uint8 {
	CallExternalInputFunction = 0,
	ReadExternalInputTagBlackboardValue = 1,
	EModExternalInputMethod_MAX = 2
};

// Enum GameplayMods.EInputModType
enum class EInputModType : uint8 {
	UnaffectedByExternalInput = 0,
	ValueOfExternalInput = 1,
	ValueOfInputCurveEvaluatedByExternalInput = 2,
	EInputModType_MAX = 3
};

// Enum GameplayMods.ETimeBasedEffectType
enum class ETimeBasedEffectType : uint8 {
	UnaffectedByTimeCurve = 0,
	TimeCurveEvaluatedByCurrentTime = 1,
	TimeCurveEvaluatedByNormalizedTime = 2,
	ETimeBasedEffectType_MAX = 3
};

// Enum GameplayMods.EPropModCalculationType
enum class EPropModCalculationType : uint8 {
	Maximum = 0,
	Minimum = 1,
	PreAdd = 2,
	FactorIncrease = 3,
	Multiply = 4,
	PostAdd = 5,
	Count = 6,
	EPropModCalculationType_MAX = 7
};

// ScriptStruct GameplayMods.GameplayProperty
// Size: 0x50 (Inherited: 0x00)
struct FGameplayProperty {
	struct FName TypeName; // 0x00(0x08)
	struct FName UpdateFunctionName; // 0x08(0x08)
	struct UFunction* OnUpdatedCallback; // 0x10(0x08)
	bool bSkipUpdateOnTick; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct UModFilter*> SupportedOnAddModFilters; // 0x20(0x10)
	struct TArray<struct UModFilter*> SupportedOnApplyModFilters; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct GameplayMods.GameplayPropertyNumeric
// Size: 0x50 (Inherited: 0x50)
struct FGameplayPropertyNumeric : FGameplayProperty {
};

// ScriptStruct GameplayMods.GameplayProperty_Float
// Size: 0x90 (Inherited: 0x50)
struct FGameplayProperty_Float : FGameplayPropertyNumeric {
	float Current; // 0x50(0x04)
	float Base; // 0x54(0x04)
	float Min; // 0x58(0x04)
	float Max; // 0x5c(0x04)
	char pad_60[0x30]; // 0x60(0x30)
};

// ScriptStruct GameplayMods.GameplayProperty_Int
// Size: 0x80 (Inherited: 0x50)
struct FGameplayProperty_Int : FGameplayPropertyNumeric {
	int32_t Current; // 0x50(0x04)
	int32_t Base; // 0x54(0x04)
	int32_t Min; // 0x58(0x04)
	int32_t Max; // 0x5c(0x04)
	enum class EPostCalculationRoundingType RoundingType; // 0x60(0x01)
	char pad_61[0x1f]; // 0x61(0x1f)
};

// ScriptStruct GameplayMods.PropertyList
// Size: 0x18 (Inherited: 0x00)
struct FPropertyList {
	struct TArray<struct FGameplayPropertyEntry> Properties; // 0x00(0x10)
	bool bAutomaticallyAdded; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayMods.GameplayPropertyEntry
// Size: 0x10 (Inherited: 0x00)
struct FGameplayPropertyEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayMods.ModEntry
// Size: 0x30 (Inherited: 0x00)
struct FModEntry {
	struct UGameplayPropertyMod* Modifier; // 0x00(0x08)
	struct UFunction* InputValueProvider; // 0x08(0x08)
	struct UGameplayModComponent* OwnerModComponent; // 0x10(0x08)
	struct FGuid Handle; // 0x18(0x10)
	float CurrentLifeTime; // 0x28(0x04)
	bool bRemove; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct GameplayMods.ModSettingsNumeric
// Size: 0x118 (Inherited: 0x00)
struct FModSettingsNumeric {
	enum class EPropModCalculationType CalculationType; // 0x00(0x01)
	enum class ETimeBasedEffectType TimeBasedEffect; // 0x01(0x01)
	enum class EInputModType ExternalInputEffect; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FRuntimeFloatCurve TimeCurve; // 0x08(0x88)
	struct FRuntimeFloatCurve InputCurve; // 0x90(0x88)
};

// ScriptStruct GameplayMods.ModIntSettings
// Size: 0x120 (Inherited: 0x118)
struct FModIntSettings : FModSettingsNumeric {
	int32_t FixedAmount; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct GameplayMods.ModFloatSettings
// Size: 0x120 (Inherited: 0x118)
struct FModFloatSettings : FModSettingsNumeric {
	float FixedAmount; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct GameplayMods.GameplayPropertySearchHelper
// Size: 0x50 (Inherited: 0x00)
struct FGameplayPropertySearchHelper {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t OffsetInObject; // 0x08(0x04)
	int32_t Depth; // 0x0c(0x04)
	struct FString CachedInternalName; // 0x10(0x10)
	struct FString CachedDisplayName; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
	struct UObject* OwnerClass; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct GameplayMods.ModTarget
// Size: 0x20 (Inherited: 0x00)
struct FModTarget {
	bool bQueryBlueprints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* Class; // 0x08(0x08)
	struct FString PathToProperty; // 0x10(0x10)
};

// ScriptStruct GameplayMods.SelectableName
// Size: 0x08 (Inherited: 0x00)
struct FSelectableName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayMods.SelectableString
// Size: 0x10 (Inherited: 0x00)
struct FSelectableString {
	struct FString String; // 0x00(0x10)
};

