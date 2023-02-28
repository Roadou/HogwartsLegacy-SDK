// Enum Ambulatory.ETargetID
enum class ETargetID : uint8 {
	None = 0,
	LowestPriority = 1,
	AimModeFace = 2,
	LockOnTarget = 3,
	FocusTriggerOpenWorld = 4,
	FocusTriggerOtherNPC = 5,
	FocusTriggerPlayer = 6,
	FocusTriggerWorldEvent = 7,
	LookAtDesiredDirection = 8,
	LookAtInteractTargetsBlip = 9,
	LookAtAutoTargets = 10,
	LookAtInteractTargets = 11,
	LookAtTargetsOfInterest = 12,
	LookAtDanger = 13,
	TargetOfInterest = 14,
	TemporaryTarget = 15,
	ImpactTarget = 16,
	LootTarget = 17,
	AimMode = 18,
	ChannelSpell = 19,
	ConjureSpell = 20,
	ProtegoTarget = 21,
	HighPriority = 22,
	HighestPriority = 23,
	ETargetID_MAX = 24
};

// Enum Ambulatory.ETargetType
enum class ETargetType : uint8 {
	None = 0,
	Actor = 1,
	Location = 2,
	Camera = 3,
	DesiredDirection = 4,
	StaticDirection = 5,
	Custom = 6,
	ETargetType_MAX = 7
};

// Enum Ambulatory.ETargetSpeedMode
enum class ETargetSpeedMode : uint8 {
	None = 0,
	IsIdling = 1,
	IsSlowWalking = 2,
	IsWalking = 3,
	IsWalkingOnly = 4,
	IsFastWalking = 5,
	IsFastWalkingOnly = 6,
	IsJogging = 7,
	IsJoggingOnly = 8,
	IsSprinting = 9,
	ETargetSpeedMode_MAX = 10
};

// Enum Ambulatory.EStairsState
enum class EStairsState : uint8 {
	None = 0,
	OnStairs = 1,
	OnSlopes = 2,
	EStairsState_MAX = 3
};

// Enum Ambulatory.EWandCastType
enum class EWandCastType : uint8 {
	None = 0,
	LightAttack = 1,
	HeavyAttack = 2,
	MeleeAttack = 3,
	ComboFinisherAttack = 4,
	EWandCastType_MAX = 5
};

// Enum Ambulatory.ELastWandCastState
enum class ELastWandCastState : uint8 {
	None = 0,
	Base = 1,
	FromLeft = 2,
	FromRight = 3,
	Transition = 4,
	LeftFoot = 5,
	LeftFoot_Transition = 6,
	ELastWandCastState_MAX = 7
};

// Enum Ambulatory.EPreWandCastState
enum class EPreWandCastState : uint8 {
	None = 0,
	FromLeft = 1,
	FromRight = 2,
	EPreWandCastState_MAX = 3
};

// Enum Ambulatory.EClimbingLedgeState
enum class EClimbingLedgeState : uint8 {
	None = 0,
	ClimbingLedge_StepUp = 1,
	ClimbingLedge_HalfM = 2,
	ClimbingLedge_1M = 3,
	ClimbingLedge_2M = 4,
	ClimbingLedge_3M = 5,
	ClimbingLedge_LandClimb = 6,
	ClimbingLedge_LandHands = 7,
	ClimbingLedge_LandHands_Outcrop = 8,
	ClimbingLedge_LandWaist = 9,
	ClimbingLedge_LandWaist_Outcrop = 10,
	ClimbingLedge_JumpHands = 11,
	ClimbingLedge_JumpHandsPullUp = 12,
	ClimbingLedge_FallHands = 13,
	ClimbingLedge_Leapfrog = 14,
	ClimbingLedge_Swim = 15,
	NUM = 16,
	EClimbingLedgeState_MAX = 17
};

// Enum Ambulatory.EClimbingLadderState
enum class EClimbingLadderState : uint8 {
	None = 0,
	Mount = 1,
	MountDown = 2,
	ClimbingLadder = 3,
	DescendingLadder = 4,
	Paused = 5,
	DismountTop = 6,
	DismountBottom = 7,
	MountJump = 8,
	EClimbingLadderState_MAX = 9
};

