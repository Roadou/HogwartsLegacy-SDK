// Enum NiagaraHelpers.ENiagaraSpawnBoundsMethod
enum class ENiagaraSpawnBoundsMethod : uint8 {
	Disabled = 0,
	Radius = 1,
	MajorAxisLength = 2,
	ProjectedBoxSurfaceArea = 3,
	ProjectedCircleSurfaceArea = 4,
	BoxVolume = 5,
	SphereVolume = 6,
	BoxSurfaceArea = 7,
	SphereSurfaceArea = 8,
	ENiagaraSpawnBoundsMethod_MAX = 9
};

// Enum NiagaraHelpers.ENiagaraHelpersMultiSpawnRateType
enum class ENiagaraHelpersMultiSpawnRateType : uint8 {
	DoNotCompute = 0,
	BoxVolume = 1,
	SphereVolume = 2,
	BoxSurfaceArea = 3,
	SphereSurfaceArea = 4,
	CircleSurfaceArea = 5,
	ForceToOne = 6,
	ENiagaraHelpersMultiSpawnRateType_MAX = 7
};

// Enum NiagaraHelpers.ENiagaraHelpersPrimMatchMode
enum class ENiagaraHelpersPrimMatchMode : uint8 {
	Exact = 0,
	SubStringCaseSensitve = 1,
	SubStringIgnoreCase = 2,
	ENiagaraHelpersPrimMatchMode_MAX = 3
};

// Enum NiagaraHelpers.ENiagaraHelpersPrimRule
enum class ENiagaraHelpersPrimRule : uint8 {
	DoNotSpawn = 0,
	OnlySpawn = 1,
	ENiagaraHelpersPrimRule_MAX = 2
};

