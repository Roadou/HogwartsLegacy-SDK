// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x80 (Inherited: 0x38)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xa0 (Inherited: 0x80)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x80(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UCurveFloat* CustomCurve; // 0x98(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float ActualAlpha; // 0x24(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x01)
	bool bAlphaBoolEnabled; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float Alpha; // 0x2c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xa10 (Inherited: 0x770)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
	char pad_770[0x2a0]; // 0x770(0x2a0)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xe8 (Inherited: 0x38)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x38(0x04)
	float Y; // 0x3c(0x04)
	float Z; // 0x40(0x04)
	float PlayRate; // 0x44(0x04)
	bool bLoop; // 0x48(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float StartPosition; // 0x4c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x50(0x08)
	char pad_58[0x88]; // 0x58(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xe0(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1c0 (Inherited: 0xe8)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	char pad_E8[0x68]; // 0xe8(0x68)
	struct FPoseLink BasePose; // 0x150(0x10)
	int32_t LODThreshold; // 0x160(0x04)
	struct FName SourceSocketName; // 0x164(0x08)
	struct FName PivotSocketName; // 0x16c(0x08)
	struct FVector LookAtLocation; // 0x174(0x0c)
	struct FVector SocketAxis; // 0x180(0x0c)
	float Alpha; // 0x18c(0x04)
	char pad_190[0x30]; // 0x190(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x440 (Inherited: 0xc8)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xc8(0x04)
	float AngularDampingOverride; // 0xcc(0x04)
	char pad_D0[0x60]; // 0xd0(0x60)
	struct FBoneReference RelativeSpaceBone; // 0x130(0x10)
	struct FBoneReference BoundBone; // 0x140(0x10)
	struct FBoneReference ChainEnd; // 0x150(0x10)
	struct FVector BoxExtents; // 0x160(0x0c)
	struct FVector LocalJointOffset; // 0x16c(0x0c)
	float GravityScale; // 0x178(0x04)
	struct FVector GravityOverride; // 0x17c(0x0c)
	float LinearSpringConstant; // 0x188(0x04)
	float AngularSpringConstant; // 0x18c(0x04)
	float WindScale; // 0x190(0x04)
	struct FVector ComponentLinearAccScale; // 0x194(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1a0(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1ac(0x0c)
	float AngularBiasOverride; // 0x1b8(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1bc(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1c0(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4(0x48)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x210(0x10)
	float SphereCollisionRadius; // 0x220(0x04)
	struct FVector ExternalForce; // 0x224(0x0c)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x230(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x240(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x241(0x01)
	char pad_242[0x2]; // 0x242(0x02)
	char bUseSphericalLimits : 1; // 0x244(0x01)
	char bUsePlanarLimit : 1; // 0x244(0x01)
	char bDoUpdate : 1; // 0x244(0x01)
	char bDoEval : 1; // 0x244(0x01)
	char bOverrideLinearDamping : 1; // 0x244(0x01)
	char bOverrideAngularBias : 1; // 0x244(0x01)
	char bOverrideAngularDamping : 1; // 0x244(0x01)
	char bEnableWind : 1; // 0x244(0x01)
	char pad_245_0 : 1; // 0x245(0x01)
	char bUseGravityOverride : 1; // 0x245(0x01)
	char bLinearSpring : 1; // 0x245(0x01)
	char bAngularSpring : 1; // 0x245(0x01)
	char bChain : 1; // 0x245(0x01)
	char pad_245_5 : 3; // 0x245(0x01)
	char pad_246[0xa]; // 0x246(0x0a)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x250(0x130)
	char pad_380[0xc0]; // 0x380(0xc0)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x130 (Inherited: 0x00)