// Enum Ambulatory.EAnimSpeedType
enum class EAnimSpeedType : uint8 {
	Stopped = 0,
	Undetermined = 1,
	WalkSlow = 2,
	Walk = 3,
	Jog = 4,
	Sprint = 5,
	EAnimSpeedType_MAX = 6
};

// Enum Ambulatory.EAnimMechanicType
enum class EAnimMechanicType : uint8 {
	Undetermined = 0,
	Idle = 1,
	TurnStart = 2,
	MoveFwdLoop = 3,
	TurnStop = 4,
	Pivot = 5,
	ShortStep = 6,
	TurnInPlace = 7,
	StrafeStart = 8,
	StrafeLoop = 9,
	StrafeStop = 10,
	Jump = 11,
	Land = 12,
	EAnimMechanicType_MAX = 13
};

// Enum Ambulatory.ELandingType
enum class ELandingType : uint8 {
	None = 0,
	IdleLand = 1,
	WalkingLand = 2,
	JoggingLand = 3,
	SprintingLand = 4,
	LadderSlideLand = 5,
	LadderJumpBottomLand = 6,
	ELandingType_MAX = 7
};

// Enum Ambulatory.EJumpingType
enum class EJumpingType : uint8 {
	None = 0,
	IdleJump = 1,
	WalkingJump = 2,
	JoggingJump = 3,
	SprintingJump = 4,
	Falling = 5,
	Dropping = 6,
	ClimbFail = 7,
	JumpVault = 8,
	JumpLedge2Vault = 9,
	LadderSlide = 10,
	LadderJumpBottom = 11,
	Buttslide = 12,
	SwimDive = 13,
	SwimHighDive = 14,
	JogJumpDown = 15,
	SprintJumpDown = 16,
	EJumpingType_MAX = 17
};

// Enum Ambulatory.EMobilityActionState
enum class EMobilityActionState : uint8 {
	IsIdle = 0,
	IsWalking = 1,
	IsJogging = 2,
	IsSprinting = 3,
	IsJumping = 4,
	IsFalling = 5,
	IsSideStepping = 6,
	EMobilityActionState_MAX = 7
};

// Enum Ambulatory.EMobilityModeState
enum class EMobilityModeState : uint8 {
	Invalid = 0,
	FreeRoam = 1,
	FreeRoamCombat = 2,
	Strafe = 3,
	StrafeCombat = 4,
	Crawling = 5,
	StrafeCombatAttack = 6,
	StrafeCombatAttack2 = 7,
	StrafeCombatAttack3 = 8,
	Combat = 9,
	Num_MobilityModes = 10,
	EMobilityModeState_MAX = 11
};

// Enum Ambulatory.EStairsOrientationState
enum class EStairsOrientationState : uint8 {
	None = 0,
	StairsLeft = 1,
	StairsRight = 2,
	EStairsOrientationState_MAX = 3
};

// Enum Ambulatory.EStairsDirectionState
enum class EStairsDirectionState : uint8 {
	None = 0,
	GoingDown = 1,
	GoingUp = 2,
	EStairsDirectionState_MAX = 3
};

// Enum Ambulatory.EBasicMobilityFootState
enum class EBasicMobilityFootState : uint8 {
	Undetermined = 0,
	Left = 1,
	Right = 2,
	EBasicMobilityFootState_MAX = 3
};

// Enum Ambulatory.ESpeedModifierType
enum class ESpeedModifierType : uint8 {
	None = 0,
	SprintFromButton = 1,
	SprintFromKeyboard = 2,
	ESpeedModifierType_MAX = 3
};

// Enum Ambulatory.ELookAtTargetMode
enum class ELookAtTargetMode : uint8 {
	None = 0,
	TargetLocation = 1,
	TargetActor = 2,
	CameraDirection = 3,
	ELookAtTargetMode_MAX = 4
};

// Enum Ambulatory.EFacingTargetMode
enum class EFacingTargetMode : uint8 {
	None = 0,
	TargetLocation = 1,
	TargetActor = 2,
	CameraDirection = 3,
	EFacingTargetMode_MAX = 4
};

// Enum Ambulatory.ETargetSpeedPriority
enum class ETargetSpeedPriority : uint8 {
	None = 0,
	LowestPriority = 1,
	FromWaterVolume = 2,
	FromMechanic = 3,
	FromReaction = 4,
	FromTrigger = 5,
	HighestPriority = 6,
	ETargetSpeedPriority_MAX = 7
};

