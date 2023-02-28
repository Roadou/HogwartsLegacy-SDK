// Enum CameraStack.ECameraStackBehaviorFilterFlags
enum class ECameraStackBehaviorFilterFlags : uint8 {
	DontListInactiveBehaviors = 0,
	ListBehaviorsAboveCoreBehaviors = 1,
	ECameraStackBehaviorFilterFlags_MAX = 2
};

// Enum CameraStack.ECameraStackBehaviorSorting
enum class ECameraStackBehaviorSorting : uint8 {
	Oldest = 0,
	Newest = 1,
	Bottommost = 2,
	Topmost = 3,
	ECameraStackBehaviorSorting_MAX = 4
};

// Enum CameraStack.ECameraStackAnimationFrame
enum class ECameraStackAnimationFrame : uint8 {
	World = 0,
	RelativeToTarget = 1,
	RelativeToTargetInitialTransform = 2,
	RelativeToTargetWorldRotation = 3,
	RelativeToCameraYaw = 4,
	RelativeToCameraRotation = 5,
	Additive = 6,
	RelativeToSecondaryTarget = 7,
	ECameraStackAnimationFrame_MAX = 8
};

// Enum CameraStack.ECameraStackAnimationLoopMode
enum class ECameraStackAnimationLoopMode : uint8 {
	Loop = 0,
	Remove = 1,
	Pause = 2,
	ECameraStackAnimationLoopMode_MAX = 3
};

// Enum CameraStack.ELastCameraInput
enum class ELastCameraInput : uint8 {
	None = 0,
	Look = 1,
	MouseLook = 2,
	Tilt = 3,
	ELastCameraInput_MAX = 4
};

// Enum CameraStack.ECameraStackLookAtStrength
enum class ECameraStackLookAtStrength : uint8 {
	None = 0,
	SoftPitchHint = 1,
	SoftHint = 2,
	Strong = 3,
	StrongOverTheShoulder = 4,
	PlayerInitiated = 5,
	NUM = 6,
	ECameraStackLookAtStrength_MAX = 7
};

// Enum CameraStack.ECameraStackOperationInsertLocation
enum class ECameraStackOperationInsertLocation : uint8 {
	TopOfStack = 0,
	TopOfBaseStack = 1,
	BeforeBehavior = 2,
	AfterBehavior = 3,
	ECameraStackOperationInsertLocation_MAX = 4
};

// Enum CameraStack.ECameraStackSplineType
enum class ECameraStackSplineType : uint8 {
	LookAheadSpline = 0,
	RailCameraSpline = 1,
	RailTargetSpline = 2,
	None = 3,
	ECameraStackSplineType_MAX = 4
};

// Enum CameraStack.ECameraStackVolumeOperation
enum class ECameraStackVolumeOperation : uint8 {
	AddOnTop = 0,
	InsertBefore = 1,
	InsertAfter = 2,
	Replace = 3,
	ECameraStackVolumeOperation_MAX = 4
};

// Enum CameraStack.ECameraStackResetType
enum class ECameraStackResetType : uint8 {
	NoReset = 0,
	FullReset = 1,
	CurrentCameraDirection = 2,
	CurrentCameraYawAndDefaultPitch = 3,
	LookAtLocation = 4,
	FixedArmRotation = 5,
	FullResetWithOffset = 6,
	ECameraStackResetType_MAX = 7
};