struct FRotationRetargetingInfo {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TwistAxis; // 0x74(0x0c)
	bool bUseAbsoluteAngle; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float SourceMinimum; // 0x84(0x04)
	float SourceMaximum; // 0x88(0x04)
	float TargetMinimum; // 0x8c(0x04)
	float TargetMaximum; // 0x90(0x04)
	enum class EEasingFuncType EasingType; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float EasingWeight; // 0x124(0x04)
	bool bClamp; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FVector SphereLocalOffset; // 0x10(0x0c)
	float LimitRadius; // 0x1c(0x04)
	enum class ESphericalLimitType LimitType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector LinearAxesMin; // 0x04(0x0c)
	struct FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float ConeAngle; // 0x20(0x04)
	struct FVector AngularLimitsMin; // 0x24(0x0c)
	struct FVector AngularLimitsMax; // 0x30(0x0c)
	struct FVector AngularTarget; // 0x3c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float Alpha; // 0x30(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x08)
	int32_t LODThreshold; // 0x3c(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	char pad_C0[0x4]; // 0xc0(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xc4(0x01)
	bool bAlphaBoolEnabled; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xe8 (Inherited: 0xc8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xc8(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xd8(0x10)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x00)
struct FAngularRangeLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
	struct FBoneReference Bone; // 0x18(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; // 0x00(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x01)
	bool bBlendRotation; // 0x21(0x01)
	bool bBlendScale; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x01)
	enum class EAlphaBlendOption BlendType; // 0x31(0x01)
	bool bResetChildOnActivation; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x08)
	struct UBlendProfile* BlendProfile; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xb0 (Inherited: 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	char ActiveEnumValue; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xf0 (Inherited: 0xe8)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x118 (Inherited: 0xc8)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xc8(0x10)
	struct UCurveFloat* DrivingCurve; // 0xd8(0x08)
	float Multiplier; // 0xe0(0x04)
	float RangeMin; // 0xe4(0x04)
	float RangeMax; // 0xe8(0x04)
	float RemappedMin; // 0xec(0x04)
	float RemappedMax; // 0xf0(0x04)
	struct FName ParameterName; // 0xf4(0x08)
	struct FBoneReference TargetBone; // 0xfc(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x10c(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x10d(0x01)
	enum class EComponentType SourceComponent; // 0x10e(0x01)
	char bUseRange : 1; // 0x10f(0x01)
	char bAffectTargetTranslationX : 1; // 0x10f(0x01)
	char bAffectTargetTranslationY : 1; // 0x10f(0x01)
	char bAffectTargetTranslationZ : 1; // 0x10f(0x01)
	char bAffectTargetRotationX : 1; // 0x10f(0x01)
	char bAffectTargetRotationY : 1; // 0x10f(0x01)
	char bAffectTargetRotationZ : 1; // 0x10f(0x01)
	char bAffectTargetScaleX : 1; // 0x10f(0x01)
	char bAffectTargetScaleY : 1; // 0x110(0x01)
	char bAffectTargetScaleZ : 1; // 0x110(0x01)
	char pad_110_2 : 6; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180 (Inherited: 0xc8)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xc8(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xd4(0x01)
	char pad_D5[0xb]; // 0xd5(0x0b)
	struct FBoneSocketTarget EffectorTarget; // 0xe0(0x60)
	struct FBoneReference TipBone; // 0x140(0x10)
	struct FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x04)
	int32_t MaxIterations; // 0x164(0x04)
	bool bStartFromTail; // 0x168(0x01)
	bool bEnableRotationLimit; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x00)