// Enum Ambulatory.EMovementSuspensionPriority
enum class EMovementSuspensionPriority : uint8 {
	Lowest = 0,
	SE_RenderShutdown = 1,
	NPC_Shutdown = 2,
	StationEnter = 3,
	BroomFlight = 4,
	PassiveCinematic = 5,
	ActiveCinematic = 6,
	Highest = 7,
	EMovementSuspensionPriority_MAX = 8
};

// Enum Ambulatory.EAvaMotionWarpingModifierState
enum class EAvaMotionWarpingModifierState : uint8 {
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	EAvaMotionWarpingModifierState_MAX = 4
};

// Enum Ambulatory.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8 {
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Enum Ambulatory.EMovementSensorType
enum class EMovementSensorType : uint8 {
	BlockingCollision = 0,
	JumpOn = 1,
	JumpDown = 2,
	JumpOver = 3,
	Landing = 4,
	GroundHit = 5,
	None = 6,
	EMovementSensorType_MAX = 7
};

// Enum Ambulatory.ETargetMethod
enum class ETargetMethod : uint8 {
	None = 0,
	Replace = 1,
	Stack = 2,
	ETargetMethod_MAX = 3
};

// ScriptStruct Ambulatory.SurfaceTypeChanged
// Size: 0x14 (Inherited: 0x00)
struct FSurfaceTypeChanged {
	enum class EPhysicalSurface LastSurfaceType; // 0x00(0x01)
	enum class EPhysicalSurface NewSurfaceType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Normal; // 0x04(0x0c)
	float Friction; // 0x10(0x04)
};

