// Enum FXUtil.EAttachCFAttachCameraComponentDelegateEvent
enum class EAttachCFAttachCameraComponentDelegateEvent : uint8 {
	PositionChanged = 0,
	RotationChanged = 1,
	PositionAndRotationChanged = 2,
	EAttachCFAttachCameraComponentDelegateEvent_MAX = 3
};

// Enum FXUtil.EAttachCameraBillBoardType
enum class EAttachCameraBillBoardType : uint8 {
	ACBBT_ZX = 0,
	ACBBT_YX = 1,
	ACBBT_XZ = 2,
	ACBBT_XY = 3,
	ACBBT_X = 4,
	ACBBT_MAX = 5
};

// Enum FXUtil.EAttachCameraType
enum class EAttachCameraType : uint8 {
	ACT_FULL = 0,
	ACT_XYZ = 1,
	ACT_XYONLY = 2,
	ACT_BILLBOARD = 3,
	ACT_ROTATION = 4,
	ACT_MAX = 5
};

// Enum FXUtil.EObjectFadeMasterState
enum class EObjectFadeMasterState : uint8 {
	NotFound = 0,
	FadingIn = 1,
	FadingOut = 2,
	EObjectFadeMasterState_MAX = 3
};

// Enum FXUtil.EObjectFadeCompletedAction
enum class EObjectFadeCompletedAction : uint8 {
	Default = 0,
	HoldInSystem = 1,
	ReleaseFromSystem = 2,
	FadeOut_HideObject = 3,
	FadeOut_KillObject = 4,
	EObjectFadeCompletedAction_MAX = 5
};

// Enum FXUtil.EObjectFadeSpeed
enum class EObjectFadeSpeed : uint8 {
	VeryFast = 0,
	Fast = 1,
	Default = 2,
	Slow = 3,
	VerySlow = 4,
	EObjectFadeSpeed_MAX = 5
};

// Enum FXUtil.EObjectFadeDirection
enum class EObjectFadeDirection : uint8 {
	FadeIn = 0,
	FadeOut = 1,
	EObjectFadeDirection_MAX = 2
};

// Enum FXUtil.EFollowCameraType
enum class EFollowCameraType : uint8 {
	FCT_OFF = 0,
	FCT_FULL = 1,
	FCT_XYONLY = 2,
	FCT_FIXEDZ = 3,
	FCT_OFFSETZ = 4,
	FCT_MAX = 5
};

// Enum FXUtil.EFXAutoTriggerConditionResult
enum class EFXAutoTriggerConditionResult : uint8 {
	None = 0,
	End = 1,
	Start = 2,
	EFXAutoTriggerConditionResult_MAX = 3
};

// Enum FXUtil.EFXAutoTriggerConditionType
enum class EFXAutoTriggerConditionType : uint8 {
	StartAndEnd = 0,
	StartOnly = 1,
	EndOnly = 2,
	EFXAutoTriggerConditionType_MAX = 3
};

// Enum FXUtil.EOverlapEffectsHandlerConditionLogic
enum class EOverlapEffectsHandlerConditionLogic : uint8 {
	And = 0,
	Or = 1,
	ExclusiveOr = 2,
	EOverlapEffectsHandlerConditionLogic_MAX = 3
};

// Enum FXUtil.EOverlapEffectsHitPoint
enum class EOverlapEffectsHitPoint : uint8 {
	Default = 0,
	Instigator = 1,
	InstigatorCenter = 2,
	InstigatorBase = 3,
	InstigatorTop = 4,
	Victim = 5,
	VictimCenter = 6,
	VictimBase = 7,
	VictimTop = 8,
	Intersection = 9,
	EOverlapEffectsHitPoint_MAX = 10
};

// Enum FXUtil.EOverlapEffectsAttachment
enum class EOverlapEffectsAttachment : uint8 {
	Instigator = 0,
	Victim = 1,
	PreferVictimOverInstigator = 2,
	PreferInstigatorOverVictim = 3,
	EOverlapEffectsAttachment_MAX = 4
};

// Enum FXUtil.EOverlapEffectsEvent
enum class EOverlapEffectsEvent : uint8 {
	BeginOverlap = 0,
	EndOverlap = 1,
	Hit = 2,
	Tick = 3,
	EOverlapEffectsEvent_MAX = 4
};

// Enum FXUtil.ECharacterDynamicClothingType
enum class ECharacterDynamicClothingType : uint8 {
	None = 0,
	Tight = 1,
	Loose = 2,
	CapeOrRobe = 3,
	ECharacterDynamicClothingType_MAX = 4
};

// Enum FXUtil.ECharacterDynamicClothingTypes
enum class ECharacterDynamicClothingTypes : uint8 {
	Tight = 0,
	Loose = 1,
	CapeOrRobe = 2,
	ECharacterDynamicClothingTypes_MAX = 3
};

