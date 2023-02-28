// Enum WebRemoteControl.ERemoteControlEvent
enum class ERemoteControlEvent : uint8 {
	PreObjectPropertyChanged = 0,
	ObjectPropertyChanged = 1,
	EventCount = 2,
	ERemoteControlEvent_MAX = 3
};

// Enum WebRemoteControl.ERemoteControlHttpVerbs
enum class ERemoteControlHttpVerbs : uint8 {
	None = 0,
	Get = 1,
	Post = 2,
	Put = 4,
	Patch = 8,
	Delete = 16,
	Options = 32,
	ERemoteControlHttpVerbs_MAX = 33
};

// ScriptStruct WebRemoteControl.RCAssetFilter
// Size: 0x88 (Inherited: 0x00)
struct FRCAssetFilter {
	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ClassNames; // 0x20(0x10)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x30(0x50)
	bool RecursiveClasses; // 0x80(0x01)
	bool RecursivePaths; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// ScriptStruct WebRemoteControl.RCPresetFieldRenamed
// Size: 0x10 (Inherited: 0x00)
struct FRCPresetFieldRenamed {
	struct FName OldFieldLabel; // 0x00(0x08)
	struct FName NewFieldLabel; // 0x08(0x08)
};

// ScriptStruct WebRemoteControl.RCAssetDescription
// Size: 0x68 (Inherited: 0x00)
struct FRCAssetDescription {
	struct FName Name; // 0x00(0x08)
	struct FName Class; // 0x08(0x08)
	struct FName Path; // 0x10(0x08)
	struct TMap<struct FName, struct FString> MetaData; // 0x18(0x50)
};

// ScriptStruct WebRemoteControl.RCShortPresetDescription
// Size: 0x20 (Inherited: 0x00)
struct FRCShortPresetDescription {
	struct FName Name; // 0x00(0x08)
	struct FString ID; // 0x08(0x10)
	struct FName Path; // 0x18(0x08)
};

// ScriptStruct WebRemoteControl.RCPresetDescription
// Size: 0x40 (Inherited: 0x00)
struct FRCPresetDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Path; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	struct TArray<struct FRCPresetLayoutGroupDescription> Groups; // 0x30(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetLayoutGroupDescription
// Size: 0x38 (Inherited: 0x00)
struct FRCPresetLayoutGroupDescription {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FRCExposedPropertyDescription> ExposedProperties; // 0x08(0x10)
	struct TArray<struct FRCExposedFunctionDescription> ExposedFunctions; // 0x18(0x10)
	struct TArray<struct FRCExposedActorDescription> ExposedActors; // 0x28(0x10)
};

// ScriptStruct WebRemoteControl.RCExposedActorDescription
// Size: 0x48 (Inherited: 0x00)
struct FRCExposedActorDescription {
	struct FName DisplayName; // 0x00(0x08)
	struct FString ID; // 0x08(0x10)
	struct FRCObjectDescription UnderlyingActor; // 0x18(0x30)
};

// ScriptStruct WebRemoteControl.RCObjectDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCObjectDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Class; // 0x10(0x10)
	struct FString Path; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCExposedFunctionDescription
// Size: 0x58 (Inherited: 0x00)
struct FRCExposedFunctionDescription {
	struct FName DisplayName; // 0x00(0x08)
	struct FString ID; // 0x08(0x10)
	struct FRCFunctionDescription UnderlyingFunction; // 0x18(0x30)
	struct TArray<struct FRCObjectDescription> OwnerObjects; // 0x48(0x10)
};

// ScriptStruct WebRemoteControl.RCFunctionDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCFunctionDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct TArray<struct FRCPropertyDescription> Arguments; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCPropertyDescription
// Size: 0xa0 (Inherited: 0x00)
struct FRCPropertyDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FString ContainerType; // 0x30(0x10)
	struct FString KeyType; // 0x40(0x10)
	struct TMap<struct FName, struct FString> MetaData; // 0x50(0x50)
};

