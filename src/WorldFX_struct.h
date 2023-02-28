// Enum WorldFX.EWorldFXGenericManage
enum class EWorldFXGenericManage : uint8 {
	Visibility = 0,
	Ticking = 1,
	Activation = 2,
	EWorldFXGenericManage_MAX = 3
};

// Enum WorldFX.EWorldFXRulesSeason
enum class EWorldFXRulesSeason : uint8 {
	Fall = 0,
	Winter = 1,
	Spring = 2,
	Summer = 3,
	EWorldFXRulesSeason_MAX = 4
};

// Enum WorldFX.EWorldFXDistanceType
enum class EWorldFXDistanceType : uint8 {
	UseDefault = 0,
	DistanceMeters = 1,
	NoCulling = 2,
	EWorldFXDistanceType_MAX = 3
};

// Enum WorldFX.EWorldFXSimpleDistanceType
enum class EWorldFXSimpleDistanceType : uint8 {
	DistanceMeters = 0,
	NoCulling = 1,
	EWorldFXSimpleDistanceType_MAX = 2
};

// ScriptStruct WorldFX.StatsComponentReportSettings
// Size: 0x18 (Inherited: 0x00)
struct FStatsComponentReportSettings {
	struct TArray<struct FString> Args; // 0x00(0x10)
	uint32_t TotalReports; // 0x10(0x04)
	uint32_t FrameDelay; // 0x14(0x04)
};

// ScriptStruct WorldFX.WorldFXFull
// Size: 0x120 (Inherited: 0x00)
struct FWorldFXFull {
	struct FWorldFXAudioEvent SFX; // 0x00(0x60)
	struct FWorldFXCascadeSystem CascadeFX; // 0x60(0x68)
	struct FWorldFXNiagaraSystem NiagaraFX; // 0xc8(0x58)
};