// Enum FXUtil.EWindSpeedOverlapEffectsMode
enum class EWindSpeedOverlapEffectsMode : uint8 {
	IndoorsAndOutdoors = 0,
	IndoorsOnly = 1,
	OutdoorsOnly = 2,
	EWindSpeedOverlapEffectsMode_MAX = 3
};

// Enum FXUtil.EUpdatePumpComponentMode
enum class EUpdatePumpComponentMode : uint8 {
	UPM_ALWAYS = 0,
	UPM_EDITORONLY = 1,
	UPM_GAMEONLY = 2,
	UPM_NEVER = 3,
	UPM_MAX = 4
};

// ScriptStruct FXUtil.AttachCameraEditorPlacement
// Size: 0x30 (Inherited: 0x00)
struct FAttachCameraEditorPlacement {
	struct FVector Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	enum class EAttachCameraType AttachType; // 0x20(0x01)
	bool bValid; // 0x21(0x01)
	char pad_22[0xe]; // 0x22(0x0e)
};

// ScriptStruct FXUtil.CurveBuildingParams
// Size: 0x18 (Inherited: 0x00)
struct FCurveBuildingParams {
	int32_t SamplesPerSecond; // 0x00(0x04)
	int32_t MaxSamples; // 0x04(0x04)
	float MinValueChange; // 0x08(0x04)
	int32_t KeyOptimizeThreshold; // 0x0c(0x04)
	float RedundantKeyTolerance; // 0x10(0x04)
	bool bOptimize; // 0x14(0x01)
	bool bCubic; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct FXUtil.EasingFunction
// Size: 0x0c (Inherited: 0x00)
struct FEasingFunction {
	enum class EEasingFunc Easing; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendExp; // 0x04(0x04)
	int32_t Steps; // 0x08(0x04)
};

// ScriptStruct FXUtil.Objectfade
// Size: 0xb8 (Inherited: 0x00)
struct FObjectfade {
	char pad_0[0x10]; // 0x00(0x10)
	struct FObjectFadeParams Params; // 0x10(0x90)
	float TimeFactor; // 0xa0(0x04)
	float Age; // 0xa4(0x04)
	float Opacity; // 0xa8(0x04)
	float Delay; // 0xac(0x04)
	enum class EObjectFadeCompletedAction FadeCompletedAction; // 0xb0(0x01)
	char bDone : 1; // 0xb1(0x01)
	char bReverseTime : 1; // 0xb1(0x01)
	char bHiddenAtEnd : 1; // 0xb1(0x01)
	char pad_B1_3 : 5; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct FXUtil.ObjectFadeParams
// Size: 0x90 (Inherited: 0x00)
struct FObjectFadeParams {
	enum class EObjectFadeDirection Direction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve OpacityCurve; // 0x08(0x88)
};

// ScriptStruct FXUtil.ObjectFadeParamsCurve
// Size: 0x90 (Inherited: 0x00)
struct FObjectFadeParamsCurve {
	struct FRuntimeFloatCurve RuntimeCurve; // 0x00(0x88)
	struct UCurveFloat* ExternalCurve; // 0x88(0x08)
};

// ScriptStruct FXUtil.ObjectFadeParamsEaseFunction
// Size: 0x14 (Inherited: 0x00)
struct FObjectFadeParamsEaseFunction {
	enum class EObjectFadeDirection Direction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	struct FEasingFunction EaseFunction; // 0x08(0x0c)
};

// ScriptStruct FXUtil.ObjectFadeParamsSpeedDuration
// Size: 0x0c (Inherited: 0x00)
struct FObjectFadeParamsSpeedDuration {
	enum class EObjectFadeDirection Direction; // 0x00(0x01)
	enum class EObjectFadeSpeed Speed; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Duration; // 0x04(0x04)
	bool bUseDuration; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct FXUtil.FXAutoTriggerFXSpawnInfo
// Size: 0x28 (Inherited: 0x00)
struct FFXAutoTriggerFXSpawnInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FName AttachPointName; // 0x20(0x08)
};

// ScriptStruct FXUtil.FXAutoTriggerFXSpawnInfoWithActors
// Size: 0x38 (Inherited: 0x28)
struct FFXAutoTriggerFXSpawnInfoWithActors : FFXAutoTriggerFXSpawnInfo {
	struct AActor* Target; // 0x28(0x08)
	struct AActor* Instigator; // 0x30(0x08)
};

// ScriptStruct FXUtil.XAutoTriggerCustomConditions
// Size: 0x50 (Inherited: 0x00)
struct FXAutoTriggerCustomConditions {
	struct TMap<struct UWorld*, struct FXAutoTriggerPerWorldCustomConditions> Conditions; // 0x00(0x50)
};

// ScriptStruct FXUtil.XAutoTriggerPerWorldCustomConditions
// Size: 0x60 (Inherited: 0x00)
struct FXAutoTriggerPerWorldCustomConditions {
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FXAutoTriggerCustomConditionsSet> Conditions; // 0x00(0x50)
	struct FXAutoTriggerCustomConditionsSet WorldConditions; // 0x50(0x10)
};

// ScriptStruct FXUtil.XAutoTriggerCustomConditionsSet
// Size: 0x10 (Inherited: 0x00)
struct FXAutoTriggerCustomConditionsSet {
	struct TArray<struct FName> Bools; // 0x00(0x10)
};

// ScriptStruct FXUtil.FXAutoTriggerFXTracker
// Size: 0x50 (Inherited: 0x00)
struct FFXAutoTriggerFXTracker {
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FFXAutoTriggerFXTrackerEntry> FXMap; // 0x00(0x50)
};

// ScriptStruct FXUtil.FXAutoTriggerFXTrackerEntry
// Size: 0x28 (Inherited: 0x00)
struct FFXAutoTriggerFXTrackerEntry {
	struct FMultiFX2Handle FXHandle; // 0x00(0x08)
	struct TArray<struct FName> DisableParameterUpdates; // 0x08(0x10)
	int32_t SleepFrames; // 0x18(0x04)
	int32_t Age; // 0x1c(0x04)
	uint32_t TouchedFrame; // 0x20(0x04)
	bool bDisableActorUpdates; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct FXUtil.FXAutoTriggerNameBase
// Size: 0x08 (Inherited: 0x00)
struct FFXAutoTriggerNameBase {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct FXUtil.FXAutoTriggerAnyName
// Size: 0x08 (Inherited: 0x08)
struct FFXAutoTriggerAnyName : FFXAutoTriggerNameBase {
};

// ScriptStruct FXUtil.FXAutoTriggerGlobalName
// Size: 0x08 (Inherited: 0x08)
struct FFXAutoTriggerGlobalName : FFXAutoTriggerNameBase {
};

// ScriptStruct FXUtil.FXAutoTriggerGroupName
// Size: 0x08 (Inherited: 0x08)
struct FFXAutoTriggerGroupName : FFXAutoTriggerNameBase {
};

// ScriptStruct FXUtil.FXAutoTriggerRequiredActorsIterate
// Size: 0x18 (Inherited: 0x00)
struct FFXAutoTriggerRequiredActorsIterate {
	struct TArray<struct FName> ExternalBuckets; // 0x00(0x10)
	bool bMainActorList; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FXUtil.FXAutoTriggerRunningFXList
// Size: 0x10 (Inherited: 0x00)
struct FFXAutoTriggerRunningFXList {
	struct TArray<struct FFXAutoTriggerRunningFX> FX; // 0x00(0x10)
};

// ScriptStruct FXUtil.FXAutoTriggerRunningFX
// Size: 0x68 (Inherited: 0x00)
struct FFXAutoTriggerRunningFX {
	struct UFXAutoTriggerDefinitionAsset* Asset; // 0x00(0x08)
	struct TWeakObjectPtr<struct UObject> Owner; // 0x08(0x08)
	struct FFXAutoTriggerFXTracker Tracker; // 0x10(0x50)
	bool bMeetsPrerequisite; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FXUtil.FXAutoTriggerRunningFXCollection
// Size: 0x28 (Inherited: 0x10)
struct FFXAutoTriggerRunningFXCollection : FFXAutoTriggerRunningFXList {
	struct UFXAutoTriggerGlobalDefinitionAsset* Globals; // 0x10(0x08)
	struct TArray<struct FFXAutoTriggerRunningFXGroup> Groups; // 0x18(0x10)
};

// ScriptStruct FXUtil.FXAutoTriggerRunningFXGroup
// Size: 0x18 (Inherited: 0x10)
struct FFXAutoTriggerRunningFXGroup : FFXAutoTriggerRunningFXList {
	struct UFXAutoTriggerGroupDefinitionAsset* Group; // 0x10(0x08)
};

// ScriptStruct FXUtil.FXNamedHandlesSingleton
// Size: 0x50 (Inherited: 0x00)
struct FFXNamedHandlesSingleton {
	struct TMap<struct UWorld*, struct FPerWorldFXNamedHandles> Handles; // 0x00(0x50)
};

// ScriptStruct FXUtil.PerWorldFXNamedHandles
// Size: 0xa0 (Inherited: 0x00)
struct FPerWorldFXNamedHandles {
	struct FFXNamedHandles Global; // 0x00(0x50)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FFXNamedHandles> Targets; // 0x50(0x50)
};

// ScriptStruct FXUtil.FXNamedHandles
// Size: 0x50 (Inherited: 0x00)
struct FFXNamedHandles {
	struct TMap<struct FName, struct FMultiFX2Handle> NamedHandles; // 0x00(0x50)
};

// ScriptStruct FXUtil.MillisecondUpdateTracker
// Size: 0x20 (Inherited: 0x00)
struct FMillisecondUpdateTracker {
	struct FDateTime LastUpdate; // 0x00(0x08)
	float LastMS; // 0x08(0x04)
	float AverageMS; // 0x0c(0x04)
	int32_t AverageSamples; // 0x10(0x04)
	int32_t AverageMaxSamples; // 0x14(0x04)
	bool bAverageRollover; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FXUtil.MillisecondUpdateTimer
// Size: 0x10 (Inherited: 0x00)
struct FMillisecondUpdateTimer {
	struct FDateTime NextUpdate; // 0x00(0x08)
	float UpdateRateMS; // 0x08(0x04)
	bool bEnabled; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FXUtil.OverlapEffectsVelocityTracker
// Size: 0x34 (Inherited: 0x00)
struct FOverlapEffectsVelocityTracker {
	struct FVector VelocityDirection; // 0x00(0x0c)
	float Speed; // 0x0c(0x04)
	float AngularVelocity; // 0x10(0x04)
	struct FVector LastPosition; // 0x14(0x0c)
	struct FVector LastForward; // 0x20(0x0c)
	float LastDistanceMoved; // 0x2c(0x04)
	bool bInitialized; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct FXUtil.OverlapEffectsHandlerConditions
// Size: 0x18 (Inherited: 0x00)
struct FOverlapEffectsHandlerConditions {
	struct UFXAutoTriggerBool* InstigatorCondition; // 0x00(0x08)
	struct UFXAutoTriggerBool* VictimCondition; // 0x08(0x08)
	enum class EOverlapEffectsHandlerConditionLogic Logic; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FXUtil.OverlapEffectsHandlerInstancedFoliageBVHTestEntry
// Size: 0x30 (Inherited: 0x00)
struct FOverlapEffectsHandlerInstancedFoliageBVHTestEntry {
	struct TArray<struct TSoftObjectPtr<UFoliageType>> FoliageTypes; // 0x00(0x10)
	struct TArray<struct UOverlapEffectsHandlerEffect*> Effects; // 0x10(0x10)
	float ActorXYBoundsPercent; // 0x20(0x04)
	float NextUpdate; // 0x24(0x04)
	bool bReadyToTest; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FXUtil.OverlapEffectsHandlerWindSpeedEntry
// Size: 0x38 (Inherited: 0x00)
struct FOverlapEffectsHandlerWindSpeedEntry {
	int32_t ClothingTypes; // 0x00(0x04)
	struct FVector2D StartEndSpeed; // 0x04(0x08)
	enum class EWindSpeedOverlapEffectsMode Mode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct UOverlapEffectsHandlerEffect*> StartEffects; // 0x10(0x10)
	struct TArray<struct UOverlapEffectsHandlerEffect*> EndEffects; // 0x20(0x10)
	bool bStopProcessingWithClothingMatch; // 0x30(0x01)
	bool bUseStartEndSpeedMS; // 0x31(0x01)
	bool bUseMode; // 0x32(0x01)
	bool bHasStartedEffects; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FXUtil.DecalPointLightInfo
// Size: 0x28 (Inherited: 0x00)
struct FDecalPointLightInfo {
	enum class ELightUnits IntensityUnits; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Intensity; // 0x04(0x04)
	struct FColor LightColor; // 0x08(0x04)
	float Temperature; // 0x0c(0x04)
	float AttenuationRadius; // 0x10(0x04)
	float LightFalloffExponent; // 0x14(0x04)
	float MinDistance; // 0x18(0x04)
	float MaxDrawDistance; // 0x1c(0x04)
	float MaxDistanceFadeRange; // 0x20(0x04)
	bool bUseTemperature; // 0x24(0x01)
	bool bUseInverseSquaredFalloff; // 0x25(0x01)
	bool bVisible; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct FXUtil.ActiveTimeDilationEffectGroup
// Size: 0x18 (Inherited: 0x00)
struct FActiveTimeDilationEffectGroup {
	struct TArray<struct FActiveTimeDilationEffect> ActiveEffects; // 0x00(0x10)
	int32_t CounterDilationEnabledCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FXUtil.ActiveTimeDilationEffect
// Size: 0x50 (Inherited: 0x00)
struct FActiveTimeDilationEffect {
	struct UCurveFloat* TimeDilationCurve; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