// ScriptStruct WebRemoteControl.RCExposedPropertyDescription
// Size: 0x118 (Inherited: 0x00)
struct FRCExposedPropertyDescription {
	struct FName DisplayName; // 0x00(0x08)
	struct FString ID; // 0x08(0x10)
	struct FRCPropertyDescription UnderlyingProperty; // 0x18(0xa0)
	struct TMap<struct FName, struct FString> MetaData; // 0xb8(0x50)
	struct TArray<struct FRCObjectDescription> OwnerObjects; // 0x108(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetModifiedEntitiesDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCPresetModifiedEntitiesDescription {
	struct TArray<struct FRCExposedPropertyDescription> ModifiedRCProperties; // 0x00(0x10)
	struct TArray<struct FRCExposedFunctionDescription> ModifiedRCFunctions; // 0x10(0x10)
	struct TArray<struct FRCExposedActorDescription> ModifiedRCActors; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCRequest
// Size: 0x68 (Inherited: 0x00)
struct FRCRequest {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct WebRemoteControl.RCWebSocketPresetRegisterBody
// Size: 0x80 (Inherited: 0x68)
struct FRCWebSocketPresetRegisterBody : FRCRequest {
	struct FString PresetName; // 0x68(0x10)
	bool IgnoreRemoteChanges; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct WebRemoteControl.RCWebSocketRequest
// Size: 0x80 (Inherited: 0x68)
struct FRCWebSocketRequest : FRCRequest {
	struct FString MessageName; // 0x68(0x10)
	int32_t ID; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct WebRemoteControl.GetObjectThumbnailRequest
// Size: 0x78 (Inherited: 0x68)
struct FGetObjectThumbnailRequest : FRCRequest {
	struct FString ObjectPath; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.SetEntityLabelRequest
// Size: 0x78 (Inherited: 0x68)
struct FSetEntityLabelRequest : FRCRequest {
	struct FString NewLabel; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.SetEntityMetadataRequest
// Size: 0x78 (Inherited: 0x68)
struct FSetEntityMetadataRequest : FRCRequest {
	struct FString Value; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.SetPresetMetadataRequest
// Size: 0x78 (Inherited: 0x68)
struct FSetPresetMetadataRequest : FRCRequest {
	struct FString Value; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.SearchObjectRequest
// Size: 0xa0 (Inherited: 0x68)
struct FSearchObjectRequest : FRCRequest {
	struct FString Query; // 0x68(0x10)
	struct FString Class; // 0x78(0x10)
	struct FString Outer; // 0x88(0x10)
	int32_t Limit; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct WebRemoteControl.SearchActorRequest
// Size: 0x90 (Inherited: 0x68)
struct FSearchActorRequest : FRCRequest {
	struct FString Query; // 0x68(0x10)
	struct FString Class; // 0x78(0x10)
	int32_t Limit; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct WebRemoteControl.SearchAssetRequest
// Size: 0x108 (Inherited: 0x68)
struct FSearchAssetRequest : FRCRequest {
	struct FString Query; // 0x68(0x10)
	struct FRCAssetFilter Filter; // 0x78(0x88)
	int32_t Limit; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct WebRemoteControl.DescribeObjectRequest
// Size: 0x78 (Inherited: 0x68)
struct FDescribeObjectRequest : FRCRequest {
	struct FString ObjectPath; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetCallRequest
// Size: 0x70 (Inherited: 0x68)
struct FRCPresetCallRequest : FRCRequest {
	bool GenerateTransaction; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct WebRemoteControl.RCPresetSetPropertyRequest
// Size: 0x70 (Inherited: 0x68)
struct FRCPresetSetPropertyRequest : FRCRequest {
	bool GenerateTransaction; // 0x68(0x01)
	bool ResetToDefault; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct WebRemoteControl.RCObjectRequest
// Size: 0x90 (Inherited: 0x68)
struct FRCObjectRequest : FRCRequest {
	struct FString ObjectPath; // 0x68(0x10)
	struct FString PropertyName; // 0x78(0x10)
	bool ResetToDefault; // 0x88(0x01)
	bool GenerateTransaction; // 0x89(0x01)
	enum class ERCAccess Access; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// ScriptStruct WebRemoteControl.RCCallRequest
// Size: 0x90 (Inherited: 0x68)
struct FRCCallRequest : FRCRequest {
	struct FString ObjectPath; // 0x68(0x10)
	struct FString FunctionName; // 0x78(0x10)
	bool GenerateTransaction; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct WebRemoteControl.RemoteControlObjectEventHookRequest
// Size: 0x90 (Inherited: 0x68)
struct FRemoteControlObjectEventHookRequest : FRCRequest {
	enum class ERemoteControlEvent EventType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString ObjectPath; // 0x70(0x10)
	struct FString PropertyName; // 0x80(0x10)
};

// ScriptStruct WebRemoteControl.RCBatchRequest
// Size: 0x78 (Inherited: 0x68)
struct FRCBatchRequest : FRCRequest {
	struct TArray<struct FRCRequestWrapper> Requests; // 0x68(0x10)
};

// ScriptStruct WebRemoteControl.RCRequestWrapper
// Size: 0x88 (Inherited: 0x68)
struct FRCRequestWrapper : FRCRequest {
	struct FString URL; // 0x68(0x10)
	struct FName Verb; // 0x78(0x08)
	int32_t RequestID; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct WebRemoteControl.RCPresetEntitiesModifiedEvent
// Size: 0x58 (Inherited: 0x00)
struct FRCPresetEntitiesModifiedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x08)
	struct FString PresetId; // 0x18(0x10)
	struct FRCPresetModifiedEntitiesDescription ModifiedEntities; // 0x28(0x30)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsAddedEvent
// Size: 0x68 (Inherited: 0x00)
struct FRCPresetFieldsAddedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x08)
	struct FString PresetId; // 0x18(0x10)
	struct FRCPresetDescription Description; // 0x28(0x40)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsRemovedEvent
// Size: 0x48 (Inherited: 0x00)
struct FRCPresetFieldsRemovedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x08)
	struct FString PresetId; // 0x18(0x10)
	struct TArray<struct FName> RemovedFields; // 0x28(0x10)
	struct TArray<struct FString> RemovedFieldIds; // 0x38(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetLayoutModified
// Size: 0x50 (Inherited: 0x00)
struct FRCPresetLayoutModified {
	struct FString Type; // 0x00(0x10)
	struct FRCPresetDescription Preset; // 0x10(0x40)
};

// ScriptStruct WebRemoteControl.RCPresetMetadataModified
// Size: 0x78 (Inherited: 0x00)
struct FRCPresetMetadataModified {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x08)
	struct FString PresetId; // 0x18(0x10)
	struct TMap<struct FString, struct FString> MetaData; // 0x28(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsRenamedEvent
// Size: 0x38 (Inherited: 0x00)
struct FRCPresetFieldsRenamedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x08)
	struct FString PresetId; // 0x18(0x10)
	struct TArray<struct FRCPresetFieldRenamed> RenamedFields; // 0x28(0x10)
};

// ScriptStruct WebRemoteControl.SetEntityLabelResponse
// Size: 0x10 (Inherited: 0x00)
struct FSetEntityLabelResponse {
	struct FString AssignedLabel; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.GetMetadataResponse
// Size: 0x50 (Inherited: 0x00)
struct FGetMetadataResponse {
	struct TMap<struct FString, struct FString> MetaData; // 0x00(0x50)
};

// ScriptStruct WebRemoteControl.GetMetadataFieldResponse
// Size: 0x10 (Inherited: 0x00)
struct FGetMetadataFieldResponse {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.SearchActorResponse
// Size: 0x10 (Inherited: 0x00)
struct FSearchActorResponse {
	struct TArray<struct FRCObjectDescription> Actors; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.SearchAssetResponse
// Size: 0x10 (Inherited: 0x00)
struct FSearchAssetResponse {
	struct TArray<struct FRCAssetDescription> Assets; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.DescribeObjectResponse
// Size: 0x38 (Inherited: 0x00)
struct FDescribeObjectResponse {
	struct FString Name; // 0x00(0x10)
	struct UObject* Class; // 0x10(0x08)
	struct TArray<struct FRCPropertyDescription> Properties; // 0x18(0x10)
	struct TArray<struct FRCFunctionDescription> Functions; // 0x28(0x10)
};

// ScriptStruct WebRemoteControl.GetPresetResponse
// Size: 0x40 (Inherited: 0x00)
struct FGetPresetResponse {
	struct FRCPresetDescription Preset; // 0x00(0x40)
};

// ScriptStruct WebRemoteControl.ListPresetsResponse
// Size: 0x10 (Inherited: 0x00)
struct FListPresetsResponse {
	struct TArray<struct FRCShortPresetDescription> Presets; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.APIInfoResponse
// Size: 0x38 (Inherited: 0x00)
struct FAPIInfoResponse {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FRemoteControlRouteDescription> HttpRoutes; // 0x08(0x10)
	struct FRCShortPresetDescription ActivePreset; // 0x18(0x20)
};

// ScriptStruct WebRemoteControl.RemoteControlRouteDescription
// Size: 0x28 (Inherited: 0x00)
struct FRemoteControlRouteDescription {
	struct FString Path; // 0x00(0x10)
	enum class ERemoteControlHttpVerbs Verb; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString Description; // 0x18(0x10)
};