// ScriptStruct WorldFX.WorldFXNiagaraSystem
// Size: 0x58 (Inherited: 0x00)
struct FWorldFXNiagaraSystem {
	struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem; // 0x00(0x28)
	struct UWorldFXNiagaraSystemInitializer* Initializer; // 0x28(0x08)
	struct FWorldFXMaterialOverrideList Materials; // 0x30(0x10)
	struct FWorldFXCullDistance CullDistance; // 0x40(0x08)
	struct FWorldFXNiagaraSystemAdvancedOptions AdvancedOptions; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct WorldFX.WorldFXPrimitiveAdvancedOptions
// Size: 0x0c (Inherited: 0x00)
struct FWorldFXPrimitiveAdvancedOptions {
	int32_t TranslucencySortPriority; // 0x00(0x04)
	float TranslucencySortDistanceOffset; // 0x04(0x04)
	char bReceivesDecals : 1; // 0x08(0x01)
	char bReceivesWeatherDecals : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct WorldFX.WorldFXNiagaraSystemAdvancedOptions
// Size: 0x0c (Inherited: 0x0c)
struct FWorldFXNiagaraSystemAdvancedOptions : FWorldFXPrimitiveAdvancedOptions {
};

// ScriptStruct WorldFX.WorldFXCullDistance
// Size: 0x08 (Inherited: 0x00)
struct FWorldFXCullDistance {
	float DistanceMeters; // 0x00(0x04)
	enum class EWorldFXDistanceType DistanceType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WorldFX.WorldFXMaterialOverrideList
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXMaterialOverrideList {
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> Elements; // 0x00(0x10)
};

// ScriptStruct WorldFX.WorldFXCascadeSystem
// Size: 0x68 (Inherited: 0x00)
struct FWorldFXCascadeSystem {
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x00(0x28)
	struct FWorldFXMaterialOverrideList Materials; // 0x28(0x10)
	struct TArray<struct FWorldFXCascadeSystemParam> InstanceParameters; // 0x38(0x10)
	struct UWorldFXCascadeInstanceParametersBase* NewInstanceParameters; // 0x48(0x08)
	struct FWorldFXCullDistance CullDistance; // 0x50(0x08)
	struct FWorldFXCascadeSystemAdvancedOptions AdvancedOptions; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemAdvancedOptions
// Size: 0x0c (Inherited: 0x0c)
struct FWorldFXCascadeSystemAdvancedOptions : FWorldFXPrimitiveAdvancedOptions {
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParam
// Size: 0x38 (Inherited: 0x00)
struct FWorldFXCascadeSystemParam {
	struct FName Name; // 0x00(0x08)
	enum class EParticleSysParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct UMaterialInterface* Material; // 0x30(0x08)
};

// ScriptStruct WorldFX.WorldFXAudioEvent
// Size: 0x60 (Inherited: 0x00)
struct FWorldFXAudioEvent {
	struct UAkAudioEvent* SFXEvent; // 0x00(0x08)
	struct FName EventName; // 0x08(0x08)
	struct FWorldFXCullDistance CullDistance; // 0x10(0x08)
	struct FVector Offset; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	struct FWorldFXAudioEventExtra Extra; // 0x30(0x28)
	bool bNonSpatialized; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct WorldFX.WorldFXAudioEventExtra
// Size: 0x28 (Inherited: 0x00)
struct FWorldFXAudioEventExtra {
	float AttenuationScalingFactor; // 0x00(0x04)
	float NoTickRadius; // 0x04(0x04)
	float OcclusionRefreshInterval; // 0x08(0x04)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x0c(0x01)
	char bUseReverbVolumes : 1; // 0x0d(0x01)
	char bEnableSpotReflectors : 1; // 0x0d(0x01)
	char pad_D_2 : 6; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float OuterRadius; // 0x10(0x04)
	float InnerRadius; // 0x14(0x04)
	struct TArray<struct FWorldFXAudioEventRTPC> RTPCs; // 0x18(0x10)
};

// ScriptStruct WorldFX.WorldFXAudioEventRTPC
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXAudioEventRTPC {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	float InterpolationTime; // 0x0c(0x04)
};

// ScriptStruct WorldFX.CameraFXRoot
// Size: 0x10 (Inherited: 0x00)
struct FCameraFXRoot {
	struct USceneComponent* CameraFXRoot; // 0x00(0x08)
	int32_t UnattachedFrames; // 0x08(0x04)
	int32_t MaxUnattachedFrames; // 0x0c(0x04)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParams
// Size: 0x70 (Inherited: 0x00)
struct FWorldFXCascadeSystemParams {
	struct TArray<struct FWorldFXCascadeSystemParamScalar> Scalars; // 0x00(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamScalarRand> ScalarRands; // 0x10(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamVector> Vectors; // 0x20(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamVectorRand> VectorRands; // 0x30(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamVectorUnitRand> VectorUnitRands; // 0x40(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamColor> Colors; // 0x50(0x10)
	struct TArray<struct FWorldFXCascadeSystemParamMaterial> Materials; // 0x60(0x10)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamBase
// Size: 0x01 (Inherited: 0x00)
struct FWorldFXCascadeSystemParamBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamMaterial
// Size: 0x10 (Inherited: 0x01)
struct FWorldFXCascadeSystemParamMaterial : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamColor
// Size: 0x0c (Inherited: 0x01)
struct FWorldFXCascadeSystemParamColor : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamVectorUnitRand
// Size: 0x20 (Inherited: 0x01)
struct FWorldFXCascadeSystemParamVectorUnitRand : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	struct FVector Vector; // 0x08(0x0c)
	struct FVector Vector_Low; // 0x14(0x0c)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamVectorRand
// Size: 0x20 (Inherited: 0x01)
struct FWorldFXCascadeSystemParamVectorRand : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	struct FVector Vector; // 0x08(0x0c)
	struct FVector Vector_Low; // 0x14(0x0c)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamVector
// Size: 0x14 (Inherited: 0x01)
struct FWorldFXCascadeSystemParamVector : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	struct FVector Vector; // 0x08(0x0c)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamScalarRand
// Size: 0x10 (Inherited: 0x01)
struct FWorldFXCascadeSystemParamScalarRand : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	float Scalar; // 0x08(0x04)
	float Scalar_Low; // 0x0c(0x04)
};

// ScriptStruct WorldFX.WorldFXCascadeSystemParamScalar
// Size: 0x0c (Inherited: 0x01)
struct FWorldFXCascadeSystemParamScalar : FWorldFXCascadeSystemParamBase {
	struct FName Name; // 0x00(0x08)
	float Scalar; // 0x08(0x04)
};

// ScriptStruct WorldFX.WorldFXFullPreset
// Size: 0x168 (Inherited: 0x08)
struct FWorldFXFullPreset : FTableRowBase {
	struct FWorldFXPresetRuleName Rule; // 0x08(0x08)
	struct UAkAudioEvent* SFXAudioEvent; // 0x10(0x08)
	struct FName SFXEventName; // 0x18(0x08)
	struct FVector SFXOffset; // 0x20(0x0c)
	struct FVector SFXScale; // 0x2c(0x0c)
	float SFXCullingDistanceMeters; // 0x38(0x04)
	enum class EWorldFXDistanceType SFXCullingDistanceType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float SFXAttenuationScalingFactor; // 0x40(0x04)
	float SFXNoTickRadius; // 0x44(0x04)
	float SFXOcclusionRefreshInterval; // 0x48(0x04)
	enum class ECollisionChannel SFXOcclusionCollisionChannel; // 0x4c(0x01)
	bool bSFXUseReverbVolumes; // 0x4d(0x01)
	bool bSFXEnableSpotReflectors; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float SFXOuterRadius; // 0x50(0x04)
	float SFXInnerRadius; // 0x54(0x04)
	struct TArray<struct FWorldFXAudioEventRTPC> RTPCs; // 0x58(0x10)
	struct TSoftObjectPtr<UParticleSystem> CascadeSystem; // 0x68(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> CascadeMaterialOverrides; // 0x90(0x10)
	struct TArray<struct FWorldFXCascadeSystemParam> CascadeInstanceParameters; // 0xa0(0x10)
	float CascadeCullingDistanceMeters; // 0xb0(0x04)
	enum class EWorldFXDistanceType CascadeCullingDistanceType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem; // 0xb8(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> NiagaraMaterialOverrides; // 0xe0(0x10)
	struct FNiagaraHelpersInitializerRaw NiagaraInitializers; // 0xf0(0x70)
	float NiagaraCullingDistanceMeters; // 0x160(0x04)
	enum class EWorldFXDistanceType NiagaraCullingDistanceType; // 0x164(0x01)
	bool bSpawnAttached; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
};

// ScriptStruct WorldFX.WorldFXPresetRuleName
// Size: 0x08 (Inherited: 0x00)
struct FWorldFXPresetRuleName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct WorldFX.WorldFXGenericManageSettings
// Size: 0x04 (Inherited: 0x00)
struct FWorldFXGenericManageSettings {
	int32_t flags; // 0x00(0x04)
};

// ScriptStruct WorldFX.WorldFXOctreeStack
// Size: 0x70 (Inherited: 0x00)
struct FWorldFXOctreeStack {
	struct TArray<struct UWorldFXOctree*> OctreeStack; // 0x00(0x10)
	struct FWorldFXOctreeCreationSettings CreationSettings; // 0x10(0x08)
	struct FWorldFXOctreeUnculledFX UnculledFX; // 0x18(0x58)
};

// ScriptStruct WorldFX.WorldFXOctreeUnculledFX
// Size: 0x58 (Inherited: 0x00)
struct FWorldFXOctreeUnculledFX {
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FWorldFXOctreeFXList> FXMap; // 0x00(0x50)
	bool bNewAdds; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WorldFX.WorldFXOctreeFXList
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXOctreeFXList {
	struct TArray<struct UWorldFXOctreeFX*> FXList; // 0x00(0x10)
};

// ScriptStruct WorldFX.WorldFXOctreeCreationSettings
// Size: 0x08 (Inherited: 0x00)
struct FWorldFXOctreeCreationSettings {
	float ExpandWorldBoundsFactor; // 0x00(0x04)
	float ExpandWorldBoundsRadiusMeters; // 0x04(0x04)
};

// ScriptStruct WorldFX.WorldFXPresets
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXPresets {
	struct TArray<struct FWorldFXPresetRuleDefinition> Presets; // 0x00(0x10)
};

// ScriptStruct WorldFX.WorldFXPresetRuleDefinition
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXPresetRuleDefinition {
	struct FName Name; // 0x00(0x08)
	struct UWorldFXRule* Rule; // 0x08(0x08)
};

// ScriptStruct WorldFX.WorldFXFullPreview
// Size: 0x150 (Inherited: 0x00)
struct FWorldFXFullPreview {
	struct FWorldFXAudioPreview SFXPreview; // 0x00(0x70)
	struct FWorldFXCascadePreview CascadeFXPreview; // 0x70(0x78)
	struct FWorldFXNiagaraPreview NiagaraFXPreview; // 0xe8(0x68)
};

// ScriptStruct WorldFX.WorldFXPreview
// Size: 0x08 (Inherited: 0x00)
struct FWorldFXPreview {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct WorldFX.WorldFXNiagaraPreview
// Size: 0x68 (Inherited: 0x08)
struct FWorldFXNiagaraPreview : FWorldFXPreview {
	struct UNiagaraComponent* NiagaraFXPreview; // 0x08(0x08)
	struct FWorldFXNiagaraSystem CurrentFX; // 0x10(0x58)
};

// ScriptStruct WorldFX.WorldFXCascadePreview
// Size: 0x78 (Inherited: 0x08)
struct FWorldFXCascadePreview : FWorldFXPreview {
	struct UParticleSystemComponent* CascadeFXPreview; // 0x08(0x08)
	struct FWorldFXCascadeSystem CurrentFX; // 0x10(0x68)
};

// ScriptStruct WorldFX.WorldFXAudioPreview
// Size: 0x70 (Inherited: 0x08)
struct FWorldFXAudioPreview : FWorldFXPreview {
	struct UAkComponent* SFXPreview; // 0x08(0x08)
	struct FWorldFXAudioEvent CurrentFX; // 0x10(0x60)
};

// ScriptStruct WorldFX.WorldFXFullPreviewSettings
// Size: 0x03 (Inherited: 0x00)
struct FWorldFXFullPreviewSettings {
	bool bAudioPreview; // 0x00(0x01)
	bool bCascadePreview; // 0x01(0x01)
	bool bNiagaraPreview; // 0x02(0x01)
};

// ScriptStruct WorldFX.WorldFXSimpleCullDistance
// Size: 0x08 (Inherited: 0x00)
struct FWorldFXSimpleCullDistance {
	float DistanceMeters; // 0x00(0x04)
	enum class EWorldFXSimpleDistanceType DistanceType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WorldFX.WorldFXPerWorldSettings
// Size: 0x20 (Inherited: 0x00)
struct FWorldFXPerWorldSettings {
	float DefaultAudioDistanceMeters; // 0x00(0x04)
	float DefaultParticleDistanceMeters; // 0x04(0x04)
	float DefaultGenericDistanceMeters; // 0x08(0x04)
	float MaxAudioDistanceMeters; // 0x0c(0x04)
	float MaxParticleDistanceMeters; // 0x10(0x04)
	float MaxGenericDistanceMeters; // 0x14(0x04)
	float OctreeExpandWorldBoundsFactor; // 0x18(0x04)
	bool bDisableAllCulling; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct WorldFX.WorldFXSpawnOverridesFinal
// Size: 0x40 (Inherited: 0x00)
struct FWorldFXSpawnOverridesFinal {
	struct TWeakObjectPtr<struct USceneComponent> AttachTo; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FRotator Rotator; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FName AttachName; // 0x2c(0x08)
	struct FName UniqueAttachTag; // 0x34(0x08)
	enum class EAttachLocation AttachLocation; // 0x3c(0x01)
	bool bIsAttached; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct WorldFX.WorldFXSpawnOverrides
// Size: 0x70 (Inherited: 0x00)
struct FWorldFXSpawnOverrides {
	struct FWorldFXSpawnOverrideTransform WorldTransform; // 0x00(0x28)
	struct TWeakObjectPtr<struct USceneComponent> AttachTo; // 0x28(0x08)
	struct FWorldFXSpawnOverrideTransform LocalTransform; // 0x30(0x28)
	struct FName AttachName; // 0x58(0x08)
	struct FName UniqueAttachTag; // 0x60(0x08)
	enum class EAttachLocation AttachLocation; // 0x68(0x01)
	bool bOverride_AttachTo; // 0x69(0x01)
	bool bOverride_AttachName; // 0x6a(0x01)
	bool bOverride_UniqueAttachTag; // 0x6b(0x01)
	bool bOverride_AttachLocation; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct WorldFX.WorldFXSpawnOverrideTransform
// Size: 0x28 (Inherited: 0x00)
struct FWorldFXSpawnOverrideTransform {
	struct FVector Position; // 0x00(0x0c)
	struct FRotator Rotator; // 0x0c(0x0c)
	struct FVector Scale; // 0x18(0x0c)
	bool bOverride_Position; // 0x24(0x01)
	bool bOverride_Rotator; // 0x25(0x01)
	bool bOverride_Scale; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct WorldFX.WorldFXFullTracker
// Size: 0x18 (Inherited: 0x00)
struct FWorldFXFullTracker {
	struct TWeakObjectPtr<struct UWorldFXOctreeFX> SFX; // 0x00(0x08)
	struct TWeakObjectPtr<struct UWorldFXOctreeFX> CascadeFX; // 0x08(0x08)
	struct TWeakObjectPtr<struct UWorldFXOctreeFX> NiagaraFX; // 0x10(0x08)
};

// ScriptStruct WorldFX.WorldFXTracker
// Size: 0x10 (Inherited: 0x00)
struct FWorldFXTracker {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct UWorldFXOctreeFX> FX; // 0x08(0x08)
};

// ScriptStruct WorldFX.WorldFXNiagaraTracker
// Size: 0x10 (Inherited: 0x10)
struct FWorldFXNiagaraTracker : FWorldFXTracker {
};

// ScriptStruct WorldFX.WorldFXCascadeTracker
// Size: 0x10 (Inherited: 0x10)
struct FWorldFXCascadeTracker : FWorldFXTracker {
};

// ScriptStruct WorldFX.WorldFXAudioTracker
// Size: 0x10 (Inherited: 0x10)
struct FWorldFXAudioTracker : FWorldFXTracker {
};

