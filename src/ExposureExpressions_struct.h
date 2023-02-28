// Enum ExposureExpressions.EExposureExpressionsExtraTarget
enum class EExposureExpressionsExtraTarget : uint8 {
	MaterialPC = 0,
	NiagaraPC = 1,
	External = 2,
	EExposureExpressionsExtraTarget_MAX = 3
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtrasLerp
// Size: 0x20 (Inherited: 0x00)
struct FExposureExpressionsExtrasLerp {
	struct TArray<struct FExposureExpressionsExtraLerpExposure> ExposureExtras; // 0x00(0x10)
	struct TArray<struct FExposureExpressionsExtraLerpScalar> ScalarExtras; // 0x10(0x10)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraLerp
// Size: 0x18 (Inherited: 0x00)
struct FExposureExpressionsExtraLerp {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	float Value; // 0x10(0x04)
	int32_t Targets; // 0x14(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraLerpScalar
// Size: 0x18 (Inherited: 0x18)
struct FExposureExpressionsExtraLerpScalar : FExposureExpressionsExtraLerp {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraLerpExposure
// Size: 0x20 (Inherited: 0x18)
struct FExposureExpressionsExtraLerpExposure : FExposureExpressionsExtraLerp {
	float CachedFactor; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtras
// Size: 0x40 (Inherited: 0x00)
struct FExposureExpressionsExtras {
	struct TArray<struct FExposureExpressionsExtraExposureConstant> ExposureConstants; // 0x00(0x10)
	struct TArray<struct FExposureExpressionsExtraExposure> ExposureExtras; // 0x10(0x10)
	struct TArray<struct FExposureExpressionsExtraScalarConstant> ScalarConstants; // 0x20(0x10)
	struct TArray<struct FExposureExpressionsExtraScalar> ScalarExtras; // 0x30(0x10)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtra
// Size: 0x08 (Inherited: 0x00)
struct FExposureExpressionsExtra {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraScalar
// Size: 0x20 (Inherited: 0x08)
struct FExposureExpressionsExtraScalar : FExposureExpressionsExtra {
	struct FExposureExpressionsExtraScalarName Name; // 0x08(0x10)
	struct UExposureExpressionsScalarValue* Expression; // 0x18(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsDropdownName
// Size: 0x10 (Inherited: 0x00)
struct FExposureExpressionsDropdownName {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraScalarName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsExtraScalarName : FExposureExpressionsDropdownName {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraScalarConstant
// Size: 0x20 (Inherited: 0x08)
struct FExposureExpressionsExtraScalarConstant : FExposureExpressionsExtra {
	struct FExposureExpressionsExtraScalarName Name; // 0x08(0x10)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraExposure
// Size: 0x20 (Inherited: 0x08)
struct FExposureExpressionsExtraExposure : FExposureExpressionsExtra {
	struct FExposureExpressionsExtraExposureName Name; // 0x08(0x10)
	struct UExposureExpressionsExposureValue* Expression; // 0x18(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraExposureName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsExtraExposureName : FExposureExpressionsDropdownName {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraExposureConstant
// Size: 0x20 (Inherited: 0x08)
struct FExposureExpressionsExtraExposureConstant : FExposureExpressionsExtra {
	struct FExposureExpressionsExtraExposureName Name; // 0x08(0x10)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExecuteContext
// Size: 0xc8 (Inherited: 0x00)
struct FExposureExpressionsExecuteContext {
	struct UWorld* World; // 0x00(0x08)
	uint32_t Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FPostProcessExposureValuesEV100FinalBias Exposure; // 0x10(0x48)
	struct FLastRenderedExposure LastExposure; // 0x58(0x20)
	struct FLastRenderedExposure LastExposureFiltered; // 0x78(0x20)
	struct FLastRenderedExposure LastExposureHistory; // 0x98(0x20)
	float NightDay; // 0xb8(0x04)
	float Overcast; // 0xbc(0x04)
	float OutdoorsIndoors; // 0xc0(0x04)
	float FilteredOutdoorsIndoors; // 0xc4(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtrasDefaults
// Size: 0x40 (Inherited: 0x00)
struct FExposureExpressionsExtrasDefaults {
	struct TArray<struct FExposureExpressionsExtraDefaultExposureConstant> ExposureConstants; // 0x00(0x10)
	struct TArray<struct FExposureExpressionsExtraDefaultExposure> ExposureExtras; // 0x10(0x10)
	struct TArray<struct FExposureExpressionsExtraDefaultScalarConstant> ScalarConstants; // 0x20(0x10)
	struct TArray<struct FExposureExpressionsExtraDefaultScalar> ScalarExtras; // 0x30(0x10)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraDefault
// Size: 0x18 (Inherited: 0x00)
struct FExposureExpressionsExtraDefault {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	int32_t Targets; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraDefaultScalar
// Size: 0x20 (Inherited: 0x18)
struct FExposureExpressionsExtraDefaultScalar : FExposureExpressionsExtraDefault {
	struct UExposureExpressionsScalarValue* DefaultExpression; // 0x18(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraDefaultScalarConstant
// Size: 0x20 (Inherited: 0x18)
struct FExposureExpressionsExtraDefaultScalarConstant : FExposureExpressionsExtraDefault {
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraDefaultExposure
// Size: 0x20 (Inherited: 0x18)
struct FExposureExpressionsExtraDefaultExposure : FExposureExpressionsExtraDefault {
	struct UExposureExpressionsExposureValue* DefaultExpression; // 0x18(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExtraDefaultExposureConstant
// Size: 0x20 (Inherited: 0x18)
struct FExposureExpressionsExtraDefaultExposureConstant : FExposureExpressionsExtraDefault {
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ExposureExpressions.ExposureExpressions
// Size: 0xc0 (Inherited: 0x00)
struct FExposureExpressions {
	struct TMap<struct FName, float> ExposureConstants; // 0x00(0x50)
	struct TArray<struct FExposureExpressionsExposureExpression> ExposureExpressions; // 0x50(0x10)
	struct TMap<struct FName, float> ScalarConstants; // 0x60(0x50)
	struct TArray<struct FExposureExpressionsScalarExpression> ScalarExpressions; // 0xb0(0x10)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsScalarExpression
// Size: 0x10 (Inherited: 0x00)
struct FExposureExpressionsScalarExpression {
	struct FName Name; // 0x00(0x08)
	struct UExposureExpressionsScalarValue* Expression; // 0x08(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExposureExpression
// Size: 0x10 (Inherited: 0x00)
struct FExposureExpressionsExposureExpression {
	struct FName Name; // 0x00(0x08)
	struct UExposureExpressionsExposureValue* Expression; // 0x08(0x08)
};

// ScriptStruct ExposureExpressions.ExposureExpressionsScalarExpressionName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsScalarExpressionName : FExposureExpressionsDropdownName {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsScalarConstantName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsScalarConstantName : FExposureExpressionsDropdownName {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExposureExpressionName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsExposureExpressionName : FExposureExpressionsDropdownName {
};

// ScriptStruct ExposureExpressions.ExposureExpressionsExposureConstantName
// Size: 0x10 (Inherited: 0x10)
struct FExposureExpressionsExposureConstantName : FExposureExpressionsDropdownName {
};

