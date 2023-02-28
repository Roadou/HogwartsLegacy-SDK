// Enum Ragdoll.EPhysicsVirtualForceApplication
enum class EPhysicsVirtualForceApplication : uint8 {
	PartialBodyOnly = 0,
	FullBodyOnly = 1,
	Always = 2,
	Never = 3,
	EPhysicsVirtualForceApplication_MAX = 4
};

// Enum Ragdoll.ERagdollDriveAnimEnum
enum class ERagdollDriveAnimEnum : uint8 {
	DriveHoldPriorLastPose = 0,
	DriveKeepPrior = 1,
	DriveToAnim = 2,
	DriveToGetupPose = 3,
	ERagdollDriveAnimEnum_MAX = 4
};

// Enum Ragdoll.ERagdollSensoryBehaviorEnum
enum class ERagdollSensoryBehaviorEnum : uint8 {
	RSBE_CurrentlyActive = 0,
	RSBE_PriorActive = 1,
	RSBE_HadActive = 2,
	RSBE_MAX = 3
};

// Enum Ragdoll.ERagdollSensoryStatusValueEnum
enum class ERagdollSensoryStatusValueEnum : uint8 {
	RSSVE_OnGround = 0,
	RSSVE_InAir = 1,
	RSSVE_Hovering = 2,
	RSSVE_Dead = 3,
	RSSVE_GetupObstructed = 4,
	RSSVE_NearDeathKneeling = 5,
	RSSVE_Frozen = 6,
	RSSVE_OnFire = 7,
	RSSVE_Charred = 8,
	RSSVE_Petrified = 9,
	RSSVE_Resurrecting = 10,
	RSSVE_MAX = 11
};

// Enum Ragdoll.ERagdollSensoryRangeValueEnum
enum class ERagdollSensoryRangeValueEnum : uint8 {
	RSRVE_HeightAboveGround = 0,
	RSRVE_Velocity = 1,
	RSRVE_HorizontalVelocity = 2,
	RSRVE_VerticalVelocity = 3,
	RSRVE_TotalTimeRagdolling = 4,
	RSRVE_TimeOnGround = 5,
	RSRVE_TimeInAir = 6,
	RSRVE_TimeHovering = 7,
	RSRVE_TimeGetupObstructed = 8,
	RSRVE_TimeInCurBehavior = 9,
	RSRVE_TimeDead = 10,
	RSRVE_TimeToImminentCollision = 11,
	RSRVE_TimeInCurAudioBehavior = 12,
	RSRVE_LastNavmeshSeperation = 13,
	RSRVE_MAX = 14
};

// Enum Ragdoll.ERagdollBodyLineUprightEnum
enum class ERagdollBodyLineUprightEnum : uint8 {
	RBLUE_SpineLineUpright = 0,
	RBLUE_ShoulderLineUpright = 1,
	RBLUE_HipLineUpright = 2,
	RBLUE_ChestUpright = 3,
	RBLUE_PelvisUpright = 4,
	RBLUE_MAX = 5
};

// Enum Ragdoll.ERagdollCOMRotationDrivingMode
enum class ERagdollCOMRotationDrivingMode : uint8 {
	NoDriving = 0,
	DriveToCapsuleRotation = 1,
	DriveToKeepUpright = 2,
	ERagdollCOMRotationDrivingMode_MAX = 3
};

// Enum Ragdoll.ERagdollCOMLocationDrivingMode
enum class ERagdollCOMLocationDrivingMode : uint8 {
	NoDriving = 0,
	DriveToCapsuleLocation = 1,
	DriveToCapsuleHeight = 2,
	DriveToCapsuleLocationAndKeepMoving = 3,
	DriveToCapsuleHorizontalLocation = 4,
	DampVelocity = 5,
	ERagdollCOMLocationDrivingMode_MAX = 6
};