struct FBoneSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x10)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x00)
struct FSocketReference {
	char pad_0[0x30]; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x108 (Inherited: 0xc8)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xc8(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xd8(0x10)
	struct TArray<float> ConstraintWeights; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1c (Inherited: 0x00)
struct FConstraint {
	struct FBoneReference TargetBone; // 0x00(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x01)
	enum class ETransformConstraintType TransformType; // 0x11(0x01)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x03)
	char pad_15[0x7]; // 0x15(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xc8(0x10)
	struct FBoneReference TargetBone; // 0xd8(0x10)
	bool bCopyTranslation; // 0xe8(0x01)
	bool bCopyRotation; // 0xe9(0x01)
	bool bCopyScale; // 0xea(0x01)
	enum class EBoneControlSpace ControlSpace; // 0xeb(0x01)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xf8 (Inherited: 0xc8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xc8(0x10)
	struct FBoneReference TargetBone; // 0xd8(0x10)
	bool bCopyTranslation; // 0xe8(0x01)
	bool bCopyRotation; // 0xe9(0x01)
	bool bCopyScale; // 0xea(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0xeb(0x01)
	float TranslationMultiplier; // 0xec(0x04)
	float RotationMultiplier; // 0xf0(0x04)
	float ScaleMultiplier; // 0xf4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1d8 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	char bUseAttachedParent : 1; // 0x18(0x01)
	char bCopyCurves : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	bool bCopyCustomAttributes; // 0x19(0x01)
	char bUseMeshPose : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FName RootBoneToCopy; // 0x1c(0x08)
	char pad_24[0x1b4]; // 0x24(0x1b4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x08)
	float Alpha; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190 (Inherited: 0xc8)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform EffectorTransform; // 0xd0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FBoneReference TipBone; // 0x160(0x10)
	struct FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x04)
	int32_t MaxIterations; // 0x184(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x188(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x120 (Inherited: 0xc8)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xc8(0x10)
	struct FBoneReference LeftHandFK; // 0xd8(0x10)
	struct FBoneReference RightHandIK; // 0xe8(0x10)
	struct FBoneReference LeftHandIK; // 0xf8(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x108(0x10)
	float HandFKWeight; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xc0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x01)
	bool bMeshSpaceScaleBlend; // 0x51(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x52(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	int32_t LODThreshold; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
	char pad_90[0x30]; // 0x90(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xf8 (Inherited: 0xc8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8(0x04)
	int32_t MaxIterations; // 0xcc(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd0(0x10)
	char pad_E0[0x18]; // 0xe0(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2c (Inherited: 0x00)
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float MinRotationAngle; // 0x24(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x28(0x01)
	enum class EAxis HingeRotationAxis; // 0x29(0x01)
	bool bEnableRotationLimit; // 0x2a(0x01)
	bool bEnableKneeTwistCorrection; // 0x2b(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xa0 (Inherited: 0x00)
struct FAnimLegIKData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x00)
struct FIKChain {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3c (Inherited: 0x00)
struct FIKChainLink {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1b0 (Inherited: 0xc8)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FBoneSocketTarget LookAtTarget; // 0xe0(0x60)
	struct FVector LookAtLocation; // 0x140(0x0c)
	struct FAxis LookAt_Axis; // 0x14c(0x10)
	bool bUseLookUpAxis; // 0x15c(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	struct FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x04)
	float InterpolationTime; // 0x174(0x04)
	float InterpolationTriggerThreashold; // 0x178(0x04)
	char pad_17C[0x34]; // 0x17c(0x34)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x108 (Inherited: 0xc8)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xc8(0x10)
	struct FVector Translation; // 0xd8(0x0c)
	struct FRotator Rotation; // 0xe4(0x0c)
	struct FVector Scale; // 0xf0(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0xfc(0x01)
	enum class EBoneModificationMode RotationMode; // 0xfd(0x01)
	enum class EBoneModificationMode ScaleMode; // 0xfe(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0xff(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x100(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x08)
	bool bAdditiveNode; // 0x48(0x01)
	bool bNormalizeAlpha; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x100 (Inherited: 0xc8)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xc8(0x10)
	enum class EBoneControlSpace DisplaySpace; // 0xd8(0x01)
	bool bRelativeToRefPose; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	struct FVector Translation; // 0xdc(0x0c)
	struct FRotator Rotation; // 0xe8(0x0c)
	struct FVector Scale; // 0xf4(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x98 (Inherited: 0x80)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x80(0x08)
	float PoseWeight; // 0x88(0x04)
	char pad_8C[0xc]; // 0x8c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x168 (Inherited: 0x80)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x80(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x90(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xa0(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xb0(0x10)
	char pad_C0[0x30]; // 0xc0(0x30)
	struct FBoneReference EvalSpaceBone; // 0xf0(0x10)
	struct FRBFParams RBFParams; // 0x100(0x2c)
	enum class EPoseDriverSource DriveSource; // 0x12c(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x12d(0x01)
	char bOnlyDriveSelectedBones : 1; // 0x12e(0x01)
	char pad_12E_1 : 7; // 0x12e(0x01)
	char pad_12F[0x1]; // 0x12f(0x01)
	int32_t LODThreshold; // 0x130(0x04)
	char pad_134[0x34]; // 0x134(0x34)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2c (Inherited: 0x00)
struct FRBFParams {
	int32_t TargetDimensions; // 0x00(0x04)
	enum class ERBFSolverType SolverType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Radius; // 0x08(0x04)
	bool bAutomaticRadius; // 0x0c(0x01)
	enum class ERBFFunctionType Function; // 0x0d(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x0e(0x01)
	enum class EBoneAxis TwistAxis; // 0x0f(0x01)
	float WeightThreshold; // 0x10(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector MedianReference; // 0x18(0x0c)
	float MedianMin; // 0x24(0x04)
	float MedianMax; // 0x28(0x04)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xc0 (Inherited: 0x00)
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x01)
	enum class ERBFFunctionType FunctionType; // 0x21(0x01)
	bool bApplyCustomCurve; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
	bool bIsHidden; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x00)
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x00(0x0c)
	struct FRotator TargetRotation; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10(0x08)
	struct FPoseSnapshot Snapshot; // 0x18(0x38)
	enum class ESnapshotSourceMode Mode; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	char pad_20[0x50]; // 0x20(0x50)
	bool bShuffleMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xd8 (Inherited: 0xc8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
	char pad_C8[0x10]; // 0xc8(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x840 (Inherited: 0xc8)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	char pad_D0[0x98]; // 0xd0(0x98)
	struct FVector OverrideWorldGravity; // 0x168(0x0c)
	struct FVector ExternalForce; // 0x174(0x0c)
	struct FVector ComponentLinearAccScale; // 0x180(0x0c)
	struct FVector ComponentLinearVelScale; // 0x18c(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x198(0x0c)
	struct FSimSpaceSettings SimSpaceSettings; // 0x1a4(0x40)
	float CachedBoundsScale; // 0x1e4(0x04)
	struct FBoneReference BaseBoneRef; // 0x1e8(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1f8(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1f9(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1fa(0x01)
	char pad_1FB[0x1]; // 0x1fb(0x01)
	char bEnableWorldGeometry : 1; // 0x1fc(0x01)
	char bOverrideWorldGravity : 1; // 0x1fc(0x01)
	char bTransferBoneVelocities : 1; // 0x1fc(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1fc(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1fc(0x01)
	char pad_1FC_5 : 3; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	float WorldSpaceMinimumScale; // 0x200(0x04)
	float EvaluationResetTime; // 0x204(0x04)
	char pad_208[0x638]; // 0x208(0x638)
};

// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size: 0x40 (Inherited: 0x00)
struct FSimSpaceSettings {
	float MasterAlpha; // 0x00(0x04)
	float VelocityScaleZ; // 0x04(0x04)
	float MaxLinearVelocity; // 0x08(0x04)
	float MaxAngularVelocity; // 0x0c(0x04)
	float MaxLinearAcceleration; // 0x10(0x04)
	float MaxAngularAcceleration; // 0x14(0x04)
	float ExternalLinearDrag; // 0x18(0x04)
	struct FVector ExternalLinearDragV; // 0x1c(0x0c)
	struct FVector ExternalLinearVelocity; // 0x28(0x0c)
	struct FVector ExternalAngularVelocity; // 0x34(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xa0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x04)
	float Yaw; // 0x24(0x04)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0x0c)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xc8(0x10)
	struct FBoneReference SourceBone; // 0xd8(0x10)
	float Multiplier; // 0xe8(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0xec(0x01)
	bool bIsAdditive; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x190 (Inherited: 0xe8)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0xe8(0x10)
	int32_t LODThreshold; // 0xf8(0x04)
	float Alpha; // 0xfc(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x100(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x108(0x48)
	struct FName AlphaCurveName; // 0x150(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x158(0x30)
	char pad_188[0x4]; // 0x188(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x18c(0x01)
	bool bAlphaBoolEnabled; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x04)
	struct FBoneReference ChainStartBone; // 0x24(0x10)
	struct FBoneReference ChainEndBone; // 0x34(0x10)
	struct FVector TargetLocation; // 0x44(0x0c)
	float Alpha; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x60(0x01)
	char pad_61[0x17]; // 0x61(0x17)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x50 (Inherited: 0x38)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x38(0x08)
	float ExplicitTime; // 0x40(0x04)
	bool bShouldLoop; // 0x44(0x01)
	bool bTeleportToExplicitTime; // 0x45(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	float StartPosition; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x08)
	bool bAlwaysUpdateSourcePose; // 0x28(0x01)
	char pad_29[0x1f]; // 0x29(0x1f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x270 (Inherited: 0xc8)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xc8(0x10)
	struct FBoneReference EndBone; // 0xd8(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0xe8(0x01)
	bool bAutoCalculateSpline; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	int32_t PointCount; // 0xec(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0xf0(0x10)
	float Roll; // 0x100(0x04)
	float TwistStart; // 0x104(0x04)
	float TwistEnd; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FAlphaBlend TwistBlend; // 0x110(0x30)
	float Stretch; // 0x140(0x04)
	float Offset; // 0x144(0x04)
	char pad_148[0x128]; // 0x148(0x128)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
	struct FBoneReference Bone; // 0x00(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x128 (Inherited: 0xc8)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xc8(0x10)
	float MaxDisplacement; // 0xd8(0x04)
	float SpringStiffness; // 0xdc(0x04)
	float SpringDamping; // 0xe0(0x04)
	float ErrorResetThresh; // 0xe4(0x04)
	char pad_E8[0x3c]; // 0xe8(0x3c)
	char bLimitDisplacement : 1; // 0x124(0x01)
	char bTranslateX : 1; // 0x124(0x01)
	char bTranslateY : 1; // 0x124(0x01)
	char bTranslateZ : 1; // 0x124(0x01)
	char bRotateX : 1; // 0x124(0x01)
	char bRotateY : 1; // 0x124(0x01)
	char bRotateZ : 1; // 0x124(0x01)
	char pad_124_7 : 1; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260 (Inherited: 0xc8)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	char pad_C8[0x38]; // 0xc8(0x38)
	struct FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x04)
	enum class EAxis ChainBoneAxis; // 0x114(0x01)
	char bInvertChainBoneAxis : 1; // 0x115(0x01)
	char bLimitStretch : 1; // 0x115(0x01)
	char bLimitRotation : 1; // 0x115(0x01)
	char bUsePlanarLimit : 1; // 0x115(0x01)
	char bActorSpaceFakeVel : 1; // 0x115(0x01)
	char bReorientParentToChild : 1; // 0x115(0x01)
	char pad_115_6 : 2; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	float MaxDeltaTime; // 0x118(0x04)
	float RelaxationSpeedScale; // 0x11c(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1d8(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1e8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8(0x10)
	float StretchLimit; // 0x208(0x04)
	struct FVector FakeVelocity; // 0x20c(0x0c)
	struct FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x04)
	char pad_22C[0x34]; // 0x22c(0x34)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x00)
