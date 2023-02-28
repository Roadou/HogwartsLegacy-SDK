// Enum AvaAnimation.EExternalActorRole
enum class EExternalActorRole : uint8 {
	NONE = 0,
	Foreground = 1,
	Background = 2,
	Extra = 3,
	EExternalActorRole_MAX = 4
};

// Enum AvaAnimation.EAnimationDirectionSource
enum class EAnimationDirectionSource : uint8 {
	Gameplay = 0,
	TargetTracker = 1,
	PickupObject = 2,
	CharacterOptions = 3,
	SceneRig = 4,
	SceneRigActive = 5,
	Highest = 6,
	SourceCount = 7,
	EAnimationDirectionSource_MAX = 8
};

// Enum AvaAnimation.EAnimationDirections
enum class EAnimationDirections : uint8 {
	MovingDirection = 0,
	FacingDirection = 1,
	AimingDirection = 2,
	LookingDirection = 3,
	GazingDirection = 4,
	kDirectionCount = 5,
	EAnimationDirections_MAX = 6
};

// Enum AvaAnimation.EAnimationRequestLayerBlendType
enum class EAnimationRequestLayerBlendType : uint8 {
	Replacement = 0,
	Additive = 1,
	BlendAndReplace = 2,
	BlendAndAdd = 3,
	Modify = 4,
	EAnimationRequestLayerBlendType_MAX = 5
};

// Enum AvaAnimation.AnimationMatchFlags
enum class AnimationMatchFlags : uint8 {
	MATCH_FIRST_FRAME = 0,
	MATCH_LAST_FRAME = 1,
	MATCH_MAX = 2
};

// Enum AvaAnimation.AnimationValidatedInWorld
enum class AnimationValidatedInWorld : uint8 {
	INWORLD_UNTESTED = 0,
	INWORLD_OBSTRUCTED = 1,
	INWORLD_VALIDATED = 2,
	INWORLD_MAX = 3
};

// Enum AvaAnimation.EAnimTrackPlaybackSpeed
enum class EAnimTrackPlaybackSpeed : uint8 {
	NaturalSpeed = 0,
	UseForcedDuration = 1,
	UseForcedPlayRate = 2,
	EAnimTrackPlaybackSpeed_MAX = 3
};

// Enum AvaAnimation.EAnimTrackPlaybackRange
enum class EAnimTrackPlaybackRange : uint8 {
	FullClipRange = 0,
	StartEndOffsets = 1,
	StartEndFractions = 2,
	StartOffsetWithDuration = 3,
	EAnimTrackPlaybackRange_MAX = 4
};

// Enum AvaAnimation.EAnimTrackRootMode
enum class EAnimTrackRootMode : uint8 {
	CompletelyIgnoreRoot = 0,
	EnableRootMotion = 1,
	KeepRootAnimationWithoutRootMotion = 2,
	UseContentSetting = 3,
	EAnimTrackRootMode_MAX = 4
};

// Enum AvaAnimation.EAxisMapping
enum class EAxisMapping : uint8 {
	PositiveX = 0,
	NegativeX = 1,
	PositiveY = 2,
	NegativeY = 3,
	PositiveZ = 4,
	NegativeZ = 5,
	EAxisMapping_MAX = 6
};

// Enum AvaAnimation.EBoneEvaluationRootMode
enum class EBoneEvaluationRootMode : uint8 {
	UseContentSetting = 0,
	IgnoreRoot = 1,
	IncludeRoot = 2,
	EBoneEvaluationRootMode_MAX = 3
};

// Enum AvaAnimation.ECameraFixupLayer
enum class ECameraFixupLayer : uint8 {
	Lowest = 0,
	Passive = 1,
	Active = 2,
	Highest = 3,
	ECameraFixupLayer_MAX = 4
};

// Enum AvaAnimation.EConversationPreset_ProximityType
enum class EConversationPreset_ProximityType : uint8 {
	Ideal = 0,
	Near = 1,
	TooClose = 2,
	EConversationPreset_MAX = 3
};

// Enum AvaAnimation.EConversationPreset_LocationDistanceCheckType
enum class EConversationPreset_LocationDistanceCheckType : uint8 {
	CheckAll = 0,
	IdealOnly = 1,
	NearOnly = 2,
	TooCloseOnly = 3,
	EConversationPreset_MAX = 4
};

// Enum AvaAnimation.EManagedEyeStatePriority
enum class EManagedEyeStatePriority : uint8 {
	EMOTION = 0,
	CHARACTEROPTIONS = 1,
	SCENERIG = 2,
	SCENERIG_ACTIVE = 3,
	DIALOG = 4,
	EManagedEyeStatePriority_MAX = 5
};

// Enum AvaAnimation.EManagedFacialAnimationPriority
enum class EManagedFacialAnimationPriority : uint8 {
	MECHANIC = 0,
	ABLE = 1,
	ANIM = 2,
	EManagedFacialAnimationPriority_MAX = 3
};

// Enum AvaAnimation.EAnimTypeEnum
enum class EAnimTypeEnum : uint8 {
	FACEFX = 0,
	SPEECHGRAPHICS = 1,
	FACEWARE = 2,
	EAnimTypeEnum_MAX = 3
};

// Enum AvaAnimation.GazeStatesEnum
enum class GazeStatesEnum : uint8 {
	RANDOM_BY_WEIGHT = 0,
	CENTRAL_FOCUS = 1,
	INTERNAL_MEMORY_NW = 2,
	AUDITORY_MEMORY_W = 3,
	EMOTIONAL_MEMORY_SW = 4,
	VISUAL_CONSTRUCTION_NE = 5,
	AUDITORY_CONSTRUCTION_E = 6,
	BODY_SENSATION_RECALL_SE = 7,
	SMELL_N = 8,
	TASTE_S = 9,
	GazeStatesEnum_MAX = 10
};

// Enum AvaAnimation.FCEShape
enum class FCEShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	FCEShape_MAX = 4
};

// Enum AvaAnimation.FCPMovementType
enum class FCPMovementType : uint8 {
	Ignore = 0,
	None = 1,
	Upward = 2,
	Downward = 3,
	FCPMovementType_MAX = 4
};

// Enum AvaAnimation.FCPSupportType
enum class FCPSupportType : uint8 {
	Ignore = 0,
	None = 1,
	Stairs = 2,
	Slope = 3,
	FCPSupportType_MAX = 4
};

// Enum AvaAnimation.EIKDriver_GroundAdjustment_TraceShape
enum class EIKDriver_GroundAdjustment_TraceShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EIKDriver_GroundAdjustment_MAX = 4
};

// Enum AvaAnimation.EOrientationTargetKind2
enum class EOrientationTargetKind2 : uint8 {
	Direction = 0,
	Location = 1,
	EOrientationTargetKind2_MAX = 2
};

// Enum AvaAnimation.EOrientationTargetKind
enum class EOrientationTargetKind : uint8 {
	Direction = 0,
	Location = 1,
	EOrientationTargetKind_MAX = 2
};

// Enum AvaAnimation.ESplineIKBoneAxis
enum class ESplineIKBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineIKBoneAxis_MAX = 4
};

// Enum AvaAnimation.EComponentToUse
enum class EComponentToUse : uint8 {
	RootComponent = 0,
	FirstFoundMesh = 1,
	EComponentToUse_MAX = 2
};

