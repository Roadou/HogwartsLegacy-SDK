// Enum MaterialPermuter.EMaterialSwapSphereSelectionActorEventType
enum class EMaterialSwapSphereSelectionActorEventType : uint8 {
	ActorAdded = 0,
	ActorRemoved = 1,
	EMaterialSwapSphereSelectionActorEventType_MAX = 2
};

// Enum MaterialPermuter.EHardSwapBatchComponentState
enum class EHardSwapBatchComponentState : uint8 {
	Startup = 0,
	Building = 1,
	Swapping = 2,
	Done = 3,
	EHardSwapBatchComponentState_MAX = 4
};

// Enum MaterialPermuter.EMaterialPermuterLoadingBundleAndSwapState
enum class EMaterialPermuterLoadingBundleAndSwapState : uint8 {
	Uninitialized = 0,
	Loading = 1,
	LoadedPendingSwaps = 2,
	Swapped = 3,
	SwapFailed = 4,
	EMaterialPermuterLoadingBundleAndSwapState_MAX = 5
};

// Enum MaterialPermuter.EMaterialPermuterLoadingBundleAndSwapType
enum class EMaterialPermuterLoadingBundleAndSwapType : uint8 {
	SwapComponent = 0,
	SwapComponentAutoRefresh = 1,
	Raw = 2,
	Hard = 3,
	HardBatched = 4,
	EMaterialPermuterLoadingBundleAndSwapType_MAX = 5
};

// Enum MaterialPermuter.EMaterialPermuterLoadingBundleState
enum class EMaterialPermuterLoadingBundleState : uint8 {
	Init = 0,
	WaitingOnLoad = 1,
	SignalLoaded = 2,
	Loaded = 3,
	EMaterialPermuterLoadingBundleState_MAX = 4
};

// Enum MaterialPermuter.EMaterialPermuterLoadingPriority
enum class EMaterialPermuterLoadingPriority : uint8 {
	VeryLow = 0,
	Low = 1,
	Normal = 2,
	AboveNormal = 3,
	High = 4,
	Critical = 5,
	EMaterialPermuterLoadingPriority_MAX = 6
};

// Enum MaterialPermuter.EMaterialPermuterLoadType
enum class EMaterialPermuterLoadType : uint8 {
	Preload = 0,
	Manual = 1,
	Auto = 2,
	TriggerOnly = 3,
	TriggerAndAuto = 4,
	TriggerAndManual = 5,
	EMaterialPermuterLoadType_MAX = 6
};

// Enum MaterialPermuter.EMaterialPermuterParameterCopy
enum class EMaterialPermuterParameterCopy : uint8 {
	Default = 0,
	AutoDetect = 1,
	InterpParameters = 2,
	UniformParameters = 3,
	Exhaustive = 4,
	FullDeep = 5,
	NoCopy = 6,
	EMaterialPermuterParameterCopy_MAX = 7
};

// Enum MaterialPermuter.EMaterialSwapPriority
enum class EMaterialSwapPriority : uint8 {
	AlwaysInterrupt = 0,
	VeryLow = 1,
	Low = 2,
	Normal = 3,
	Important = 4,
	VeryImportant = 5,
	NeverInterrupt = 6,
	Fundamental = 7,
	EMaterialSwapPriority_MAX = 8
};

// Enum MaterialPermuter.EMaterialSwapRefreshType
enum class EMaterialSwapRefreshType : uint8 {
	Unsupported = 0,
	Key = 1,
	MIDOnly = 2,
	EMaterialSwapRefreshType_MAX = 3
};

// Enum MaterialPermuter.EMaterialSwapInfoTyoe
enum class EMaterialSwapInfoTyoe : uint8 {
	UseMaterialPermuter = 0,
	InPlaceMIDs = 1,
	MaterialOverride = 2,
	MaterialOverrides = 3,
	EMaterialSwapInfoTyoe_MAX = 4
};

// Enum MaterialPermuter.ETransformedParameterSource
enum class ETransformedParameterSource : uint8 {
	Actor = 0,
	BoneOrSocket = 1,
	Component = 2,
	None = 3,
	ETransformedParameterSource_MAX = 4
};

// Enum MaterialPermuter.ETransformedParameterSpace
enum class ETransformedParameterSpace : uint8 {
	InWorld = 0,
	InLocal = 1,
	ETransformedParameterSpace_MAX = 2
};

// Enum MaterialPermuter.EMaterialSwapInvert
enum class EMaterialSwapInvert : uint8 {
	MeshObjectFilter = 0,
	MeshTypeFilter = 1,
	MeshTagFilter = 2,
	ActorObjectFilter = 3,
	ActorTypeFilter = 4,
	ActorTagFilter = 5,
	DependentSelection = 6,
	DependentSelectionAttached = 7,
	DependentActorObjectFilter = 8,
	DependentActorTypeFilter = 9,
	DependentActorTagFilter = 10,
	EMaterialSwapInvert_MAX = 11
};