// ScriptStruct CameraStack.ScalarValueVelocity
// Size: 0x10 (Inherited: 0x00)
struct FScalarValueVelocity {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct CameraStack.AngularValueVelocity
// Size: 0x10 (Inherited: 0x10)
struct FAngularValueVelocity : FScalarValueVelocity {
};

// ScriptStruct CameraStack.CameraComponentPropertyPair
// Size: 0x08 (Inherited: 0x00)
struct FCameraComponentPropertyPair {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CameraStack.CameraData
// Size: 0xb0 (Inherited: 0x00)
struct FCameraData {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct CameraStack.CameraDefaultData
// Size: 0x0c (Inherited: 0x00)
struct FCameraDefaultData {
	float FieldOfView; // 0x00(0x04)
	float FocusDistance; // 0x04(0x04)
	float Aperture; // 0x08(0x04)
};

// ScriptStruct CameraStack.CameraInputMappings
// Size: 0x98 (Inherited: 0x00)
struct FCameraInputMappings {
	struct FName WalkX; // 0x00(0x08)
	struct FName WalkY; // 0x08(0x08)
	struct FName LookX; // 0x10(0x08)
	struct FName LookY; // 0x18(0x08)
	struct FName MouseLookX; // 0x20(0x08)
	struct FName MouseLookY; // 0x28(0x08)
	struct FName TiltX; // 0x30(0x08)
	struct FName TiltY; // 0x38(0x08)
	struct FName RollCW; // 0x40(0x08)
	struct FName RollCCW; // 0x48(0x08)
	struct FName Dolly; // 0x50(0x08)
	struct FName Truck; // 0x58(0x08)
	struct FName PedestalUp; // 0x60(0x08)
	struct FName PedestalDown; // 0x68(0x08)
	struct FName ZoomIn; // 0x70(0x08)
	struct FName ZoomOut; // 0x78(0x08)
	struct FName FocusDistanceIncrease; // 0x80(0x08)
	struct FName FocusDistanceDecrease; // 0x88(0x08)
	struct FName QuickTurn; // 0x90(0x08)
};

// ScriptStruct CameraStack.CameraOptionMappings
// Size: 0xa0 (Inherited: 0x00)
struct FCameraOptionMappings {
	struct TSet<struct FName> Names; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
};

// ScriptStruct CameraStack.CameraOptionName
// Size: 0x08 (Inherited: 0x00)
struct FCameraOptionName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct CameraStack.CameraStackActorBehaviorTreePair
// Size: 0x10 (Inherited: 0x00)
struct FCameraStackActorBehaviorTreePair {
	struct UBehaviorTreeComponent* BTComponent; // 0x00(0x08)
	struct UBlackboardComponent* BBComponent; // 0x08(0x08)
};

// ScriptStruct CameraStack.CameraStackAnimationRequest
// Size: 0x20 (Inherited: 0x00)
struct FCameraStackAnimationRequest {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct CameraStack.CameraStackAnimData
// Size: 0x150 (Inherited: 0x00)
struct FCameraStackAnimData {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RootOffsetTransform; // 0x10(0x30)
	struct FName EyeBoneName; // 0x40(0x08)
	struct FName TargetBoneName; // 0x48(0x08)
	struct FName SecondaryTargetBoneName; // 0x50(0x08)
	struct FName FocusDistanceCurveName; // 0x58(0x08)
	struct FName EnableDynamicFocusDistanceCurveName; // 0x60(0x08)
	struct FName DynamicFocusDistanceBlendCurveName; // 0x68(0x08)
	struct FName ApertureCurveName; // 0x70(0x08)
	struct FName FocalLengthCurveName; // 0x78(0x08)
	struct FName TargetFramingCurveName; // 0x80(0x08)
	struct FName TargetPositioningCurveName; // 0x88(0x08)
	char pad_90[0xc0]; // 0x90(0xc0)
};

// ScriptStruct CameraStack.CameraCrossBlendBehaviorGroup
// Size: 0x48 (Inherited: 0x00)
struct FCameraCrossBlendBehaviorGroup {
	struct TArray<struct UCameraStackBehavior*> Behaviors; // 0x00(0x10)
	char pad_10[0x38]; // 0x10(0x38)
};

// ScriptStruct CameraStack.CameraStackMultiCrossBlendGroupTemplate
// Size: 0x10 (Inherited: 0x00)
struct FCameraStackMultiCrossBlendGroupTemplate {
	struct TArray<struct UCameraStackBehavior*> BehaviorTemplates; // 0x00(0x10)
};

// ScriptStruct CameraStack.CameraPreUpdateTickFunction
// Size: 0x48 (Inherited: 0x40)
struct FCameraPreUpdateTickFunction : FTickFunction {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct CameraStack.CameraStackData
// Size: 0x18 (Inherited: 0x00)
struct FCameraStackData {
	struct UCameraStackBehaviorCore* CoreBehavior; // 0x00(0x08)
	struct TArray<struct UCameraStackBehavior*> Behaviors; // 0x08(0x10)
};

// ScriptStruct CameraStack.CameraStackVolumeInfluence
// Size: 0x28 (Inherited: 0x00)
struct FCameraStackVolumeInfluence {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	struct UCameraStackBehavior* Behavior; // 0x08(0x08)
	struct UCameraStackBehaviorInfluenceCrossBlend* CrossBlendBehavior; // 0x10(0x08)
	struct UCameraStackBehavior* ExistingBehavior; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct CameraStack.CameraStackVolumeInterfaceProperties
// Size: 0x18 (Inherited: 0x00)
struct FCameraStackVolumeInterfaceProperties {
	struct UCameraStackVolumePreset* VolumePreset; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	float weight; // 0x0c(0x04)
	float BlendRadius; // 0x10(0x04)
	float MaxCrossBlendSpeed; // 0x14(0x04)
};

// ScriptStruct CameraStack.CameraStackVolumeOperationSettings
// Size: 0x18 (Inherited: 0x00)
struct FCameraStackVolumeOperationSettings {
	struct UCameraStackBehavior* BehaviorToAdd; // 0x00(0x08)
	enum class ECameraStackVolumeOperation Operation; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UCameraStackBehavior* ExistingBehaviorClass; // 0x10(0x08)
};

// ScriptStruct CameraStack.OptionalTriplet
// Size: 0x18 (Inherited: 0x00)
struct FOptionalTriplet {
	bool bValidA; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ValueA; // 0x04(0x04)
	bool bValidB; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ValueB; // 0x0c(0x04)
	bool bValidC; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ValueC; // 0x14(0x04)
};

// ScriptStruct CameraStack.QuatValueVelocity
// Size: 0x20 (Inherited: 0x00)
struct FQuatValueVelocity {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct CameraStack.RotatorValueVelocity
// Size: 0x18 (Inherited: 0x00)
struct FRotatorValueVelocity {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CameraStack.VectorValueVelocity
// Size: 0x18 (Inherited: 0x00)
struct FVectorValueVelocity {
	char pad_0[0x18]; // 0x00(0x18)
};

