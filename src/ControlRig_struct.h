// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8 {
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8 {
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5
};

// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8 {
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8 {
	Initial = 0,
	Current = 1,
	Max = 2
};

// Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	EControlRigClampSpatialMode_MAX = 3
};

// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8 {
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	EControlRigDrawSettings_MAX = 4
};

// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8 {
	Axes = 0,
	Max = 1
};

// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	EControlRigAnimEasingType_MAX = 31
};

// Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8 {
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EControlRigRotationOrder_MAX = 6
};

// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8 {
	Verlet = 0,
	SemiExplicitEuler = 1,
	ECRSimPointIntegrateType_MAX = 2
};

// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8 {
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8 {
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8 {
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8 {
	Replace = 0,
	Additive = 1,
	Max = 2
};

// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8 {
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8 {
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8 {
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ERigControlType_MAX = 10
};

// Enum ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8 {
	Append = 0,
	Replace = 1,
	ReplaceLocalTransform = 2,
	ReplaceGlobalTransform = 3,
	Max = 4
};

// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8 {
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8 {
	None = 0,
	RequestAutoKey = 1,
	Max = 2
};

// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8 {
	None = 0,
	Bone = 1,
	Space = 2,
	Control = 4,
	Curve = 8,
	All = 15,
	ERigElementType_MAX = 16
};

// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8 {
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Enum ControlRig.EAimMode
enum class EAimMode : uint8 {
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8 {
	Override = 0,
	Additive = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8 {
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8 {
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8 {
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8 {
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8 {
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8 {
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8 {
	Init = 0,
	Update = 1,
	Invalid = 2,
	EControlRigState_MAX = 3
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x170 (Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	struct FPoseLink Source; // 0x58(0x10)
	struct TMap<struct FName, uint16_t> ControlRigBoneMapping; // 0x68(0x50)
	struct TMap<struct FName, uint16_t> ControlRigCurveMapping; // 0xb8(0x50)
	struct TMap<struct FName, uint16_t> InputToCurveMappingUIDs; // 0x108(0x50)
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; // 0x158(0x08)
	struct FControlRigIOSettings InputSettings; // 0x160(0x02)
	struct FControlRigIOSettings OutputSettings; // 0x162(0x02)
	bool bExecute; // 0x164(0x01)
	char pad_165[0xb]; // 0x165(0x0b)
};

// ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x02 (Inherited: 0x00)
struct FControlRigIOSettings {
	bool bUpdatePose; // 0x00(0x01)
	bool bUpdateCurves; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigUnit
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit : FRigVMStruct {
};

// ScriptStruct ControlRig.RigUnitMutable
// Size: 0x68 (Inherited: 0x08)
struct FRigUnitMutable : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x60)
};

// ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x60 (Inherited: 0x58)
struct FControlRigExecuteContext : FRigVMExecuteContext {
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x98 (Inherited: 0x00)
struct FRigBoneHierarchy {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FRigBone> Bones; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct ControlRig.RigElement
// Size: 0x18 (Inherited: 0x00)
struct FRigElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	int32_t Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigBone
// Size: 0xe0 (Inherited: 0x18)
struct FRigBone : FRigElement {
	struct FName ParentName; // 0x18(0x08)
	int32_t ParentIndex; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform InitialTransform; // 0x30(0x30)
	struct FTransform GlobalTransform; // 0x60(0x30)
	struct FTransform LocalTransform; // 0x90(0x30)
	struct TArray<int32_t> Dependents; // 0xc0(0x10)
	enum class ERigBoneType Type; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.CachedRigElement
// Size: 0x14 (Inherited: 0x00)
struct FCachedRigElement {
	struct FRigElementKey Key; // 0x00(0x0c)
	uint16_t Index; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	int32_t ContainerVersion; // 0x10(0x04)
};

// ScriptStruct ControlRig.RigElementKey
// Size: 0x0c (Inherited: 0x00)
struct FRigElementKey {
	enum class ERigElementType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88 (Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	struct TArray<struct FConstraintNodeData> UserData; // 0x78(0x10)
};

// ScriptStruct ControlRig.ConstraintNodeData
// Size: 0xb0 (Inherited: 0x00)
struct FConstraintNodeData {
	struct FTransform RelativeParent; // 0x00(0x30)
	struct FConstraintOffset ConstraintOffset; // 0x30(0x60)
	struct FName LinkedNode; // 0x90(0x08)
	struct TArray<struct FTransformConstraint> Constraints; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x368 (Inherited: 0x170)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	struct UControlRig* ControlRigClass; // 0x170(0x08)
	struct UControlRig* ControlRig; // 0x178(0x08)
	float Alpha; // 0x180(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x184(0x01)
	char bAlphaBoolEnabled : 1; // 0x185(0x01)
	char bSetRefPoseFromSkeleton : 1; // 0x185(0x01)
	char pad_185_2 : 6; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	struct FInputScaleBias AlphaScaleBias; // 0x188(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x190(0x48)
	struct FName AlphaCurveName; // 0x1d8(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1e0(0x30)
	struct TMap<struct FName, struct FName> InputMapping; // 0x210(0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x260(0x50)
	char pad_2B0[0xb0]; // 0x2b0(0xb0)
	int32_t LODThreshold; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x178 (Inherited: 0x170)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x170(0x08)
};

// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x810 (Inherited: 0x770)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy {
	char pad_770[0xa0]; // 0x770(0xa0)
};

// ScriptStruct ControlRig.ControlRigComponentMappedCurve
// Size: 0x10 (Inherited: 0x00)
struct FControlRigComponentMappedCurve {
	struct FName Source; // 0x00(0x08)
	struct FName Target; // 0x08(0x08)
};

// ScriptStruct ControlRig.ControlRigComponentMappedBone
// Size: 0x10 (Inherited: 0x00)
struct FControlRigComponentMappedBone {
	struct FName Source; // 0x00(0x08)
	struct FName Target; // 0x08(0x08)
};

// ScriptStruct ControlRig.ControlRigComponentMappedComponent
// Size: 0x18 (Inherited: 0x00)
struct FControlRigComponentMappedComponent {
	struct USceneComponent* Component; // 0x00(0x08)
	struct FName ElementName; // 0x08(0x08)
	enum class ERigElementType ElementType; // 0x10(0x01)
	enum class EControlRigComponentMapDirection Direction; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct ControlRig.ControlRigComponentMappedElement
// Size: 0xa0 (Inherited: 0x00)
struct FControlRigComponentMappedElement {
	struct FComponentReference ComponentReference; // 0x00(0x28)
	int32_t TransformIndex; // 0x28(0x04)
	struct FName TransformName; // 0x2c(0x08)
	enum class ERigElementType ElementType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FName ElementName; // 0x38(0x08)
	enum class EControlRigComponentMapDirection Direction; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FTransform Offset; // 0x50(0x30)
	float weight; // 0x80(0x04)
	enum class EControlRigComponentSpace Space; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct USceneComponent* SceneComponent; // 0x88(0x08)
	int32_t ElementIndex; // 0x90(0x04)
	int32_t SubIndex; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct ControlRig.ControlRigDrawContainer
// Size: 0x18 (Inherited: 0x00)
struct FControlRigDrawContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FControlRigDrawInstruction> Instructions; // 0x08(0x10)
};

// ScriptStruct ControlRig.ControlRigDrawInstruction
// Size: 0xa0 (Inherited: 0x00)
struct FControlRigDrawInstruction {
	struct FName Name; // 0x00(0x08)
	enum class EControlRigDrawSettings PrimitiveType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FVector> Positions; // 0x10(0x10)
	struct FLinearColor Color; // 0x20(0x10)
	float Thickness; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x30)
	char pad_70[0x30]; // 0x70(0x30)
};

// ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18 (Inherited: 0x18)
struct FControlRigDrawInterface : FControlRigDrawContainer {
};

// ScriptStruct ControlRig.GizmoActorCreationParam
// Size: 0x120 (Inherited: 0x00)
struct FGizmoActorCreationParam {
	char pad_0[0x120]; // 0x00(0x120)
};

// ScriptStruct ControlRig.ControlRigGizmoDefinition
// Size: 0x60 (Inherited: 0x00)
struct FControlRigGizmoDefinition {
	struct FName GizmoName; // 0x00(0x08)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x08(0x28)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x810 (Inherited: 0x770)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy {
	char pad_770[0xa0]; // 0x770(0xa0)
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct ControlRig.CRFourPointBezier
// Size: 0x30 (Inherited: 0x00)
struct FCRFourPointBezier {
	struct FVector A; // 0x00(0x0c)
	struct FVector B; // 0x0c(0x0c)
	struct FVector C; // 0x18(0x0c)
	struct FVector D; // 0x24(0x0c)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FControlRigSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; // 0x00(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References; // 0x10(0x10)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FControlRigSequenceObjectReferences {
	struct TArray<struct FControlRigSequenceObjectReference> Array; // 0x00(0x10)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x08 (Inherited: 0x00)
struct FControlRigSequenceObjectReference {
	struct UControlRig* ControlRigClass; // 0x00(0x08)
};

// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// Size: 0xcc0 (Inherited: 0xa10)
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy {
	char pad_A10[0x2b0]; // 0xa10(0x2b0)
};

// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// Size: 0x50 (Inherited: 0x00)
struct FControlRigSettingsPerPinBool {
	struct TMap<struct FString, bool> Values; // 0x00(0x50)
};

// ScriptStruct ControlRig.ControlRigValidationContext
// Size: 0x28 (Inherited: 0x00)
struct FControlRigValidationContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ControlRig.CRSimContainer
// Size: 0x18 (Inherited: 0x00)
struct FCRSimContainer {
	char pad_0[0x8]; // 0x00(0x08)
	float TimeStep; // 0x08(0x04)
	float AccumulatedTime; // 0x0c(0x04)
	float TimeLeftForStep; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10 (Inherited: 0x00)
struct FCRSimLinearSpring {
	int32_t SubjectA; // 0x00(0x04)
	int32_t SubjectB; // 0x04(0x04)
	float Coefficient; // 0x08(0x04)
	float Equilibrium; // 0x0c(0x04)
};

// ScriptStruct ControlRig.CRSimPoint
// Size: 0x28 (Inherited: 0x00)
struct FCRSimPoint {
	float Mass; // 0x00(0x04)
	float Size; // 0x04(0x04)
	float LinearDamping; // 0x08(0x04)
	float InheritMotion; // 0x0c(0x04)
	struct FVector Position; // 0x10(0x0c)
	struct FVector LinearVelocity; // 0x1c(0x0c)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x24 (Inherited: 0x00)
struct FCRSimPointConstraint {
	enum class ECRSimConstraintType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SubjectA; // 0x04(0x04)
	int32_t SubjectB; // 0x08(0x04)
	struct FVector DataA; // 0x0c(0x0c)
	struct FVector DataB; // 0x18(0x0c)
};

// ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78 (Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer {
	struct TArray<struct FCRSimPoint> Points; // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58(0x10)
	struct TArray<struct FCRSimPoint> PreviousStep; // 0x68(0x10)
};

// ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x50 (Inherited: 0x00)
struct FCRSimSoftCollision {
	struct FTransform Transform; // 0x00(0x30)
	enum class ECRSimSoftCollisionType ShapeType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MinimumDistance; // 0x34(0x04)
	float MaximumDistance; // 0x38(0x04)
	enum class EControlRigAnimEasingType FalloffType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Coefficient; // 0x40(0x04)
	bool bInverted; // 0x44(0x01)
	char pad_45[0xb]; // 0x45(0x0b)
};

// ScriptStruct ControlRig.CRSimPointForce
// Size: 0x18 (Inherited: 0x00)
struct FCRSimPointForce {
	enum class ECRSimPointForceType ForceType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Vector; // 0x04(0x0c)
	float Coefficient; // 0x10(0x04)
	bool bNormalize; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0xd8 (Inherited: 0x08)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x08(0x01)
	bool bApplyBoneFilter; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FInputBlendPose BoneFilter; // 0x10(0x10)
	struct FMovieSceneFloatChannel weight; // 0x20(0xa0)
	struct FMovieSceneEvaluationOperand Operand; // 0xc0(0x14)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x18 (Inherited: 0x00)
struct FChannelMapInfo {
	int32_t ControlIndex; // 0x00(0x04)
	int32_t TotalChannelIndex; // 0x04(0x04)
	int32_t ChannelIndex; // 0x08(0x04)
	int32_t ParentControlIndex; // 0x0c(0x04)
	struct FName ChannelTypeName; // 0x10(0x08)
};

// ScriptStruct ControlRig.IntegerParameterNameAndCurve
// Size: 0x98 (Inherited: 0x00)
struct FIntegerParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneIntegerChannel ParameterCurve; // 0x08(0x90)
};

// ScriptStruct ControlRig.EnumParameterNameAndCurve
// Size: 0xa0 (Inherited: 0x00)
struct FEnumParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneByteChannel ParameterCurve; // 0x08(0x98)
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xa0 (Inherited: 0x80)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FEnumParameterNameAndCurve> Enums; // 0x80(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; // 0x90(0x10)
};

// ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x108 (Inherited: 0x00)
struct FRigControlHierarchy {
	char pad_0[0x98]; // 0x00(0x98)
	struct TArray<struct FRigControl> Controls; // 0x98(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0xa8(0x50)
	struct TArray<struct FName> Selection; // 0xf8(0x10)
};

// ScriptStruct ControlRig.RigControl
// Size: 0x2f0 (Inherited: 0x18)
struct FRigControl : FRigElement {
	enum class ERigControlType ControlType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName DisplayName; // 0x1c(0x08)
	struct FName ParentName; // 0x24(0x08)
	int32_t ParentIndex; // 0x2c(0x04)
	struct FName SpaceName; // 0x30(0x08)
	int32_t SpaceIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform OffsetTransform; // 0x40(0x30)
	struct FRigControlValue InitialValue; // 0x70(0x80)
	struct FRigControlValue Value; // 0xf0(0x80)
	enum class ERigControlAxis PrimaryAxis; // 0x170(0x01)
	bool bIsCurve; // 0x171(0x01)
	bool bAnimatable; // 0x172(0x01)
	bool bLimitTranslation; // 0x173(0x01)
	bool bLimitRotation; // 0x174(0x01)
	bool bLimitScale; // 0x175(0x01)
	bool bDrawLimits; // 0x176(0x01)
	char pad_177[0x9]; // 0x177(0x09)
	struct FRigControlValue MinimumValue; // 0x180(0x80)
	struct FRigControlValue MaximumValue; // 0x200(0x80)
	bool bGizmoEnabled; // 0x280(0x01)
	bool bGizmoVisible; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FName GizmoName; // 0x284(0x08)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FTransform GizmoTransform; // 0x290(0x30)
	struct FLinearColor GizmoColor; // 0x2c0(0x10)
	struct TArray<int32_t> Dependents; // 0x2d0(0x10)
	bool bIsTransientControl; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UEnum* ControlEnum; // 0x2e8(0x08)
};

// ScriptStruct ControlRig.RigControlValue
// Size: 0x80 (Inherited: 0x00)
struct FRigControlValue {
	struct FRigControlValueStorage FloatStorage; // 0x00(0x44)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform Storage; // 0x50(0x30)
};

// ScriptStruct ControlRig.RigControlValueStorage
// Size: 0x44 (Inherited: 0x00)
struct FRigControlValueStorage {
	float Float00; // 0x00(0x04)
	float Float01; // 0x04(0x04)
	float Float02; // 0x08(0x04)
	float Float03; // 0x0c(0x04)
	float Float10; // 0x10(0x04)
	float Float11; // 0x14(0x04)
	float Float12; // 0x18(0x04)
	float Float13; // 0x1c(0x04)
	float Float20; // 0x20(0x04)
	float Float21; // 0x24(0x04)
	float Float22; // 0x28(0x04)
	float Float23; // 0x2c(0x04)
	float Float30; // 0x30(0x04)
	float Float31; // 0x34(0x04)
	float Float32; // 0x38(0x04)
	float Float33; // 0x3c(0x04)
	bool bValid; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct ControlRig.RigCurveContainer
// Size: 0x98 (Inherited: 0x00)
struct FRigCurveContainer {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FRigCurve> Curves; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct ControlRig.RigCurve
// Size: 0x20 (Inherited: 0x18)
struct FRigCurve : FRigElement {
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x01 (Inherited: 0x00)
struct FRigHierarchyRef {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x368 (Inherited: 0x00)
struct FRigHierarchyContainer {
	struct FRigBoneHierarchy BoneHierarchy; // 0x00(0x98)
	struct FRigSpaceHierarchy SpaceHierarchy; // 0x98(0x90)
	struct FRigControlHierarchy ControlHierarchy; // 0x128(0x108)
	struct FRigCurveContainer CurveContainer; // 0x230(0x98)
	int32_t Version; // 0x2c8(0x04)
	char pad_2CC[0x9c]; // 0x2cc(0x9c)
};

// ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x90 (Inherited: 0x00)
struct FRigSpaceHierarchy {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FRigSpace> Spaces; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigSpace
// Size: 0x90 (Inherited: 0x18)
struct FRigSpace : FRigElement {
	enum class ERigSpaceType SpaceType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName ParentName; // 0x1c(0x08)
	int32_t ParentIndex; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform InitialTransform; // 0x30(0x30)
	struct FTransform LocalTransform; // 0x60(0x30)
};

// ScriptStruct ControlRig.RigMirrorSettings
// Size: 0x28 (Inherited: 0x00)
struct FRigMirrorSettings {
	enum class EAxis MirrorAxis; // 0x00(0x01)
	enum class EAxis AxisToFlip; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString OldName; // 0x08(0x10)
	struct FString NewName; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x40 (Inherited: 0x00)
struct FRigHierarchyCopyPasteContent {
	struct TArray<enum class ERigElementType> Types; // 0x00(0x10)
	struct TArray<struct FString> Contents; // 0x10(0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x20(0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigEventContext
// Size: 0x28 (Inherited: 0x00)
struct FRigEventContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ControlRig.RigElementKeyCollection
// Size: 0x10 (Inherited: 0x00)
struct FRigElementKeyCollection {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigControlModifiedContext
// Size: 0x10 (Inherited: 0x00)
struct FRigControlModifiedContext {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigPose
// Size: 0x10 (Inherited: 0x00)
struct FRigPose {
	struct TArray<struct FRigPoseElement> Elements; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigPoseElement
// Size: 0x90 (Inherited: 0x00)
struct FRigPoseElement {
	struct FCachedRigElement Index; // 0x00(0x14)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform GlobalTransform; // 0x20(0x30)
	struct FTransform LocalTransform; // 0x50(0x30)
	float CurveValue; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct ControlRig.RigInfluenceMapPerEvent
// Size: 0x60 (Inherited: 0x00)
struct FRigInfluenceMapPerEvent {
	struct TArray<struct FRigInfluenceMap> Maps; // 0x00(0x10)
	struct TMap<struct FName, int32_t> EventToIndex; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigInfluenceMap
// Size: 0x68 (Inherited: 0x00)
struct FRigInfluenceMap {
	struct FName EventName; // 0x00(0x08)
	struct TArray<struct FRigInfluenceEntry> Entries; // 0x08(0x10)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex; // 0x18(0x50)
};

// ScriptStruct ControlRig.RigInfluenceEntry
// Size: 0x20 (Inherited: 0x00)
struct FRigInfluenceEntry {
	struct FRigElementKey Source; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigElementKey> AffectedList; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigInfluenceEntryModifier
// Size: 0x10 (Inherited: 0x00)
struct FRigInfluenceEntryModifier {
	struct TArray<struct FRigElementKey> AffectedList; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_SimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector Minimum; // 0x14(0x0c)
	struct FVector Maximum; // 0x20(0x0c)
	struct FVector AccumulatedMinimum; // 0x2c(0x0c)
	struct FVector AccumulatedMaximum; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float AccumulatedMinimum; // 0x14(0x04)
	float AccumulatedMaximum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform TargetValue; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	float Blend; // 0x70(0x04)
	bool bIntegrateDeltaTime; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xb0(0x30)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat TargetValue; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	float Blend; // 0x30(0x04)
	bool bIntegrateDeltaTime; // 0x34(0x01)
	char pad_35[0xb]; // 0x35(0x0b)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase {
	struct FVector TargetValue; // 0x08(0x0c)
	struct FVector InitialValue; // 0x14(0x0c)
	float Blend; // 0x20(0x04)
	bool bIntegrateDeltaTime; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Result; // 0x28(0x0c)
	struct FVector AccumulatedValue; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase {
	float TargetValue; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	float Blend; // 0x10(0x04)
	bool bIntegrateDeltaTime; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Result; // 0x18(0x04)
	float AccumulatedValue; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Multiplier; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	bool bFlipOrder; // 0x70(0x01)
	bool bIntegrateDeltaTime; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xb0(0x30)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Multiplier; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	bool bFlipOrder; // 0x30(0x01)
	bool bIntegrateDeltaTime; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase {
	struct FVector Multiplier; // 0x08(0x0c)
	struct FVector InitialValue; // 0x14(0x0c)
	bool bIntegrateDeltaTime; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Result; // 0x24(0x0c)
	struct FVector AccumulatedValue; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase {
	float Multiplier; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase {
	struct FVector Increment; // 0x08(0x0c)
	struct FVector InitialValue; // 0x14(0x0c)
	bool bIntegrateDeltaTime; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Result; // 0x24(0x0c)
	struct FVector AccumulatedValue; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase {
	float Increment; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0xc0 (Inherited: 0x68)
struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	float weight; // 0xa0(0x04)
	bool bPostMultiply; // 0xa4(0x01)
	bool bPropagateToChildren; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct FCachedRigElement CachedBone; // 0xa8(0x14)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x150 (Inherited: 0x68)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	struct FRigUnit_AimItem_Target Primary; // 0x74(0x2c)
	struct FRigUnit_AimItem_Target Secondary; // 0xa0(0x2c)
	float weight; // 0xcc(0x04)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0(0x40)
	struct FCachedRigElement CachedItem; // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace; // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x138(0x14)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_AimItem_Target
// Size: 0x2c (Inherited: 0x00)
struct FRigUnit_AimItem_Target {
	float weight; // 0x00(0x04)
	struct FVector Axis; // 0x04(0x0c)
	struct FVector Target; // 0x10(0x0c)
	enum class EControlRigVectorKind Kind; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FRigElementKey Space; // 0x20(0x0c)
};

// ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x150 (Inherited: 0x68)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	struct FName Bone; // 0x68(0x08)
	struct FRigUnit_AimBone_Target Primary; // 0x70(0x28)
	struct FRigUnit_AimBone_Target Secondary; // 0x98(0x28)
	float weight; // 0xc0(0x04)
	bool bPropagateToChildren; // 0xc4(0x01)
	char pad_C5[0xb]; // 0xc5(0x0b)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0(0x40)
	struct FCachedRigElement CachedBoneIndex; // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace; // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x138(0x14)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_AimBone_Target {
	float weight; // 0x00(0x04)
	struct FVector Axis; // 0x04(0x0c)
	struct FVector Target; // 0x10(0x0c)
	enum class EControlRigVectorKind Kind; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName Space; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HighlevelBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x140 (Inherited: 0x08)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InputTransform; // 0x10(0x30)
	struct FRigUnit_AimItem_Target Primary; // 0x40(0x2c)
	struct FRigUnit_AimItem_Target Secondary; // 0x6c(0x2c)
	float weight; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FTransform Result; // 0xa0(0x30)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0(0x40)
	struct FCachedRigElement PrimaryCachedSpace; // 0x110(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x124(0x14)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0xc0 (Inherited: 0x68)
struct FRigUnit_AimConstraint : FRigUnitMutable {
	struct FName Joint; // 0x68(0x08)
	enum class EAimMode AimMode; // 0x70(0x01)
	enum class EAimMode UpMode; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FVector AimVector; // 0x74(0x0c)
	struct FVector UpVector; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FAimTarget> AimTargets; // 0x90(0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0xa0(0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData; // 0xb0(0x10)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_AimConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
};

// ScriptStruct ControlRig.AimTarget
// Size: 0x50 (Inherited: 0x00)
struct FAimTarget {
	float weight; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector AlignVector; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0x88 (Inherited: 0x08)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x0c)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	bool bMapRange; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FInputRange InRange; // 0x20(0x08)
	struct FInputRange OutRange; // 0x28(0x08)
	bool bClampResult; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ClampMin; // 0x34(0x04)
	float ClampMax; // 0x38(0x04)
	bool bInterpResult; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float InterpSpeedIncreasing; // 0x40(0x04)
	float InterpSpeedDecreasing; // 0x44(0x04)
	struct FVector Result; // 0x48(0x0c)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x54(0x30)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float Scale; // 0x0c(0x04)
	float Bias; // 0x10(0x04)
	bool bMapRange; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FInputRange InRange; // 0x18(0x08)
	struct FInputRange OutRange; // 0x20(0x08)
	bool bClampResult; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ClampMin; // 0x2c(0x04)
	float ClampMax; // 0x30(0x04)
	bool bInterpResult; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float InterpSpeedIncreasing; // 0x38(0x04)
	float InterpSpeedDecreasing; // 0x3c(0x04)
	float Result; // 0x40(0x04)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_AnimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase {
	float Value; // 0x08(0x04)
	enum class EControlRigAnimEasingType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SourceMinimum; // 0x10(0x04)
	float SourceMaximum; // 0x14(0x04)
	float TargetMinimum; // 0x18(0x04)
	float TargetMaximum; // 0x1c(0x04)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase {
	enum class EControlRigAnimEasingType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	float SourceMinimum; // 0x98(0x04)
	float SourceMaximum; // 0x9c(0x04)
	float TargetMinimum; // 0xa0(0x04)
	float TargetMaximum; // 0xa4(0x04)
	float Result; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase {
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_ApplyFK : FRigUnitMutable {
	struct FName Joint; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransformFilter Filter; // 0xa0(0x09)
	enum class EApplyTransformMode ApplyTransformMode; // 0xa9(0x01)
	enum class ETransformSpaceMode ApplyTransformSpace; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FTransform BaseTransform; // 0xb0(0x30)
	struct FName BaseJoint; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_BeginExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x60)
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_BlendTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Source; // 0x10(0x30)
	struct TArray<struct FBlendTarget> Targets; // 0x40(0x10)
	struct FTransform Result; // 0x50(0x30)
};

// ScriptStruct ControlRig.BlendTarget
// Size: 0x40 (Inherited: 0x00)
struct FBlendTarget {
	struct FTransform Transform; // 0x00(0x30)
	float weight; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0xe8 (Inherited: 0x68)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; // 0x68(0x10)
	struct FVector WaveSpeed; // 0x78(0x0c)
	struct FVector WaveFrequency; // 0x84(0x0c)
	struct FVector WaveAmplitude; // 0x90(0x0c)
	struct FVector WaveOffset; // 0x9c(0x0c)
	struct FVector WaveNoise; // 0xa8(0x0c)
	enum class EControlRigAnimEasingType WaveEase; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float WaveMinimum; // 0xb8(0x04)
	float WaveMaximum; // 0xbc(0x04)
	enum class EControlRigRotationOrder RotationOrder; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8(0x20)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct FVector WaveTime; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_Harmonics_TargetItem {
	struct FRigElementKey Item; // 0x00(0x0c)
	float Ratio; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0xe8 (Inherited: 0x68)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x68(0x10)
	struct FVector WaveSpeed; // 0x78(0x0c)
	struct FVector WaveFrequency; // 0x84(0x0c)
	struct FVector WaveAmplitude; // 0x90(0x0c)
	struct FVector WaveOffset; // 0x9c(0x0c)
	struct FVector WaveNoise; // 0xa8(0x0c)
	enum class EControlRigAnimEasingType WaveEase; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float WaveMinimum; // 0xb8(0x04)
	float WaveMaximum; // 0xbc(0x04)
	enum class EControlRigRotationOrder RotationOrder; // 0xc0(0x01)
	bool bPropagateToChildren; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8(0x20)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_BoneTarget {
	struct FName Bone; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_ControlName : FRigUnit {
	struct FName Control; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_SpaceName : FRigUnit {
	struct FName Space; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_BoneName : FRigUnit {
	struct FName Bone; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_Item
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Item : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xb0(0x04)
	float weight; // 0xb4(0x04)
	int32_t MaxIterations; // 0xb8(0x04)
	bool bStartFromTail; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float BaseRotationLimit; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8(0x10)
	bool bPropagateToChildren; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xe0(0x58)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x58 (Inherited: 0x00)
struct FRigUnit_CCDIK_WorkData {
	struct TArray<struct FCCDIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
	struct TArray<float> RotationLimitsPerItem; // 0x30(0x10)
	struct FCachedRigElement CachedEffector; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimitPerItem {
	struct FRigElementKey Item; // 0x00(0x0c)
	float Limit; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EffectorBone; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xb0(0x04)
	float weight; // 0xb4(0x04)
	int32_t MaxIterations; // 0xb8(0x04)
	bool bStartFromTail; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float BaseRotationLimit; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xc8(0x10)
	bool bPropagateToChildren; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xe0(0x58)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimit {
	struct FName Bone; // 0x00(0x08)
	float Limit; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x270 (Inherited: 0x68)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ChainRoot; // 0x68(0x0c)
	struct FVector Speed; // 0x74(0x0c)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x80(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xa8(0x40)
	struct FRuntimeFloatCurve WaveCurve; // 0xe8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170(0x3c)
	bool bDrawDebug; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FTransform DrawWorldOffset; // 0x1b0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0(0x90)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_WorkData {
	struct FVector Time; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCachedRigElement> Items; // 0x10(0x10)
	struct TArray<float> Ratio; // 0x20(0x10)
	struct TArray<struct FVector> LocalTip; // 0x30(0x10)
	struct TArray<struct FVector> PendulumTip; // 0x40(0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x50(0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x60(0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x70(0x10)
	struct TArray<struct FVector> VelocityLines; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x3c (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PendulumStiffness; // 0x04(0x04)
	struct FVector PendulumGravity; // 0x08(0x0c)
	float PendulumBlend; // 0x14(0x04)
	float PendulumDrag; // 0x18(0x04)
	float PendulumMinimum; // 0x1c(0x04)
	float PendulumMaximum; // 0x20(0x04)
	enum class EControlRigAnimEasingType PendulumEase; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector UnwindAxis; // 0x28(0x0c)
	float UnwindMinimum; // 0x34(0x04)
	float UnwindMaximum; // 0x38(0x04)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector WaveFrequency; // 0x04(0x0c)
	struct FVector WaveAmplitude; // 0x10(0x0c)
	struct FVector WaveOffset; // 0x1c(0x0c)
	struct FVector WaveNoise; // 0x28(0x0c)
	float WaveMinimum; // 0x34(0x04)
	float WaveMaximum; // 0x38(0x04)
	enum class EControlRigAnimEasingType WaveEase; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector ReachTarget; // 0x04(0x0c)
	struct FVector ReachAxis; // 0x10(0x0c)
	float ReachMinimum; // 0x1c(0x04)
	float ReachMaximum; // 0x20(0x04)
	enum class EControlRigAnimEasingType ReachEase; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x270 (Inherited: 0x68)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	struct FName ChainRoot; // 0x68(0x08)
	struct FVector Speed; // 0x70(0x0c)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x7c(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xa4(0x40)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FRuntimeFloatCurve WaveCurve; // 0xe8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170(0x3c)
	bool bDrawDebug; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FTransform DrawWorldOffset; // 0x1b0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0(0x90)
};

// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0xf8 (Inherited: 0x68)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	struct FRigElementKeyCollection Collection; // 0x68(0x10)
	struct FRigElementKey Item; // 0x78(0x0c)
	int32_t Index; // 0x84(0x04)
	int32_t Count; // 0x88(0x04)
	float Ratio; // 0x8c(0x04)
	bool Continue; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FControlRigExecuteContext Completed; // 0x98(0x60)
};

// ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_CollectionBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Index; // 0x18(0x04)
	struct FRigElementKey Item; // 0x1c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct FRigElementKeyCollection Reversed; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Items; // 0x08(0x10)
	struct FName Old; // 0x18(0x08)
	struct FName NEW; // 0x20(0x08)
	bool RemoveInvalidItems; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigElementKeyCollection Collection; // 0x30(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x40(0x10)
	int32_t CachedHierarchyHash; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; // 0x08(0x0c)
	bool bIncludeParent; // 0x14(0x01)
	bool bRecursive; // 0x15(0x01)
	enum class ERigElementType TypeToSearch; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x28(0x10)
	int32_t CachedHierarchyHash; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	struct FName PartialName; // 0x08(0x08)
	enum class ERigElementType TypeToSearch; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x28(0x10)
	int32_t CachedHierarchyHash; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; // 0x08(0x0c)
	struct FRigElementKey LastItem; // 0x14(0x0c)
	bool Reverse; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x38(0x10)
	int32_t CachedHierarchyHash; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Control
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_Control : FRigUnit {
	struct FEulerTransform Transform; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Base; // 0x30(0x30)
	struct FTransform InitTransform; // 0x60(0x30)
	struct FTransform Result; // 0x90(0x30)
	struct FTransformFilter Filter; // 0xc0(0x09)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x100 (Inherited: 0xd0)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	struct FTransform MeshTransform; // 0xd0(0x30)
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ToSwingAndTwist : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x10)
	struct FVector Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ConvertRotationToVector : FRigUnit {
	struct FRotator Input; // 0x08(0x0c)
	struct FVector Result; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	struct FVector Input; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	struct FVector Input; // 0x08(0x0c)
	struct FRotator Result; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternion : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x10)
	struct FRotator Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ConvertRotation : FRigUnit {
	struct FRotator Input; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation {
};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_ConvertEulerTransform : FRigUnit {
	struct FEulerTransform Input; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Result; // 0x30(0x30)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_ConvertTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Input; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_DebugBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; // 0x68(0x30)
	float MinimumU; // 0x98(0x04)
	float MaximumU; // 0x9c(0x04)
	struct FLinearColor Color; // 0xa0(0x10)
	float Thickness; // 0xb0(0x04)
	int32_t Detail; // 0xb4(0x04)
	struct FRigElementKey Space; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; // 0x68(0x30)
	float MinimumU; // 0x98(0x04)
	float MaximumU; // 0x9c(0x04)
	struct FLinearColor Color; // 0xa0(0x10)
	float Thickness; // 0xb0(0x04)
	int32_t Detail; // 0xb4(0x04)
	struct FName Space; // 0xb8(0x08)
	struct FTransform WorldOffset; // 0xc0(0x30)
	bool bEnabled; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0xc0 (Inherited: 0x68)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable {
	float Scale; // 0x68(0x04)
	struct FLinearColor Color; // 0x6c(0x10)
	float Thickness; // 0x7c(0x04)
	struct FTransform WorldOffset; // 0x80(0x30)
	bool bEnabled; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x68(0x0c)
	struct FVector B; // 0x74(0x0c)
	struct FLinearColor Color; // 0x80(0x10)
	float Thickness; // 0x90(0x04)
	struct FRigElementKey Space; // 0x94(0x0c)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x68(0x0c)
	struct FVector B; // 0x74(0x0c)
	struct FLinearColor Color; // 0x80(0x10)
	float Thickness; // 0x90(0x04)
	struct FName Space; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x68(0x10)
	struct FLinearColor Color; // 0x78(0x10)
	float Thickness; // 0x88(0x04)
	struct FRigElementKey Space; // 0x8c(0x0c)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x68(0x10)
	struct FLinearColor Color; // 0x78(0x10)
	float Thickness; // 0x88(0x04)
	struct FName Space; // 0x8c(0x08)
	char pad_94[0xc]; // 0x94(0x0c)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable {
	struct FVector Vector; // 0x68(0x0c)
	enum class ERigUnitDebugPointMode Mode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FLinearColor Color; // 0x78(0x10)
	float Scale; // 0x88(0x04)
	float Thickness; // 0x8c(0x04)
	struct FName Space; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase {
	struct FVector Vector; // 0x08(0x0c)
	enum class ERigUnitDebugPointMode Mode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FLinearColor Color; // 0x18(0x10)
	float Scale; // 0x28(0x04)
	float Thickness; // 0x2c(0x04)
	struct FName Space; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform WorldOffset; // 0x40(0x30)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xa0(0x10)
	float Radius; // 0xb0(0x04)
	float MinimumDegrees; // 0xb4(0x04)
	float MaximumDegrees; // 0xb8(0x04)
	float Thickness; // 0xbc(0x04)
	int32_t Detail; // 0xc0(0x04)
	struct FRigElementKey Space; // 0xc4(0x0c)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xa0(0x10)
	float Radius; // 0xb0(0x04)
	float MinimumDegrees; // 0xb4(0x04)
	float MaximumDegrees; // 0xb8(0x04)
	float Thickness; // 0xbc(0x04)
	int32_t Detail; // 0xc0(0x04)
	struct FName Space; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xa0(0x10)
	float Scale; // 0xb0(0x04)
	float Thickness; // 0xb4(0x04)
	struct FRigElementKey Space; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xa0(0x10)
	float Scale; // 0xb0(0x04)
	float Thickness; // 0xb4(0x04)
	struct FName Space; // 0xb8(0x08)
	struct FTransform WorldOffset; // 0xc0(0x30)
	bool bEnabled; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x68(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FLinearColor Color; // 0x7c(0x10)
	float Thickness; // 0x8c(0x04)
	float Scale; // 0x90(0x04)
	struct FName Space; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FTransform WorldOffset; // 0xa0(0x30)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_DebugTransformArrayMutable_WorkData {
	struct TArray<struct FTransform> DrawTransforms; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	enum class ERigUnitDebugTransformMode Mode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FLinearColor Color; // 0xa4(0x10)
	float Thickness; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	struct FRigElementKey Space; // 0xbc(0x0c)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	enum class ERigUnitDebugTransformMode Mode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FLinearColor Color; // 0xa4(0x10)
	float Thickness; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	struct FName Space; // 0xbc(0x08)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform WorldOffset; // 0xd0(0x30)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	enum class ERigUnitDebugTransformMode Mode; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FLinearColor Color; // 0x44(0x10)
	float Thickness; // 0x54(0x04)
	float Scale; // 0x58(0x04)
	struct FName Space; // 0x5c(0x08)
	char pad_64[0xc]; // 0x64(0x0c)
	struct FTransform WorldOffset; // 0x70(0x30)
	bool bEnabled; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Delta; // 0x40(0x30)
	struct FTransform PreviousValue; // 0x70(0x30)
	struct FTransform Cache; // 0xa0(0x30)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Delta; // 0x20(0x10)
	struct FQuat PreviousValue; // 0x30(0x10)
	struct FQuat Cache; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector Delta; // 0x14(0x0c)
	struct FVector PreviousValue; // 0x20(0x0c)
	struct FVector Cache; // 0x2c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float Delta; // 0x0c(0x04)
	float PreviousValue; // 0x10(0x04)
	float Cache; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float weight; // 0x8c(0x04)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x90(0x50)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x10(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x20(0x10)
	struct TArray<float> ItemRotationT; // 0x30(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_Rotation {
	struct FQuat Rotation; // 0x00(0x10)
	float Ratio; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0xe8 (Inherited: 0x68)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float weight; // 0x8c(0x04)
	bool bPropagateToChildren; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x98(0x50)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	struct FName InstructionName; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x78 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	struct FName InstructionName; // 0x68(0x08)
	float Thickness; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x80 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	struct FName InstructionName; // 0x68(0x08)
	struct FLinearColor Color; // 0x70(0x10)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	struct FName InstructionName; // 0x08(0x08)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xb0(0x04)
	float weight; // 0xb4(0x04)
	bool bPropagateToChildren; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t MaxIterations; // 0xbc(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xc0(0x38)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x38 (Inherited: 0x00)
struct FRigUnit_FABRIK_WorkData {
	struct TArray<struct FFABRIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct FCachedRigElement CachedEffector; // 0x20(0x14)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EffectorBone; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xb0(0x04)
	float weight; // 0xb4(0x04)
	bool bPropagateToChildren; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t MaxIterations; // 0xbc(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xc0(0x38)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct FCRFourPointBezier Bezier; // 0x78(0x30)
	enum class EControlRigCurveAlignment Alignment; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float Minimum; // 0xac(0x04)
	float Maximum; // 0xb0(0x04)
	int32_t SamplingPrecision; // 0xb4(0x04)
	struct FVector PrimaryAxis; // 0xb8(0x0c)
	struct FVector SecondaryAxis; // 0xc4(0x0c)
	struct FVector PoleVectorPosition; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float weight; // 0xf4(0x04)
	bool bPropagateToChildren; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160(0x98)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> ItemPositions; // 0x08(0x10)
	struct TArray<float> ItemSegments; // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28(0x10)
	struct TArray<float> CurveSegments; // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x48(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x58(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x68(0x10)
	struct TArray<float> ItemRotationT; // 0x78(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor CurveColor; // 0x08(0x10)
	struct FLinearColor SegmentsColor; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform WorldOffset; // 0x30(0x30)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_Rotation {
	struct FQuat Rotation; // 0x00(0x10)
	float Ratio; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	struct FCRFourPointBezier Bezier; // 0x78(0x30)
	enum class EControlRigCurveAlignment Alignment; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float Minimum; // 0xac(0x04)
	float Maximum; // 0xb0(0x04)
	int32_t SamplingPrecision; // 0xb4(0x04)
	struct FVector PrimaryAxis; // 0xb8(0x0c)
	struct FVector SecondaryAxis; // 0xc4(0x0c)
	struct FVector PoleVectorPosition; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float weight; // 0xf4(0x04)
	bool bPropagateToChildren; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160(0x98)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float MinIn; // 0x0c(0x04)
	float MaxIn; // 0x10(0x04)
	float MinOut; // 0x14(0x04)
	float MaxOut; // 0x18(0x04)
	float Result; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float Min; // 0x0c(0x04)
	float Max; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; // 0x08(0x04)
	float Argument1; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_ForLoopCount
// Size: 0xd8 (Inherited: 0x68)
struct FRigUnit_ForLoopCount : FRigUnitMutable {
	int32_t Count; // 0x68(0x04)
	int32_t Index; // 0x6c(0x04)
	float Ratio; // 0x70(0x04)
	bool Continue; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FControlRigExecuteContext Completed; // 0x78(0x60)
};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetBoneTransform : FRigUnit {
	struct FName Bone; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetControlInitialTransform : FRigUnit {
	struct FName Control; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedControlIndex; // 0x50(0x14)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_GetControlTransform : FRigUnit {
	struct FName Control; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform Transform; // 0x20(0x30)
	struct FTransform Minimum; // 0x50(0x30)
	struct FTransform Maximum; // 0x80(0x30)
	struct FCachedRigElement CachedControlIndex; // 0xb0(0x14)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_GetControlRotator : FRigUnit {
	struct FName Control; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRotator Rotator; // 0x14(0x0c)
	struct FRotator Minimum; // 0x20(0x0c)
	struct FRotator Maximum; // 0x2c(0x0c)
	struct FCachedRigElement CachedControlIndex; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_GetControlVector : FRigUnit {
	struct FName Control; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Minimum; // 0x20(0x0c)
	struct FVector Maximum; // 0x2c(0x0c)
	struct FCachedRigElement CachedControlIndex; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetControlVector2D : FRigUnit {
	struct FName Control; // 0x08(0x08)
	struct FVector2D Vector; // 0x10(0x08)
	struct FVector2D Minimum; // 0x18(0x08)
	struct FVector2D Maximum; // 0x20(0x08)
	struct FCachedRigElement CachedControlIndex; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetControlInteger : FRigUnit {
	struct FName Control; // 0x08(0x08)
	int32_t IntegerValue; // 0x10(0x04)
	int32_t Minimum; // 0x14(0x04)
	int32_t Maximum; // 0x18(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x1c(0x14)
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetControlFloat : FRigUnit {
	struct FName Control; // 0x08(0x08)
	float FloatValue; // 0x10(0x04)
	float Minimum; // 0x14(0x04)
	float Maximum; // 0x18(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x1c(0x14)
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetControlBool : FRigUnit {
	struct FName Control; // 0x08(0x08)
	bool BoolValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x14(0x14)
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetCurveValue : FRigUnit {
	struct FName Curve; // 0x08(0x08)
	float Value; // 0x10(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x14(0x14)
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase {
	float Result; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	struct FName Bone; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_GetJointTransform : FRigUnitMutable {
	struct FName Joint; // 0x68(0x08)
	enum class ETransformGetterType Type; // 0x70(0x01)
	enum class ETransformSpaceMode TransformSpace; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FName BaseJoint; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Output; // 0xc0(0x30)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	struct FName Bone; // 0x08(0x08)
	struct FName Space; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	struct FCachedRigElement CachedSpace; // 0x64(0x14)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x0c)
	bool bChildInitial; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRigElementKey Parent; // 0x18(0x0c)
	bool bParentInitial; // 0x24(0x01)
	char pad_25[0xb]; // 0x25(0x0b)
	struct FTransform RelativeTransform; // 0x30(0x30)
	struct FCachedRigElement CachedChild; // 0x60(0x14)
	struct FCachedRigElement CachedParent; // 0x74(0x14)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetSpaceTransform : FRigUnit {
	struct FName Space; // 0x08(0x08)
	enum class EBoneGetterSetterMode SpaceType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedSpaceIndex; // 0x50(0x14)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetTransform : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x14(0x01)
	bool bInitial; // 0x15(0x01)
	char pad_16[0xa]; // 0x16(0x0a)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedIndex; // 0x50(0x14)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase {
	float Year; // 0x08(0x04)
	float Month; // 0x0c(0x04)
	float Day; // 0x10(0x04)
	float WeekDay; // 0x14(0x04)
	float Hours; // 0x18(0x04)
	float Minutes; // 0x1c(0x04)
	float Seconds; // 0x20(0x04)
	float OverallSeconds; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; // 0x08(0x0c)
	bool bIncludeItem; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRigElementKeyCollection Siblings; // 0x18(0x10)
	struct FCachedRigElement CachedItem; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	struct FRigElementKey Parent; // 0x08(0x0c)
	bool bIncludeParent; // 0x14(0x01)
	bool bRecursive; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FRigElementKeyCollection Children; // 0x18(0x10)
	struct FCachedRigElement CachedParent; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRigElementKeyCollection CachedChildren; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x0c)
	bool bIncludeChild; // 0x14(0x01)
	bool bReverse; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FRigElementKeyCollection Parents; // 0x18(0x10)
	struct FCachedRigElement CachedChild; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRigElementKeyCollection CachedParents; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x0c)
	struct FRigElementKey Parent; // 0x14(0x0c)
	struct FCachedRigElement CachedChild; // 0x20(0x14)
	struct FCachedRigElement CachedParent; // 0x34(0x14)
};

// ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_InverseExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x60)
};

// ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ItemBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x0c)
	struct FName Old; // 0x14(0x08)
	struct FName NEW; // 0x1c(0x08)
	struct FRigElementKey Result; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x0c)
	bool Exists; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FCachedRigElement CachedIndex; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	int32_t BufferSize; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	int32_t LastInsertIndex; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_KalmanVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x0c)
	int32_t BufferSize; // 0x14(0x04)
	struct FVector Result; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FVector> Buffer; // 0x28(0x10)
	int32_t LastInsertIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	int32_t BufferSize; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Buffer; // 0x18(0x10)
	int32_t LastInsertIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	bool Result; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathColorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	float T; // 0x28(0x04)
	struct FLinearColor Result; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase {
	float Value; // 0x08(0x04)
	struct FLinearColor Result; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float C; // 0x10(0x04)
	float AlphaAngle; // 0x14(0x04)
	float BetaAngle; // 0x18(0x04)
	float GammaAngle; // 0x1c(0x04)
	bool bValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float IfTrue; // 0x0c(0x04)
	float IfFalse; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Tolerance; // 0x10(0x04)
	bool Result; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Tolerance; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float SourceMinimum; // 0x0c(0x04)
	float SourceMaximum; // 0x10(0x04)
	float TargetMinimum; // 0x14(0x04)
	float TargetMaximum; // 0x18(0x04)
	bool bClamp; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float T; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatToInt
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathIntBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathIntBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntLess
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Minimum; // 0x0c(0x04)
	int32_t Maximum; // 0x10(0x04)
	int32_t Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntToFloat
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase {
	enum class EControlRigRotationOrder RotationOrder; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Quaternion; // 0x10(0x10)
	enum class EAxis Axis; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Result; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector Vector; // 0x20(0x0c)
	struct FVector Result; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float Result; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FQuat IfTrue; // 0x10(0x10)
	struct FQuat IfFalse; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float T; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Result; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	struct FRotator Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	enum class EControlRigRotationOrder RotationOrder; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Result; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	float Scale; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	struct FVector Axis; // 0x20(0x0c)
	float Angle; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase {
	struct FRotator Rotator; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase {
	struct FVector Euler; // 0x08(0x0c)
	enum class EControlRigRotationOrder RotationOrder; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase {
	struct FVector Axis; // 0x08(0x0c)
	float Angle; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase {
	struct FVector Input; // 0x08(0x0c)
	enum class ERBFVectorDistanceType DistanceFunction; // 0x14(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float SmoothingRadius; // 0x18(0x04)
	bool bNormalizeOutput; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x20(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_MathRBFInterpolateVectorWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// Size: 0xf0 (Inherited: 0xb0)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets; // 0xb0(0x10)
	struct FTransform Output; // 0xc0(0x30)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateVectorXform_Target {
	struct FVector Target; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Value; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// Size: 0xd0 (Inherited: 0xb0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets; // 0xb0(0x10)
	struct FQuat Output; // 0xc0(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateVectorQuat_Target {
	struct FVector Target; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Value; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// Size: 0xd0 (Inherited: 0xb0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets; // 0xb0(0x10)
	struct FLinearColor Output; // 0xc0(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
// Size: 0x1c (Inherited: 0x00)
struct FMathRBFInterpolateVectorColor_Target {
	struct FVector Target; // 0x00(0x0c)
	struct FLinearColor Value; // 0x0c(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// Size: 0xd0 (Inherited: 0xb0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets; // 0xb0(0x10)
	struct FVector Output; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
// Size: 0x18 (Inherited: 0x00)
struct FMathRBFInterpolateVectorVector_Target {
	struct FVector Target; // 0x00(0x0c)
	struct FVector Value; // 0x0c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// Size: 0xd0 (Inherited: 0xb0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets; // 0xb0(0x10)
	float Output; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
// Size: 0x10 (Inherited: 0x00)
struct FMathRBFInterpolateVectorFloat_Target {
	struct FVector Target; // 0x00(0x0c)
	float Value; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x10)
	enum class ERBFQuatDistanceType DistanceFunction; // 0x20(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float SmoothingAngle; // 0x24(0x04)
	bool bNormalizeOutput; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector TwistAxis; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x40(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_MathRBFInterpolateQuatWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// Size: 0x110 (Inherited: 0xd0)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets; // 0xd0(0x10)
	struct FTransform Output; // 0xe0(0x30)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateQuatXform_Target {
	struct FQuat Target; // 0x00(0x10)
	struct FTransform Value; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// Size: 0xf0 (Inherited: 0xd0)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets; // 0xd0(0x10)
	struct FQuat Output; // 0xe0(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateQuatQuat_Target {
	struct FQuat Target; // 0x00(0x10)
	struct FQuat Value; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// Size: 0xf0 (Inherited: 0xd0)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets; // 0xd0(0x10)
	struct FLinearColor Output; // 0xe0(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateQuatColor_Target {
	struct FQuat Target; // 0x00(0x10)
	struct FLinearColor Value; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// Size: 0xf0 (Inherited: 0xd0)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets; // 0xd0(0x10)
	struct FVector Output; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateQuatVector_Target {
	struct FQuat Target; // 0x00(0x10)
	struct FVector Value; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// Size: 0xf0 (Inherited: 0xd0)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets; // 0xd0(0x10)
	float Output; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateQuatFloat_Target {
	struct FQuat Target; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	enum class EAxis Axis; // 0x40(0x01)
	enum class EControlRigClampSpatialMode Type; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float Minimum; // 0x44(0x04)
	float Maximum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Space; // 0x50(0x30)
	bool bDrawDebug; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FLinearColor DebugColor; // 0x84(0x10)
	float DebugThickness; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform Result; // 0xa0(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase {
	struct FVector Location; // 0x08(0x0c)
	struct FVector Rotation; // 0x14(0x0c)
	enum class EControlRigRotationOrder RotationOrder; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Scale; // 0x24(0x0c)
	struct FTransform Transform; // 0x30(0x30)
	struct FEulerTransform EulerTransform; // 0x60(0x24)
	char pad_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Location; // 0x40(0x0c)
	struct FVector Result; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Direction; // 0x40(0x0c)
	struct FVector Result; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransform IfTrue; // 0x10(0x30)
	struct FTransform IfFalse; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	float T; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform Result; // 0x80(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Result; // 0x40(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Local; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Global; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Global; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Local; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0xa0 (Inherited: 0xa0)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase {
	struct FEulerTransform EulerTransform; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Result; // 0x30(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase {
	struct FVector Start; // 0x08(0x0c)
	struct FVector Direction; // 0x14(0x0c)
	struct FVector PlanePoint; // 0x20(0x0c)
	struct FVector PlaneNormal; // 0x2c(0x0c)
	struct FVector Result; // 0x38(0x0c)
	float Distance; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	enum class EAxis Axis; // 0x14(0x01)
	enum class EControlRigClampSpatialMode Type; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float Minimum; // 0x18(0x04)
	float Maximum; // 0x1c(0x04)
	struct FTransform Space; // 0x20(0x30)
	bool bDrawDebug; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FLinearColor DebugColor; // 0x54(0x10)
	float DebugThickness; // 0x64(0x04)
	struct FVector Result; // 0x68(0x0c)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; // 0x08(0x30)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; // 0x08(0x30)
	float T; // 0x38(0x04)
	struct FVector Result; // 0x3c(0x0c)
	struct FVector Tangent; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector Normal; // 0x14(0x0c)
	struct FVector Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float MinimumLength; // 0x14(0x04)
	float MaximumLength; // 0x18(0x04)
	struct FVector Result; // 0x1c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float Length; // 0x14(0x04)
	struct FVector Result; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector Result; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	struct FVector Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector IfTrue; // 0x0c(0x0c)
	struct FVector IfFalse; // 0x18(0x0c)
	struct FVector Result; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	float Tolerance; // 0x20(0x04)
	bool Result; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float Tolerance; // 0x14(0x04)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector SourceMinimum; // 0x14(0x0c)
	struct FVector SourceMaximum; // 0x20(0x0c)
	struct FVector TargetMinimum; // 0x2c(0x0c)
	struct FVector TargetMaximum; // 0x38(0x0c)
	bool bClamp; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FVector Result; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x0c)
	struct FVector B; // 0x14(0x0c)
	float T; // 0x20(0x04)
	struct FVector Result; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	struct FVector Minimum; // 0x14(0x0c)
	struct FVector Maximum; // 0x20(0x0c)
	struct FVector Result; // 0x2c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x0c)
	float Factor; // 0x14(0x04)
	struct FVector Result; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase {
	float Value; // 0x08(0x04)
	struct FVector Result; // 0x0c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x68(0x10)
	float weight; // 0x78(0x04)
	float WeightMinimum; // 0x7c(0x04)
	float WeightMaximum; // 0x80(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData {
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_ModifyBoneTransforms_PerBone {
	struct FName Bone; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x68(0x10)
	float weight; // 0x78(0x04)
	float WeightMinimum; // 0x7c(0x04)
	float WeightMaximum; // 0x80(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FRigUnit_ModifyTransforms_WorkData WorkData; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_PerItem {
	struct FRigElementKey Item; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName RootBone; // 0x68(0x08)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x70(0x10)
	float Precision; // 0x80(0x04)
	bool bPropagateToChildren; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	int32_t MaxIterations; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x90(0x60)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_WorkData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_EndEffector {
	struct FName Bone; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
};

// ScriptStruct ControlRig.RigUnit_NameBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_NameBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_Contains
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_Contains : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x08)
	struct FName Search; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_StartsWith
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_StartsWith : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x08)
	struct FName Start; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_EndsWith
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_EndsWith : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x08)
	struct FName Ending; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_NameReplace
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_NameReplace : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x08)
	struct FName Old; // 0x10(0x08)
	struct FName NEW; // 0x18(0x08)
	struct FName Result; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigUnit_NameTruncate
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_NameTruncate : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	bool FromEnd; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName Remainder; // 0x18(0x08)
	struct FName Chopped; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigUnit_NameConcat
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_NameConcat : FRigUnit_NameBase {
	struct FName A; // 0x08(0x08)
	struct FName B; // 0x10(0x08)
	struct FName Result; // 0x18(0x08)
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_NoiseVector : FRigUnit_MathBase {
	struct FVector Position; // 0x08(0x0c)
	struct FVector Speed; // 0x14(0x0c)
	struct FVector Frequency; // 0x20(0x0c)
	float Minimum; // 0x2c(0x04)
	float Maximum; // 0x30(0x04)
	struct FVector Result; // 0x34(0x0c)
	struct FVector Time; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase {
	float Value; // 0x08(0x04)
	float Speed; // 0x0c(0x04)
	float Frequency; // 0x10(0x04)
	float Minimum; // 0x14(0x04)
	float Maximum; // 0x18(0x04)
	float Result; // 0x1c(0x04)
	float Time; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform OffsetTransform; // 0x80(0x30)
	float weight; // 0xb0(0x04)
	bool bPropagateToChildren; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FCachedRigElement CachedIndex; // 0xb8(0x14)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x160 (Inherited: 0x68)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	struct FRigElementKey Subject; // 0x68(0x0c)
	int32_t ParentIndex; // 0x74(0x04)
	struct FRigElementKeyCollection Parents; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform InitialGlobalTransform; // 0x90(0x30)
	float weight; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform Transform; // 0xd0(0x30)
	bool Switched; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FCachedRigElement CachedSubject; // 0x104(0x14)
	struct FCachedRigElement CachedParent; // 0x118(0x14)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FTransform RelativeOffset; // 0x130(0x30)
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_SimBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable {
	struct TArray<struct FCRSimPoint> Points; // 0x68(0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x78(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x88(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x98(0x10)
	float SimulatedStepsPerSecond; // 0xa8(0x04)
	enum class ECRSimPointIntegrateType IntegratorType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float VerletBlend; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0xb8(0x10)
	bool bLimitLocalPosition; // 0xc8(0x01)
	bool bPropagateToChildren; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	struct FVector PrimaryAimAxis; // 0xcc(0x0c)
	struct FVector SecondaryAimAxis; // 0xd8(0x0c)
	char pad_E4[0xc]; // 0xe4(0x0c)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xf0(0x50)
	struct FCRFourPointBezier Bezier; // 0x140(0x30)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x170(0x88)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88 (Inherited: 0x00)
struct FRigUnit_PointSimulation_WorkData {
	struct FCRSimPointContainer Simulation; // 0x00(0x78)
	struct TArray<struct FCachedRigElement> BoneIndices; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	float CollisionScale; // 0x08(0x04)
	bool bDrawPointsAsSpheres; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_PointSimulation_BoneTarget {
	struct FName Bone; // 0x00(0x08)
	int32_t TranslationPoint; // 0x08(0x04)
	int32_t PrimaryAimPoint; // 0x0c(0x04)
	int32_t SecondaryAimPoint; // 0x10(0x04)
};

// ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_PrepareForExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x60)
};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable {
	int32_t NumberOfMeasurements; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString Prefix; // 0x70(0x10)
	float AccumulatedTime; // 0x80(0x04)
	int32_t MeasurementsLeft; // 0x84(0x04)
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x0c)
	bool bChildInitial; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRigElementKey OldParent; // 0x18(0x0c)
	bool bOldParentInitial; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FRigElementKey NewParent; // 0x28(0x0c)
	bool bNewParentInitial; // 0x34(0x01)
	char pad_35[0xb]; // 0x35(0x0b)
	struct FTransform Transform; // 0x40(0x30)
	struct FCachedRigElement CachedChild; // 0x70(0x14)
	struct FCachedRigElement CachedOldParent; // 0x84(0x14)
	struct FCachedRigElement CachedNewParent; // 0x98(0x14)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_PropagateTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	bool bRecomputeGlobal; // 0x74(0x01)
	bool bApplyToChildren; // 0x75(0x01)
	bool bRecursive; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	struct FCachedRigElement CachedIndex; // 0x78(0x14)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_QuaternionToAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FQuat Argument; // 0x20(0x10)
	float Angle; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x0c)
	float Angle; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x10)
	struct FVector Axis; // 0x20(0x0c)
	float Angle; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument0; // 0x10(0x10)
	struct FQuat Argument1; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_RandomVector : FRigUnit_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	struct FVector Result; // 0x18(0x0c)
	struct FVector LastResult; // 0x24(0x0c)
	int32_t LastSeed; // 0x30(0x04)
	float TimeLeft; // 0x34(0x04)
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_RandomFloat : FRigUnit_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	float Result; // 0x18(0x04)
	float LastResult; // 0x1c(0x04)
	int32_t LastSeed; // 0x20(0x04)
	float TimeLeft; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x80 (Inherited: 0x68)
struct FRigUnit_SendEvent : FRigUnitMutable {
	enum class ERigEvent Event; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FRigElementKey Item; // 0x6c(0x0c)
	float OffsetInSeconds; // 0x78(0x04)
	bool bEnable; // 0x7c(0x01)
	bool bOnlyDuringInteraction; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0x1e8 (Inherited: 0x08)
struct FRigUnit_SequenceExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x60)
	struct FControlRigExecuteContext A; // 0x68(0x60)
	struct FControlRigExecuteContext B; // 0xc8(0x60)
	struct FControlRigExecuteContext C; // 0x128(0x60)
	struct FControlRigExecuteContext D; // 0x188(0x60)
};

// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xa0(0x30)
	enum class EBoneGetterSetterMode Space; // 0xd0(0x01)
	bool bPropagateToChildren; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	struct FCachedRigElement CachedBone; // 0xd4(0x14)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FQuat Rotation; // 0x70(0x10)
	enum class EBoneGetterSetterMode Space; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float weight; // 0x84(0x04)
	bool bPropagateToChildren; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FCachedRigElement CachedBone; // 0x8c(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xa0(0x30)
	enum class EBoneGetterSetterMode Space; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float weight; // 0xd4(0x04)
	bool bPropagateToChildren; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FCachedRigElement CachedBone; // 0xdc(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FVector Translation; // 0x70(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float weight; // 0x80(0x04)
	bool bPropagateToChildren; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FCachedRigElement CachedBone; // 0x88(0x14)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlColor : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	struct FLinearColor Color; // 0x70(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0xc0 (Inherited: 0x68)
struct FRigUnit_SetControlOffset : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	struct FTransform Offset; // 0x70(0x30)
	enum class EBoneGetterSetterMode Space; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FCachedRigElement CachedControlIndex; // 0xa4(0x14)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_SetControlTransform : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float weight; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform Transform; // 0x80(0x30)
	enum class EBoneGetterSetterMode Space; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FCachedRigElement CachedControlIndex; // 0xb4(0x14)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x68(0x10)
	float weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x18 (Inherited: 0x00)
struct FRigUnit_SetMultiControlRotator_Entry {
	struct FName Control; // 0x00(0x08)
	struct FRotator Rotator; // 0x08(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlRotator : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float weight; // 0x70(0x04)
	struct FRotator Rotator; // 0x74(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x84(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlVector : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float weight; // 0x70(0x04)
	struct FVector Vector; // 0x74(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x84(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x68(0x10)
	float weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_SetMultiControlVector2D_Entry {
	struct FName Control; // 0x00(0x08)
	struct FVector2D Vector; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float weight; // 0x70(0x04)
	struct FVector2D Vector; // 0x74(0x08)
	struct FCachedRigElement CachedControlIndex; // 0x7c(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x68(0x10)
	float weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_SetMultiControlInteger_Entry {
	struct FName Control; // 0x00(0x08)
	int32_t IntegerValue; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlInteger : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	int32_t weight; // 0x70(0x04)
	int32_t IntegerValue; // 0x74(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x78(0x14)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x68(0x10)
	float weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_SetMultiControlFloat_Entry {
	struct FName Control; // 0x00(0x08)
	float FloatValue; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlFloat : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	float weight; // 0x70(0x04)
	float FloatValue; // 0x74(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x78(0x14)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries; // 0x68(0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_SetMultiControlBool_Entry {
	struct FName Control; // 0x00(0x08)
	bool BoolValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetControlBool : FRigUnitMutable {
	struct FName Control; // 0x68(0x08)
	bool BoolValue; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x74(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString Pattern; // 0x78(0x10)
	bool bVisible; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x90(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetCurveValue : FRigUnitMutable {
	struct FName Curve; // 0x68(0x08)
	float Value; // 0x70(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x74(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0xe0 (Inherited: 0x68)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	struct FName Bone; // 0x68(0x08)
	struct FName Space; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform Transform; // 0x80(0x30)
	float weight; // 0xb0(0x04)
	bool bPropagateToChildren; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FCachedRigElement CachedBone; // 0xb8(0x14)
	struct FCachedRigElement CachedSpaceIndex; // 0xcc(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x68(0x0c)
	struct FRigElementKey Parent; // 0x74(0x0c)
	bool bParentInitial; // 0x80(0x01)
	char pad_81[0xf]; // 0x81(0x0f)
	struct FTransform RelativeTransform; // 0x90(0x30)
	float weight; // 0xc0(0x04)
	bool bPropagateToChildren; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FCachedRigElement CachedChild; // 0xc8(0x14)
	struct FCachedRigElement CachedParent; // 0xdc(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0xf0 (Inherited: 0x68)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	struct FName SpaceName; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xa0(0x30)
	enum class EBoneGetterSetterMode Space; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FCachedRigElement CachedSpaceIndex; // 0xd4(0x14)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	struct FName Space; // 0x68(0x08)
	float weight; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform Transform; // 0x80(0x30)
	enum class EBoneGetterSetterMode SpaceType; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FCachedRigElement CachedSpaceIndex; // 0xb4(0x14)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_SetScale : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector Scale; // 0x78(0x0c)
	float weight; // 0x84(0x04)
	bool bPropagateToChildren; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FCachedRigElement CachedIndex; // 0x8c(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0xb0 (Inherited: 0x68)
struct FRigUnit_SetRotation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
	struct FQuat Rotation; // 0x80(0x10)
	float weight; // 0x90(0x04)
	bool bPropagateToChildren; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FCachedRigElement CachedIndex; // 0x98(0x14)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0xa0 (Inherited: 0x68)
struct FRigUnit_SetTranslation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector Translation; // 0x78(0x0c)
	float weight; // 0x84(0x04)
	bool bPropagateToChildren; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FCachedRigElement CachedIndex; // 0x8c(0x14)
};

// ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_SetTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	enum class EBoneGetterSetterMode Space; // 0x74(0x01)
	bool bInitial; // 0x75(0x01)
	char pad_76[0xa]; // 0x76(0x0a)
	struct FTransform Transform; // 0x80(0x30)
	float weight; // 0xb0(0x04)
	bool bPropagateToChildren; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FCachedRigElement CachedIndex; // 0xb8(0x14)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0xc8 (Inherited: 0x68)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	float SlideAmount; // 0x78(0x04)
	bool bPropagateToChildren; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x80(0x48)
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_SlideChain_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> ItemSegments; // 0x08(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x18(0x10)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0xc8 (Inherited: 0x68)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	float SlideAmount; // 0x78(0x04)
	bool bPropagateToChildren; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x80(0x48)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x1d0 (Inherited: 0x68)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	float HierarchyStrength; // 0x78(0x04)
	float EffectorStrength; // 0x7c(0x04)
	float EffectorRatio; // 0x80(0x04)
	float RootStrength; // 0x84(0x04)
	float RootRatio; // 0x88(0x04)
	float Damping; // 0x8c(0x04)
	struct FVector PoleVector; // 0x90(0x0c)
	bool bFlipPolePlane; // 0x9c(0x01)
	enum class EControlRigVectorKind PoleVectorKind; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	struct FName PoleVectorSpace; // 0xa0(0x08)
	struct FVector PrimaryAxis; // 0xa8(0x0c)
	struct FVector SecondaryAxis; // 0xb4(0x0c)
	bool bLiveSimulation; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t iterations; // 0xc4(0x04)
	bool bLimitLocalPosition; // 0xc8(0x01)
	bool bPropagateToChildren; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xd0(0x50)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0x120(0xb0)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xb0 (Inherited: 0x00)
struct FRigUnit_SpringIK_WorkData {
	struct TArray<struct FCachedRigElement> CachedBones; // 0x00(0x10)
	struct FCachedRigElement CachedPoleVector; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct FCRSimPointContainer Simulation; // 0x38(0x78)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// ScriptStruct ControlRig.RigUnit_SecondsToFrames
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase {
	float Seconds; // 0x08(0x04)
	float Frames; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_FramesToSeconds
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase {
	float Frames; // 0x08(0x04)
	float Seconds; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Timeline : FRigUnit_SimBase {
	float Speed; // 0x08(0x04)
	float Time; // 0x0c(0x04)
	float AccumulatedValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	float SecondsAgo; // 0x40(0x04)
	int32_t BufferSize; // 0x44(0x04)
	float TimeRange; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	struct TArray<float> DeltaTimes; // 0x90(0x10)
	int32_t LastInsertIndex; // 0xa0(0x04)
	int32_t UpperBound; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x0c)
	float SecondsAgo; // 0x14(0x04)
	int32_t BufferSize; // 0x18(0x04)
	float TimeRange; // 0x1c(0x04)
	struct FVector Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> Buffer; // 0x30(0x10)
	struct TArray<float> DeltaTimes; // 0x40(0x10)
	int32_t LastInsertIndex; // 0x50(0x04)
	int32_t UpperBound; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float SecondsAgo; // 0x0c(0x04)
	int32_t BufferSize; // 0x10(0x04)
	float TimeRange; // 0x14(0x04)
	float Result; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> Buffer; // 0x20(0x10)
	struct TArray<float> DeltaTimes; // 0x30(0x10)
	int32_t LastInsertIndex; // 0x40(0x04)
	int32_t UpperBound; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_BinaryTransformOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Argument0; // 0x10(0x30)
	struct FTransform Argument1; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0xa0 (Inherited: 0xa0)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0xa0 (Inherited: 0xa0)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x68(0x0c)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FRigElementKey BaseItem; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FConstraintTarget> Targets; // 0xc0(0x10)
	bool bUseInitialTransforms; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xd8(0x60)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_TransformConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
};

// ScriptStruct ControlRig.ConstraintTarget
// Size: 0x40 (Inherited: 0x00)
struct FConstraintTarget {
	struct FTransform Transform; // 0x00(0x30)
	float weight; // 0x30(0x04)
	bool bMaintainOffset; // 0x34(0x01)
	struct FTransformFilter Filter; // 0x35(0x09)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x130 (Inherited: 0x68)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	struct FName Bone; // 0x68(0x08)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FName BaseBone; // 0xb0(0x08)
	struct TArray<struct FConstraintTarget> Targets; // 0xb8(0x10)
	bool bUseInitialTransforms; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct FVector TwistAxis; // 0x78(0x0c)
	struct FVector PoleAxis; // 0x84(0x0c)
	enum class EControlRigAnimEasingType TwistEaseType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float weight; // 0x94(0x04)
	bool bPropagateToChildren; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0xa0(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_TwistBones_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<float> ItemRatios; // 0x10(0x10)
	struct TArray<struct FTransform> ItemTransforms; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0xd0 (Inherited: 0x68)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x68(0x08)
	struct FName EndBone; // 0x70(0x08)
	struct FVector TwistAxis; // 0x78(0x0c)
	struct FVector PoleAxis; // 0x84(0x0c)
	enum class EControlRigAnimEasingType TwistEaseType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float weight; // 0x94(0x04)
	bool bPropagateToChildren; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0xa0(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x220 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	struct FName StartJoint; // 0x68(0x08)
	struct FName EndJoint; // 0x70(0x08)
	struct FVector PoleTarget; // 0x78(0x0c)
	float Spin; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform EndEffector; // 0x90(0x30)
	float IKBlend; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform StartJointFKTransform; // 0xd0(0x30)
	struct FTransform MidJointFKTransform; // 0x100(0x30)
	struct FTransform EndJointFKTransform; // 0x130(0x30)
	float PreviousFKIKBlend; // 0x160(0x04)
	char pad_164[0xc]; // 0x164(0x0c)
	struct FTransform StartJointIKTransform; // 0x170(0x30)
	struct FTransform MidJointIKTransform; // 0x1a0(0x30)
	struct FTransform EndJointIKTransform; // 0x1d0(0x30)
	int32_t StartJointIndex; // 0x200(0x04)
	int32_t MidJointIndex; // 0x204(0x04)
	int32_t EndJointIndex; // 0x208(0x04)
	float UpperLimbLength; // 0x20c(0x04)
	float LowerLimbLength; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Root; // 0x10(0x30)
	struct FVector PoleVector; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Effector; // 0x50(0x30)
	struct FVector PrimaryAxis; // 0x80(0x0c)
	struct FVector SecondaryAxis; // 0x8c(0x0c)
	float SecondaryAxisWeight; // 0x98(0x04)
	bool bEnableStretch; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float StretchStartRatio; // 0xa0(0x04)
	float StretchMaximumRatio; // 0xa4(0x04)
	float BoneALength; // 0xa8(0x04)
	float BoneBLength; // 0xac(0x04)
	struct FTransform Elbow; // 0xb0(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	struct FVector Root; // 0x08(0x0c)
	struct FVector PoleVector; // 0x14(0x0c)
	struct FVector Effector; // 0x20(0x0c)
	bool bEnableStretch; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float StretchStartRatio; // 0x30(0x04)
	float StretchMaximumRatio; // 0x34(0x04)
	float BoneALength; // 0x38(0x04)
	float BoneBLength; // 0x3c(0x04)
	struct FVector Elbow; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x1b0 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ItemA; // 0x68(0x0c)
	struct FRigElementKey ItemB; // 0x74(0x0c)
	struct FRigElementKey EffectorItem; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FTransform Effector; // 0x90(0x30)
	struct FVector PrimaryAxis; // 0xc0(0x0c)
	struct FVector SecondaryAxis; // 0xcc(0x0c)
	float SecondaryAxisWeight; // 0xd8(0x04)
	struct FVector PoleVector; // 0xdc(0x0c)
	enum class EControlRigVectorKind PoleVectorKind; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FRigElementKey PoleVectorSpace; // 0xec(0x0c)
	bool bEnableStretch; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float StretchStartRatio; // 0xfc(0x04)
	float StretchMaximumRatio; // 0x100(0x04)
	float weight; // 0x104(0x04)
	float ItemALength; // 0x108(0x04)
	float ItemBLength; // 0x10c(0x04)
	bool bPropagateToChildren; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x120(0x40)
	struct FCachedRigElement CachedItemAIndex; // 0x160(0x14)
	struct FCachedRigElement CachedItemBIndex; // 0x174(0x14)
	struct FCachedRigElement CachedEffectorItemIndex; // 0x188(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x19c(0x14)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x190 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	struct FName BoneA; // 0x68(0x08)
	struct FName BoneB; // 0x70(0x08)
	struct FName EffectorBone; // 0x78(0x08)
	struct FTransform Effector; // 0x80(0x30)
	struct FVector PrimaryAxis; // 0xb0(0x0c)
	struct FVector SecondaryAxis; // 0xbc(0x0c)
	float SecondaryAxisWeight; // 0xc8(0x04)
	struct FVector PoleVector; // 0xcc(0x0c)
	enum class EControlRigVectorKind PoleVectorKind; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FName PoleVectorSpace; // 0xdc(0x08)
	bool bEnableStretch; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float StretchStartRatio; // 0xe8(0x04)
	float StretchMaximumRatio; // 0xec(0x04)
	float weight; // 0xf0(0x04)
	float BoneALength; // 0xf4(0x04)
	float BoneBLength; // 0xf8(0x04)
	bool bPropagateToChildren; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x100(0x40)
	struct FCachedRigElement CachedBoneAIndex; // 0x140(0x14)
	struct FCachedRigElement CachedBoneBIndex; // 0x154(0x14)
	struct FCachedRigElement CachedEffectorBoneIndex; // 0x168(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x17c(0x14)
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_Distance_VectorVector : FRigUnit {
	struct FVector Argument0; // 0x08(0x0c)
	struct FVector Argument1; // 0x14(0x0c)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_BinaryVectorOp : FRigUnit {
	struct FVector Argument0; // 0x08(0x0c)
	struct FVector Argument1; // 0x14(0x0c)
	struct FVector Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase {
	struct FVector Target; // 0x08(0x0c)
	float Strength; // 0x14(0x04)
	float Damp; // 0x18(0x04)
	float Blend; // 0x1c(0x04)
	struct FVector Position; // 0x20(0x0c)
	struct FVector Velocity; // 0x2c(0x0c)
	struct FVector Acceleration; // 0x38(0x0c)
	struct FCRSimPoint Point; // 0x44(0x28)
	bool bInitialized; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Thickness; // 0x44(0x04)
	float Scale; // 0x48(0x04)
	struct FRigElementKey Space; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x30)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Thickness; // 0x44(0x04)
	float Scale; // 0x48(0x04)
	struct FName BoneSpace; // 0x4c(0x08)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Thickness; // 0x24(0x04)
	float Scale; // 0x28(0x04)
	struct FRigElementKey Space; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Thickness; // 0x24(0x04)
	float Scale; // 0x28(0x04)
	struct FName BoneSpace; // 0x2c(0x08)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x0c)
	bool bEnabled; // 0x14(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float Scale; // 0x2c(0x04)
	struct FRigElementKey Space; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x0c)
	bool bEnabled; // 0x14(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float Scale; // 0x2c(0x04)
	struct FName BoneSpace; // 0x30(0x08)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_SphereTraceWorld : FRigUnit {
	struct FVector Start; // 0x08(0x0c)
	struct FVector End; // 0x14(0x0c)
	enum class ECollisionChannel Channel; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Radius; // 0x24(0x04)
	bool bHit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector HitLocation; // 0x2c(0x0c)
	struct FVector HitNormal; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Rotation; // 0x10(0x10)
	struct FQuat Global; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Rotation; // 0x10(0x10)
	struct FQuat World; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Location : FRigUnit {
	struct FVector Location; // 0x08(0x0c)
	struct FVector Global; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	struct FVector Location; // 0x08(0x0c)
	struct FVector World; // 0x14(0x0c)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform Global; // 0x40(0x30)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform World; // 0x40(0x30)
};

// ScriptStruct ControlRig.StructReference
// Size: 0x08 (Inherited: 0x00)
struct FStructReference {
	char pad_0[0x8]; // 0x00(0x08)
};

