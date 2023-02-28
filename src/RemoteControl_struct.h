// Enum RemoteControl.ERCAccess
enum class ERCAccess : uint8 {
	NO_ACCESS = 0,
	READ_ACCESS = 1,
	WRITE_ACCESS = 2,
	WRITE_TRANSACTION_ACCESS = 3,
	ERCAccess_MAX = 4
};

// Enum RemoteControl.EExposedFieldType
enum class EExposedFieldType : uint8 {
	Invalid = 0,
	Property = 1,
	Function = 2,
	EExposedFieldType_MAX = 3
};

// Enum RemoteControl.ERemoteControlEnum
enum class ERemoteControlEnum : uint8 {
	E_One = 0,
	E_Two = 1,
	E_Three = 2,
	E_MAX = 3
};

// Enum RemoteControl.ERemoteControlEnumClass
enum class ERemoteControlEnumClass : uint8 {
	E_One = 0,
	E_Two = 1,
	E_Three = 2,
	E_MAX = 3
};

// Enum RemoteControl.ERCBindingStatus
enum class ERCBindingStatus : uint8 {
	Unassigned = 0,
	Awaiting = 1,
	Bound = 2,
	ERCBindingStatus_MAX = 3
};

// ScriptStruct RemoteControl.RemoteControlEntity
// Size: 0x98 (Inherited: 0x00)
struct FRemoteControlEntity {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct FString> UserMetadata; // 0x08(0x50)
	struct TArray<struct TWeakObjectPtr<struct URemoteControlBinding>> Bindings; // 0x58(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0x68(0x08)
	struct FName Label; // 0x70(0x08)
	struct FGuid ID; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// ScriptStruct RemoteControl.RemoteControlActor
// Size: 0xb0 (Inherited: 0x98)
struct FRemoteControlActor : FRemoteControlEntity {
	struct FSoftObjectPath Path; // 0x98(0x18)
};

// ScriptStruct RemoteControl.RCEntityWrapper
// Size: 0x18 (Inherited: 0x00)
struct FRCEntityWrapper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct RemoteControl.RemoteControlField
// Size: 0x130 (Inherited: 0x98)
struct FRemoteControlField : FRemoteControlEntity {
	enum class EExposedFieldType FieldType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FName FieldName; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FRCFieldPathInfo FieldPathInfo; // 0xa8(0x18)
	struct TSet<struct FRemoteControlProtocolBinding> ProtocolBindings; // 0xc0(0x50)
	struct FSoftClassPath OwnerClass; // 0x110(0x18)
	bool bIsEditorOnly; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct RemoteControl.RemoteControlProtocolBinding
// Size: 0x40 (Inherited: 0x00)
struct FRemoteControlProtocolBinding {
	struct FGuid ID; // 0x00(0x10)
	struct FName ProtocolName; // 0x10(0x08)
	struct FGuid PropertyId; // 0x18(0x10)
	struct FName MappingPropertyName; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct RemoteControl.RCFieldPathInfo
// Size: 0x18 (Inherited: 0x00)
struct FRCFieldPathInfo {
	struct TArray<struct FRCFieldPathSegment> Segments; // 0x00(0x10)
	uint32_t PathHash; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RemoteControl.RCFieldPathSegment
// Size: 0x50 (Inherited: 0x00)
struct FRCFieldPathSegment {
	struct FName Name; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ValuePropertyName; // 0x10(0x10)
	struct FString MapKey; // 0x20(0x10)
	char pad_30[0x20]; // 0x30(0x20)
};

// ScriptStruct RemoteControl.RemoteControlFunction
// Size: 0x168 (Inherited: 0x130)
struct FRemoteControlFunction : FRemoteControlField {
	char pad_130[0x10]; // 0x130(0x10)
	bool bIsCallableInPackaged; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FSoftObjectPath FunctionPath; // 0x148(0x18)
	char pad_160[0x8]; // 0x160(0x08)
};

// ScriptStruct RemoteControl.RemoteControlProperty
// Size: 0x138 (Inherited: 0x130)
struct FRemoteControlProperty : FRemoteControlField {
	bool bIsEditableInPackaged; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// ScriptStruct RemoteControl.RCFieldMetadata
// Size: 0x08 (Inherited: 0x00)
struct FRCFieldMetadata {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct RemoteControl.RCMetadata_FVector
// Size: 0x30 (Inherited: 0x08)
struct FRCMetadata_FVector : FRCFieldMetadata {
	struct FVector DefaultValue; // 0x08(0x0c)
	struct FVector MinimumValue; // 0x14(0x0c)
	struct FVector MaximumValue; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct RemoteControl.RCMetadata_bool
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_bool : FRCFieldMetadata {
	bool DefaultValue; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RemoteControl.RCMetadata_UScriptStruct
// Size: 0x30 (Inherited: 0x08)
struct FRCMetadata_UScriptStruct : FRCFieldMetadata {
	struct TSoftObjectPtr<UScriptStruct> DefaultValue; // 0x08(0x28)
};

// ScriptStruct RemoteControl.RCMetadata_UClass
// Size: 0x30 (Inherited: 0x08)
struct FRCMetadata_UClass : FRCFieldMetadata {
	struct TSoftClassPtr<UObject> DefaultValue; // 0x08(0x28)
};

// ScriptStruct RemoteControl.RCMetadata_UObject
// Size: 0x30 (Inherited: 0x08)
struct FRCMetadata_UObject : FRCFieldMetadata {
	struct TSoftObjectPtr<UObject> DefaultValue; // 0x08(0x28)
};

// ScriptStruct RemoteControl.RCMetadata_FName
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_FName : FRCFieldMetadata {
	struct FName DefaultValue; // 0x08(0x08)
};

// ScriptStruct RemoteControl.RCMetadata_FString
// Size: 0x18 (Inherited: 0x08)
struct FRCMetadata_FString : FRCFieldMetadata {
	struct FString DefaultValue; // 0x08(0x10)
};

// ScriptStruct RemoteControl.RCMetadata_double
// Size: 0x20 (Inherited: 0x08)
struct FRCMetadata_double : FRCFieldMetadata {
	double Min; // 0x08(0x08)
	double Max; // 0x10(0x08)
	double DefaultValue; // 0x18(0x08)
};

// ScriptStruct RemoteControl.RCMetadata_float
// Size: 0x18 (Inherited: 0x08)
struct FRCMetadata_float : FRCFieldMetadata {
	float Min; // 0x08(0x04)
	float Max; // 0x0c(0x04)
	float DefaultValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RemoteControl.RCMetadata_int64
// Size: 0x20 (Inherited: 0x08)
struct FRCMetadata_int64 : FRCFieldMetadata {
	int64_t Min; // 0x08(0x08)
	int64_t Max; // 0x10(0x08)
	int64_t DefaultValue; // 0x18(0x08)
};

// ScriptStruct RemoteControl.RCMetadata_int32
// Size: 0x18 (Inherited: 0x08)
struct FRCMetadata_int32 : FRCFieldMetadata {
	int32_t Min; // 0x08(0x04)
	int32_t Max; // 0x0c(0x04)
	int32_t DefaultValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RemoteControl.RCMetadata_int16
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_int16 : FRCFieldMetadata {
	int16_t Min; // 0x08(0x02)
	int16_t Max; // 0x0a(0x02)
	int16_t DefaultValue; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct RemoteControl.RCMetadata_int8
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_int8 : FRCFieldMetadata {
	int8_t Min; // 0x08(0x01)
	int8_t Max; // 0x09(0x01)
	int8_t DefaultValue; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RemoteControl.RCMetadata_uint64
// Size: 0x20 (Inherited: 0x08)
struct FRCMetadata_uint64 : FRCFieldMetadata {
	uint64_t Min; // 0x08(0x08)
	uint64_t Max; // 0x10(0x08)
	uint64_t DefaultValue; // 0x18(0x08)
};

// ScriptStruct RemoteControl.RCMetadata_uint32
// Size: 0x18 (Inherited: 0x08)
struct FRCMetadata_uint32 : FRCFieldMetadata {
	uint32_t Min; // 0x08(0x04)
	uint32_t Max; // 0x0c(0x04)
	uint32_t DefaultValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RemoteControl.RCMetadata_uint16
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_uint16 : FRCFieldMetadata {
	uint16_t Min; // 0x08(0x02)
	uint16_t Max; // 0x0a(0x02)
	uint16_t DefaultValue; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct RemoteControl.RCMetadata_byte
// Size: 0x10 (Inherited: 0x08)
struct FRCMetadata_byte : FRCFieldMetadata {
	char Min; // 0x08(0x01)
	char Max; // 0x09(0x01)
	char DefaultValue; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RemoteControl.RemoteControlOptionalExposeArgs
// Size: 0x20 (Inherited: 0x00)
struct FRemoteControlOptionalExposeArgs {
	struct FString DisplayName; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
};

// ScriptStruct RemoteControl.RemoteControlInterceptionFunctionParamStruct
// Size: 0x28 (Inherited: 0x00)
struct FRemoteControlInterceptionFunctionParamStruct {
	int32_t Int32Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> IntArray; // 0x08(0x10)
	struct FString IntString; // 0x18(0x10)
};

// ScriptStruct RemoteControl.RemoteControlInterceptionTestStruct
// Size: 0x04 (Inherited: 0x00)
struct FRemoteControlInterceptionTestStruct {
	int32_t Int32Value; // 0x00(0x04)
};

// ScriptStruct RemoteControl.RemoteControlTarget
// Size: 0xc8 (Inherited: 0x00)
struct FRemoteControlTarget {
	struct UObject* Class; // 0x00(0x08)
	struct TSet<struct FRemoteControlFunction> ExposedFunctions; // 0x08(0x50)
	struct TSet<struct FRemoteControlProperty> ExposedProperties; // 0x58(0x50)
	struct FName Alias; // 0xa8(0x08)
	struct TArray<struct FSoftObjectPath> Bindings; // 0xb0(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0xc0(0x08)
};

// ScriptStruct RemoteControl.RemoteControlPresetLayout
// Size: 0xc0 (Inherited: 0x00)
struct FRemoteControlPresetLayout {
	struct TArray<struct FRemoteControlPresetGroup> Groups; // 0x00(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0x10(0x08)
	char pad_18[0xa8]; // 0x18(0xa8)
};

// ScriptStruct RemoteControl.RemoteControlPresetGroup
// Size: 0x28 (Inherited: 0x00)
struct FRemoteControlPresetGroup {
	struct FName Name; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct TArray<struct FGuid> Fields; // 0x18(0x10)
};

// ScriptStruct RemoteControl.RCCachedFieldData
// Size: 0x18 (Inherited: 0x00)
struct FRCCachedFieldData {
	struct FGuid LayoutGroupId; // 0x00(0x10)
	struct FName OwnerObjectAlias; // 0x10(0x08)
};

// ScriptStruct RemoteControl.RemoteControlTestStructOuter
// Size: 0x78 (Inherited: 0x00)
struct FRemoteControlTestStructOuter {
	int8_t Int8Value; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct FRemoteControlTestStructInner> StructInnerSet; // 0x08(0x50)
	int32_t Int32Value; // 0x58(0x04)
	struct FRemoteControlTestStructInner RemoteControlTestStructInner; // 0x5c(0x1c)
};

// ScriptStruct RemoteControl.RemoteControlTestStructInner
// Size: 0x1c (Inherited: 0x00)
struct FRemoteControlTestStructInner {
	int8_t Int8Value; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRemoteControlTestStructInnerSimle InnerSimle; // 0x04(0x04)
	int32_t Int32Value; // 0x08(0x04)
	char pad_C[0x10]; // 0x0c(0x10)
};

// ScriptStruct RemoteControl.RemoteControlTestStructInnerSimle
// Size: 0x04 (Inherited: 0x00)
struct FRemoteControlTestStructInnerSimle {
	int32_t Int32Value; // 0x00(0x04)
};

// ScriptStruct RemoteControl.RemoteControlProtocolEntity
// Size: 0x80 (Inherited: 0x00)
struct FRemoteControlProtocolEntity {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0x08(0x08)
	struct FGuid PropertyId; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
	struct TSet<struct FRemoteControlProtocolMapping> Mappings; // 0x28(0x50)
	enum class ERCBindingStatus BindingStatus; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct RemoteControl.RemoteControlProtocolMapping
// Size: 0x78 (Inherited: 0x00)
struct FRemoteControlProtocolMapping {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<char> InterpolationRangePropertyData; // 0x10(0x10)
	struct TArray<char> InterpolationMappingPropertyData; // 0x20(0x10)
	struct TArray<char> InterpolationRangePropertyDataCache; // 0x30(0x10)
	struct TArray<char> InterpolationMappingPropertyDataCache; // 0x40(0x10)
	int32_t InterpolationMappingPropertyElementNum; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TFieldPath<FProperty> BoundPropertyPath; // 0x58(0x20)
};

// ScriptStruct RemoteControl.RemoteControlTestInnerStruct
// Size: 0x28 (Inherited: 0x00)
struct FRemoteControlTestInnerStruct {
	struct FColor Color; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> FloatArray; // 0x08(0x10)
	struct TArray<struct FVector> ArrayOfVectors; // 0x18(0x10)
};

// ScriptStruct RemoteControl.RemoteControlTestStruct
// Size: 0x2c (Inherited: 0x00)
struct FRemoteControlTestStruct {
	bool bSomeBool; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t SomeUInt32; // 0x04(0x04)
	float SomeFloat; // 0x08(0x04)
	struct FVector SomeVector; // 0x0c(0x0c)
	struct FRotator SomeRotator; // 0x18(0x0c)
	int32_t SomeClampedInt; // 0x24(0x04)
	float SomeClampedFloat; // 0x28(0x04)
};