// Enum MaterialPermuter.EMaterialSwapRulesTypeMode
enum class EMaterialSwapRulesTypeMode : uint8 {
	Default = 0,
	OnlySwap = 1,
	NeverSwap = 2,
	EMaterialSwapRulesTypeMode_MAX = 3
};

// Enum MaterialPermuter.EMaterialSwapRulesObjectMatchMode
enum class EMaterialSwapRulesObjectMatchMode : uint8 {
	Exact = 0,
	SubStringCaseSensitve = 1,
	SubStringIgnoreCase = 2,
	EMaterialSwapRulesObjectMatchMode_MAX = 3
};

// Enum MaterialPermuter.EMaterialSwapRulesObjects
enum class EMaterialSwapRulesObjects : uint8 {
	Ignore = 0,
	SwapOnly = 1,
	EMaterialSwapRulesObjects_MAX = 2
};

// Enum MaterialPermuter.EMaterialSwapSphereSelectionType
enum class EMaterialSwapSphereSelectionType : uint8 {
	UseComponentLocation = 0,
	UseCameraLocation = 1,
	UseManualLocation = 2,
	EMaterialSwapSphereSelectionType_MAX = 3
};

// Enum MaterialPermuter.ESimpleDataSetPreloadState
enum class ESimpleDataSetPreloadState : uint8 {
	Idle = 0,
	BuildingPreloadList = 1,
	Preloading = 2,
	Done = 3,
	Cancelling = 4,
	ESimpleDataSetPreloadState_MAX = 5
};

// ScriptStruct MaterialPermuter.ActorToHardSwapList
// Size: 0x18 (Inherited: 0x00)
struct FActorToHardSwapList {
	struct TArray<struct FActorToHardSwap> Actors; // 0x00(0x10)
	int32_t Processed; // 0x10(0x04)
	int32_t Swapped; // 0x14(0x04)
};

