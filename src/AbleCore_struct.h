// Enum AbleCore.EAblAbilityPassiveBehavior
enum class EAblAbilityPassiveBehavior : uint8 {
	CannotBePassive = 0,
	RefreshDuration = 1,
	IncreaseStackCount = 2,
	IncreaseAndRefresh = 3,
	EAblAbilityPassiveBehavior_MAX = 4
};

// Enum AbleCore.EAblAbilityStartResult
enum class EAblAbilityStartResult : uint8 {
	InvalidTarget = 0,
	FailedCustomCheck = 1,
	CooldownNotExpired = 2,
	CannotInterruptCurrentAbility = 3,
	NotAllowedAsPassive = 4,
	PassiveMaxStacksReached = 5,
	InternalSystemsError = 6,
	AsyncProcessing = 7,
	ForwardedToServer = 8,
	InvalidParameter = 9,
	Success = 10,
	EAblAbilityStartResult_MAX = 11
};

// Enum AbleCore.EAnimBlendTickStyle
enum class EAnimBlendTickStyle : uint8 {
	BlendTickBoth = 0,
	BlendTickDest = 1,
	EAnimBlendTickStyle_MAX = 2
};

// Enum AbleCore.EAblAbilityTargetType
enum class EAblAbilityTargetType : uint8 {
	Self = 0,
	Owner = 1,
	Instigator = 2,
	TargetActor = 3,
	Camera = 4,
	EnemyWeapon = 5,
	EAblAbilityTargetType_MAX = 6
};

// Enum AbleCore.EFKIKBranchType
enum class EFKIKBranchType : uint8 {
	LeftLeg = 0,
	RightLeg = 1,
	EFKIKBranchType_MAX = 2
};

// Enum AbleCore.EAblCollisionFilterSort
enum class EAblCollisionFilterSort : uint8 {
	AblFitlerSort_Ascending = 0,
	AblFilterSort_Descending = 1,
	EAblCollisionFilterSort_MAX = 2
};

// Enum AbleCore.ERootMotionModifierOrder
enum class ERootMotionModifierOrder : uint8 {
	Primary = 0,
	Secondary = 1,
	RankAndFile = 2,
	Penultimate = 3,
	Ultimate = 4,
	ERootMotionModifierOrder_MAX = 5
};

// Enum AbleCore.EPhysicalBodyBlendState
enum class EPhysicalBodyBlendState : uint8 {
	None = 0,
	BlendIn = 1,
	BlendOut = 2,
	Destroy = 3,
	EPhysicalBodyBlendState_MAX = 4
};

// Enum AbleCore.EAblPlayAnimationTaskAnimMode
enum class EAblPlayAnimationTaskAnimMode : uint8 {
	SingleNode = 0,
	AbilityAnimationNode = 1,
	DynamicMontage = 2,
	EAblPlayAnimationTaskAnimMode_MAX = 3
};

// Enum AbleCore.EAblNpcReactEventAction
enum class EAblNpcReactEventAction : uint8 {
	Ignore = 0,
	Enable = 1,
	Disable = 2,
	EAblNpcReactEventAction_MAX = 3
};

// Enum AbleCore.EAblNpcReactChannelType
enum class EAblNpcReactChannelType : uint8 {
	Fullbody = 0,
	Additive = 1,
	PartialBody = 2,
	EAblNpcReactChannelType_MAX = 3
};

// Enum AbleCore.EAblReactionState
enum class EAblReactionState : uint8 {
	Queued = 0,
	Active = 1,
	Ending = 2,
	Inactive = 3,
	Finished = 4,
	EAblReactionState_MAX = 5
};

// Enum AbleCore.EAblTargetingFilterSort
enum class EAblTargetingFilterSort : uint8 {
	AblTargetFilterSort_Ascending = 0,
	AblTargetFilterSort_Descending = 1,
	AblTargetFilterSort_MAX = 2
};

// Enum AbleCore.ETimeDilationTarget
enum class ETimeDilationTarget : uint8 {
	World = 0,
	Self = 1,
	Owner = 2,
	Instigator = 3,
	TargetActor = 4,
	ETimeDilationTarget_MAX = 5
};

