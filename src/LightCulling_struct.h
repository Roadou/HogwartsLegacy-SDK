// Enum LightCulling.ELightCullingLightStatus
enum class ELightCullingLightStatus : uint8 {
	Unmanaged = 0,
	Ignored = 1,
	Managed = 2,
	ELightCullingLightStatus_MAX = 3
};

// Enum LightCulling.ELightCullingDumpFilterDuplicateCheck
enum class ELightCullingDumpFilterDuplicateCheck : uint8 {
	None = 0,
	PerLevel = 1,
	AcrossLevels = 2,
	Global = 3,
	ELightCullingDumpFilterDuplicateCheck_MAX = 4
};

// Enum LightCulling.ELightCullingDumpFilterSort
enum class ELightCullingDumpFilterSort : uint8 {
	None = 0,
	Distance = 1,
	Component = 2,
	Name = 3,
	Level = 4,
	ELightCullingDumpFilterSort_MAX = 5
};

// Enum LightCulling.ELightCullingDistanceOverride
enum class ELightCullingDistanceOverride : uint8 {
	DoNotTouch = 0,
	AlwaysOverride = 1,
	UseMinimum = 2,
	OnlyIfNotSet = 3,
	ELightCullingDistanceOverride_MAX = 4
};

// ScriptStruct LightCulling.CharacterLightingFeatures
// Size: 0xb8 (Inherited: 0x00)
struct FCharacterLightingFeatures {
	struct FCharacterLightingFeaturesOptions OPTIONS; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TSet<struct TWeakObjectPtr<struct AActor>> IgnoreCharacters; // 0x08(0x50)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PendingCharacters; // 0x58(0x10)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FCharacterLightingFeaturesState> Characters; // 0x68(0x50)
};

// ScriptStruct LightCulling.CharacterLightingFeaturesState
// Size: 0x68 (Inherited: 0x00)
struct FCharacterLightingFeaturesState {
	struct TMap<struct TWeakObjectPtr<struct USkeletalMeshComponent>, struct FLightingFeaturesSkeletalMeshState> Meshes; // 0x00(0x50)
	char pad_50[0x18]; // 0x50(0x18)
};

// ScriptStruct LightCulling.LightingFeaturesSkeletalMeshState
// Size: 0x08 (Inherited: 0x00)
struct FLightingFeaturesSkeletalMeshState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct LightCulling.CharacterLightingFeaturesOptions
// Size: 0x02 (Inherited: 0x00)
struct FCharacterLightingFeaturesOptions {
	bool bAutoAddDeleteCharacters; // 0x00(0x01)
	bool bAutoDetectCharacterChanges; // 0x01(0x01)
};

// ScriptStruct LightCulling.CharacterLightingFeaturesSettingsOverride
// Size: 0x4c (Inherited: 0x00)
struct FCharacterLightingFeaturesSettingsOverride {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	struct FCharacterLightingFeaturesSettings Settings; // 0x08(0x40)
	float Lerp; // 0x48(0x04)
};