// ScriptStruct AvaAnimation.TickAssetPlayerProxy_WeightedNotify
// Size: 0x18 (Inherited: 0x00)
struct FTickAssetPlayerProxy_WeightedNotify {
	struct TArray<struct FAnimNotifyEventReference> NotifyReferences; // 0x00(0x10)
	float NotifyWeight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AvaAnimation.AnimatedVectorPropertyDriver
// Size: 0x48 (Inherited: 0x00)
struct FAnimatedVectorPropertyDriver {
	char pad_0[0x24]; // 0x00(0x24)
	struct FVector DefaultValue; // 0x24(0x0c)
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct AvaAnimation.AnimatedPropertyDriverBase
// Size: 0x20 (Inherited: 0x00)
struct FAnimatedPropertyDriverBase {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AvaAnimation.AnimatedIntegerPropertyDriver
// Size: 0x28 (Inherited: 0x20)
struct FAnimatedIntegerPropertyDriver : FAnimatedPropertyDriverBase {
	int32_t DefaultValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AvaAnimation.AnimatedBoolPropertyDriver
// Size: 0x28 (Inherited: 0x20)
struct FAnimatedBoolPropertyDriver : FAnimatedPropertyDriverBase {
	bool DefaultValue; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AvaAnimation.AnimatedFloatPropertyDriver
// Size: 0x28 (Inherited: 0x20)
struct FAnimatedFloatPropertyDriver : FAnimatedPropertyDriverBase {
	float DefaultValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AvaAnimation.AnimationClip_RandomEntry
// Size: 0x10 (Inherited: 0x00)
struct FAnimationClip_RandomEntry {
	struct UAnimationClipProvider* ClipProvider; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.CachedMoveRequestProvider
// Size: 0x01 (Inherited: 0x00)
struct FCachedMoveRequestProvider {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AvaAnimation.WeightedDirectionTarget
// Size: 0x10 (Inherited: 0x00)
struct FWeightedDirectionTarget {
	struct FVector TargetInWorldSpace; // 0x00(0x0c)
	float weight; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.AnimationRequestLayerInstance
// Size: 0x110 (Inherited: 0x00)
struct FAnimationRequestLayerInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct TWeakObjectPtr<struct UObject>> AnimRequestProviders; // 0x18(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> PlacementRequestProviders; // 0x28(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> RootMotionRequestProviders; // 0x38(0x10)
	struct TArray<struct FAnimRequest> AnimRequests; // 0x48(0x10)
	struct TArray<struct FMoveRequest> PlacementRequests; // 0x58(0x10)
	struct TArray<struct FMoveRequest> RootMotionRequests; // 0x68(0x10)
	float LayerWeight; // 0x78(0x04)
	char pad_7C[0x94]; // 0x7c(0x94)
};

// ScriptStruct AvaAnimation.MoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FMoveRequest {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct AvaAnimation.AnimRequest
// Size: 0x80 (Inherited: 0x00)
struct FAnimRequest {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct AvaAnimation.AnimationLayer_Additive
// Size: 0x110 (Inherited: 0x110)
struct FAnimationLayer_Additive : FAnimationRequestLayerInstance {
};

// ScriptStruct AvaAnimation.AnimationLayer_BlendAndAdd
// Size: 0x110 (Inherited: 0x110)
struct FAnimationLayer_BlendAndAdd : FAnimationRequestLayerInstance {
};

// ScriptStruct AvaAnimation.AnimationLayer_BlendAndReplace
// Size: 0x110 (Inherited: 0x110)
struct FAnimationLayer_BlendAndReplace : FAnimationRequestLayerInstance {
};

// ScriptStruct AvaAnimation.AnimationLayer_Modify
// Size: 0x110 (Inherited: 0x110)
struct FAnimationLayer_Modify : FAnimationRequestLayerInstance {
};

// ScriptStruct AvaAnimation.AnimationLayer_Replace
// Size: 0x110 (Inherited: 0x110)
struct FAnimationLayer_Replace : FAnimationRequestLayerInstance {
};

// ScriptStruct AvaAnimation.MoveRequestInput
// Size: 0x0c (Inherited: 0x00)
struct FMoveRequestInput {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct AvaAnimation.AnimRequestInput
// Size: 0x0c (Inherited: 0x00)
struct FAnimRequestInput {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct AvaAnimation.AnimationRequestLayer
// Size: 0x18 (Inherited: 0x00)
struct FAnimationRequestLayer {
	struct FName LayerName; // 0x00(0x08)
	int32_t MaxLODLevel; // 0x08(0x04)
	enum class EAnimationRequestLayerBlendType BlendType; // 0x0c(0x01)
	bool bRecordLastSequence; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct UAnimMaskAsset* LayerMask; // 0x10(0x08)
};

// ScriptStruct AvaAnimation.AnimationRequestLayerReference
// Size: 0x08 (Inherited: 0x00)
struct FAnimationRequestLayerReference {
	struct FName LayerName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.AnimationSet
// Size: 0x10 (Inherited: 0x00)
struct FAnimationSet {
	struct TArray<struct FAnimationSetEntry> AnimationEntries; // 0x00(0x10)
};

// ScriptStruct AvaAnimation.AnimationSetEntry
// Size: 0x18 (Inherited: 0x00)
struct FAnimationSetEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UAnimationAsset* AnimationAsset; // 0x08(0x08)
	enum class AnimationValidatedInWorld InWorldStatus; // 0x10(0x01)
	bool bSelectedForNextUse; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct AvaAnimation.AnimationTrack
// Size: 0x1d0 (Inherited: 0x00)
struct FAnimationTrack {
	struct TWeakObjectPtr<struct UObject> ParentObject; // 0x00(0x08)
	struct UAnimationAsset* Animation; // 0x08(0x08)
	float LocalAnimDuration; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	float LocalAnimStart; // 0x18(0x04)
	float TimingOffset; // 0x1c(0x04)
	struct TArray<struct FBlendSampleData> CurrentBlendSampleData; // 0x20(0x10)
	float AnimStart; // 0x30(0x04)
	float AnimEnd; // 0x34(0x04)
	float CurrentLocalTime; // 0x38(0x04)
	float PreviousLocalTime; // 0x3c(0x04)
	float CurrentTime; // 0x40(0x04)
	float CurrentBlendWeight; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform AnimationInPlacementSpace; // 0x50(0x30)
	struct UAnimationProvider* AnimationProvider; // 0x80(0x08)
	struct UBlendSpaceInputProvider* BlendSpaceInput; // 0x88(0x08)
	bool ReselectOnLoopBoundaries; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FAnimTrackClipRange ClipSubRange; // 0x94(0x34)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FAnimTrackPlacementOptions PlacementOptions; // 0xd0(0xf0)
	struct FAnimTrackPlaybackOptions PlaybackOptions; // 0x1c0(0x0c)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// ScriptStruct AvaAnimation.AnimTrackPlaybackOptions
// Size: 0x0c (Inherited: 0x00)
struct FAnimTrackPlaybackOptions {
	enum class EAnimTrackPlaybackSpeed PlayRateType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ForcedDuration; // 0x04(0x04)
	float ForcedPlayRate; // 0x08(0x04)
};

// ScriptStruct AvaAnimation.AnimTrackPlacementOptions
// Size: 0xf0 (Inherited: 0x00)
struct FAnimTrackPlacementOptions {
	struct FTransform ComponentInPlacementSpace; // 0x00(0x30)
	struct FTransform RootInPlacementSpace; // 0x30(0x30)
	struct FTransform PlacementInWorldSpace; // 0x60(0x30)
	bool PlacementIsValid; // 0x90(0x01)
	bool RootMotionIsValid; // 0x91(0x01)
	char pad_92[0xe]; // 0x92(0x0e)
	struct FTransform InitialPlacementTransform; // 0xa0(0x30)
	bool ConstrainedToPlacement; // 0xd0(0x01)
	bool PlacementIsMoving; // 0xd1(0x01)
	bool HandledByRequest; // 0xd2(0x01)
	enum class EAnimTrackRootMode RootEvaluationMode; // 0xd3(0x01)
	bool AccumulateRootMotion; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UTransformProvider* PlacementProvider; // 0xd8(0x08)
	struct UAnimationTransformProvider* AnimationPlacementOffset; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct AvaAnimation.AnimTrackClipRange
// Size: 0x34 (Inherited: 0x00)
struct FAnimTrackClipRange {
	enum class EAnimTrackPlaybackRange RangeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FAnimTrackRangedFloat TimingOffset; // 0x04(0x0c)
	struct FAnimTrackRangedFloat StartOffset; // 0x10(0x0c)
	struct FAnimTrackRangedFloat EndOffset; // 0x1c(0x0c)
	struct FAnimTrackRangedFloat Duration; // 0x28(0x0c)
};

// ScriptStruct AvaAnimation.AnimTrackRangedFloat
// Size: 0x0c (Inherited: 0x00)
struct FAnimTrackRangedFloat {
	bool UseRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RangeMin; // 0x04(0x04)
	float RangeMax; // 0x08(0x04)
};

// ScriptStruct AvaAnimation.AnimInstanceProxy_RetrieveActorTransform
// Size: 0x770 (Inherited: 0x770)
struct FAnimInstanceProxy_RetrieveActorTransform : FAnimInstanceProxy {
};

// ScriptStruct AvaAnimation.AnimMaskAssetIO
// Size: 0xb0 (Inherited: 0x00)
struct FAnimMaskAssetIO {
	struct USkeleton* Skeleton; // 0x00(0x08)
	struct UAnimMaskAsset* ParentMask; // 0x08(0x08)
	struct TMap<struct FAnimMaskBoneReference, float> BoneMask; // 0x10(0x50)
	struct TMap<struct FAnimMaskCurveReference, float> CurveMask; // 0x60(0x50)
};

// ScriptStruct AvaAnimation.AnimMaskCurveReference
// Size: 0x08 (Inherited: 0x00)
struct FAnimMaskCurveReference {
	struct FName CurveName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.AnimMaskBoneReference
// Size: 0x08 (Inherited: 0x00)
struct FAnimMaskBoneReference {
	struct FName BoneName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.AnimMaskInstance
// Size: 0x50 (Inherited: 0x00)
struct FAnimMaskInstance {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct AvaAnimation.AnimMaskKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimMaskKey {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AvaAnimation.AnimNode_AdjustWorldSpaceTransform
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_AdjustWorldSpaceTransform : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FVector TranslationOffset; // 0x20(0x0c)
	struct FRotator RotationOffset; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AvaAnimation.AnimNode_AimWithPivot
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_AimWithPivot : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FBoneReference PivotBone; // 0x20(0x10)
	struct FBoneReference LeverBone; // 0x30(0x10)
	struct FVector UpAxisInLeverSpace; // 0x40(0x0c)
	struct FVector ForwardAxisInLeverSpace; // 0x4c(0x0c)
	struct FBoneReference GuideBone; // 0x58(0x10)
	float AimAlpha; // 0x68(0x04)
	struct FVector TargetInWorldSpace; // 0x6c(0x0c)
};

// ScriptStruct AvaAnimation.AnimNode_AmbientFacial
// Size: 0x1d0 (Inherited: 0x10)
struct FAnimNode_AmbientFacial : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct UAimEyesData* AimEyesData; // 0x20(0x08)
	char pad_28[0x1a8]; // 0x28(0x1a8)
};

// ScriptStruct AvaAnimation.AnimNode_AvaInertialization
// Size: 0x80 (Inherited: 0x70)
struct FAnimNode_AvaInertialization : FAnimNode_Inertialization {
	struct UAnimationComponent* AnimComponent; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct AvaAnimation.AnimNode_BipedIK
// Size: 0x200 (Inherited: 0x10)
struct FAnimNode_BipedIK : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FPoseUtilityBipedController ControlParameters; // 0x20(0x1e0)
};

// ScriptStruct AvaAnimation.PoseUtilityBipedController
// Size: 0x1e0 (Inherited: 0x00)
struct FPoseUtilityBipedController {
	struct FBoneReference Pelvis; // 0x00(0x10)
	struct FBoneReference PelvisTarget; // 0x10(0x10)
	struct FPoseUtilityIK RightLeg; // 0x20(0x3c)
	struct FPoseUtilityIK LeftLeg; // 0x5c(0x3c)
	struct FPoseUtilityRFK Spine; // 0x98(0x68)
	struct FPoseUtilityIK RightArm; // 0x100(0x3c)
	struct FPoseUtilityIK LeftArm; // 0x13c(0x3c)
	struct FPoseUtilityRFK Neck; // 0x178(0x68)
};

// ScriptStruct AvaAnimation.PoseUtilityRFK
// Size: 0x68 (Inherited: 0x00)
struct FPoseUtilityRFK {
	struct TArray<struct FTransform> ChainInBaseSpace; // 0x00(0x10)
	struct TArray<struct FTransform> AlignedChainInBaseSpace; // 0x10(0x10)
	struct TArray<float> weight; // 0x20(0x10)
	struct FBoneReference Base; // 0x30(0x10)
	struct FBoneReference Effector; // 0x40(0x10)
	struct FBoneReference Target; // 0x50(0x10)
	int32_t IndexCount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct AvaAnimation.PoseUtilityIK
// Size: 0x3c (Inherited: 0x00)
struct FPoseUtilityIK {
	struct FBoneReference Base; // 0x00(0x10)
	struct FVector LocalHinge; // 0x10(0x0c)
	struct FBoneReference Effector; // 0x1c(0x10)
	struct FBoneReference Target; // 0x2c(0x10)
};

// ScriptStruct AvaAnimation.AnimNode_BoneTransformMultiplier
// Size: 0x100 (Inherited: 0xc8)
struct FAnimNode_BoneTransformMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xc8(0x10)
	struct FVector TranslationMultiplier; // 0xd8(0x0c)
	struct FVector RotationMultiplier; // 0xe4(0x0c)
	struct FVector ScaleMultiplier; // 0xf0(0x0c)
	enum class EBoneControlSpace TransformSpace; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// ScriptStruct AvaAnimation.AnimNode_CameraFixup
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_CameraFixup : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FBoneReference RootBone; // 0x20(0x10)
	struct FBoneReference CameraBone; // 0x30(0x10)
	struct FBoneReference TargetBone; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
};

// ScriptStruct AvaAnimation.AnimNode_EyeTarget
// Size: 0x160 (Inherited: 0x10)
struct FAnimNode_EyeTarget : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	char pad_20[0x20]; // 0x20(0x20)
	int32_t LODThreshold; // 0x40(0x04)
	char pad_44[0x11c]; // 0x44(0x11c)
};

// ScriptStruct AvaAnimation.AnimNode_IKMasterNode
// Size: 0x1b0 (Inherited: 0x170)
struct FAnimNode_IKMasterNode : FAnimNode_ControlRigBase {
	char pad_170[0x30]; // 0x170(0x30)
	float PoseBlendAlpha; // 0x1a0(0x04)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
};

// ScriptStruct AvaAnimation.AnimNode_InitializeEffectors
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_InitializeEffectors : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FInitializeEffectorData> EffectorData; // 0x20(0x10)
};

// ScriptStruct AvaAnimation.InitializeEffectorData
// Size: 0x38 (Inherited: 0x00)
struct FInitializeEffectorData {
	struct FBoneReference FKBone; // 0x00(0x10)
	struct FBoneReference EffectorBone; // 0x10(0x10)
	struct FName TranslationControlCurve; // 0x20(0x08)
	char pad_28[0x4]; // 0x28(0x04)
	struct FName RotationControlCurve; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AvaAnimation.AnimNode_MirrorPoseFromMesh
// Size: 0x228 (Inherited: 0x10)
struct FAnimNode_MirrorPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	char bUseAttachedParent : 1; // 0x18(0x01)
	char bCopyCurves : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	bool bCopyCustomAttributes; // 0x19(0x01)
	char bUseMeshPose : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FName RootBoneToCopy; // 0x1c(0x08)
	char pad_24[0x204]; // 0x24(0x204)
};

// ScriptStruct AvaAnimation.AnimNode_MotionMatcher
// Size: 0x210 (Inherited: 0x10)
struct FAnimNode_MotionMatcher : FAnimNode_Base {
	struct UDataTable* PoseTable; // 0x10(0x08)
	struct TArray<struct UAnimSequence*> IdleAnimations; // 0x18(0x10)
	struct UObject* GoalDelegate; // 0x28(0x08)
	float Responsiveness; // 0x30(0x04)
	float BonusForSameMotion; // 0x34(0x04)
	float BlendDuration; // 0x38(0x04)
	bool bAnimationDrivesPill; // 0x3c(0x01)
	bool bAlignRootDirection; // 0x3d(0x01)
	bool bStrideWarping; // 0x3e(0x01)
	bool bHoldFootPositionWhenPlanted; // 0x3f(0x01)
	bool ShowGoal; // 0x40(0x01)
	bool ShowTrail; // 0x41(0x01)
	bool ShowBestPath; // 0x42(0x01)
	bool ShowFeet; // 0x43(0x01)
	bool ShowVelocity; // 0x44(0x01)
	bool ShowCapsuleVsAnimation; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	float CandidatesToDrawPerFrame; // 0x48(0x04)
	float TimeToHoldEachCandidate; // 0x4c(0x04)
	struct UAnimSequence* CurrentAnimSequence; // 0x50(0x08)
	char pad_58[0x1b8]; // 0x58(0x1b8)
};

// ScriptStruct AvaAnimation.AnimNode_MultiplyBoneTransforms
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_MultiplyBoneTransforms : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xc8(0x10)
	struct TArray<struct FBoneReference> TargetBones; // 0xd8(0x10)
	bool bInvert; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct AvaAnimation.AnimNode_RequestedLayerBlend
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_RequestedLayerBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	char pad_20[0x90]; // 0x20(0x90)
};

// ScriptStruct AvaAnimation.AnimNode_StrideWarping
// Size: 0x380 (Inherited: 0x10)
struct FAnimNode_StrideWarping : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float StrideWarping; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform StartTransform; // 0x30(0x30)
	bool EnableFootRayCasts; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float FootPlantedThreshold; // 0x64(0x04)
	struct FVector LeftKneeJointOffset; // 0x68(0x0c)
	struct FVector RightKneeJointOffset; // 0x74(0x0c)
	bool DrawDebug; // 0x80(0x01)
	char pad_81[0x2ff]; // 0x81(0x2ff)
};

// ScriptStruct AvaAnimation.AnimNode_Template
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_Template : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
};

// ScriptStruct AvaAnimation.AnimNode_TransformRootBone
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_TransformRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FVector Translate; // 0x20(0x0c)
	struct FRotator Rotate; // 0x2c(0x0c)
	char pad_38[0x38]; // 0x38(0x38)
};

// ScriptStruct AvaAnimation.ClothOptionsInstanceData
// Size: 0xa8 (Inherited: 0x00)
struct FClothOptionsInstanceData {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct AvaAnimation.ControlRigConeConstraint
// Size: 0x18 (Inherited: 0x00)
struct FControlRigConeConstraint {
	float YawLimit; // 0x00(0x04)
	float PitchLimit; // 0x04(0x04)
	float RollLimit; // 0x08(0x04)
	struct FRotator ConeRotation; // 0x0c(0x0c)
};

// ScriptStruct AvaAnimation.ConversationCameraRegistration
// Size: 0x58 (Inherited: 0x00)
struct FConversationCameraRegistration {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FGameplayTagContainer CameraTags; // 0x28(0x20)
	struct TArray<struct UNameProvider*> AvoidTransitionCameraNames; // 0x48(0x10)
};

// ScriptStruct AvaAnimation.ConversationEmotion
// Size: 0x08 (Inherited: 0x00)
struct FConversationEmotion {
	enum class EFacialEmotion Emotion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HoldTime; // 0x04(0x04)
};

// ScriptStruct AvaAnimation.ConversationExplicitCameraShot
// Size: 0x48 (Inherited: 0x00)
struct FConversationExplicitCameraShot {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct TArray<struct FConversationExplicitCameraShot_CameraListItem> AvatarCameras; // 0x28(0x10)
	struct TArray<struct FConversationExplicitCameraShot_CameraListItem> InteractionActorCameras; // 0x38(0x10)
};

// ScriptStruct AvaAnimation.ConversationExplicitCameraShot_CameraListItem
// Size: 0x10 (Inherited: 0x00)
struct FConversationExplicitCameraShot_CameraListItem {
	struct UActorProvider* Camera; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.ConversationExplicitLayeredAnimationCategory
// Size: 0x38 (Inherited: 0x00)
struct FConversationExplicitLayeredAnimationCategory {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct TArray<struct FConversationExplicitLayeredAnimation> Animations; // 0x28(0x10)
};

// ScriptStruct AvaAnimation.ConversationExplicitLayeredAnimation
// Size: 0x78 (Inherited: 0x00)
struct FConversationExplicitLayeredAnimation {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FGameplayTagContainer Tags; // 0x28(0x20)
	struct FAnimationRequestLayerReference Layer; // 0x48(0x08)
	struct UAnimMaskAsset* Mask; // 0x50(0x08)
	float BlendWeight; // 0x58(0x04)
	float BlendWeightVariability; // 0x5c(0x04)
	struct UFloatProvider* ComputedBlendWeight; // 0x60(0x08)
	float BlendTime; // 0x68(0x04)
	float BlendTimeVariability; // 0x6c(0x04)
	bool Blocking; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct AvaAnimation.ConversationExplicitPoseGroup
// Size: 0x48 (Inherited: 0x00)
struct FConversationExplicitPoseGroup {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// ScriptStruct AvaAnimation.ConversationLayeredAnimationWeightEntry
// Size: 0x30 (Inherited: 0x00)
struct FConversationLayeredAnimationWeightEntry {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct UFloatProvider* Provider; // 0x28(0x08)
};

// ScriptStruct AvaAnimation.ConversationPreset
// Size: 0xd8 (Inherited: 0x00)
struct FConversationPreset {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	bool DefaultPresetTalkTo; // 0x28(0x01)
	bool DefaultPresetForced; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FGameplayTagContainer SceneRigTags; // 0x30(0x20)
	struct FGameplayTagContainer CameraTags; // 0x50(0x20)
	struct FConversation_InteractionActorSettings InteractionActorSettings; // 0x70(0x28)
	struct FConversation_AvatarSettings AvatarSettings; // 0x98(0x40)
};

// ScriptStruct AvaAnimation.Conversation_AvatarSettings
// Size: 0x40 (Inherited: 0x00)
struct FConversation_AvatarSettings {
	struct FConversation_InitialTransformSettings InitialTransformSettings; // 0x00(0x10)
	struct TArray<struct UConversationPreset_AvatarPlacement*> Placements; // 0x10(0x10)
	bool EnableFinalPositionOverride; // 0x20(0x01)
	bool FinalPositionOverrideCheckGroundCollision; // 0x21(0x01)
	bool FinalPositionOverrideCheckNavMesh; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FConversation_FinalTransformSettings FinalTransformSettings; // 0x28(0x10)
	struct UConversationPreset_PreInitInvoke_Placement* PreInitInvokePlacement; // 0x38(0x08)
};

// ScriptStruct AvaAnimation.Conversation_FinalTransformSettings
// Size: 0x10 (Inherited: 0x00)
struct FConversation_FinalTransformSettings {
	struct UConversationPreset_FinalTransform* TransformType; // 0x00(0x08)
	bool CheckGroundCollision; // 0x08(0x01)
	bool CheckNavMesh; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct AvaAnimation.Conversation_InitialTransformSettings
// Size: 0x10 (Inherited: 0x00)
struct FConversation_InitialTransformSettings {
	struct UConversationPreset_InitialTransform* TransformType; // 0x00(0x08)
	bool CheckGroundCollision; // 0x08(0x01)
	bool CheckNavMesh; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct AvaAnimation.Conversation_InteractionActorSettings
// Size: 0x28 (Inherited: 0x00)
struct FConversation_InteractionActorSettings {
	bool EnableInitialPositionOverride; // 0x00(0x01)
	bool InitialPositionOverrideCheckGroundCollision; // 0x01(0x01)
	bool InitialPositionOverrideCheckNavMesh; // 0x02(0x01)
	bool EnableInitialPositionFromStationSockets; // 0x03(0x01)
	bool InitialPositionFromStationSocketsCheckGroundCollision; // 0x04(0x01)
	bool InitialPositionFromStationSocketsCheckNavMesh; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FConversation_InitialTransformSettings InitialTransformSettings; // 0x08(0x10)
	struct FConversation_FinalTransformSettings FinalTransformSettings; // 0x18(0x10)
};

// ScriptStruct AvaAnimation.DampedSpringQuat
// Size: 0x30 (Inherited: 0x00)
struct FDampedSpringQuat {
	char pad_0[0x28]; // 0x00(0x28)
	float Frequency; // 0x28(0x04)
	float DampingRatio; // 0x2c(0x04)
};

// ScriptStruct AvaAnimation.DampedSpringRotator
// Size: 0x20 (Inherited: 0x00)
struct FDampedSpringRotator {
	char pad_0[0x18]; // 0x00(0x18)
	float Frequency; // 0x18(0x04)
	float DampingRatio; // 0x1c(0x04)
};

// ScriptStruct AvaAnimation.DampedSpringAngle
// Size: 0x10 (Inherited: 0x00)
struct FDampedSpringAngle {
	char pad_0[0x8]; // 0x00(0x08)
	float Frequency; // 0x08(0x04)
	float DampingRatio; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.DampedSpringVector
// Size: 0x24 (Inherited: 0x00)
struct FDampedSpringVector {
	char pad_0[0x18]; // 0x00(0x18)
	float Frequency; // 0x18(0x04)
	float DampingRatio; // 0x1c(0x04)
	float MaxAcceleration; // 0x20(0x04)
};

// ScriptStruct AvaAnimation.DampedSpringScalar
// Size: 0x10 (Inherited: 0x00)
struct FDampedSpringScalar {
	char pad_0[0x8]; // 0x00(0x08)
	float Frequency; // 0x08(0x04)
	float DampingRatio; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.DialogueLineData
// Size: 0x28 (Inherited: 0x08)
struct FDialogueLineData : FTableRowBase {
	float PreRoll; // 0x08(0x04)
	float PostRoll; // 0x0c(0x04)
	float AnimLen; // 0x10(0x04)
	enum class EAnimTypeEnum Type; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Meta; // 0x18(0x10)
};

// ScriptStruct AvaAnimation.DialogueLineDataHardRef
// Size: 0x30 (Inherited: 0x28)
struct FDialogueLineDataHardRef : FDialogueLineData {
	struct UAnimSequence* DialogueLineAnim; // 0x28(0x08)
};

// ScriptStruct AvaAnimation.DialogueLineDataSoftRef
// Size: 0x50 (Inherited: 0x28)
struct FDialogueLineDataSoftRef : FDialogueLineData {
	struct TSoftObjectPtr<UAnimSequence> DialogueLineAnim; // 0x28(0x28)
};

// ScriptStruct AvaAnimation.AnimMaskAssetRow
// Size: 0x10 (Inherited: 0x08)
struct FAnimMaskAssetRow : FTableRowBase {
	struct UAnimMaskAsset* AnimMaskAsset; // 0x08(0x08)
};

// ScriptStruct AvaAnimation.FacialAnimation
// Size: 0x30 (Inherited: 0x00)
struct FFacialAnimation {
	float Transition; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagContainer AnimTags; // 0x08(0x20)
	bool bStartAtRandomTime; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AvaAnimation.FeatureVector
// Size: 0x90 (Inherited: 0x08)
struct FFeatureVector : FTableRowBase {
	struct UAnimSequence* AnimSequence; // 0x08(0x08)
	float Time; // 0x10(0x04)
	struct FVector Velocity; // 0x14(0x0c)
	struct FVector Position33; // 0x20(0x0c)
	struct FVector2D FacingDir33; // 0x2c(0x08)
	struct FVector Position66; // 0x34(0x0c)
	struct FVector2D FacingDir66; // 0x40(0x08)
	struct FVector Position99; // 0x48(0x0c)
	struct FVector2D FacingDir99; // 0x54(0x08)
	struct FVector LeftFootPosition; // 0x5c(0x0c)
	struct FVector LeftFootVelocity; // 0x68(0x0c)
	struct FVector RightFootPosition; // 0x74(0x0c)
	struct FVector RightFootVelocity; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct AvaAnimation.ConversationLayeredAnimationWeight
// Size: 0x08 (Inherited: 0x00)
struct FConversationLayeredAnimationWeight {
	struct FName WeightEntryName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.BoneReferenceEx
// Size: 0x10 (Inherited: 0x10)
struct FBoneReferenceEx : FBoneReference {
};

// ScriptStruct AvaAnimation.CurveNameProperty
// Size: 0x0c (Inherited: 0x00)
struct FCurveNameProperty {
	struct FName CurveName; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct AvaAnimation.CurveIndexProperty
// Size: 0x02 (Inherited: 0x00)
struct FCurveIndexProperty {
	uint16_t CurveIndex; // 0x00(0x02)
};

// ScriptStruct AvaAnimation.BoneIndexProperty
// Size: 0x04 (Inherited: 0x00)
struct FBoneIndexProperty {
	int32_t BoneIndex; // 0x00(0x04)
};

// ScriptStruct AvaAnimation.IKTaskReferenceProperty
// Size: 0x04 (Inherited: 0x00)
struct FIKTaskReferenceProperty {
	int32_t TaskIndex; // 0x00(0x04)
};

// ScriptStruct AvaAnimation.IKDriver_AimAtControl
// Size: 0x08 (Inherited: 0x00)
struct FIKDriver_AimAtControl {
	struct FIKTaskReferenceProperty Task; // 0x00(0x04)
	enum class EAnimationDirections DirectionDriver; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct AvaAnimation.IKDriver_AimAtConeOnlyControl
// Size: 0x78 (Inherited: 0x00)
struct FIKDriver_AimAtConeOnlyControl {
	struct FBoneReferenceEx AimBoneReference; // 0x00(0x10)
	struct FBoneReferenceEx NeckBoneReference; // 0x10(0x10)
	enum class EAnimationDirections DirectionDriver; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float YawLimit; // 0x24(0x04)
	float PitchLimit; // 0x28(0x04)
	bool ReduceConeWithSpeed; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SpeedForReduction; // 0x30(0x04)
	float RatioToReduce; // 0x34(0x04)
	float BackDeadZoneAngle; // 0x38(0x04)
	struct FRotator ConeRotationOffset; // 0x3c(0x0c)
	struct FRotator TaskRotationOffset; // 0x48(0x0c)
	struct FVector2D BlendSpeedRange; // 0x54(0x08)
	struct FVector2D Speed2BlendSpeedRange; // 0x5c(0x08)
	float TimeDelay; // 0x64(0x04)
	float DelayStartTime; // 0x68(0x04)
	struct FVector PrevTargetDirection; // 0x6c(0x0c)
};

// ScriptStruct AvaAnimation.IKDriver_AimAtConstrainedControl
// Size: 0x2a0 (Inherited: 0x00)
struct FIKDriver_AimAtConstrainedControl {
	enum class EAnimationDirections DirectionDriver; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReferenceEx AimBoneReference; // 0x04(0x10)
	struct FBoneReferenceEx NeckBoneReference; // 0x14(0x10)
	struct FRotator RotationOffset; // 0x24(0x0c)
	struct FName AimAlphaVariableName; // 0x30(0x08)
	struct FName AimTargetVariableName; // 0x38(0x08)
	struct FName AimLoosenessVariableName; // 0x40(0x08)
	struct FName SpineMobilityVariableName; // 0x48(0x08)
	struct FName ApplyConstraintsVariableName; // 0x50(0x08)
	bool bLimitDirectionToCone; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float YawLimit; // 0x5c(0x04)
	float PitchLimit; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FRuntimeFloatCurve LimitFactorOverSpeed; // 0x68(0x88)
	float YawFrequency; // 0xf0(0x04)
	float YawDampingRatio; // 0xf4(0x04)
	float PitchFrequency; // 0xf8(0x04)
	float PitchDampingRatio; // 0xfc(0x04)
	float BlendInDuration; // 0x100(0x04)
	float BlendOutDuration; // 0x104(0x04)
	float BackDeadZoneAngle; // 0x108(0x04)
	struct FCurveIndexProperty DisableCurve; // 0x10c(0x02)
	struct FCurveIndexProperty YawFrequencyCurve; // 0x10e(0x02)
	struct FCurveIndexProperty PitchFrequencyCurve; // 0x110(0x02)
	char pad_112[0x2]; // 0x112(0x02)
	struct FCurveNameProperty DisableCurveName; // 0x114(0x0c)
	struct FCurveNameProperty YawFrequencyCurveName; // 0x120(0x0c)
	struct FCurveNameProperty PitchFrequencyCurveName; // 0x12c(0x0c)
	char pad_138[0x168]; // 0x138(0x168)
};

// ScriptStruct AvaAnimation.IKDriver_AnimationDrivenData
// Size: 0x28 (Inherited: 0x00)
struct FIKDriver_AnimationDrivenData {
	struct FIKTaskReferenceProperty Task; // 0x00(0x04)
	struct FBoneIndexProperty RotationTargetBone; // 0x04(0x04)
	struct FBoneIndexProperty TranslationTargetBone; // 0x08(0x04)
	struct FCurveIndexProperty RotationWeightCurve; // 0x0c(0x02)
	struct FCurveIndexProperty TranslationWeightCurve; // 0x0e(0x02)
	struct FCurveNameProperty RotationWeightCurveName; // 0x10(0x0c)
	struct FCurveNameProperty TranslationWeightCurveName; // 0x1c(0x0c)
};

// ScriptStruct AvaAnimation.IKDriver_FloorContactControl
// Size: 0x1a0 (Inherited: 0x00)
struct FIKDriver_FloorContactControl {
	struct FBoneReferenceEx BoneRef; // 0x00(0x10)
	struct FName AlphaVariableName; // 0x10(0x08)
	struct FName TransformVariableName; // 0x18(0x08)
	float RampInHeight; // 0x20(0x04)
	float RampOutHeight; // 0x24(0x04)
	float TranslationInterpRate; // 0x28(0x04)
	float RotationInterpRate; // 0x2c(0x04)
	float FixupHeight; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat FixupRotation; // 0x40(0x10)
	enum class FCEShape Shape; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector Extents; // 0x54(0x0c)
	struct FTransform Offset; // 0x60(0x30)
	bool DrawDebug; // 0x90(0x01)
	bool UseCustomScale; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float CustomRayTraceStartScale; // 0x94(0x04)
	float CustomRayTraceFinishScale; // 0x98(0x04)
	char pad_9C[0x10]; // 0x9c(0x10)
	bool bUseFKOrientation; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float MeshOffset; // 0xb0(0x04)
	float Alpha; // 0xb4(0x04)
	char pad_B8[0xe8]; // 0xb8(0xe8)
};

// ScriptStruct AvaAnimation.IKDriver_FloorContactProfile
// Size: 0x38 (Inherited: 0x00)
struct FIKDriver_FloorContactProfile {
	struct FName Name; // 0x00(0x08)
	struct FVector2D SlopeRange; // 0x08(0x08)
	struct FVector2D SpeedRange; // 0x10(0x08)
	enum class FCPSupportType SupportType; // 0x18(0x04)
	enum class FCPMovementType MovementType; // 0x1c(0x04)
	float BlendInTime; // 0x20(0x04)
	struct FIKDriver_FloorContactProfileSettings OverrideSettings; // 0x24(0x14)
};

// ScriptStruct AvaAnimation.IKDriver_FloorContactProfileSettings
// Size: 0x14 (Inherited: 0x00)
struct FIKDriver_FloorContactProfileSettings {
	float HipMultiplier; // 0x00(0x04)
	float MaxLegExtension; // 0x04(0x04)
	float ReverseFootFactor; // 0x08(0x04)
	float PitchLimit; // 0x0c(0x04)
	float StabilizationThreshold; // 0x10(0x04)
};

// ScriptStruct AvaAnimation.IKDriver_GroundAdjustment_ReachControl
// Size: 0x110 (Inherited: 0x00)
struct FIKDriver_GroundAdjustment_ReachControl {
	struct FBoneReferenceEx BoneReference; // 0x00(0x10)
	struct TArray<struct FBoneReferenceEx> EndEffectorBoneReferences; // 0x10(0x10)
	float InterpSpeed; // 0x20(0x04)
	float InterpDampingFactor; // 0x24(0x04)
	float FilteringSpeed; // 0x28(0x04)
	float FilteringDampingFactor; // 0x2c(0x04)
	float LowestOrAverage; // 0x30(0x04)
	float MaxControlAdjustment; // 0x34(0x04)
	struct FName AlphaVariableName; // 0x38(0x08)
	struct FName TargetTransformVariableName; // 0x40(0x08)
	char pad_48[0xc8]; // 0x48(0xc8)
};

// ScriptStruct AvaAnimation.IKDriver_GroundAdjustment_Control
// Size: 0x370 (Inherited: 0x00)
struct FIKDriver_GroundAdjustment_Control {
	struct FBoneReferenceEx BoneReference; // 0x00(0x10)
	struct FBoneReferenceEx TraceBoneReference; // 0x10(0x10)
	enum class EIKDriver_GroundAdjustment_TraceShape TraceShape; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FTransform TraceShapeLocalOffset; // 0x30(0x30)
	bool bTraceComplex; // 0x60(0x01)
	bool bRequireOnGroundForStepDown; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float MaxStepUpHeight; // 0x64(0x04)
	float MaxStepDownHeight; // 0x68(0x04)
	float MaxAdjustmentAngle; // 0x6c(0x04)
	float MaxControlHeight; // 0x70(0x04)
	struct FCurveIndexProperty TimeToContactCurve; // 0x74(0x02)
	char pad_76[0x2]; // 0x76(0x02)
	struct FCurveNameProperty TimeToContactCurveName; // 0x78(0x0c)
	struct FBoneReferenceEx AnticipationTargetBoneReference; // 0x84(0x10)
	struct FName AlphaVariableName; // 0x94(0x08)
	struct FName TargetTransformVariableName; // 0x9c(0x08)
	struct FName ExtensionVariableName; // 0xa4(0x08)
	float MaxLegExtension; // 0xac(0x04)
	char pad_B0[0x2c0]; // 0xb0(0x2c0)
};

// ScriptStruct AvaAnimation.IKDriver_LadderContactControl
// Size: 0x60 (Inherited: 0x00)
struct FIKDriver_LadderContactControl {
	struct FIKTaskReferenceProperty Task; // 0x00(0x04)
	bool Enable; // 0x04(0x01)
	bool DebugDraw; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OffsetZ; // 0x08(0x04)
	float HandOffset; // 0x0c(0x04)
	float LadderUpPlaneOffset; // 0x10(0x04)
	float LadderDownPlaneOffset; // 0x14(0x04)
	float LockVelocityThreshold; // 0x18(0x04)
	float UnlockVelocityThreshold; // 0x1c(0x04)
	float UnlockMoveThreshold; // 0x20(0x04)
	float JumpToNextRungThreshold; // 0x24(0x04)
	float UnlockPastTopExtentThreshold; // 0x28(0x04)
	float LockBlendTime; // 0x2c(0x04)
	float UnlockBlendTime; // 0x30(0x04)
	float InitDelay; // 0x34(0x04)
	char pad_38[0x28]; // 0x38(0x28)
};

// ScriptStruct AvaAnimation.IKDriver_LedgeContactHipsControl
// Size: 0xb0 (Inherited: 0x00)
struct FIKDriver_LedgeContactHipsControl {
	struct FName AlphaVariableName; // 0x00(0x08)
	struct FName TargetTransformVariableName; // 0x08(0x08)
	struct FBoneReferenceEx BoneReference; // 0x10(0x10)
	float MaxRotationAngleAwayFromWall; // 0x20(0x04)
	float MinDistanceFromWall; // 0x24(0x04)
	char pad_28[0x88]; // 0x28(0x88)
};

// ScriptStruct AvaAnimation.IKDriver_LedgeContactFootControl
// Size: 0x130 (Inherited: 0x00)
struct FIKDriver_LedgeContactFootControl {
	struct FName AlphaVariableName; // 0x00(0x08)
	struct FName TargetTransformVariableName; // 0x08(0x08)
	struct FName ExtensionVariableName; // 0x10(0x08)
	struct FName ToeTransformVariableName; // 0x18(0x08)
	struct FBoneReferenceEx BoneReference; // 0x20(0x10)
	struct FBoneReferenceEx ToeBoneReference; // 0x30(0x10)
	float SweepRadius; // 0x40(0x04)
	struct FVector WallLocationRelativeToBone; // 0x44(0x0c)
	float MaxLegExtension; // 0x50(0x04)
	char pad_54[0xdc]; // 0x54(0xdc)
};

// ScriptStruct AvaAnimation.IKDriver_LedgeContactHandControl
// Size: 0xd0 (Inherited: 0x00)
struct FIKDriver_LedgeContactHandControl {
	struct FName AlphaVariableName; // 0x00(0x08)
	struct FName TargetTransformVariableName; // 0x08(0x08)
	struct FBoneReferenceEx BoneReference; // 0x10(0x10)
	float SweepRadius; // 0x20(0x04)
	struct FVector LedgeLocationRelativeToBone; // 0x24(0x0c)
	char pad_30[0xa0]; // 0x30(0xa0)
};

// ScriptStruct AvaAnimation.IKPoseFixupDefinition
// Size: 0xc0 (Inherited: 0x00)
struct FIKPoseFixupDefinition {
	struct FName ControlledBoneName; // 0x00(0x08)
	struct FName ReferenceBoneName; // 0x08(0x08)
	struct FName IkInputTransformName; // 0x10(0x08)
	struct UTransformProvider* ControlledOffsetProvider; // 0x18(0x08)
	struct FTransform ControlledOffset; // 0x20(0x30)
	struct FName IkInputAlphaName; // 0x50(0x08)
	struct FName AlphaCurveName; // 0x58(0x08)
	bool bApplyBlendToAlphaCurve; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float BlendInTime; // 0x64(0x04)
	float BlendOutTime; // 0x68(0x04)
	bool TranslateOnly; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float ReferenceScale; // 0x70(0x04)
	struct FName IkInputCushionAmountName; // 0x74(0x08)
	float CushionAmount; // 0x7c(0x04)
	struct UTransformProvider* TargetTransform; // 0x80(0x08)
	struct UTransformProvider* TargetOffsetProvider; // 0x88(0x08)
	struct FTransform TargetOffset; // 0x90(0x30)
};

// ScriptStruct AvaAnimation.ConversationCameraRegistrationReference
// Size: 0x08 (Inherited: 0x00)
struct FConversationCameraRegistrationReference {
	struct FName CameraRegistrationName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.ConversationExplicitCameraShotReference
// Size: 0x08 (Inherited: 0x00)
struct FConversationExplicitCameraShotReference {
	struct FName CameraShotName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.ConversationExplicitLayeredAnimationReference
// Size: 0x10 (Inherited: 0x00)
struct FConversationExplicitLayeredAnimationReference {
	struct FName CategoryName; // 0x00(0x08)
	struct FName AnimationName; // 0x08(0x08)
};

// ScriptStruct AvaAnimation.ConversationExplicitPoseGroupReference
// Size: 0x08 (Inherited: 0x00)
struct FConversationExplicitPoseGroupReference {
	struct FName PoseGroupName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.ConversationPresetReference
// Size: 0x08 (Inherited: 0x00)
struct FConversationPresetReference {
	struct FName PresetName; // 0x00(0x08)
};

// ScriptStruct AvaAnimation.PerClipLayerGroupLayer
// Size: 0x20 (Inherited: 0x00)
struct FPerClipLayerGroupLayer {
	struct UAnimationAsset* LayerAnimation; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
	struct FAnimationRequestLayerReference LayerReference; // 0x10(0x08)
	bool ScaleToFit; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AvaAnimation.PoseGroupTransition
// Size: 0x20 (Inherited: 0x00)
struct FPoseGroupTransition {
	struct UPoseGroup* EndState; // 0x00(0x08)
	struct UAnimationAsset* TransitionAnim; // 0x08(0x08)
	struct UAnimationProvider* TransitionAnimation; // 0x10(0x08)
	bool bBlockLayeredAnimations; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AvaAnimation.RigUnit_AddOffsetToControl
// Size: 0x1d0 (Inherited: 0x68)
struct FRigUnit_AddOffsetToControl : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	struct TArray<struct FRigUnit_AddOffsetToControl_BoneOffset> BoneOffsets; // 0x70(0x10)
	struct FRuntimeFloatCurve HeightWeightCurve; // 0x80(0x88)
	struct FRuntimeFloatCurve HeightMappingCurve; // 0x108(0x88)
	struct FTransform Transform; // 0x190(0x30)
	int32_t CachedControlIndex; // 0x1c0(0x04)
	char pad_1C4[0xc]; // 0x1c4(0x0c)
};

// ScriptStruct AvaAnimation.RigUnit_AddOffsetToControl_BoneOffset
// Size: 0x18 (Inherited: 0x00)
struct FRigUnit_AddOffsetToControl_BoneOffset {
	struct FName Bone; // 0x00(0x08)
	struct FName Control; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_ConstrainRotation
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_ConstrainRotation : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FRotator LocalRotation; // 0x70(0x0c)
	float weight; // 0x7c(0x04)
	struct FControlRigConeConstraint ConeConstraint; // 0x80(0x18)
	char pad_98[0x8]; // 0x98(0x08)
	struct FRigUnit_ConstrainRotation_DebugSettings DebugSettings; // 0xa0(0x40)
	struct FRigUnit_ConstrainRotation_WorkData WorkData; // 0xe0(0x10)
};

// ScriptStruct AvaAnimation.RigUnit_ConstrainRotation_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_ConstrainRotation_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
};

// ScriptStruct AvaAnimation.RigUnit_ConstrainRotation_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_ConstrainRotation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_CurveRotation
// Size: 0x180 (Inherited: 0x68)
struct FRigUnit_CurveRotation : FRigUnitMutable {
	struct FName LeafBone; // 0x68(0x08)
	struct FName TrunkBone; // 0x70(0x08)
	struct FRigUnit_CurveRotation_Target Primary; // 0x78(0x28)
	struct FRigUnit_CurveRotation_Target Secondary; // 0xa0(0x28)
	struct TArray<struct FRuntimeFloatCurve> PerBoneAngleCurve; // 0xc8(0x10)
	struct TArray<float> PerBoneInterpTime; // 0xd8(0x10)
	bool bPropagateToChildren; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FRigUnit_CurveRotation_DebugSettings DebugSettings; // 0xf0(0x40)
	struct FRigUnit_CurveRotation_WorkData WorkData; // 0x130(0x48)
	char pad_178[0x8]; // 0x178(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_CurveRotation_WorkData
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_CurveRotation_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<float> Angles; // 0x10(0x10)
	struct TArray<struct FTransform> BoneLocalTransforms; // 0x20(0x10)
	struct FName PrimaryCachedSpaceName; // 0x30(0x08)
	int32_t PrimaryCachedSpaceIndex; // 0x38(0x04)
	struct FName SecondaryCachedSpaceName; // 0x3c(0x08)
	int32_t SecondaryCachedSpaceIndex; // 0x44(0x04)
};

// ScriptStruct AvaAnimation.RigUnit_CurveRotation_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_CurveRotation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_CurveRotation_Target
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_CurveRotation_Target {
	float weight; // 0x00(0x04)
	struct FVector Axis; // 0x04(0x0c)
	struct FVector Target; // 0x10(0x0c)
	enum class EOrientationTargetKind2 Kind; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName Space; // 0x20(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_FourBoneIK
// Size: 0x210 (Inherited: 0x68)
struct FRigUnit_FourBoneIK : FRigUnitMutable {
	struct FName EndBone; // 0x68(0x08)
	struct FTransform EndEffector; // 0x70(0x30)
	float TranslationLimitDistance; // 0xa0(0x04)
	float StretchToMaxExtension; // 0xa4(0x04)
	float MaxExtensionPercentage; // 0xa8(0x04)
	struct FVector PrimaryAxis; // 0xac(0x0c)
	struct FVector HelperAOffset; // 0xb8(0x0c)
	struct FVector HelperBOffset; // 0xc4(0x0c)
	float PoleVectorLengthMultiplier; // 0xd0(0x04)
	bool bEnableStretch; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float StretchStartRatio; // 0xd8(0x04)
	float StretchMaximumRatio; // 0xdc(0x04)
	float weight; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
	struct FRigUnit_FourBoneIK_DebugSettings DebugSettings; // 0xf0(0x40)
	struct FRigUnit_FourBoneIK_WorkData WorkData; // 0x130(0xd8)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_FourBoneIK_WorkData
// Size: 0xd8 (Inherited: 0x00)
struct FRigUnit_FourBoneIK_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<float> BoneLengths; // 0x10(0x10)
	struct TArray<struct FTransform> HelperATransforms; // 0x20(0x10)
	struct TArray<struct FTransform> HelperBTransforms; // 0x30(0x10)
	struct FRigBoneHierarchy ChainHierarchy; // 0x40(0x98)
};

// ScriptStruct AvaAnimation.RigUnit_FourBoneIK_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_FourBoneIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	bool bDrawAxes; // 0x01(0x01)
	bool bDrawOriginalBoneChain; // 0x02(0x01)
	bool bDrawPoleVectorCalculation; // 0x03(0x01)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_IncrementalRotation
// Size: 0x190 (Inherited: 0x68)
struct FRigUnit_IncrementalRotation : FRigUnitMutable {
	struct FName LeafBone; // 0x68(0x08)
	struct FName TrunkBone; // 0x70(0x08)
	struct FRigUnit_WB_AimBone_Target Primary; // 0x78(0x28)
	struct FRigUnit_WB_AimBone_Target Secondary; // 0xa0(0x28)
	struct TArray<struct FLookLimits> LookLimits; // 0xc8(0x10)
	float Blending; // 0xd8(0x04)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xdc(0x01)
	bool bPropagateToChildren; // 0xdd(0x01)
	char pad_DE[0x2]; // 0xde(0x02)
	struct FRigUnit_IncrementalRotation_DebugSettings DebugSettings; // 0xe0(0x40)
	struct FRigUnit_IncrementalRotation_WorkData WorkData; // 0x120(0x68)
	char pad_188[0x8]; // 0x188(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_IncrementalRotation_WorkData
// Size: 0x68 (Inherited: 0x00)
struct FRigUnit_IncrementalRotation_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<struct FLookLimits> ActualLookRanges; // 0x10(0x10)
	struct TArray<float> AngleLimits; // 0x20(0x10)
	struct TArray<float> Angles; // 0x30(0x10)
	struct TArray<struct FTransform> BoneLocalTransforms; // 0x40(0x10)
	struct FName PrimaryCachedSpaceName; // 0x50(0x08)
	int32_t PrimaryCachedSpaceIndex; // 0x58(0x04)
	struct FName SecondaryCachedSpaceName; // 0x5c(0x08)
	int32_t SecondaryCachedSpaceIndex; // 0x64(0x04)
};

// ScriptStruct AvaAnimation.LookLimits
// Size: 0x08 (Inherited: 0x00)
struct FLookLimits {
	float Horizontal; // 0x00(0x04)
	float Vertical; // 0x04(0x04)
};

// ScriptStruct AvaAnimation.RigUnit_IncrementalRotation_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_IncrementalRotation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_WB_AimBone_Target
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_WB_AimBone_Target {
	float weight; // 0x00(0x04)
	struct FVector Axis; // 0x04(0x0c)
	struct FVector Target; // 0x10(0x0c)
	enum class EOrientationTargetKind Kind; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName Space; // 0x20(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt
// Size: 0x500 (Inherited: 0x68)
struct FRigUnit_NeckLookAt : FRigUnitMutable {
	struct FName EffectorBone; // 0x68(0x08)
	struct FName StartBone; // 0x70(0x08)
	struct FRotator SpaceRotationSetting; // 0x78(0x0c)
	struct FRotator BaseBoneRotation; // 0x84(0x0c)
	struct TArray<struct FRigUnit_NeckLookAt_BoneRotation> BoneRotations; // 0x90(0x10)
	struct FRigUnit_NeckLookAt_Target Target; // 0xa0(0x24)
	float SpineMobility; // 0xc4(0x04)
	struct FRuntimeFloatCurve YawWeightCurve; // 0xc8(0x88)
	struct FRuntimeFloatCurve PitchWeightCurve; // 0x150(0x88)
	struct FRuntimeFloatCurve PitchFromYawWeightCurve; // 0x1d8(0x88)
	struct FRigUnit_NeckLookAt_SoftAngleLimits InputYawMapping; // 0x260(0x10)
	struct FRigUnit_NeckLookAt_SoftAngleLimits InputPitchMapping; // 0x270(0x10)
	bool bApplyConstraints; // 0x280(0x01)
	char pad_281[0xf]; // 0x281(0x0f)
	struct FRigUnit_NeckLookAt_ConeConstraint BaseConstraint; // 0x290(0x30)
	struct TArray<struct FRigUnit_NeckLookAt_ConeConstraintBone> BoneConstraints; // 0x2c0(0x10)
	struct FRigUnit_NeckLookAt_DebugSettings DebugSettings; // 0x2d0(0x50)
	struct FRigUnit_NeckLookAt_WorkData WorkData; // 0x320(0x1e0)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_WorkData
// Size: 0x1e0 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<struct FQuat> BoneLocalRotations; // 0x10(0x10)
	struct TArray<struct FRigUnit_NeckLookAt_ConeConstraint> PerBoneConstraints; // 0x20(0x10)
	struct TArray<float> BoneLengths; // 0x30(0x10)
	float ChainLength; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> BoneYawWeights; // 0x48(0x10)
	struct TArray<float> BonePitchWeights; // 0x58(0x10)
	struct FRigBoneHierarchy ChainHierarchy; // 0x68(0x98)
	char pad_100[0xe0]; // 0x100(0xe0)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_ConeConstraint
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_ConeConstraint {
	float YawLimit; // 0x00(0x04)
	float PitchLimit; // 0x04(0x04)
	float RollLimit; // 0x08(0x04)
	struct FRotator ConeRotation; // 0x0c(0x0c)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_DebugSettings
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_ConeConstraintBone
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_ConeConstraintBone {
	struct FName Bone; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FRigUnit_NeckLookAt_ConeConstraint Constraint; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_SoftAngleLimits
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_SoftAngleLimits {
	float MinInputAngle; // 0x00(0x04)
	float MaxInputAngle; // 0x04(0x04)
	float MaxOutputAngle; // 0x08(0x04)
	float LoosenessFactor; // 0x0c(0x04)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_Target
// Size: 0x24 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_Target {
	float weight; // 0x00(0x04)
	struct FVector TargetLocation; // 0x04(0x0c)
	struct FName Space; // 0x10(0x08)
	float MaxYaw; // 0x18(0x04)
	float MinPitch; // 0x1c(0x04)
	float MaxPitch; // 0x20(0x04)
};

// ScriptStruct AvaAnimation.RigUnit_NeckLookAt_BoneRotation
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_NeckLookAt_BoneRotation {
	struct FName Bone; // 0x00(0x08)
	struct FRotator BoneRotation; // 0x08(0x0c)
};

// ScriptStruct AvaAnimation.RitUnit_SetControlFloat_EditorWorkaround
// Size: 0x90 (Inherited: 0x68)
struct FRitUnit_SetControlFloat_EditorWorkaround : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float FloatValue; // 0x70(0x04)
	float FloatValueInEditor; // 0x74(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x78(0x14)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct AvaAnimation.RitUnit_SetControlTransform_EditorWorkaround
// Size: 0xc0 (Inherited: 0x68)
struct FRitUnit_SetControlTransform_EditorWorkaround : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	enum class EBoneGetterSetterMode Space; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FCachedRigElement CachedControlIndex; // 0xa4(0x14)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_SpineWarp
// Size: 0x210 (Inherited: 0x68)
struct FRigUnit_SpineWarp : FRigUnitMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform StartControl; // 0x80(0x30)
	struct FTransform EndControl; // 0xb0(0x30)
	struct FRuntimeFloatCurve PitchWeightCurve; // 0xe0(0x88)
	bool bCounterRotateBones; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct FRigUnit_SpineWarp_CounterRotateBone> BonesToCounterRotate; // 0x170(0x10)
	float PelvisShiftForward; // 0x180(0x04)
	float PelvisShiftUp; // 0x184(0x04)
	float BlendWeight; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FRigUnit_SpineWarp_DebugSettings DebugSettings; // 0x190(0x40)
	struct FRigUnit_SpineWarp_WorkData WorkData; // 0x1d0(0x40)
};

// ScriptStruct AvaAnimation.RigUnit_SpineWarp_WorkData
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_SpineWarp_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct FVector InitialEndControlTranslation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> BonePitchWeights; // 0x20(0x10)
	struct TArray<struct FTransform> CachedBoneTransforms; // 0x30(0x10)
};

// ScriptStruct AvaAnimation.RigUnit_SpineWarp_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_SpineWarp_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_SpineWarp_CounterRotateBone
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_SpineWarp_CounterRotateBone {
	struct FName BoneToCounterRotate; // 0x00(0x08)
	float MinAngle; // 0x08(0x04)
	float MaxAngle; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct AvaAnimation.RigUnit_SplineIK
// Size: 0x260 (Inherited: 0x68)
struct FRigUnit_SplineIK : FRigUnitMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	enum class ESplineIKBoneAxis BoneAxis; // 0x78(0x01)
	bool bAutoCalculateSpline; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	int32_t PointCount; // 0x7c(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0x80(0x10)
	float Roll; // 0x90(0x04)
	float TwistStart; // 0x94(0x04)
	float TwistEnd; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FAlphaBlend TwistBlend; // 0xa0(0x30)
	float Stretch; // 0xd0(0x04)
	float Offset; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FRigUnit_SplineIK_DebugSettings DebugSettings; // 0xe0(0x40)
	struct FRigUnit_SplineIK_WorkData WorkData; // 0x120(0x138)
	char pad_258[0x8]; // 0x258(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_SplineIK_WorkData
// Size: 0x138 (Inherited: 0x00)
struct FRigUnit_SplineIK_WorkData {
	char pad_0[0x138]; // 0x00(0x138)
};

// ScriptStruct AvaAnimation.RigUnit_SplineIK_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_SplineIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_ThreeBoneIK
// Size: 0x1f0 (Inherited: 0x68)
struct FRigUnit_ThreeBoneIK : FRigUnitMutable {
	struct FName EndBone; // 0x68(0x08)
	struct FTransform EndEffector; // 0x70(0x30)
	float TranslationLimitDistance; // 0xa0(0x04)
	float StretchToMaxExtension; // 0xa4(0x04)
	float MaxExtensionPercentage; // 0xa8(0x04)
	struct FVector PrimaryAxis; // 0xac(0x0c)
	struct FVector HelperOffset; // 0xb8(0x0c)
	float PoleVectorLengthMultiplier; // 0xc4(0x04)
	bool bEnableStretch; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float StretchStartRatio; // 0xcc(0x04)
	float StretchMaximumRatio; // 0xd0(0x04)
	float weight; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FRigUnit_ThreeBoneIK_DebugSettings DebugSettings; // 0xe0(0x40)
	struct FRigUnit_ThreeBoneIK_WorkData WorkData; // 0x120(0xc8)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_ThreeBoneIK_WorkData
// Size: 0xc8 (Inherited: 0x00)
struct FRigUnit_ThreeBoneIK_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<float> BoneLengths; // 0x10(0x10)
	struct TArray<struct FTransform> HelperTransforms; // 0x20(0x10)
	struct FRigBoneHierarchy ChainHierarchy; // 0x30(0x98)
};

// ScriptStruct AvaAnimation.RigUnit_ThreeBoneIK_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_ThreeBoneIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	bool bDrawAxes; // 0x01(0x01)
	bool bDrawOriginalBoneChain; // 0x02(0x01)
	bool bDrawPoleVectorCalculation; // 0x03(0x01)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.RigUnit_TwoBoneIK
// Size: 0x1d0 (Inherited: 0x68)
struct FRigUnit_TwoBoneIK : FRigUnitMutable {
	struct FName EndBone; // 0x68(0x08)
	struct FTransform EndEffector; // 0x70(0x30)
	float TranslationLimitDistance; // 0xa0(0x04)
	float StretchToMaxExtension; // 0xa4(0x04)
	float MaxExtensionPercentage; // 0xa8(0x04)
	struct FVector PrimaryAxis; // 0xac(0x0c)
	float PoleVectorLengthMultiplier; // 0xb8(0x04)
	bool bEnableStretch; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float StretchStartRatio; // 0xc0(0x04)
	float StretchMaximumRatio; // 0xc4(0x04)
	float weight; // 0xc8(0x04)
	float CushionAmount; // 0xcc(0x04)
	struct FRigUnit_TwoBoneIK_DebugSettings DebugSettings; // 0xd0(0x40)
	struct FRigUnit_TwoBoneIK_WorkData WorkData; // 0x110(0xb8)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// ScriptStruct AvaAnimation.RigUnit_TwoBoneIK_WorkData
// Size: 0xb8 (Inherited: 0x00)
struct FRigUnit_TwoBoneIK_WorkData {
	struct TArray<int32_t> BoneIndices; // 0x00(0x10)
	struct TArray<float> BoneLengths; // 0x10(0x10)
	struct FRigBoneHierarchy ChainHierarchy; // 0x20(0x98)
};

// ScriptStruct AvaAnimation.RigUnit_TwoBoneIK_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_TwoBoneIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	bool bDrawAxes; // 0x01(0x01)
	bool bDrawOriginalBoneChain; // 0x02(0x01)
	bool bDrawPoleVectorCalculation; // 0x03(0x01)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct AvaAnimation.ConditionalStaticMeshPool
// Size: 0x18 (Inherited: 0x00)
struct FConditionalStaticMeshPool {
	struct FVector2D TimeRange; // 0x00(0x08)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> StaticMeshPool; // 0x08(0x10)
};