// Enum AbleCore.EAblAbilityTaskRealm
enum class EAblAbilityTaskRealm : uint8 {
	Client = 0,
	Server = 1,
	ClientAndServer = 2,
	TotalRealms = 3,
	EAblAbilityTaskRealm_MAX = 4
};

// Enum AbleCore.EAblAbilityTaskResult
enum class EAblAbilityTaskResult : uint8 {
	Successful = 0,
	Branched = 1,
	Interrupted = 2,
	EAblAbilityTaskResult_MAX = 3
};

// Enum AbleCore.ERelativeToEnum
enum class ERelativeToEnum : uint8 {
	RELATIVETO_START = 0,
	RELATIVETO_END = 1,
	RELATIVETO_MAX = 2
};

// Enum AbleCore.EOffsetTypeEnum
enum class EOffsetTypeEnum : uint8 {
	OFFSETTYPE_SECONDS = 0,
	OFFSETTYPE_PERCENT = 1,
	OFFSETTYPE_FRAMES = 2,
	OFFSETTYPE_MAX = 3
};

// ScriptStruct AbleCore.QueueReactionParams
// Size: 0x78 (Inherited: 0x00)
struct FQueueReactionParams {
	float Duration; // 0x00(0x04)
	struct FVector ImpactDirection; // 0x04(0x0c)
	struct FVector ImpactLocation; // 0x10(0x0c)
	struct FVector InitialVelocity; // 0x1c(0x0c)
	struct FVector TargetPosition; // 0x28(0x0c)
	struct FVector TargetDirection; // 0x34(0x0c)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x40(0x08)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x48(0x08)
	bool bActiveAbilityOwnsPassives; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FGameplayTagContainer MunitionTags; // 0x58(0x20)
};