// ScriptStruct LightCulling.CharacterLightingFeaturesSettings
// Size: 0x40 (Inherited: 0x00)
struct FCharacterLightingFeaturesSettings {
	float CharacterProjectedShadowsEndMeters; // 0x00(0x04)
	int32_t MaxCharacterProjectedShadows; // 0x04(0x04)
	float CapsuleShadowsEndMeters; // 0x08(0x04)
	int32_t MaxCharacterCapsuleShadows; // 0x0c(0x04)
	float CharacterContactShadowsStartMeters; // 0x10(0x04)
	float CharacterContactShadowsEndMeters; // 0x14(0x04)
	int32_t MaxCharacterContactShadows; // 0x18(0x04)
	float BlobShadowsEndMeters; // 0x1c(0x04)
	int32_t MaxCharacterBlobShadows; // 0x20(0x04)
	float CharacterIndirectCapsuleShadowsEndMeters; // 0x24(0x04)
	float CapsuleIndirectShadowMinVisibility; // 0x28(0x04)
	int32_t MaxCharacterIndirectCapsuleShadows; // 0x2c(0x04)
	float CharacterLightChannelEndMeters; // 0x30(0x04)
	int32_t MaxCharactersInLightChannel; // 0x34(0x04)
	struct FLightCullingCameraSetup CameraSetup; // 0x38(0x04)
	char bLimitCharacterProjectedShadows : 1; // 0x3c(0x01)
	char bLimitCharacterCapsuleShadows : 1; // 0x3c(0x01)
	char bLimitCharactersInLightChannel : 1; // 0x3c(0x01)
	char bEnableCharacterIndirectCapsuleShadows : 1; // 0x3c(0x01)
	char bLimitCharacterIndirectCapsuleShadows : 1; // 0x3c(0x01)
	char bLimitCharacterContactShadows : 1; // 0x3c(0x01)
	char bUseCharacterContactShadowsStart : 1; // 0x3c(0x01)
	char bUseCharacterContactShadowsEnd : 1; // 0x3c(0x01)
	char bDisablePlayerContactShadows : 1; // 0x3d(0x01)
	char bEnableCharacterBlobShadows : 1; // 0x3d(0x01)
	char bLimitCharacterBlobShadows : 1; // 0x3d(0x01)
	char pad_3D_3 : 5; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct LightCulling.LightCullingCameraSetup
// Size: 0x04 (Inherited: 0x00)
struct FLightCullingCameraSetup {
	float PlayerDistanceBiasMeters; // 0x00(0x04)
};

// ScriptStruct LightCulling.ForceCapsuleShadowsSettings
// Size: 0x20 (Inherited: 0x00)
struct FForceCapsuleShadowsSettings {
	float DynamicShadowEndDistanceMeters; // 0x00(0x04)
	float CapsuleShadowStartDistanceMeters; // 0x04(0x04)
	float CapsuleShadowEndDistanceMeters; // 0x08(0x04)
	float CapsuleIndirectShadowStartDistanceMeters; // 0x0c(0x04)
	float CapsuleIndirectShadowEndDistanceMeters; // 0x10(0x04)
	float CapsuleIndirectShadowMinVisibilityAtStart; // 0x14(0x04)
	float CapsuleIndirectShadowMinVisibilityAtEnd; // 0x18(0x04)
	char bControlDynamicShadow : 1; // 0x1c(0x01)
	char bControlCapsuleShadow : 1; // 0x1c(0x01)
	char bControlCapsuleIndirectShadow : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct LightCulling.LightCulling
// Size: 0x60 (Inherited: 0x00)
struct FLightCulling {
	struct TMap<struct TWeakObjectPtr<struct ULocalLightComponent>, struct FLightCullingLight> Lights; // 0x00(0x50)
	struct TArray<struct TWeakObjectPtr<struct ULocalLightComponent>> IgnoreLights; // 0x50(0x10)
};

// ScriptStruct LightCulling.LightCullingLight
// Size: 0x4c (Inherited: 0x00)
struct FLightCullingLight {
	struct FLightCullingLightPhysicsParent PhysicsParent; // 0x00(0x08)
	char pad_8[0x44]; // 0x08(0x44)
};

// ScriptStruct LightCulling.LightCullingLightPhysicsParent
// Size: 0x08 (Inherited: 0x00)
struct FLightCullingLightPhysicsParent {
	struct TWeakObjectPtr<struct UPrimitiveComponent> PhysicsParentPtr; // 0x00(0x08)
};

// ScriptStruct LightCulling.LightCullingCameraState
// Size: 0x40 (Inherited: 0x00)
struct FLightCullingCameraState {
	char pad_0[0x30]; // 0x00(0x30)
	struct AActor* Player; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct LightCulling.LightCullingLevelName
// Size: 0x08 (Inherited: 0x00)
struct FLightCullingLevelName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct LightCulling.LightCullingPerLightSettings
// Size: 0x03 (Inherited: 0x00)
struct FLightCullingPerLightSettings {
	struct FLightCullingPerLightFeatureSettings LightingFeatures; // 0x00(0x01)
	struct FLightCullingPerLightAdvancedSettings Advanced; // 0x01(0x01)
	char bDisableDistanceCullingOverride : 1; // 0x02(0x01)
	char pad_2_1 : 7; // 0x02(0x01)
};

// ScriptStruct LightCulling.LightCullingPerLightAdvancedSettings
// Size: 0x01 (Inherited: 0x00)
struct FLightCullingPerLightAdvancedSettings {
	char bDisableMoveableCulling : 1; // 0x00(0x01)
	char bDisableTickInterfaceCulling : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
};

// ScriptStruct LightCulling.LightCullingPerLightFeatureSettings
// Size: 0x01 (Inherited: 0x00)
struct FLightCullingPerLightFeatureSettings {
	char bDisableShadowCulling : 1; // 0x00(0x01)
	char bDisableVolumetricScatterCulling : 1; // 0x00(0x01)
	char bDisableVolumetricShadowCulling : 1; // 0x00(0x01)
	char bDisableContactShadowsCulling : 1; // 0x00(0x01)
	char bDisableTranslucentLightingCulling : 1; // 0x00(0x01)
	char bDisableVolumetricLightingCulling : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
};

// ScriptStruct LightCulling.LightCullingPerLevelSettings
// Size: 0x28 (Inherited: 0x00)
struct FLightCullingPerLevelSettings {
	struct FLightCullingLevelName Level; // 0x00(0x08)
	struct FString LevelPartialMatch; // 0x08(0x10)
	struct ULightCullingSettings* Settings; // 0x18(0x08)
	bool bUseSubString; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct LightCulling.LightCullingSettingsWorldStacks
// Size: 0x50 (Inherited: 0x00)
struct FLightCullingSettingsWorldStacks {
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FLightCullingSettingsStack> WorldMap; // 0x00(0x50)
};

// ScriptStruct LightCulling.LightCullingSettingsStack
// Size: 0x10 (Inherited: 0x00)
struct FLightCullingSettingsStack {
	struct TArray<struct FLightCullingSettingsStackEntry> Stack; // 0x00(0x10)
};

// ScriptStruct LightCulling.LightCullingSettingsStackEntry
// Size: 0x10 (Inherited: 0x00)
struct FLightCullingSettingsStackEntry {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	struct TWeakObjectPtr<struct ULightCullingSettings> Settings; // 0x08(0x08)
};

// ScriptStruct LightCulling.SimpleBlobShadowDecalComponentMapper
// Size: 0x10 (Inherited: 0x00)
struct FSimpleBlobShadowDecalComponentMapper {
	struct TArray<struct FSimpleBlobShadowDecalComponentEntry> Entries; // 0x00(0x10)
};

// ScriptStruct LightCulling.SimpleBlobShadowDecalComponentEntry
// Size: 0x78 (Inherited: 0x00)
struct FSimpleBlobShadowDecalComponentEntry {
	bool bUseActorClass; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> ActorClass; // 0x08(0x28)
	bool bIncludeActorSubclasses; // 0x30(0x01)
	bool bUseMovementComponentClass; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TSoftClassPtr<UObject> MovementComponentClass; // 0x38(0x28)
	bool bIncludeMovementComponentSubclasses; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct USimpleBlobShadowDecalComponent* BlobShadowDecalComponentClass; // 0x68(0x08)
	struct UMaterialInterface* OverrideDecalMaterial; // 0x70(0x08)
};

