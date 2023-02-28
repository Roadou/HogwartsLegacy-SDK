// Class ExposureExpressions.ExposureExpressionsValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsValue : UObject {
};

// Class ExposureExpressions.ExposureExpressionsExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureValue : UExposureExpressionsValue {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueFactor
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureValueFactor : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantFactor
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantFactor : UExposureExpressionsExposureValueFactor {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantOneX
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantOneX : UExposureExpressionsExposureConstantFactor {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantTwoX
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantTwoX : UExposureExpressionsExposureConstantFactor {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstant
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstant : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantTrueZero
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantTrueZero : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantZero
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantZero : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantOne
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantOne : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantTwo
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantTwo : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantNegativeOne
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantNegativeOne : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantNegativeTwo
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantNegativeTwo : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantAbsoluteMaximum
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantAbsoluteMaximum : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantAbsoluteMinimum
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantAbsoluteMinimum : UExposureExpressionsExposureConstant {
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantEV100Value
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantEV100Value : UExposureExpressionsExposureConstant {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ExposureExpressions.ExposureExpressionsExposureConstantUnitlessValue
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsExposureConstantUnitlessValue : UExposureExpressionsExposureConstant {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ExposureExpressions.ExposureExpressionsMinExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsMinExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsMaxExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsMaxExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsAutoExposureValue
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsAutoExposureValue : UExposureExpressionsExposureValue {
	bool bSmoothed; // 0x28(0x01)
	bool bUnbiased; // 0x29(0x01)
	bool bUseHistory; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class ExposureExpressions.ExposureExpressionsAverageLuminanceExposureValue
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsAverageLuminanceExposureValue : UExposureExpressionsExposureValue {
	bool bSmoothed; // 0x28(0x01)
	bool bUnbiased; // 0x29(0x01)
	bool bUseHistory; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class ExposureExpressions.ExposureExpressionsAverageLuminanceExposureValueWithReverseBias
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsAverageLuminanceExposureValueWithReverseBias : UExposureExpressionsExposureValue {
	bool bSmoothed; // 0x28(0x01)
	bool bUseHistory; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class ExposureExpressions.ExposureExpressionsAverageViewLuminanceExposureValue
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsAverageViewLuminanceExposureValue : UExposureExpressionsExposureValue {
	bool bSmoothed; // 0x28(0x01)
	bool bUnbiased; // 0x29(0x01)
	bool bUseHistory; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class ExposureExpressions.ExposureExpressionsAverageBrightnessExposureValue
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsAverageBrightnessExposureValue : UExposureExpressionsExposureValue {
	bool bSmoothed; // 0x28(0x01)
	bool bUnbiased; // 0x29(0x01)
	bool bUseHistory; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class ExposureExpressions.ExposureExpressionsBiasedMinExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsBiasedMinExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsBiasedMaxExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsBiasedMaxExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsBiasExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsBiasExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsBaseBiasExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsBaseBiasExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsVFXBiasExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsVFXBiasExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsConstantBiasExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsConstantBiasExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsCurveBiasExposureValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsCurveBiasExposureValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsHistogramMinValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsHistogramMinValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsHistogramMaxValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsHistogramMaxValue : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueSingle
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsExposureValueSingle : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* Value; // 0x28(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueAbs
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsExposureValueAbs : UExposureExpressionsExposureValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueNeg
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsExposureValueNeg : UExposureExpressionsExposureValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueAddBias
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsExposureValueAddBias : UExposureExpressionsExposureValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueReverseBias
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsExposureValueReverseBias : UExposureExpressionsExposureValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsBiasedExposureValue
// Size: 0x38 (Inherited: 0x30)
struct UExposureExpressionsBiasedExposureValue : UExposureExpressionsExposureValueSingle {
	bool bAutoExposureBiasBase; // 0x30(0x01)
	bool bAutoExposureBiasVFX; // 0x31(0x01)
	bool bAutoExposureBiasCurve; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class ExposureExpressions.ExposureExpressionsBiasedExposureValueAdd
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsBiasedExposureValueAdd : UExposureExpressionsBiasedExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsBiasedExposureValueSubtract
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsBiasedExposureValueSubtract : UExposureExpressionsBiasedExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsExposureValuePair
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsExposureValuePair : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* ExposureA; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* ExposureB; // 0x30(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueOp
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueOp : UExposureExpressionsExposureValuePair {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueFunction
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueFunction : UExposureExpressionsExposureValuePair {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueAdd
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueAdd : UExposureExpressionsExposureValueOp {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueSubtract
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueSubtract : UExposureExpressionsExposureValueOp {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMedian
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMedian : UExposureExpressionsExposureValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMin
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMin : UExposureExpressionsExposureValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMax
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMax : UExposureExpressionsExposureValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueLerp
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsExposureValueLerp : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* ExposureA; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* ExposureB; // 0x30(0x08)
	float Alpha; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueClamp
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsExposureValueClamp : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* Value; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* ExposureMin; // 0x30(0x08)
	struct UExposureExpressionsExposureValue* ExposureMax; // 0x38(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMapRangeClamped
// Size: 0x50 (Inherited: 0x28)
struct UExposureExpressionsExposureValueMapRangeClamped : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* Value; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* InExposureMin; // 0x30(0x08)
	struct UExposureExpressionsExposureValue* InExposureMax; // 0x38(0x08)
	struct UExposureExpressionsExposureValue* OutExposureMin; // 0x40(0x08)
	struct UExposureExpressionsExposureValue* OutExposureMax; // 0x48(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueCurveRemap
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsExposureValueCurveRemap : UExposureExpressionsExposureValue {
	struct UCurveFloat* Curve; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* Value; // 0x30(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMulti
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsExposureValueMulti : UExposureExpressionsExposureValue {
	struct TArray<struct UExposureExpressionsExposureValue*> Exposures; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueAddMulti
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueAddMulti : UExposureExpressionsExposureValueMulti {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueAverageMulti
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueAverageMulti : UExposureExpressionsExposureValueMulti {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMedianMulti
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMedianMulti : UExposureExpressionsExposureValueMulti {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMinMulti
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMinMulti : UExposureExpressionsExposureValueMulti {
};

// Class ExposureExpressions.ExposureExpressionsExposureValueMaxMulti
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsExposureValueMaxMulti : UExposureExpressionsExposureValueMulti {
};

// Class ExposureExpressions.ExposureExpressionsExposureExtrasValue
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsExposureExtrasValue : UExposureExpressionsExposureValue {
	struct FExposureExpressionsExtraExposureName Value; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsScalarValue
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValue : UExposureExpressionsValue {
};

// Class ExposureExpressions.ExposureExpressionsScalarExtrasValue
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsScalarExtrasValue : UExposureExpressionsScalarValue {
	struct FExposureExpressionsExtraScalarName Value; // 0x28(0x10)
};

// Class ExposureExpressions.Interface_ExposureExpressionsGlobals
// Size: 0x28 (Inherited: 0x28)
struct UInterface_ExposureExpressionsGlobals : UInterface {
};

// Class ExposureExpressions.Interface_ExposureExpressionsGlobalsProvider
// Size: 0x28 (Inherited: 0x28)
struct UInterface_ExposureExpressionsGlobalsProvider : UInterface {
};

// Class ExposureExpressions.ExposureExpressionsGlobalExposureValueBase
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsGlobalExposureValueBase : UExposureExpressionsExposureValue {
};

// Class ExposureExpressions.ExposureExpressionsGlobalExposureConstant
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsGlobalExposureConstant : UExposureExpressionsGlobalExposureValueBase {
	struct FExposureExpressionsExposureConstantName GlobalConstant; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsGlobalExposureExpression
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsGlobalExposureExpression : UExposureExpressionsExposureValue {
	struct FExposureExpressionsExposureExpressionName GlobalExpression; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsGlobalScalarValueBase
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsGlobalScalarValueBase : UExposureExpressionsScalarValue {
};

// Class ExposureExpressions.ExposureExpressionsGlobalScalarConstant
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsGlobalScalarConstant : UExposureExpressionsGlobalScalarValueBase {
	struct FExposureExpressionsScalarConstantName GlobalConstant; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsGlobalScalarExpression
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsGlobalScalarExpression : UExposureExpressionsScalarValue {
	struct FExposureExpressionsScalarExpressionName GlobalExpression; // 0x28(0x10)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueConstantBase
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueConstantBase : UExposureExpressionsScalarValue {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueConstantZero
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueConstantZero : UExposureExpressionsScalarValueConstantBase {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueConstantOne
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueConstantOne : UExposureExpressionsScalarValueConstantBase {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueConstantNegativeOne
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueConstantNegativeOne : UExposureExpressionsScalarValueConstantBase {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueConstantRange
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsScalarValueConstantRange : UExposureExpressionsScalarValueConstantBase {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueSingle
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsScalarValueSingle : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueOneMinus
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsScalarValueOneMinus : UExposureExpressionsScalarValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueSaturate
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsScalarValueSaturate : UExposureExpressionsScalarValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueAbs
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsScalarValueAbs : UExposureExpressionsScalarValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueNegate
// Size: 0x30 (Inherited: 0x30)
struct UExposureExpressionsScalarValueNegate : UExposureExpressionsScalarValueSingle {
};

// Class ExposureExpressions.ExposureExpressionsScalarValuePair
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsScalarValuePair : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* A; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* B; // 0x30(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueOp
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueOp : UExposureExpressionsScalarValuePair {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueFunction
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueFunction : UExposureExpressionsScalarValuePair {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueAdd
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueAdd : UExposureExpressionsScalarValueOp {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueSubtract
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueSubtract : UExposureExpressionsScalarValueOp {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueMultiply
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueMultiply : UExposureExpressionsScalarValueOp {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueDivide
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueDivide : UExposureExpressionsScalarValueOp {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueStep
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueStep : UExposureExpressionsScalarValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueMin
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueMin : UExposureExpressionsScalarValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueMax
// Size: 0x38 (Inherited: 0x38)
struct UExposureExpressionsScalarValueMax : UExposureExpressionsScalarValueFunction {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueClamp
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsScalarValueClamp : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* Min; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Max; // 0x38(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueSmoothStep
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsScalarValueSmoothStep : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* Min; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Max; // 0x38(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueLerp
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsScalarValueLerp : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* A; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* B; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Alpha; // 0x38(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueSelect
// Size: 0x48 (Inherited: 0x28)
struct UExposureExpressionsScalarValueSelect : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	float Constant; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UExposureExpressionsScalarValue* ValueTrue; // 0x38(0x08)
	struct UExposureExpressionsScalarValue* ValueFalse; // 0x40(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueDay
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueDay : UExposureExpressionsScalarValue {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueOvercast
// Size: 0x28 (Inherited: 0x28)
struct UExposureExpressionsScalarValueOvercast : UExposureExpressionsScalarValue {
};

// Class ExposureExpressions.ExposureExpressionsScalarValueIndoors
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsScalarValueIndoors : UExposureExpressionsScalarValue {
	bool bSmoothed; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueOutdoorsDaytime
// Size: 0x30 (Inherited: 0x28)
struct UExposureExpressionsScalarValueOutdoorsDaytime : UExposureExpressionsScalarValue {
	bool bSmoothed; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueLerpWithAlpha
// Size: 0x40 (Inherited: 0x28)
struct UExposureExpressionsExposureValueLerpWithAlpha : UExposureExpressionsExposureValue {
	struct UExposureExpressionsExposureValue* ExposureA; // 0x28(0x08)
	struct UExposureExpressionsExposureValue* ExposureB; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Alpha; // 0x38(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureValueSelect
// Size: 0x48 (Inherited: 0x28)
struct UExposureExpressionsExposureValueSelect : UExposureExpressionsExposureValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	float Constant; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UExposureExpressionsExposureValue* ExposureTrue; // 0x38(0x08)
	struct UExposureExpressionsExposureValue* ExposureFalse; // 0x40(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueMapRangeClampedExposure
// Size: 0x50 (Inherited: 0x28)
struct UExposureExpressionsScalarValueMapRangeClampedExposure : UExposureExpressionsExposureValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* Min; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Max; // 0x38(0x08)
	struct UExposureExpressionsExposureValue* ExposureMin; // 0x40(0x08)
	struct UExposureExpressionsExposureValue* ExposureMax; // 0x48(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarValueMapRangeClamped
// Size: 0x50 (Inherited: 0x28)
struct UExposureExpressionsScalarValueMapRangeClamped : UExposureExpressionsScalarValue {
	struct UExposureExpressionsScalarValue* Value; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* Min; // 0x30(0x08)
	struct UExposureExpressionsScalarValue* Max; // 0x38(0x08)
	struct UExposureExpressionsScalarValue* OutMin; // 0x40(0x08)
	struct UExposureExpressionsScalarValue* OutMax; // 0x48(0x08)
};

// Class ExposureExpressions.ExposureExpressionsScalarCurve
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsScalarCurve : UExposureExpressionsScalarValue {
	struct UCurveFloat* Curve; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* CurveX; // 0x30(0x08)
};

// Class ExposureExpressions.ExposureExpressionsExposureCurve
// Size: 0x38 (Inherited: 0x28)
struct UExposureExpressionsExposureCurve : UExposureExpressionsExposureValue {
	struct UCurveFloat* ExposureCurve; // 0x28(0x08)
	struct UExposureExpressionsScalarValue* CurveX; // 0x30(0x08)
};

