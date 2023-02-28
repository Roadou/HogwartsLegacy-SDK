// Enum LerpVolumes.ELerpVolumesApplyWorldContextMode
enum class ELerpVolumesApplyWorldContextMode : uint8 {
	SetRTPCs = 0,
	SendHermes = 1,
	SetNPCs = 2,
	SetMPCs = 3,
	ELerpVolumesApplyWorldContextMode_MAX = 4
};

// Enum LerpVolumes.ELerpVolumesGetTagValueMode
enum class ELerpVolumesGetTagValueMode : uint8 {
	Default = 0,
	FinalValue = 1,
	FullList = 2,
	ELerpVolumesGetTagValueMode_MAX = 3
};

// Enum LerpVolumes.ELerpVolumesTagValueMode
enum class ELerpVolumesTagValueMode : uint8 {
	FinalValue = 0,
	FullList = 1,
	ELerpVolumesTagValueMode_MAX = 2
};

// Enum LerpVolumes.ELerpVolumesInterpolantType
enum class ELerpVolumesInterpolantType : uint8 {
	Unknown = 0,
	Scalar = 1,
	Integer = 2,
	Vector = 3,
	UnitDirection = 4,
	Color = 5,
	Tag = 6,
	ELerpVolumesInterpolantType_MAX = 7
};

// Enum LerpVolumes.EVolumeCenterlineMode
enum class EVolumeCenterlineMode : uint8 {
	None = 0,
	XAxis = 1,
	YAxis = 2,
	ZAxis = 3,
	EVolumeCenterlineMode_MAX = 4
};

// ScriptStruct LerpVolumes.LerpVolumesReplaceLevelSubString
// Size: 0x20 (Inherited: 0x00)
struct FLerpVolumesReplaceLevelSubString {
	struct FString LevelSubString; // 0x00(0x10)
	struct FString ReplaceWith; // 0x10(0x10)
};

// ScriptStruct LerpVolumes.LerpVolumesReplaceLevelSuffix
// Size: 0x20 (Inherited: 0x00)
struct FLerpVolumesReplaceLevelSuffix {
	struct FString LevelSuffix; // 0x00(0x10)
	struct FString ReplaceWith; // 0x10(0x10)
};

// ScriptStruct LerpVolumes.LerpVolumesReplaceLevelPrefix
// Size: 0x20 (Inherited: 0x00)
struct FLerpVolumesReplaceLevelPrefix {
	struct FString LevelPrefix; // 0x00(0x10)
	struct FString ReplaceWith; // 0x10(0x10)
};