// ScriptStruct AbleCore.AblAbilityChannel
// Size: 0x88 (Inherited: 0x00)
struct FAblAbilityChannel {
	char pad_0[0x14]; // 0x00(0x14)
	int32_t Priority; // 0x14(0x04)
	bool bIsAdditive; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAblBoneBlendWeightAsset* BoneBlendWeightAsset; // 0x20(0x08)
	struct UAblAbilityInstance* ActiveAbilityInstance; // 0x28(0x08)
	struct TArray<struct UAblAbilityInstance*> PassiveAbilityInstances; // 0x30(0x10)
	struct TArray<struct UAblAbilityContext*> PendingContext; // 0x40(0x10)
	struct TArray<enum class EAblAbilityTaskResult> PendingResult; // 0x50(0x10)
	struct TArray<struct UAblAbilityContext*> AsyncContexts; // 0x60(0x10)
	struct TArray<struct UAblAbilityInstance*> FadingAbilities; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct AbleCore.AblDynamicAbilityChannel
// Size: 0x90 (Inherited: 0x88)
struct FAblDynamicAbilityChannel : FAblAbilityChannel {
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct AbleCore.AbilityComponentPostAnimationTickFunction
// Size: 0x48 (Inherited: 0x40)
struct FAbilityComponentPostAnimationTickFunction : FTickFunction {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct AbleCore.AblAbilityNetworkContext
// Size: 0x38 (Inherited: 0x00)
struct FAblAbilityNetworkContext {
	struct TWeakObjectPtr<struct UAblAbility> m_Ability; // 0x00(0x08)
	struct TWeakObjectPtr<struct UAblAbilityComponent> m_AbilityComponent; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> m_Owner; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> m_Instigator; // 0x18(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> m_TargetActors; // 0x20(0x10)
	int8_t m_CurrentStacks; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float m_TimeStamp; // 0x34(0x04)
};

// ScriptStruct AbleCore.AblQueryResult
// Size: 0x10 (Inherited: 0x00)
struct FAblQueryResult {
	struct TWeakObjectPtr<struct UPrimitiveComponent> PrimitiveComponent; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x08(0x08)
};

// ScriptStruct AbleCore.AblAbilityCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAblAbilityCooldown {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AbleCore.AblAnimation
// Size: 0x78 (Inherited: 0x00)
struct FAblAnimation {
	char pad_0[0x30]; // 0x00(0x30)
	struct TArray<struct FAblAnimationChannel> SortedAnimationChannels; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)
};

// ScriptStruct AbleCore.AblAnimationChannel
// Size: 0x70 (Inherited: 0x00)
struct FAblAnimationChannel {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t Priority; // 0x10(0x04)
	bool bIsAdditive; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UAblBoneBlendWeightAsset* BoneBlendWeightAsset; // 0x18(0x08)
	char pad_20[0x50]; // 0x20(0x50)
};

// ScriptStruct AbleCore.AblDynamicAnimationChannel
// Size: 0x78 (Inherited: 0x70)
struct FAblDynamicAnimationChannel : FAblAnimationChannel {
	char pad_70[0x8]; // 0x70(0x08)
};

// ScriptStruct AbleCore.KIKBone
// Size: 0x14 (Inherited: 0x00)
struct FKIKBone {
	struct FName FKBoneName; // 0x00(0x08)
	struct FName IKBoneName; // 0x08(0x08)
	enum class EFKIKBranchType FKIKBranch; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct AbleCore.AblAvaAnimationPlaybackOptions
// Size: 0x18 (Inherited: 0x00)
struct FAblAvaAnimationPlaybackOptions {
	enum class EAnimTrackPlaybackSpeed PlayRateType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UFloatProvider* ForcedDuration; // 0x08(0x08)
	struct UFloatProvider* ForcedPlayRate; // 0x10(0x08)
};

// ScriptStruct AbleCore.AbleAvaAnimationClipRange
// Size: 0x10 (Inherited: 0x00)
struct FAbleAvaAnimationClipRange {
	struct UFloatProvider* StartOffset; // 0x00(0x08)
	struct UFloatProvider* EndOffset; // 0x08(0x08)
};

// ScriptStruct AbleCore.AbleAvaAnimationPlacementOptions
// Size: 0x30 (Inherited: 0x00)
struct FAbleAvaAnimationPlacementOptions {
	struct UTransformProvider* InitialPlacementTransform; // 0x00(0x08)
	struct UBoolProvider* ConstrainedToPlacement; // 0x08(0x08)
	struct UBoolProvider* PlacementIsMoving; // 0x10(0x08)
	struct UBoolProvider* HandledByRequest; // 0x18(0x08)
	struct UTransformProvider* PlacementProvider; // 0x20(0x08)
	struct UAnimationTransformProvider* AnimationPlacementOffset; // 0x28(0x08)
};

// ScriptStruct AbleCore.MyInputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FMyInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct AbleCore.MyBranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FMyBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32_t BlendDepth; // 0x08(0x04)
};

// ScriptStruct AbleCore.BTCustomActionTaskEntry
// Size: 0x14 (Inherited: 0x00)
struct FBTCustomActionTaskEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct AbleCore.BodyPartMatchingSmartNames
// Size: 0x90 (Inherited: 0x00)
struct FBodyPartMatchingSmartNames {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct AbleCore.KeyToAbilityMapping
// Size: 0x18 (Inherited: 0x08)
struct FKeyToAbilityMapping : FTableRowBase {
	bool bAdditive; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAblAbility* Ability; // 0x10(0x08)
};

// ScriptStruct AbleCore.AbleHUDStyle
// Size: 0x2c80 (Inherited: 0x08)
struct FAbleHUDStyle : FSlateWidgetStyle {
	struct FTextBlockStyle CurrentActorTextStyle; // 0x08(0x270)
	struct FTextBlockStyle FootPlantTextStyle; // 0x278(0x270)
	struct FTextBlockStyle ChannelTextStyle; // 0x4e8(0x270)
	struct FTextBlockStyle AbilityTextStyle; // 0x758(0x270)
	struct FTextBlockStyle AnimationTextStyle; // 0x9c8(0x270)
	struct FTextBlockStyle AnimationBlendTextStyle; // 0xc38(0x270)
	struct FTextBlockStyle BlendInputTextStyle; // 0xea8(0x270)
	struct FTextBlockStyle PlayRateTextStyle; // 0x1118(0x270)
	struct FTextBlockStyle AdditiveTextStyle; // 0x1388(0x270)
	struct FTextBlockStyle BlendWeightTextStyle; // 0x15f8(0x270)
	struct FTextBlockStyle RootMotionTextStyle; // 0x1868(0x270)
	struct FTextBlockStyle AssetLengthTextStyle; // 0x1ad8(0x270)
	struct FTextBlockStyle GameplayTagTextStyle; // 0x1d48(0x270)
	struct FTextBlockStyle ActorTagTextStyle; // 0x1fb8(0x270)
	struct FTableRowStyle TreeRowStyle; // 0x2228(0x7c8)
	struct FMargin HUDMargin; // 0x29f0(0x10)
	struct FMargin TreeMargin; // 0x2a00(0x10)
	struct FTextBlockStyle AnimationInfoTextStyle; // 0x2a10(0x270)
};

// ScriptStruct AbleCore.HermesSendMessageToTaskEntry
// Size: 0x14 (Inherited: 0x00)
struct FHermesSendMessageToTaskEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct AbleCore.PhysicalBodyNameWeightPair
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalBodyNameWeightPair {
	struct FName BoneName; // 0x00(0x08)
	float BoneWeight; // 0x08(0x04)
};

// ScriptStruct AbleCore.BlendTrackInfo
// Size: 0x38 (Inherited: 0x00)
struct FBlendTrackInfo {
	struct FGameplayTagContainer AnimationTags; // 0x00(0x20)
	struct UAblBlendSpaceParameterGetter* BlendSpaceParameterGetter; // 0x20(0x08)
	bool bIsAdditive; // 0x28(0x01)
	bool bRotationOffsetMeshSpace; // 0x29(0x01)
	bool bOverrideMeshSpaceRotationBlend; // 0x2a(0x01)
	bool bMeshSpaceRotationBlend; // 0x2b(0x01)
	bool bLoop; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UAblBoneBlendWeightAsset* BoneWeightAsset; // 0x30(0x08)
};

// ScriptStruct AbleCore.AblBlendTimes
// Size: 0x08 (Inherited: 0x00)
struct FAblBlendTimes {
	float m_BlendIn; // 0x00(0x04)
	float m_BlendOut; // 0x04(0x04)
};

// ScriptStruct AbleCore.AblReactionsList
// Size: 0x10 (Inherited: 0x00)
struct FAblReactionsList {
	struct TArray<struct UAblReactionData*> Reactions; // 0x00(0x10)
};

// ScriptStruct AbleCore.AblReactionHandle
// Size: 0x08 (Inherited: 0x00)
struct FAblReactionHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct AbleCore.CollisionLayerResponseEntry
// Size: 0x10 (Inherited: 0x00)
struct FCollisionLayerResponseEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AbleCore.AblAbilityTargetTypeLocation
// Size: 0x28 (Inherited: 0x00)
struct FAblAbilityTargetTypeLocation {
	enum class EAblAbilityTargetType m_Source; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector m_Offset; // 0x04(0x0c)
	struct FRotator m_Rotation; // 0x10(0x0c)
	struct FName m_Socket; // 0x1c(0x08)
	bool m_UseSocketRotation; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AbleCore.TurnToTaskEntry
// Size: 0x14 (Inherited: 0x00)
struct FTurnToTaskEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct AbleCore.AblUberAbility
// Size: 0x20 (Inherited: 0x00)
struct FAblUberAbility {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FAblAbilityChannel> SortedAbilityChannels; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct AbleCore.AnimNode_AbilityAnimPlayer
// Size: 0xb0 (Inherited: 0x38)
struct FAnimNode_AbilityAnimPlayer : FAnimNode_AssetPlayerBase {
	struct FAblAnimation AblAnimation; // 0x38(0x78)
};

// ScriptStruct AbleCore.AblRootMode
// Size: 0x02 (Inherited: 0x00)
struct FAblRootMode {
	enum class EEvaluatorRootMotion m_UseSourceRootMotion; // 0x00(0x01)
	enum class EEvaluatorRootMotion m_UseDestRootMotion; // 0x01(0x01)
};

// ScriptStruct AbleCore.ObjectTracker
// Size: 0x50 (Inherited: 0x00)
struct FObjectTracker {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct AbleCore.RelativeTime
// Size: 0x18 (Inherited: 0x00)
struct FRelativeTime {
	float Offset; // 0x00(0x04)
	enum class EOffsetTypeEnum OffsetType; // 0x04(0x01)
	enum class ERelativeToEnum RelativeToType; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct UObject* RelativeToObject; // 0x08(0x08)
	bool bEditable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