// ScriptStruct NiagaraHelpers.NiagaraDataInterfaceAkEventInfo
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraDataInterfaceAkEventInfo {
	struct UAkAudioEvent* AkAudioEvent; // 0x00(0x08)
	struct FName EventName; // 0x08(0x08)
	struct FName AttachPointName; // 0x10(0x08)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRaw
// Size: 0x70 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRaw {
	struct TArray<struct FNiagaraHelpersInitializerRawFloat> Floats; // 0x00(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawBool> Bools; // 0x10(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawInteger> Integers; // 0x20(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawLinearColor> LinearColors; // 0x30(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawVector> Vectors; // 0x40(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawRotator> Rotators; // 0x50(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRawMaterial> Materials; // 0x60(0x10)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawMaterial {
	struct FName Variable; // 0x00(0x08)
	struct UMaterialInterface* Value; // 0x08(0x08)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawRotator
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawRotator {
	struct FName Variable; // 0x00(0x08)
	struct FRotator Value; // 0x08(0x0c)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawVector
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawVector {
	struct FName Variable; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawLinearColor
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawLinearColor {
	struct FName Variable; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawInteger
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawInteger {
	struct FName Variable; // 0x00(0x08)
	int32_t Value; // 0x08(0x04)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawBool
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawBool {
	struct FName Variable; // 0x00(0x08)
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRawFloat
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerRawFloat {
	struct FName Variable; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializers
// Size: 0x70 (Inherited: 0x00)
struct FNiagaraHelpersInitializers {
	struct TArray<struct FNiagaraHelpersInitializerFloat> Floats; // 0x00(0x10)
	struct TArray<struct FNiagaraHelpersInitializerBool> Bools; // 0x10(0x10)
	struct TArray<struct FNiagaraHelpersInitializerInteger> Integers; // 0x20(0x10)
	struct TArray<struct FNiagaraHelpersInitializerLinearColor> LinearColors; // 0x30(0x10)
	struct TArray<struct FNiagaraHelpersInitializerVector> Vectors; // 0x40(0x10)
	struct TArray<struct FNiagaraHelpersInitializerRotator> Rotators; // 0x50(0x10)
	struct TArray<struct FNiagaraHelpersInitializerMaterial> Materials; // 0x60(0x10)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraHelpersInitializerMaterial {
	struct FNiagaraHelpersVarNameMaterial Variable; // 0x00(0x08)
	struct UMaterialInterface* Value; // 0x08(0x08)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarName
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraHelpersVarName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameMaterial
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameMaterial : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerRotator
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraHelpersInitializerRotator {
	struct FNiagaraHelpersVarNameQuat Variable; // 0x00(0x08)
	struct FRotator Value; // 0x08(0x0c)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameQuat
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameQuat : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerVector
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraHelpersInitializerVector {
	struct FNiagaraHelpersVarNameVector Variable; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameVector
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameVector : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerLinearColor
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraHelpersInitializerLinearColor {
	struct FNiagaraHelpersVarNameLinearColor Variable; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameLinearColor
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameLinearColor : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerInteger
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerInteger {
	struct FName Variable; // 0x00(0x08)
	int32_t Value; // 0x08(0x04)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerBool
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerBool {
	struct FName Variable; // 0x00(0x08)
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersInitializerFloat
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraHelpersInitializerFloat {
	struct FName Variable; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnBoundsSpawnRate
// Size: 0x1c (Inherited: 0x00)
struct FNiagaraSystemSpawnBoundsSpawnRate {
	struct FName SpawnRateVar; // 0x00(0x08)
	float ReferenceMeasure; // 0x08(0x04)
	float LinearPower; // 0x0c(0x04)
	float MinSpawnRate; // 0x10(0x04)
	float MaxSpawnRate; // 0x14(0x04)
	enum class ENiagaraSpawnBoundsMethod Method; // 0x18(0x01)
	char bUseMinSpawnRate : 1; // 0x19(0x01)
	char bUseMaxSpawnRate : 1; // 0x19(0x01)
	char pad_19_2 : 6; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnInfo
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraSystemSpawnInfo {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform Transform; // 0x10(0x30)
	bool bAutoActivate; // 0x40(0x01)
	bool bAutoDestroy; // 0x41(0x01)
	bool bPreCullCheck; // 0x42(0x01)
	bool bPooled; // 0x43(0x01)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnAttachedInfo
// Size: 0x70 (Inherited: 0x50)
struct FNiagaraSystemSpawnAttachedInfo : FNiagaraSystemSpawnInfo {
	enum class EAttachLocation AttachLocation; // 0x48(0x01)
	struct FNiagaraSystemSpawnBoundsSpawnRate BoundsSpawnRateAdjustment; // 0x4c(0x1c)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnAttachedPointInfo
// Size: 0x80 (Inherited: 0x70)
struct FNiagaraSystemSpawnAttachedPointInfo : FNiagaraSystemSpawnAttachedInfo {
	struct FName AttachPoint; // 0x68(0x08)
	bool bFailOnAttachPointMissing; // 0x70(0x01)
	bool bDeepSearchComponents; // 0x71(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnInfoOverride
// Size: 0x2c (Inherited: 0x00)
struct FNiagaraSystemSpawnInfoOverride {
	char bOverride_LocationOrOffset : 1; // 0x00(0x01)
	char bOverride_Rotator : 1; // 0x00(0x01)
	char bOverride_Scale : 1; // 0x00(0x01)
	char bOverride_bAutoActivate : 1; // 0x00(0x01)
	char bOverride_bAutoDestroy : 1; // 0x00(0x01)
	char bOverride_bPreCullCheck : 1; // 0x00(0x01)
	char bOverride_bPooled : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector LocationOrOffset; // 0x04(0x0c)
	struct FRotator Rotator; // 0x10(0x0c)
	struct FVector Scale; // 0x1c(0x0c)
	bool bAutoActivate; // 0x28(0x01)
	bool bAutoDestroy; // 0x29(0x01)
	bool bPreCullCheck; // 0x2a(0x01)
	bool bPooled; // 0x2b(0x01)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnAttachedInfoOverride
// Size: 0x30 (Inherited: 0x2c)
struct FNiagaraSystemSpawnAttachedInfoOverride : FNiagaraSystemSpawnInfoOverride {
	char bOverride_AttachLocation : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	enum class EAttachLocation AttachLocation; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnAttachedPointInfoOverride
// Size: 0x40 (Inherited: 0x30)
struct FNiagaraSystemSpawnAttachedPointInfoOverride : FNiagaraSystemSpawnAttachedInfoOverride {
	char bOverride_AttachPoint : 1; // 0x30(0x01)
	char bOverride_FailOnAttachPointMissing : 1; // 0x30(0x01)
	char bOverride_DeepSearchComponents : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName AttachPoint; // 0x34(0x08)
	bool bFailOnAttachPointMissing; // 0x3c(0x01)
	bool bDeepSearchComponents; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersSystemVariableCache
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraHelpersSystemVariableCache {
	struct TMap<struct TWeakObjectPtr<struct UNiagaraSystem>, struct UNiagaraHelpersFullVariableListCacheEntry*> SystemMap; // 0x00(0x50)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersFullVariableList
// Size: 0x270 (Inherited: 0x00)
struct FNiagaraHelpersFullVariableList {
	struct FNiagaraHelpersVariableList UserVariables; // 0x00(0x18)
	struct FNiagaraHelpersVariableList SystemVariables; // 0x18(0x18)
	struct TArray<struct FNiagaraHelpersEmitterVariableList> EmitterVariables; // 0x30(0x10)
	struct FNiagaraHelpersVariableValueStore DefaultValues; // 0x40(0x230)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVariableValueStore
// Size: 0x230 (Inherited: 0x00)
struct FNiagaraHelpersVariableValueStore {
	struct TMap<struct FName, float> Floats; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> LinearColors; // 0x50(0x50)
	struct TMap<struct FName, bool> Bools; // 0xa0(0x50)
	struct TMap<struct FName, int32_t> Integers; // 0xf0(0x50)
	struct TMap<struct FName, struct FVector> Vectors; // 0x140(0x50)
	struct TMap<struct FName, struct FRotator> Rotators; // 0x190(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> Materials; // 0x1e0(0x50)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVariableList
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraHelpersVariableList {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FNiagaraVariable> Variables; // 0x08(0x10)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersEmitterVariableList
// Size: 0x28 (Inherited: 0x18)
struct FNiagaraHelpersEmitterVariableList : FNiagaraHelpersVariableList {
	struct FName EmitterName; // 0x18(0x08)
	bool bDefaultEnabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameInteger
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameInteger : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameBool
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameBool : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersVarNameFloat
// Size: 0x08 (Inherited: 0x08)
struct FNiagaraHelpersVarNameFloat : FNiagaraHelpersVarName {
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnMultiInfo
// Size: 0x80 (Inherited: 0x70)
struct FNiagaraSystemSpawnMultiInfo : FNiagaraSystemSpawnAttachedInfo {
	struct FName OverrideMeshVar; // 0x68(0x08)
	struct FName SpawnRateVar; // 0x70(0x08)
	float SpawnRateCutoffPercentage; // 0x78(0x04)
	enum class ENiagaraHelpersMultiSpawnRateType SpawnRateMethod; // 0x7c(0x01)
	bool bCombineBoundsAndMultiSpawnRates; // 0x7d(0x01)
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnMultiSkeletalInfo
// Size: 0x80 (Inherited: 0x80)
struct FNiagaraSystemSpawnMultiSkeletalInfo : FNiagaraSystemSpawnMultiInfo {
};

// ScriptStruct NiagaraHelpers.NiagaraSystemSpawnMultiStaticInfo
// Size: 0x80 (Inherited: 0x80)
struct FNiagaraSystemSpawnMultiStaticInfo : FNiagaraSystemSpawnMultiInfo {
};

// ScriptStruct NiagaraHelpers.NiagaraHelpersPrimFilter
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraHelpersPrimFilter {
	struct TArray<struct FName> Primitives; // 0x00(0x10)
	enum class ENiagaraHelpersPrimRule Rule; // 0x10(0x01)
	enum class ENiagaraHelpersPrimMatchMode MatchMode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