// ScriptStruct Ambulatory.ValueTracker
// Size: 0x0c (Inherited: 0x00)
struct FValueTracker {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Ambulatory.WandCastInfo
// Size: 0x1c (Inherited: 0x00)
struct FWandCastInfo {
	enum class EWandCastType WandCastType; // 0x00(0x01)
	enum class EWandCastType LastWandCastType; // 0x01(0x01)
	enum class EPreWandCastState PreWandCastState; // 0x02(0x01)
	enum class EPreWandCastState AnticipationWandCastState; // 0x03(0x01)
	enum class ELastWandCastState LastWandCastState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TimeAtLastAttack; // 0x08(0x04)
	float LastDiscreteAngle; // 0x0c(0x04)
	int32_t LastBaseAttackIndex; // 0x10(0x04)
	int32_t AttackCount; // 0x14(0x04)
	bool bMelee; // 0x18(0x01)
	bool bComboFinisher; // 0x19(0x01)
	bool bTransitionAnimation; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Ambulatory.Ambulatory_MobilityMode
// Size: 0x20 (Inherited: 0x00)
struct FAmbulatory_MobilityMode {
	bool bApplyMovementSpeeds; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinimumMovementSpeed; // 0x04(0x04)
	float MaximumMovementSpeed; // 0x08(0x04)
	float SlowWalkTargetSpeed; // 0x0c(0x04)
	float WalkTargetSpeed; // 0x10(0x04)
	float JogTargetSpeed; // 0x14(0x04)
	float SprintTargetSpeed; // 0x18(0x04)
	bool UseStrafe; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Ambulatory.SharedContinuousImpulseHelper
// Size: 0x10 (Inherited: 0x00)
struct FSharedContinuousImpulseHelper {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Ambulatory.AmbulatoryHUDStyle
// Size: 0x22c0 (Inherited: 0x08)
struct FAmbulatoryHUDStyle : FSlateWidgetStyle {
	struct FTextBlockStyle CurrentActorTextStyle; // 0x08(0x270)
	struct FTextBlockStyle ImpulseTextStyle; // 0x278(0x270)
	struct FTextBlockStyle PendingLinearTextStyle; // 0x4e8(0x270)
	struct FTextBlockStyle LinearVelocityTextStyle; // 0x758(0x270)
	struct FTextBlockStyle MovementComponentVelocityTextStyle; // 0x9c8(0x270)
	struct FTextBlockStyle MovementModeTextStyle; // 0xc38(0x270)
	struct FTextBlockStyle OverrideRootMotionTextStyle; // 0xea8(0x270)
	struct FTextBlockStyle HasRootMotionTextStyle; // 0x1118(0x270)
	struct FTextBlockStyle PerforminatorTextStyle; // 0x1388(0x270)
	struct FTextBlockStyle DampingTextStyle; // 0x15f8(0x270)
	struct FTextBlockStyle AtRestTextStyle; // 0x1868(0x270)
	struct FTableRowStyle TreeRowStyle; // 0x1ad8(0x7c8)
	struct FMargin HUDMargin; // 0x22a0(0x10)
	struct FMargin TreeMargin; // 0x22b0(0x10)
};

// ScriptStruct Ambulatory.AvaMotionWarpingSyncPoint
// Size: 0x20 (Inherited: 0x00)
struct FAvaMotionWarpingSyncPoint {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
};

// ScriptStruct Ambulatory.AvaMotionWarpingModifier
// Size: 0x28 (Inherited: 0x00)
struct FAvaMotionWarpingModifier {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x08(0x08)
	float StartTime; // 0x10(0x04)
	float EndTime; // 0x14(0x04)
	float PreviousPosition; // 0x18(0x04)
	float CurrentPosition; // 0x1c(0x04)
	float weight; // 0x20(0x04)
	bool bInLocalSpace; // 0x24(0x01)
	enum class EAvaMotionWarpingModifierState State; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Ambulatory.AvaMotionWarpingModifier_OrientToRequest
// Size: 0x28 (Inherited: 0x28)
struct FAvaMotionWarpingModifier_OrientToRequest : FAvaMotionWarpingModifier {
};

// ScriptStruct Ambulatory.AvaMotionWarpingModifier_Scale
// Size: 0x38 (Inherited: 0x28)
struct FAvaMotionWarpingModifier_Scale : FAvaMotionWarpingModifier {
	struct FVector Scale; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Ambulatory.AvaMotionWarpingModifier_Warp
// Size: 0x60 (Inherited: 0x28)
struct FAvaMotionWarpingModifier_Warp : FAvaMotionWarpingModifier {
	struct FName SyncPointName; // 0x28(0x08)
	bool bWarpTranslation; // 0x30(0x01)
	bool bDisallowHorizontalStretching; // 0x31(0x01)
	bool bDisallowHorizontalSquishing; // 0x32(0x01)
	bool bIgnoreZAxis; // 0x33(0x01)
	bool bWarpRotation; // 0x34(0x01)
	enum class EMotionWarpRotationType RotationType; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float WarpRotationTimeMultiplier; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAvaMotionWarpingSyncPoint CachedSyncPoint; // 0x40(0x20)
};

// ScriptStruct Ambulatory.AvaMotionWarpingModifier_SkewWarp
// Size: 0x60 (Inherited: 0x60)
struct FAvaMotionWarpingModifier_SkewWarp : FAvaMotionWarpingModifier_Warp {
};

// ScriptStruct Ambulatory.AvaRootMotionWarper
// Size: 0x78 (Inherited: 0x00)
struct FAvaRootMotionWarper {
	struct TArray<struct UAvaMotionWarpWindowFinder*> DefaultMotionWarpWindowFinders; // 0x00(0x10)
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; // 0x10(0x08)
	struct TArray<struct UAvaMotionWarpWindowFinder*> MotionWarpWindowFinders; // 0x18(0x10)
	struct TMap<struct FName, struct FAvaMotionWarpingSyncPoint> SyncPoints; // 0x28(0x50)
};

// ScriptStruct Ambulatory.SurfaceTypeToVFX
// Size: 0x18 (Inherited: 0x08)
struct FSurfaceTypeToVFX : FTableRowBase {
	struct FName SurfaceTypeName; // 0x08(0x08)
	struct UParticleSystem* VFX; // 0x10(0x08)
};

// ScriptStruct Ambulatory.MotionTableEvent
// Size: 0xa0 (Inherited: 0x00)
struct FMotionTableEvent {
	struct TMap<struct FName, struct FMotionTableEventState> EventStates; // 0x00(0x50)
	struct TMap<struct FName, struct FName> StateToEventStateMap; // 0x50(0x50)
};

// ScriptStruct Ambulatory.MotionTableEventState
// Size: 0x60 (Inherited: 0x00)
struct FMotionTableEventState {
	float TimeToEvent; // 0x00(0x04)
	float TravelDistanceToEvent; // 0x04(0x04)
	float FollowThroughDuration; // 0x08(0x04)
	float FollowThroughTravelDistance; // 0x0c(0x04)
	struct TSet<struct FName> EventStateVariations; // 0x10(0x50)
};

// ScriptStruct Ambulatory.MotionTableState
// Size: 0x60 (Inherited: 0x00)
struct FMotionTableState {
	bool bLoop; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float TravelDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FMotionTableTransition> Transitions; // 0x10(0x50)
};

// ScriptStruct Ambulatory.MotionTableTransition
// Size: 0x20 (Inherited: 0x00)
struct FMotionTableTransition {
	float TransitionDuration; // 0x00(0x04)
	float TransitionTravelDistance; // 0x04(0x04)
	struct TArray<struct FFloatInterval> TransitionMarkerTimes; // 0x08(0x10)
	float TargetStateCycleTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Ambulatory.MovementEventData
// Size: 0x120 (Inherited: 0x00)
struct FMovementEventData {
	struct FName MovementEventName; // 0x00(0x08)
	float MinApproachAngle; // 0x08(0x04)
	float MaximumAngleForCommitment; // 0x0c(0x04)
	struct FRuntimeFloatCurve TimeToLocationCurve; // 0x10(0x88)
	struct FRuntimeFloatCurve TimeToRotationCurve; // 0x98(0x88)
};

// ScriptStruct Ambulatory.MovementSensorInfo
// Size: 0x80 (Inherited: 0x00)
struct FMovementSensorInfo {
	enum class EMovementSensorType SensorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FVector Normal; // 0x10(0x0c)
	struct FVector MoveNormal; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform MoveTransform; // 0x30(0x30)
	struct FVector MoveVelocity; // 0x60(0x0c)
	float Time; // 0x6c(0x04)
	float TimeUntilImpact; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct Ambulatory.MovementPredictionSettings
// Size: 0x34 (Inherited: 0x00)
struct FMovementPredictionSettings {
	bool bEnablePrediction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PredictionDuration; // 0x04(0x04)
	float MinJumpOnHeight; // 0x08(0x04)
	float MaxJumpOnHeight; // 0x0c(0x04)
	float MinJumpDownHeight; // 0x10(0x04)
	float JumpOverDistance; // 0x14(0x04)
	float MaxGrazingAngle; // 0x18(0x04)
	float DistanceBetweenProbes; // 0x1c(0x04)
	float TurnRate; // 0x20(0x04)
	bool bTimeSlice; // 0x24(0x01)
	bool bEnableLandingPrediction; // 0x25(0x01)
	bool bOnlyLandOnNavmesh; // 0x26(0x01)
	bool bWaterCollisionChannelIsSet; // 0x27(0x01)
	enum class ECollisionChannel WaterCollisionChannel; // 0x28(0x01)
	bool bDebugDelayBetweenUpdates; // 0x29(0x01)
	bool bDebugDrawTrajectory; // 0x2a(0x01)
	bool bDebugDrawSensorInfo; // 0x2b(0x01)
	float SensorDrawDuration; // 0x2c(0x04)
	bool bDebugDrawSweeps; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Ambulatory.TraversalDropDownSettings
// Size: 0x14 (Inherited: 0x00)
struct FTraversalDropDownSettings {
	bool bEnableJumpDown; // 0x00(0x01)
	bool bEnableTeeterOnEdge; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MinJumpDownHeight; // 0x04(0x04)
	float MinTeeterOnEdgeHeight; // 0x08(0x04)
	float TeeterEdgeDistance; // 0x0c(0x04)
	enum class ECollisionChannel DeepWaterCollisionChannel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Ambulatory.TraversalLadderSettings
// Size: 0x24 (Inherited: 0x00)
struct FTraversalLadderSettings {
	struct FVector2D LadderExtent; // 0x00(0x08)
	float SweepLookAheadTime; // 0x08(0x04)
	float SweepLookAheadTimeWhenJumping; // 0x0c(0x04)
	float SweepWidth; // 0x10(0x04)
	int32_t MountRungsBottom; // 0x14(0x04)
	int32_t MountRungsTop; // 0x18(0x04)
	int32_t ClimbAnimRungs; // 0x1c(0x04)
	float CharacterFwdOffset; // 0x20(0x04)
};

// ScriptStruct Ambulatory.TraversalSwimDiveSettings
// Size: 0x28 (Inherited: 0x00)
struct FTraversalSwimDiveSettings {
	enum class ECollisionChannel DeepWaterCollisionChannel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FallIntoWaterMinSpeed; // 0x04(0x04)
	float FallIntoWaterMinTimeToImpact; // 0x08(0x04)
	float FallIntoWaterMaxTimeToImpact; // 0x0c(0x04)
	float FallIntoWaterMinWaterDepth; // 0x10(0x04)
	float DiveIntoWaterFwdSpeed; // 0x14(0x04)
	float DiveIntoWaterUpImpulse; // 0x18(0x04)
	float DiveIntoWaterImpulseDelay; // 0x1c(0x04)
	float DiveIntoWaterMaxHeight; // 0x20(0x04)
	float DiveIntoWaterMinWaterDepth; // 0x24(0x04)
};

// ScriptStruct Ambulatory.TraversalSnappingSettings
// Size: 0xd8 (Inherited: 0x00)
struct FTraversalSnappingSettings {
	struct FTraversalModeSnappingSettings ModeSnappingSettings[0x10]; // 0x00(0xc0)
	struct FTraversalModeSnappingSettings JumpVaultSnappingSettings; // 0xc0(0x0c)
	struct FTraversalModeSnappingSettings AutoTraversalSnappingSettings; // 0xcc(0x0c)
};

// ScriptStruct Ambulatory.TraversalModeSnappingSettings
// Size: 0x0c (Inherited: 0x00)
struct FTraversalModeSnappingSettings {
	float MaxHorizontalDistance; // 0x00(0x04)
	float MaxHorizontalDistanceNoInput; // 0x04(0x04)
	float MaxTimeToLedge; // 0x08(0x04)
};

// ScriptStruct Ambulatory.TraversalMetricsSettings
// Size: 0x30 (Inherited: 0x00)
struct FTraversalMetricsSettings {
	float MaxNormalStepUpHeight; // 0x00(0x04)
	float MaxHalfMeterStepUpHeight; // 0x04(0x04)
	float MaxJumpUpOrVaultHeight; // 0x08(0x04)
	float MaxTwoMeterClimbHeight; // 0x0c(0x04)
	float MaxThreeMeterClimbHeight; // 0x10(0x04)
	float MaxSwimClimbHeight; // 0x14(0x04)
	float MaxLandingLeapFrogHeight; // 0x18(0x04)
	float MaxLandingLedgeWaistHeight; // 0x1c(0x04)
	float MaxLandingLedgeHangHeight; // 0x20(0x04)
	float MaxJumpUpLedgeHeight; // 0x24(0x04)
	float MaxAutoTraverseHeightOnGround; // 0x28(0x04)
	float MaxAutoTraverseAngle; // 0x2c(0x04)
};

// ScriptStruct Ambulatory.TraversalDetectionSettings
// Size: 0x50 (Inherited: 0x00)
struct FTraversalDetectionSettings {
	float MinLedgeHeight; // 0x00(0x04)
	float MaxLedgeHeight; // 0x04(0x04)
	float SweepRadius; // 0x08(0x04)
	float SweepDistance; // 0x0c(0x04)
	float SweepLookAheadTime; // 0x10(0x04)
	float VerticalTrajectoryLookAheadTime; // 0x14(0x04)
	float LedgeMaxWallAngleToInput; // 0x18(0x04)
	float LedgeCheckRadius; // 0x1c(0x04)
	float LedgeCheckHalfHeight; // 0x20(0x04)
	float LedgeCheckTiltAngle; // 0x24(0x04)
	float CapsuleSizeCheckRadius; // 0x28(0x04)
	float CapsuleSizeCheckHalfHeight; // 0x2c(0x04)
	float CharacterCapsuleDefaultHalfHeight; // 0x30(0x04)
	float MaxVaultDistance; // 0x34(0x04)
	float VaultHeightPastObstacle; // 0x38(0x04)
	float MaxWallHangAngle; // 0x3c(0x04)
	float BlockingWallStoppingDistance; // 0x40(0x04)
	float MaxBlockingWallAngle; // 0x44(0x04)
	float BlockingWallAngleHysteresis; // 0x48(0x04)
	float BlockingWallCheckMaxWalkableFloorAngle; // 0x4c(0x04)
};