// ScriptStruct LerpVolumes.LerpVolumesRemapLevelName
// Size: 0x28 (Inherited: 0x00)
struct FLerpVolumesRemapLevelName {
	struct FString InLevelName; // 0x00(0x10)
	struct FString OutLevelName; // 0x10(0x10)
	bool bExactMatch; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct LerpVolumes.LerpVolumesApplyWorldContext
// Size: 0xc0 (Inherited: 0x00)
struct FLerpVolumesApplyWorldContext {
	struct UWorld* World; // 0x00(0x08)
	struct AActor* sender; // 0x08(0x08)
	struct AActor* Receiver; // 0x10(0x08)
	struct TMap<struct UMaterialParameterCollection*, struct UMaterialParameterCollectionInstance*> MPCs; // 0x18(0x50)
	struct TMap<struct UNiagaraParameterCollection*, struct UNiagaraParameterCollectionInstance*> NPCs; // 0x68(0x50)
	int32_t Mode; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct LerpVolumes.LerpVolumesInterpolantsEvaluator
// Size: 0x1e8 (Inherited: 0x00)
struct FLerpVolumesInterpolantsEvaluator {
	struct FLerpVolumesInterpolants Interpolants; // 0x00(0x1e0)
	struct ULerpVolumesPresistentContextData* ContextData; // 0x1e0(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesInterpolants
// Size: 0x1e0 (Inherited: 0x00)
struct FLerpVolumesInterpolants {
	struct TMap<struct FName, struct FLerpVolumesScalar> Scalars; // 0x00(0x50)
	struct TMap<struct FName, struct FLerpVolumesInteger> Integers; // 0x50(0x50)
	struct TMap<struct FName, struct FLerpVolumesVector> Vectors; // 0xa0(0x50)
	struct TMap<struct FName, struct FLerpVolumesUnitDirection> Directions; // 0xf0(0x50)
	struct TMap<struct FName, struct FLerpVolumesColor> Colors; // 0x140(0x50)
	struct TMap<struct FName, struct FLerpVolumesTag> Tags; // 0x190(0x50)
};

// ScriptStruct LerpVolumes.LerpVolumesInterpolantBase
// Size: 0x10 (Inherited: 0x00)
struct FLerpVolumesInterpolantBase {
	struct FName HermesMessage; // 0x00(0x08)
	struct FName WWiseRTPC; // 0x08(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesTag
// Size: 0x48 (Inherited: 0x10)
struct FLerpVolumesTag : FLerpVolumesInterpolantBase {
	struct FLerpVolumesTagEntry DefaultValue; // 0x10(0x18)
	float AlphaTransition; // 0x28(0x04)
	bool bForceFullHistory; // 0x2c(0x01)
	bool bOnlySetDefaultWWiseRTPCIfNotEmpty; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct TArray<struct FLerpVolumesTagEntry> History; // 0x30(0x10)
	enum class ELerpVolumesTagValueMode DefaultValueMode; // 0x40(0x01)
	enum class ELerpVolumesTagValueMode RTPCValueMode; // 0x41(0x01)
	enum class ELerpVolumesTagValueMode HermesValueMode; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct LerpVolumes.LerpVolumesTagEntry
// Size: 0x18 (Inherited: 0x00)
struct FLerpVolumesTagEntry {
	struct FString StringValue; // 0x00(0x10)
	struct FName NameValue; // 0x10(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesInterpolantPCs
// Size: 0x20 (Inherited: 0x10)
struct FLerpVolumesInterpolantPCs : FLerpVolumesInterpolantBase {
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x10(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x18(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesColor
// Size: 0x30 (Inherited: 0x20)
struct FLerpVolumesColor : FLerpVolumesInterpolantPCs {
	struct FLinearColor Value; // 0x20(0x10)
};

// ScriptStruct LerpVolumes.LerpVolumesUnitDirection
// Size: 0x30 (Inherited: 0x20)
struct FLerpVolumesUnitDirection : FLerpVolumesInterpolantPCs {
	struct FVector Value; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LerpVolumes.LerpVolumesVector
// Size: 0x30 (Inherited: 0x20)
struct FLerpVolumesVector : FLerpVolumesInterpolantPCs {
	struct FVector Value; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LerpVolumes.LerpVolumesInteger
// Size: 0x30 (Inherited: 0x20)
struct FLerpVolumesInteger : FLerpVolumesInterpolantPCs {
	int32_t Value; // 0x20(0x04)
	int32_t MinValue; // 0x24(0x04)
	int32_t MaxValue; // 0x28(0x04)
	char bClampMinValue : 1; // 0x2c(0x01)
	char bClampMaxValue : 1; // 0x2c(0x01)
	char pad_2C_2 : 6; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct LerpVolumes.LerpVolumesScalar
// Size: 0x30 (Inherited: 0x20)
struct FLerpVolumesScalar : FLerpVolumesInterpolantPCs {
	float Value; // 0x20(0x04)
	float MinValue; // 0x24(0x04)
	float MaxValue; // 0x28(0x04)
	char bClampMinValue : 1; // 0x2c(0x01)
	char bClampMaxValue : 1; // 0x2c(0x01)
	char bNormalizeValue : 1; // 0x2c(0x01)
	char pad_2C_3 : 5; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct LerpVolumes.LerpVolumeInfo
// Size: 0x40 (Inherited: 0x00)
struct FLerpVolumeInfo {
	struct AVolume* Volume; // 0x00(0x08)
	struct FVolumeCenterlineSettings Centerline; // 0x08(0x0c)
	float BlendRadius; // 0x14(0x04)
	float BlendWeight; // 0x18(0x04)
	struct FBox BoundingBox; // 0x1c(0x1c)
	bool bUnbounded; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct LerpVolumes.VolumeCenterlineSettings
// Size: 0x0c (Inherited: 0x00)
struct FVolumeCenterlineSettings {
	enum class EVolumeCenterlineMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CeilingFlatness; // 0x04(0x04)
	float FloorFlatness; // 0x08(0x04)
};

// ScriptStruct LerpVolumes.LerpVolumeInterpolantInfo
// Size: 0x68 (Inherited: 0x00)
struct FLerpVolumeInterpolantInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FLerpVolumeInfo Volume; // 0x08(0x40)
	struct FVector Pos; // 0x48(0x0c)
	float Depth; // 0x54(0x04)
	float DepthBlend; // 0x58(0x04)
	float DomainWeightBlend; // 0x5c(0x04)
	float FinalBlend; // 0x60(0x04)
	bool bIsCamera; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct LerpVolumes.LerpVolumesName
// Size: 0x08 (Inherited: 0x00)
struct FLerpVolumesName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesRawLevelName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesRawLevelName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesLevelName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesLevelName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesTagName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesTagName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesColorName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesColorName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesUnitDirectionName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesUnitDirectionName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesVectorName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesVectorName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesIntegerName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesIntegerName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesScalarName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesScalarName : FLerpVolumesName {
};

// ScriptStruct LerpVolumes.LerpVolumesAudioStateGroupNameBase
// Size: 0x08 (Inherited: 0x00)
struct FLerpVolumesAudioStateGroupNameBase {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct LerpVolumes.LerpVolumesAudioStateGroupLocation
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesAudioStateGroupLocation : FLerpVolumesAudioStateGroupNameBase {
};

// ScriptStruct LerpVolumes.LerpVolumesAudioStateGroupName
// Size: 0x08 (Inherited: 0x08)
struct FLerpVolumesAudioStateGroupName : FLerpVolumesAudioStateGroupNameBase {
};

// ScriptStruct LerpVolumes.LerpVolumesWorldInfo
// Size: 0x28 (Inherited: 0x00)
struct FLerpVolumesWorldInfo {
	struct ALerpVolumesSingleton* Singleton; // 0x00(0x08)
	struct TArray<struct ULerpVolumesLocalEvaluationComponent*> LocalEvaluators; // 0x08(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> Volumes; // 0x18(0x10)
};

// ScriptStruct LerpVolumes.BoxBoundsInfo
// Size: 0x1c (Inherited: 0x00)
struct FBoxBoundsInfo {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
};