// Enum Ragdoll.ERagdollPoseDrivingMode
enum class ERagdollPoseDrivingMode : uint8 {
	Strong = 0,
	Weak = 1,
	Inactive = 2,
	Dead = 3,
	Petrified = 4,
	ERagdollPoseDrivingMode_MAX = 5
};

// Enum Ragdoll.EImpactReactionStrength
enum class EImpactReactionStrength : uint8 {
	None = 0,
	Hitch = 1,
	Knockdown = 2,
	Levioso = 3,
	DeathBlows = 4,
	Slam = 5,
	EImpactReactionStrength_MAX = 6
};

// ScriptStruct Ragdoll.PhysicsVirtualForcePD
// Size: 0x24 (Inherited: 0x00)
struct FPhysicsVirtualForcePD {
	struct FPhysicsPD PD; // 0x00(0x0c)
	struct FVector ForceLocationLocal; // 0x0c(0x0c)
	float GravityCompensation; // 0x18(0x04)
	int32_t Depth; // 0x1c(0x04)
	enum class EPhysicsVirtualForceApplication Application; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Ragdoll.PhysicsPD
// Size: 0x0c (Inherited: 0x00)
struct FPhysicsPD {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Max; // 0x08(0x04)
};

// ScriptStruct Ragdoll.PhysicsForceAndTorquePD
// Size: 0x24 (Inherited: 0x00)
struct FPhysicsForceAndTorquePD {
	struct FPhysicsPD VerticalForce; // 0x00(0x0c)
	struct FPhysicsPD HorizontalForce; // 0x0c(0x0c)
	struct FPhysicsPD Torque; // 0x18(0x0c)
};

// ScriptStruct Ragdoll.RagdollBodyConstraintsConfig
// Size: 0x58 (Inherited: 0x00)
struct FRagdollBodyConstraintsConfig {
	struct TSet<struct FName> ConstrainedBodies; // 0x00(0x50)
	float EaseInDuration; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Ragdoll.PhysicsPoseDrivingConfig
// Size: 0x58 (Inherited: 0x00)
struct FPhysicsPoseDrivingConfig {
	struct TMap<struct FName, struct FPhysicsVirtualForcePD> VirtualForces; // 0x00(0x50)
	float GravityCompensation; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Ragdoll.AudioLayerBehaviorState
// Size: 0x18 (Inherited: 0x00)
struct FAudioLayerBehaviorState {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Ragdoll.RagdollAudioBehaviorLayer
// Size: 0x18 (Inherited: 0x00)
struct FRagdollAudioBehaviorLayer {
	struct FName LayerName; // 0x00(0x08)
	struct TArray<struct URagdollAudioBehavior*> AudioBehaviors; // 0x08(0x10)
};

// ScriptStruct Ragdoll.RagdollGetupOptions
// Size: 0x38 (Inherited: 0x00)
struct FRagdollGetupOptions {
	struct FRagdollState RequiredState; // 0x00(0x30)
	struct FName TargetGetupProfile; // 0x30(0x08)
};

// ScriptStruct Ragdoll.RagdollState
// Size: 0x30 (Inherited: 0x00)
struct FRagdollState {
	struct TArray<struct URagdollSensoryState*> RequiredAll; // 0x00(0x10)
	struct TArray<struct URagdollSensoryState*> RequiredAny; // 0x10(0x10)
	struct TArray<struct URagdollSensoryState*> RequiredNone; // 0x20(0x10)
};

// ScriptStruct Ragdoll.RagdollSensoryBehavior
// Size: 0x18 (Inherited: 0x00)
struct FRagdollSensoryBehavior {
	enum class ERagdollSensoryBehaviorEnum Relativity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct URagdollBehavior* Behavior; // 0x08(0x08)
	bool Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Ragdoll.RagdollSensoryCollision
// Size: 0x30 (Inherited: 0x00)
struct FRagdollSensoryCollision {
	float ImpactImpulseMin; // 0x00(0x04)
	float ImpactImpulseMax; // 0x04(0x04)
	bool IfOutOfRange; // 0x08(0x01)
	bool RequireNormalToWorldUpRealitiveRange; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float NormalToWorldUpAngleMin; // 0x0c(0x04)
	float NormalToWorldUpAngleMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FRagdollPhysicsBodyPredicate> PhysicsBodyRequirements; // 0x18(0x10)
	bool Status; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Ragdoll.RagdollPhysicsBodyPredicate
// Size: 0x28 (Inherited: 0x00)
struct FRagdollPhysicsBodyPredicate {
	struct UPhysicsAsset* WhenPhysicsAsset; // 0x00(0x08)
	struct TArray<struct FName> IncludedPhysicBodyBones; // 0x08(0x10)
	struct TArray<struct FName> ExcludedPhysicBodyBones; // 0x18(0x10)
};

// ScriptStruct Ragdoll.RagdollSensoryStatus
// Size: 0x02 (Inherited: 0x00)
struct FRagdollSensoryStatus {
	enum class ERagdollSensoryStatusValueEnum SensoryValue; // 0x00(0x01)
	bool Status; // 0x01(0x01)
};

// ScriptStruct Ragdoll.RagdollSensoryRange
// Size: 0x10 (Inherited: 0x00)
struct FRagdollSensoryRange {
	enum class ERagdollSensoryRangeValueEnum SensoryValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Min; // 0x04(0x04)
	float Max; // 0x08(0x04)
	bool IfOutOfRange; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Ragdoll.RagdollPoseState
// Size: 0x18 (Inherited: 0x00)
struct FRagdollPoseState {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FRagdollUprightRange> PoseMatches; // 0x08(0x10)
};

// ScriptStruct Ragdoll.RagdollUprightRange
// Size: 0x0c (Inherited: 0x00)
struct FRagdollUprightRange {
	enum class ERagdollBodyLineUprightEnum CompareWorldUpTo; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Min; // 0x04(0x04)
	float Max; // 0x08(0x04)
};

// ScriptStruct Ragdoll.RagdollControlPostAnimationTickFunction
// Size: 0x48 (Inherited: 0x40)
struct FRagdollControlPostAnimationTickFunction : FTickFunction {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Ragdoll.RagdollBodyAttachment
// Size: 0x18 (Inherited: 0x00)
struct FRagdollBodyAttachment {
	struct FName AttachBoneName; // 0x00(0x08)
	struct TArray<struct FName> AttachBodyNames; // 0x08(0x10)
};

// ScriptStruct Ragdoll.GetupAnimationProfile
// Size: 0x18 (Inherited: 0x00)
struct FGetupAnimationProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FGameplayTagContainer> GetupAnimationTags; // 0x08(0x10)
};

// ScriptStruct Ragdoll.AuthoredImpact
// Size: 0x78 (Inherited: 0x00)
struct FAuthoredImpact {
	struct FName Name; // 0x00(0x08)
	enum class EImpactReactionStrength ReactionStrength; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> AffectedBodies; // 0x10(0x10)
	struct TArray<struct FName> ImpactedBodies; // 0x20(0x10)
	struct FVector ImpactDirection; // 0x30(0x0c)
	struct FVector ImpactLocationLocal; // 0x3c(0x0c)
	float ImpactMaxYaw; // 0x48(0x04)
	float ImpactMaxPitch; // 0x4c(0x04)
	float ImpactVariationYaw; // 0x50(0x04)
	float ImpactVariationPitch; // 0x54(0x04)
	float ImpactStrengthMin; // 0x58(0x04)
	float ImpactStrengthMax; // 0x5c(0x04)
	float ImpactDuration; // 0x60(0x04)
	float ImpactEaseInDuration; // 0x64(0x04)
	float BlendBackDelay; // 0x68(0x04)
	float BlendBackDuration; // 0x6c(0x04)
	bool bUseGivenImpactStength; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