// ScriptStruct MaterialPermuter.ActorToHardSwap
// Size: 0x28 (Inherited: 0x00)
struct FActorToHardSwap {
	struct TWeakObjectPtr<struct AActor> ActorPtr; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct UMeshComponent>> Meshes; // 0x08(0x10)
	int32_t ProcessMesh; // 0x18(0x04)
	int32_t SwapMesh; // 0x1c(0x04)
	int32_t MaterialsSwapped; // 0x20(0x04)
	char bMeshesInitialized : 1; // 0x24(0x01)
	char bHaveBroadcastSwapped : 1; // 0x24(0x01)
	char bChildrenAreReady : 1; // 0x24(0x01)
	char pad_24_3 : 5; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct MaterialPermuter.HardSwapBatchComponentSettings
// Size: 0x0c (Inherited: 0x00)
struct FHardSwapBatchComponentSettings {
	int32_t MIDCreatesAllowedPerFrame; // 0x00(0x04)
	int32_t MaterialsToSwapPerFrame; // 0x04(0x04)
	bool bDetachAndDestoryWhenDone; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MaterialPermuter.MaterialPermuterHardSwapBase
// Size: 0x58 (Inherited: 0x00)
struct FMaterialPermuterHardSwapBase {
	struct FMaterialPermuterKey Key; // 0x00(0x10)
	struct FMaterialSwapParametersSimple Parameters; // 0x10(0x30)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x40(0x10)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x50(0x01)
	bool bDisableMIDSharing; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct MaterialPermuter.MaterialSwapParametersSimple
// Size: 0x30 (Inherited: 0x00)
struct FMaterialSwapParametersSimple {
	struct TArray<struct FMaterialSwapScalarParameter> Scalars; // 0x00(0x10)
	struct TArray<struct FMaterialSwapVectorParameter> Vectors; // 0x10(0x10)
	struct TArray<struct FMaterialSwapTextureParameter> Textures; // 0x20(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapTextureParameter
// Size: 0x10 (Inherited: 0x00)
struct FMaterialSwapTextureParameter {
	struct FName Name; // 0x00(0x08)
	struct UTexture* Value; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.MaterialSwapVectorParameter
// Size: 0x18 (Inherited: 0x00)
struct FMaterialSwapVectorParameter {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapScalarParameter
// Size: 0x0c (Inherited: 0x00)
struct FMaterialSwapScalarParameter {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterKey
// Size: 0x10 (Inherited: 0x00)
struct FMaterialPermuterKey {
	struct FName Group; // 0x00(0x08)
	struct FName SubType; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.MaterialPermuterHardSwapSimple
// Size: 0x60 (Inherited: 0x58)
struct FMaterialPermuterHardSwapSimple : FMaterialPermuterHardSwapBase {
	bool bIncludeChildren; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterHardSwapRules
// Size: 0x138 (Inherited: 0x58)
struct FMaterialPermuterHardSwapRules : FMaterialPermuterHardSwapBase {
	struct FMaterialSwapRules Rules; // 0x58(0xe0)
};

// ScriptStruct MaterialPermuter.MaterialSwapRules
// Size: 0xe0 (Inherited: 0x00)
struct FMaterialSwapRules {
	struct FMaterialSwapMeshRules MeshRules; // 0x00(0x48)
	struct FMaterialSwapActorRules ActorRules; // 0x48(0x40)
	struct FMaterialSwapDependentRules DependentRules; // 0x88(0x50)
	bool bFailOnNoMatches; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct MaterialPermuter.MaterialSwapDependentRules
// Size: 0x50 (Inherited: 0x00)
struct FMaterialSwapDependentRules {
	char bComponentChildren : 1; // 0x00(0x01)
	char bDirectChildren : 1; // 0x00(0x01)
	char bAttachedChildren : 1; // 0x00(0x01)
	char bLimitDepth : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMaterialSwapActorRules ActorRules; // 0x08(0x40)
	int32_t MaxDepth; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MaterialPermuter.MaterialSwapActorRules
// Size: 0x40 (Inherited: 0x00)
struct FMaterialSwapActorRules {
	struct FMaterialSwapObjectRules ObjectFilter; // 0x00(0x20)
	struct FMaterialSwapActorTypeRules TypeFilter; // 0x20(0x05)
	char pad_25[0x3]; // 0x25(0x03)
	struct FMaterialSwapActorTagRules TagFilter; // 0x28(0x18)
};

// ScriptStruct MaterialPermuter.MaterialSwapObjectTagRules
// Size: 0x18 (Inherited: 0x00)
struct FMaterialSwapObjectTagRules {
	struct TArray<struct FName> Tags; // 0x00(0x10)
	enum class EMaterialSwapRulesObjects Rule; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MaterialPermuter.MaterialSwapActorTagRules
// Size: 0x18 (Inherited: 0x18)
struct FMaterialSwapActorTagRules : FMaterialSwapObjectTagRules {
};

// ScriptStruct MaterialPermuter.MaterialSwapActorTypeRules
// Size: 0x05 (Inherited: 0x00)
struct FMaterialSwapActorTypeRules {
	enum class EMaterialSwapRulesTypeMode Players; // 0x00(0x01)
	enum class EMaterialSwapRulesTypeMode Characters; // 0x01(0x01)
	enum class EMaterialSwapRulesTypeMode Pawns; // 0x02(0x01)
	enum class EMaterialSwapRulesTypeMode Moveable; // 0x03(0x01)
	enum class EMaterialSwapRulesTypeMode Stationary; // 0x04(0x01)
};

// ScriptStruct MaterialPermuter.MaterialSwapObjectRules
// Size: 0x20 (Inherited: 0x00)
struct FMaterialSwapObjectRules {
	enum class EMaterialSwapRulesObjects Rule; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Objects; // 0x08(0x10)
	enum class EMaterialSwapRulesObjectMatchMode MatchMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MaterialPermuter.MaterialSwapMeshRules
// Size: 0x48 (Inherited: 0x00)
struct FMaterialSwapMeshRules {
	struct FMaterialSwapObjectRules ObjectFilter; // 0x00(0x20)
	struct FMaterialSwapMeshTypeRules TypeFilter; // 0x20(0x09)
	char pad_29[0x7]; // 0x29(0x07)
	struct FMaterialSwapMeshTagRules TagFilter; // 0x30(0x18)
};

// ScriptStruct MaterialPermuter.MaterialSwapMeshTagRules
// Size: 0x18 (Inherited: 0x18)
struct FMaterialSwapMeshTagRules : FMaterialSwapObjectTagRules {
};

// ScriptStruct MaterialPermuter.MaterialSwapMeshTypeRules
// Size: 0x09 (Inherited: 0x00)
struct FMaterialSwapMeshTypeRules {
	enum class EMaterialSwapRulesTypeMode Static; // 0x00(0x01)
	enum class EMaterialSwapRulesTypeMode Skeletal; // 0x01(0x01)
	enum class EMaterialSwapRulesTypeMode Instanced; // 0x02(0x01)
	enum class EMaterialSwapRulesTypeMode Spline; // 0x03(0x01)
	enum class EMaterialSwapRulesTypeMode Moveable; // 0x04(0x01)
	enum class EMaterialSwapRulesTypeMode Stationary; // 0x05(0x01)
	enum class EMaterialSwapRulesTypeMode ReceivesDecals; // 0x06(0x01)
	enum class EMaterialSwapRulesTypeMode ReceivesWeatherDecals; // 0x07(0x01)
	enum class EMaterialSwapRulesTypeMode RenderCustomDepth; // 0x08(0x01)
};

// ScriptStruct MaterialPermuter.MaterialSwapSharedMIDCache
// Size: 0x50 (Inherited: 0x00)
struct FMaterialSwapSharedMIDCache {
	struct TMap<struct UMaterialInterface*, struct FMaterialSwapSharedMIDCacheEntry> Map; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialSwapSharedMIDCacheEntry
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSwapSharedMIDCacheEntry {
	struct UMaterialInstanceDynamic* Mid; // 0x00(0x08)
	struct FCachedMIDParameters CachedParameters; // 0x08(0x20)
};

// ScriptStruct MaterialPermuter.MaterialPermuterKeyCache
// Size: 0x68 (Inherited: 0x00)
struct FMaterialPermuterKeyCache {
	struct TMap<struct FName, struct FMaterialPermuterKey> Map; // 0x00(0x50)
	struct TArray<struct FMaterialPermuterKeyCached> Cache; // 0x50(0x10)
	bool bSorted; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterKeyCached
// Size: 0x18 (Inherited: 0x10)
struct FMaterialPermuterKeyCached : FMaterialPermuterKey {
	struct FName CachedHash; // 0x10(0x08)
};

// ScriptStruct MaterialPermuter.MaterialPermuterInstanceHandCraftedKeySetList
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterInstanceHandCraftedKeySetList {
	struct TMap<struct FName, struct FMaterialPermuterInstanceHandCraftedList> PerKey; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialPermuterInstanceHandCraftedList
// Size: 0x10 (Inherited: 0x00)
struct FMaterialPermuterInstanceHandCraftedList {
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterInstanceHandCraftedKeySet
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterInstanceHandCraftedKeySet {
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> PerKey; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialPermuterInstanceHandCraftedUISet
// Size: 0x20 (Inherited: 0x00)
struct FMaterialPermuterInstanceHandCraftedUISet {
	struct FMaterialPermuterKeyProperty Key; // 0x00(0x10)
	struct TArray<struct FMaterialPermuterInstanceHandCraftedUIPair> Pairs; // 0x10(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterInstanceHandCraftedUIPair
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterInstanceHandCraftedUIPair {
	struct TSoftObjectPtr<UMaterialInterface> MaterialInstance; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterialInterface> HandCrafted; // 0x28(0x28)
};

// ScriptStruct MaterialPermuter.MaterialPermuterNameProperty
// Size: 0x10 (Inherited: 0x00)
struct FMaterialPermuterNameProperty {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.MaterialPermuterKeyProperty
// Size: 0x10 (Inherited: 0x10)
struct FMaterialPermuterKeyProperty : FMaterialPermuterNameProperty {
};

// ScriptStruct MaterialPermuter.MaterialPermuterKeyMap
// Size: 0x10 (Inherited: 0x00)
struct FMaterialPermuterKeyMap {
	struct TArray<struct FName> SubTypes; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMaterialMap
// Size: 0x78 (Inherited: 0x00)
struct FMaterialPermuterMaterialMap {
	struct TSoftObjectPtr<UMaterialInterface> DefaultMaterial; // 0x00(0x28)
	struct TMap<struct TSoftObjectPtr<UMaterial>, struct FMaterialPermuterMaterialMapPermutation> MaterialMap; // 0x28(0x50)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMaterialMapPermutation
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterMaterialMapPermutation {
	struct TSoftObjectPtr<UMaterialInterface> PermutedMaterial; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterial> PermutedMasterMaterial; // 0x28(0x28)
};

// ScriptStruct MaterialPermuter.LiveMaterialsLoadedObjects
// Size: 0xf8 (Inherited: 0x00)
struct FLiveMaterialsLoadedObjects {
	struct TSet<struct UMaterialInterface*> LoadedObjects; // 0x00(0x50)
	struct TMap<struct UMaterialInterface*, struct FLiveMaterialsPendingKill> PendingKills; // 0x50(0x50)
	struct TSet<struct UMaterialInterface*> LockedObjects; // 0xa0(0x50)
	int64_t TotalLoadedBytes; // 0xf0(0x08)
};

// ScriptStruct MaterialPermuter.LiveMaterialsPendingKill
// Size: 0x10 (Inherited: 0x00)
struct FLiveMaterialsPendingKill {
	struct FTimespan LastTouched; // 0x00(0x08)
	struct FTimespan DeathDelay; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.LiveMaterialsPendingLoads
// Size: 0x50 (Inherited: 0x00)
struct FLiveMaterialsPendingLoads {
	struct TMap<struct FSoftObjectPath, struct FLiveMaterialsPendingLoad> PendingLoads; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.LiveMaterialsPendingLoad
// Size: 0x10 (Inherited: 0x00)
struct FLiveMaterialsPendingLoad {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingBundleAndSwapWeakTarget
// Size: 0x70 (Inherited: 0x00)
struct FMaterialPermuterLoadingBundleAndSwapWeakTarget {
	struct TArray<struct TWeakObjectPtr<struct AActor>> ActorsToSwap; // 0x00(0x10)
	struct FMaterialSwapParameters InitialParameters; // 0x10(0x50)
	enum class EMaterialPermuterLoadingBundleAndSwapType SwapType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FHardSwapBatchComponentSettings HardSwapBatchSettings; // 0x64(0x0c)
};

// ScriptStruct MaterialPermuter.MaterialSwapParameters
// Size: 0x50 (Inherited: 0x30)
struct FMaterialSwapParameters : FMaterialSwapParametersSimple {
	struct TArray<struct FMaterialSwapTransformedPosition> TransformedPositions; // 0x30(0x10)
	struct TArray<struct FMaterialSwapTransformedVector> TransformedVectors; // 0x40(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapTransformedParameter
// Size: 0x34 (Inherited: 0x00)
struct FMaterialSwapTransformedParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	struct FName TransformSource; // 0x14(0x08)
	enum class ETransformedParameterSource TransformType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FMaterialSwapCachedTransformSourceBone CachedBone; // 0x20(0x0c)
	struct FMaterialSwapCachedTransformSourceComponent CachedComponent; // 0x2c(0x08)
};

// ScriptStruct MaterialPermuter.MaterialSwapCachedTransformSourceComponent
// Size: 0x08 (Inherited: 0x00)
struct FMaterialSwapCachedTransformSourceComponent {
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x00(0x08)
};

// ScriptStruct MaterialPermuter.MaterialSwapCachedTransformSourceBone
// Size: 0x0c (Inherited: 0x00)
struct FMaterialSwapCachedTransformSourceBone {
	struct TWeakObjectPtr<struct USkinnedMeshComponent> SkinnedMesh; // 0x00(0x08)
	int32_t BoneIndex; // 0x08(0x04)
};

// ScriptStruct MaterialPermuter.MaterialSwapTransformedVector
// Size: 0x34 (Inherited: 0x34)
struct FMaterialSwapTransformedVector : FMaterialSwapTransformedParameter {
};

// ScriptStruct MaterialPermuter.MaterialSwapTransformedPosition
// Size: 0x34 (Inherited: 0x34)
struct FMaterialSwapTransformedPosition : FMaterialSwapTransformedParameter {
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingBundleAndSwapTarget
// Size: 0x70 (Inherited: 0x00)
struct FMaterialPermuterLoadingBundleAndSwapTarget {
	struct TArray<struct AActor*> ActorsToSwap; // 0x00(0x10)
	struct FMaterialSwapParameters InitialParameters; // 0x10(0x50)
	enum class EMaterialPermuterLoadingBundleAndSwapType SwapType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FHardSwapBatchComponentSettings HardSwapBatchSettings; // 0x64(0x0c)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingBundleList
// Size: 0x38 (Inherited: 0x00)
struct FMaterialPermuterLoadingBundleList {
	struct TArray<struct TWeakObjectPtr<struct UMaterialPermuterLoadingBundle>> Bundles; // 0x00(0x10)
	struct TArray<struct TWeakObjectPtr<struct UMaterialPermuterLoadingBundle>> QueuedBundles; // 0x10(0x10)
	struct TArray<struct TWeakObjectPtr<struct UMaterialPermuterLoadingBundle>> RemoveBundles; // 0x20(0x10)
	bool bProcessing; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMaterialAssetIndex
// Size: 0x38 (Inherited: 0x00)
struct FMaterialPermuterMaterialAssetIndex {
	struct UMaterialPermuterLoadingStrategiesAsset* LoadingStrategies; // 0x00(0x08)
	struct FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMaterialPermuterMaterialAssetIndexEntry> Assets; // 0x20(0x10)
	int32_t OnAsset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMaterialAssetIndexEntry
// Size: 0x58 (Inherited: 0x00)
struct FMaterialPermuterMaterialAssetIndexEntry {
	struct TSoftObjectPtr<UMaterial> Material; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterialInterface> Asset; // 0x28(0x28)
	struct FName Hash; // 0x50(0x08)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingStrategy
// Size: 0x14 (Inherited: 0x00)
struct FMaterialPermuterLoadingStrategy {
	struct FMaterialPermuterLoadingStrategyTrigger Trigger; // 0x00(0x0c)
	enum class EMaterialPermuterLoadType Type; // 0x0c(0x01)
	enum class EMaterialPermuterLoadingPriority Priority; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float PurgeTime; // 0x10(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingStrategyTrigger
// Size: 0x0c (Inherited: 0x00)
struct FMaterialPermuterLoadingStrategyTrigger {
	struct FName Trigger; // 0x00(0x08)
	enum class EMaterialPermuterLoadingPriority TriggerPriority; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingStrategies
// Size: 0x80 (Inherited: 0x00)
struct FMaterialPermuterLoadingStrategies {
	struct TMap<struct FName, struct FMaterialPermuterLoadingStrategy> Strategies; // 0x00(0x50)
	struct FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> ManualPreloads; // 0x68(0x10)
	enum class EMaterialPermuterLoadingPriority ManualPreloadPriority; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingStrategiesSetup
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterLoadingStrategiesSetup {
	struct TArray<struct FMaterialPermuterLoadingGroupStrategy> GroupStrategies; // 0x00(0x10)
	struct TArray<struct FMaterialPermuterLoadingPermutationStrategy> PermutationStrategies; // 0x10(0x10)
	struct FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x20(0x14)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> ManualPreloads; // 0x38(0x10)
	enum class EMaterialPermuterLoadingPriority ManualPreloadPriority; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingPermutationStrategy
// Size: 0x28 (Inherited: 0x00)
struct FMaterialPermuterLoadingPermutationStrategy {
	struct FMaterialPermuterPermutationProperty Permutation; // 0x00(0x10)
	struct FMaterialPermuterLoadingStrategy Strategy; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterPermutationProperty
// Size: 0x10 (Inherited: 0x10)
struct FMaterialPermuterPermutationProperty : FMaterialPermuterNameProperty {
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingGroupStrategy
// Size: 0x28 (Inherited: 0x00)
struct FMaterialPermuterLoadingGroupStrategy {
	struct FMaterialPermuterGroupProperty Group; // 0x00(0x10)
	struct FMaterialPermuterLoadingStrategy Strategy; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterGroupProperty
// Size: 0x10 (Inherited: 0x10)
struct FMaterialPermuterGroupProperty : FMaterialPermuterNameProperty {
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingTriggers
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterLoadingTriggers {
	struct TMap<struct FName, struct FMaterialPermuterLoadingTriggerSemaphone> Triggers; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadingTriggerSemaphone
// Size: 0x18 (Inherited: 0x00)
struct FMaterialPermuterLoadingTriggerSemaphone {
	struct TArray<struct TWeakObjectPtr<struct UObject>> Requests; // 0x00(0x10)
	int32_t LastCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct MaterialPermuter.MasterMaterialAssetSet
// Size: 0x510 (Inherited: 0x00)
struct FMasterMaterialAssetSet {
	char pad_0[0x510]; // 0x00(0x510)
};

// ScriptStruct MaterialPermuter.MasterMaterialSet
// Size: 0x110 (Inherited: 0x00)
struct FMasterMaterialSet {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMIDCache
// Size: 0x58 (Inherited: 0x00)
struct FMaterialPermuterMIDCache {
	struct TMap<struct UMaterialInterface*, struct FMaterialPermuterMIDCacheEntry> Cache; // 0x00(0x50)
	bool bEnable; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float TTLSeconds; // 0x54(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMIDCacheEntry
// Size: 0x58 (Inherited: 0x00)
struct FMaterialPermuterMIDCacheEntry {
	struct TMap<struct UMaterialInterface*, struct FMaterialPermuterMIDCacheTemplate> Templates; // 0x00(0x50)
	struct FDateTime Touched; // 0x50(0x08)
};

// ScriptStruct MaterialPermuter.MaterialPermuterMIDCacheTemplate
// Size: 0x10 (Inherited: 0x00)
struct FMaterialPermuterMIDCacheTemplate {
	struct UMaterialInstanceDynamic* Template; // 0x00(0x08)
	struct FDateTime Touched; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.MIDParameters
// Size: 0x30 (Inherited: 0x00)
struct FMIDParameters {
	struct TArray<struct FMIDScalarParameter> Scalars; // 0x00(0x10)
	struct TArray<struct FMIDVectorParameter> Vectors; // 0x10(0x10)
	struct TArray<struct FMIDTextureParameter> Textures; // 0x20(0x10)
};

// ScriptStruct MaterialPermuter.MIDTextureParameter
// Size: 0x10 (Inherited: 0x00)
struct FMIDTextureParameter {
	struct FName Name; // 0x00(0x08)
	struct UTexture* Value; // 0x08(0x08)
};

// ScriptStruct MaterialPermuter.MIDVectorParameter
// Size: 0x18 (Inherited: 0x00)
struct FMIDVectorParameter {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct MaterialPermuter.MIDScalarParameter
// Size: 0x0c (Inherited: 0x00)
struct FMIDScalarParameter {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct MaterialPermuter.MaterialPermuterLoadTriggerProperty
// Size: 0x10 (Inherited: 0x10)
struct FMaterialPermuterLoadTriggerProperty : FMaterialPermuterNameProperty {
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverrides
// Size: 0x20 (Inherited: 0x00)
struct FMaterialPermuterCopyParameterOverrides {
	struct TArray<struct FMaterialPermuterCopyParameterOverride> Groups; // 0x00(0x10)
	struct TArray<struct FMaterialPermuterCopyParameterOverride> Permutations; // 0x10(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverride
// Size: 0x20 (Inherited: 0x00)
struct FMaterialPermuterCopyParameterOverride {
	struct FName Key; // 0x00(0x08)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> SpecificMaterials; // 0x08(0x10)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverridesSetup
// Size: 0x20 (Inherited: 0x00)
struct FMaterialPermuterCopyParameterOverridesSetup {
	struct TArray<struct FMaterialPermuterCopyParameterOverrideGroup> GroupOverrides; // 0x00(0x10)
	struct TArray<struct FMaterialPermuterCopyParameterOverridePermutation> PermutationOverrides; // 0x10(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverrideBase
// Size: 0x28 (Inherited: 0x00)
struct FMaterialPermuterCopyParameterOverrideBase {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> SpecificMaterials; // 0x10(0x10)
	bool bOnlySpecificMaterials; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverridePermutation
// Size: 0x38 (Inherited: 0x28)
struct FMaterialPermuterCopyParameterOverridePermutation : FMaterialPermuterCopyParameterOverrideBase {
	struct FMaterialPermuterPermutationProperty Permutation; // 0x28(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterCopyParameterOverrideGroup
// Size: 0x38 (Inherited: 0x28)
struct FMaterialPermuterCopyParameterOverrideGroup : FMaterialPermuterCopyParameterOverrideBase {
	struct FMaterialPermuterGroupProperty Group; // 0x28(0x10)
};

// ScriptStruct MaterialPermuter.MaterialPermuterParameterSetGroup
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterParameterSetGroup {
	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct FMaterialPermuterParameterSet> ParameterMap; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialPermuterParameterSet
// Size: 0x30 (Inherited: 0x00)
struct FMaterialPermuterParameterSet {
	struct TArray<struct FName> Scalars; // 0x00(0x10)
	struct TArray<struct FName> Vectors; // 0x10(0x10)
	struct TArray<struct FName> Textures; // 0x20(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapMeshStatesAndData
// Size: 0x20 (Inherited: 0x00)
struct FMaterialSwapMeshStatesAndData {
	struct TArray<struct UMaterialSwapMeshState*> States; // 0x00(0x10)
	struct TArray<struct UMaterialSwapMeshStateData*> Data; // 0x10(0x10)
};

// ScriptStruct MaterialPermuter.MeshMaterialSwap
// Size: 0x10 (Inherited: 0x00)
struct FMeshMaterialSwap {
	struct TArray<struct FMeshSwappedMaterial> SwappedMaterials; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MeshSwappedMaterial
// Size: 0x38 (Inherited: 0x00)
struct FMeshSwappedMaterial {
	struct FCachedMIDParameters CachedParameters; // 0x00(0x20)
	struct UMaterialInterface* OriginalMaterial; // 0x20(0x08)
	struct UMaterialInstanceDynamic* SwapMID; // 0x28(0x08)
	int16_t Index; // 0x30(0x02)
	int16_t flags; // 0x32(0x02)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MaterialPermuter.BlueprintMaterialSwapMeshStates
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintMaterialSwapMeshStates {
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapComponentHandle
// Size: 0x10 (Inherited: 0x00)
struct FMaterialSwapComponentHandle {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoBase
// Size: 0x08 (Inherited: 0x00)
struct FMaterialSwapInfoBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct MaterialPermuter.MaterialSwapInfo
// Size: 0x180 (Inherited: 0x08)
struct FMaterialSwapInfo : FMaterialSwapInfoBase {
	enum class EMaterialSwapPriority Priority; // 0x08(0x01)
	enum class EMaterialSwapInfoTyoe SwapType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName Group; // 0x0c(0x08)
	struct FName SubType; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UMaterialInterface* MaterialOverride; // 0x20(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x28(0x10)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FMaterialSwapRules Rules; // 0x40(0xe0)
	struct FMaterialSwapParameters InitialParameters; // 0x120(0x50)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x170(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapKeyBase
// Size: 0x08 (Inherited: 0x08)
struct FMaterialSwapKeyBase : FMaterialSwapInfoBase {
};

// ScriptStruct MaterialPermuter.MaterialSwapKey
// Size: 0x110 (Inherited: 0x08)
struct FMaterialSwapKey : FMaterialSwapKeyBase {
	struct FMaterialPermuterKey Key; // 0x08(0x10)
	enum class EMaterialSwapPriority Priority; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FMaterialSwapRules Rules; // 0x20(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x100(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapKeyUI
// Size: 0x110 (Inherited: 0x08)
struct FMaterialSwapKeyUI : FMaterialSwapKeyBase {
	struct FMaterialPermuterKeyProperty Permutation; // 0x08(0x10)
	enum class EMaterialSwapPriority Priority; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FMaterialSwapRules Rules; // 0x20(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x100(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoOverrideMaterials
// Size: 0x118 (Inherited: 0x08)
struct FMaterialSwapInfoOverrideMaterials : FMaterialSwapInfoBase {
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class EMaterialSwapPriority Priority; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FMaterialSwapRules Rules; // 0x20(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x100(0x10)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoOverrideMaterialBase
// Size: 0x08 (Inherited: 0x08)
struct FMaterialSwapInfoOverrideMaterialBase : FMaterialSwapInfoBase {
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoOverrideMaterial
// Size: 0x110 (Inherited: 0x08)
struct FMaterialSwapInfoOverrideMaterial : FMaterialSwapInfoOverrideMaterialBase {
	struct UMaterialInterface* MaterialOverride; // 0x08(0x08)
	enum class EMaterialSwapPriority Priority; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FMaterialSwapRules Rules; // 0x18(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0xf8(0x10)
	enum class EMaterialPermuterParameterCopy ParameterCopy; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoInPlaceMIDsBase
// Size: 0x08 (Inherited: 0x08)
struct FMaterialSwapInfoInPlaceMIDsBase : FMaterialSwapInfoBase {
};

// ScriptStruct MaterialPermuter.MaterialSwapInfoInPlaceMIDs
// Size: 0x100 (Inherited: 0x08)
struct FMaterialSwapInfoInPlaceMIDs : FMaterialSwapInfoInPlaceMIDsBase {
	enum class EMaterialSwapPriority Priority; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FMaterialSwapRules Rules; // 0x10(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0xf0(0x10)
};

// ScriptStruct MaterialPermuter.MaterialSwapSphereSelectionActor
// Size: 0x08 (Inherited: 0x00)
struct FMaterialSwapSphereSelectionActor {
	double LastTouched; // 0x00(0x08)
};

// ScriptStruct MaterialPermuter.MaterialSwapSphereSelectionMesh
// Size: 0x30 (Inherited: 0x00)
struct FMaterialSwapSphereSelectionMesh {
	struct UMaterialSwap* MaterialSwap; // 0x00(0x08)
	double LastTouched; // 0x08(0x08)
	struct FVector4 SwapSphereMaterialParameter; // 0x10(0x10)
	bool bIsSwappable; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
};

// ScriptStruct MaterialPermuter.MaterialPermuterSwapTracker
// Size: 0x50 (Inherited: 0x00)
struct FMaterialPermuterSwapTracker {
	struct TMap<struct TWeakObjectPtr<struct UMeshComponent>, struct TWeakObjectPtr<struct UObject>> ActiveSwaps; // 0x00(0x50)
};

// ScriptStruct MaterialPermuter.MaterialSwapActorFadeStates
// Size: 0xd0 (Inherited: 0x00)
struct FMaterialSwapActorFadeStates {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct MaterialPermuter.MaterialSwapFadeSettings
// Size: 0x120 (Inherited: 0x00)
struct FMaterialSwapFadeSettings {
	struct FMaterialSwapKeyUI Swap; // 0x00(0x110)
	struct FName OpacityParameter; // 0x110(0x08)
	bool bUseAutoRefreshSwap; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct MaterialPermuter.SimpleDataSetPendingLoad
// Size: 0x30 (Inherited: 0x00)
struct FSimpleDataSetPendingLoad {
	struct FSoftObjectPath UniqueId; // 0x00(0x18)
	struct FDateTime Started; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

