// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarBase
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarBase : UObject {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModsBase
// Size: 0x38 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModsBase : UEnvironmentalGlobalsCustomScalarBase {
	struct TArray<struct UEnvironmentalGlobalsCustomScalarMod*> Mods; // 0x28(0x10)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsSeasonPhases
// Size: 0x40 (Inherited: 0x30)
struct UEnvironmentalGlobalsSeasonPhases : UDataAsset {
	int32_t FallPhases; // 0x30(0x04)
	int32_t WinterPhases; // 0x34(0x04)
	int32_t SpringPhases; // 0x38(0x04)
	int32_t SummerPhases; // 0x3c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsSingleton
// Size: 0x580 (Inherited: 0x248)
struct AEnvironmentalGlobalsSingleton : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct FEnvironmentalGlobals Globals; // 0x250(0x2a0)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x4f0(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x4f8(0x08)
	struct FEnvironmentalGlobalsVelocityTracker PlayerVelocity; // 0x500(0x30)
	struct FEnvironmentalGlobalsVelocityTracker CameraVelocity; // 0x530(0x30)
	struct FEnvironmentalGlobalsIndoors AccumulateIndoors; // 0x560(0x18)
	bool bDirty; // 0x578(0x01)
	bool bDiscontinuity; // 0x579(0x01)
	char pad_57A[0x6]; // 0x57a(0x06)

	void GetEnvironmentalGlobals(struct UObject* WorldContextObject, struct FEnvironmentalGlobals& EnvironmentalGlobals); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.GetEnvironmentalGlobals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c044a0
	void EnvironmentalGlobalsSetExtraVector(struct UObject* WorldContextObject, struct FName Name, struct FVector Value, bool& bSuccess); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1c042d0
	void EnvironmentalGlobalsSetExtraScalar(struct UObject* WorldContextObject, struct FName Name, float Value, bool& bSuccess); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c040a0
	void EnvironmentalGlobalsSetExtraColor(struct UObject* WorldContextObject, struct FName Name, struct FLinearColor Value, bool& bSuccess); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1c03e60
	void EnvironmentalGlobalsGetSeason(struct UObject* WorldContextObject, struct FEnvironmentalGlobalsSeason& Season, bool bAllowOverrides); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetSeason // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c03cf0
	void EnvironmentalGlobalsGetExtraVector(struct UObject* WorldContextObject, struct FName Name, struct FVector& Value, bool& bExists); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c03b20
	void EnvironmentalGlobalsGetExtraScalar(struct UObject* WorldContextObject, struct FName Name, float& Value, bool& bExists); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c03940
	void EnvironmentalGlobalsGetExtraColor(struct UObject* WorldContextObject, struct FName Name, struct FLinearColor& Value, bool& bExists); // Function EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c03770
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsVar
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsVar : UObject {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsVars
// Size: 0x108 (Inherited: 0x30)
struct UEnvironmentalGlobalsVars : UDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UEnvironmentalGlobalsVar*> Vars; // 0x38(0x10)
	struct FExposureExpressions GlobalExpressions; // 0x48(0xc0)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsScalarVar
// Size: 0x48 (Inherited: 0x28)
struct UEnvironmentalGlobalsScalarVar : UEnvironmentalGlobalsVar {
	struct FName ParameterName; // 0x28(0x08)
	struct FEnvironmentalGlobalsScalarRunMode RunMode; // 0x30(0x10)
	bool bApplyToMaterialParameterCollection; // 0x40(0x01)
	bool bApplyToNiagaraParameterCollection; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsScalarCurveVar
// Size: 0x60 (Inherited: 0x48)
struct UEnvironmentalGlobalsScalarCurveVar : UEnvironmentalGlobalsScalarVar {
	struct UCurveFloat* Curve; // 0x48(0x08)
	enum class EEnvironmentalGlobalsValue CurveX; // 0x50(0x01)
	enum class EEnvironmentalGlobalsScalarConversion Conversion; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FEnvironmentalGlobalsScalarClamp ClampMinMax; // 0x54(0x0c)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsScalarExpression
// Size: 0x58 (Inherited: 0x48)
struct UEnvironmentalGlobalsScalarExpression : UEnvironmentalGlobalsScalarVar {
	struct UExposureExpressionsExposureValue* Expression; // 0x48(0x08)
	enum class EEnvironmentalGlobalsScalarConversion Conversion; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarMod
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarMod : UObject {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalar
// Size: 0x50 (Inherited: 0x48)
struct UEnvironmentalGlobalsCustomScalar : UEnvironmentalGlobalsScalarVar {
	struct UEnvironmentalGlobalsCustomScalarBase* Scalar; // 0x48(0x08)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsExpsoureCurveFromGlobals
// Size: 0x38 (Inherited: 0x28)
struct UEnvironmentalGlobalsExpsoureCurveFromGlobals : UExposureExpressionsExposureValue {
	struct UCurveFloat* Curve; // 0x28(0x08)
	enum class EEnvironmentalGlobalsValue CurveX; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsColorVar
// Size: 0x60 (Inherited: 0x28)
struct UEnvironmentalGlobalsColorVar : UEnvironmentalGlobalsVar {
	struct FName ParameterName; // 0x28(0x08)
	struct FEnvironmentalGlobalsColorRunMode RunMode; // 0x30(0x28)
	bool bApplyToMaterialParameterCollection; // 0x58(0x01)
	bool bApplyToNiagaraParameterCollection; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsColorCurveVar
// Size: 0x70 (Inherited: 0x60)
struct UEnvironmentalGlobalsColorCurveVar : UEnvironmentalGlobalsColorVar {
	struct UCurveLinearColor* Curve; // 0x60(0x08)
	enum class EEnvironmentalGlobalsValue CurveX; // 0x68(0x01)
	enum class EEnvironmentalGlobalsColorVarConversion Conversion; // 0x69(0x01)
	enum class EEnvironmentalGlobalsColorCurveVarMode Mode; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModClamp
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModClamp : UEnvironmentalGlobalsCustomScalarMod {
	float Min; // 0x28(0x04)
	float Max; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSaturate
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModSaturate : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSingleValue
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModSingleValue : UEnvironmentalGlobalsCustomScalarMod {
	struct UEnvironmentalGlobalsCustomScalarBase* Value; // 0x28(0x08)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMin
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModMin : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMax
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModMax : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMultiply
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModMultiply : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModPlus
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModPlus : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMinus
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModMinus : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModDivide
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModDivide : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMinusBy
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModMinusBy : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModDivideBy
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModDivideBy : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModStepGreater
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModStepGreater : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModStepLess
// Size: 0x30 (Inherited: 0x30)
struct UEnvironmentalGlobalsCustomScalarModStepLess : UEnvironmentalGlobalsCustomScalarModSingleValue {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModOneMinus
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModOneMinus : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModPower
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModPower : UEnvironmentalGlobalsCustomScalarMod {
	float Exponent; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRaise
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModRaise : UEnvironmentalGlobalsCustomScalarMod {
	float Base; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModInverse
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModInverse : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCos
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModCos : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSin
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModSin : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModLerp
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModLerp : UEnvironmentalGlobalsCustomScalarMod {
	float ValueAtZero; // 0x28(0x04)
	float ValueAtOne; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSmoothStep
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModSmoothStep : UEnvironmentalGlobalsCustomScalarMod {
	float Min; // 0x28(0x04)
	float Max; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRemap
// Size: 0x38 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModRemap : UEnvironmentalGlobalsCustomScalarMod {
	struct FVector2D InputMinMax; // 0x28(0x08)
	struct FVector2D OutputMinMax; // 0x30(0x08)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCurve
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModCurve : UEnvironmentalGlobalsCustomScalarMod {
	struct UCurveFloat* Curve; // 0x28(0x08)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCeil
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModCeil : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModFloor
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModFloor : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModTrunc
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModTrunc : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRound
// Size: 0x28 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarModRound : UEnvironmentalGlobalsCustomScalarMod {
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarConstant
// Size: 0x30 (Inherited: 0x28)
struct UEnvironmentalGlobalsCustomScalarConstant : UEnvironmentalGlobalsCustomScalarBase {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarExposureExpression
// Size: 0x40 (Inherited: 0x38)
struct UEnvironmentalGlobalsCustomScalarExposureExpression : UEnvironmentalGlobalsCustomScalarModsBase {
	struct UExposureExpressionsScalarValue* Expression; // 0x38(0x08)
};

// Class EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarEnvGlobal
// Size: 0x40 (Inherited: 0x38)
struct UEnvironmentalGlobalsCustomScalarEnvGlobal : UEnvironmentalGlobalsCustomScalarModsBase {
	enum class EEnvironmentalGlobalsValue Value; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class EnvironmentalGlobals.SeasonOverrideInterface
// Size: 0x28 (Inherited: 0x28)
struct USeasonOverrideInterface : UInterface {
};

// Class EnvironmentalGlobals.SeasonOverrideVolume
// Size: 0x290 (Inherited: 0x280)
struct ASeasonOverrideVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	float Priority; // 0x288(0x04)
	bool bEnabled; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)

	void SetPriority(float NewPriority); // Function EnvironmentalGlobals.SeasonOverrideVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1c04620
};

// Class EnvironmentalGlobals.SeasonFXOverrideVolume
// Size: 0x298 (Inherited: 0x290)
struct ASeasonFXOverrideVolume : ASeasonOverrideVolume {
	enum class ESeasonEnum SeasonOverride; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t PhaseOverride; // 0x294(0x04)
};

// Class EnvironmentalGlobals.PerSeasonFXOverrideVolume
// Size: 0x2b0 (Inherited: 0x290)
struct APerSeasonFXOverrideVolume : ASeasonOverrideVolume {
	enum class ESeasonEnum FallOverride; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t FallPhaseOverride; // 0x294(0x04)
	enum class ESeasonEnum WinterOverride; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	int32_t WinterPhaseOverride; // 0x29c(0x04)
	enum class ESeasonEnum SpringOverride; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t SpringPhaseOverride; // 0x2a4(0x04)
	enum class ESeasonEnum SummerOverride; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t SummerPhaseOverride; // 0x2ac(0x04)
};