struct FRotationLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x138 (Inherited: 0xc8)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xc8(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0xe8(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x108(0x10)
	float RangeMax; // 0x118(0x04)
	float RemappedMin; // 0x11c(0x04)
	float RemappedMax; // 0x120(0x04)
	struct FAnimCurveParam Curve; // 0x124(0x0c)
	char pad_130[0x8]; // 0x130(0x08)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x00)
struct FReferenceBoneFrame {
	struct FBoneReference Bone; // 0x00(0x10)
	struct FAxis Axis; // 0x10(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1e0 (Inherited: 0xc8)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xc8(0x10)
	float StartStretchRatio; // 0xd8(0x04)
	float MaxStretchScale; // 0xdc(0x04)
	struct FVector EffectorLocation; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FBoneSocketTarget EffectorTarget; // 0xf0(0x60)
	struct FVector JointTargetLocation; // 0x150(0x0c)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FBoneSocketTarget JointTarget; // 0x160(0x60)
	struct FAxis TwistAxis; // 0x1c0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x1d0(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x1d1(0x01)
	char bAllowStretching : 1; // 0x1d2(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x1d2(0x01)
	char bMaintainEffectorRelRot : 1; // 0x1d2(0x01)
	char bAllowTwist : 1; // 0x1d2(0x01)
	char pad_1D2_4 : 4; // 0x1d2(0x01)
	char pad_1D3[0xd]; // 0x1d3(0x0d)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char bAlphaBoolEnabled : 1; // 0x31(0x01)
	char pad_31_1 : 2; // 0x31(0x01)
	char bResetChildOnActivation : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Alpha; // 0x34(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x00)
struct FPositionHistory {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	float Range; // 0x10(0x04)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBFEntry {
	struct TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xa0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x04)
	bool bApplyCustomCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x01)
	enum class ERBFFunctionType FunctionType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

