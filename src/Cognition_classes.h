// Class Cognition.AISense_Cognition
// Size: 0x130 (Inherited: 0x80)
struct UAISense_Cognition : UAISense {
	char pad_80[0xb0]; // 0x80(0xb0)
};

// Class Cognition.AISense_CogGroup
// Size: 0x188 (Inherited: 0x130)
struct UAISense_CogGroup : UAISense_Cognition {
	char pad_130[0x58]; // 0x130(0x58)
};

// Class Cognition.CogGroupDebug
// Size: 0x48 (Inherited: 0x28)
struct UCogGroupDebug : UObject {
	char pad_28[0x1]; // 0x28(0x01)
	bool bDrawTargetFootprint; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float DrawTesselation; // 0x2c(0x04)
	float DrawThickness; // 0x30(0x04)
	float DrawFarThickness; // 0x34(0x04)
	struct FColor DrawColorWithoutTargets; // 0x38(0x04)
	struct FColor DrawColorWithValidTargets; // 0x3c(0x04)
	struct FColor DrawColorWithInvalidTargets; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Cognition.CogGroupEvaluation
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupEvaluation : UObject {
	int32_t PriorityWeight; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Cognition.CogGroupEvaluation_OnScreen
// Size: 0x38 (Inherited: 0x30)
struct UCogGroupEvaluation_OnScreen : UCogGroupEvaluation {
	float ScreenBorder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Cognition.CogGroupEvaluation_FOV
// Size: 0x38 (Inherited: 0x30)
struct UCogGroupEvaluation_FOV : UCogGroupEvaluation {
	float FOV; // 0x30(0x04)
	bool bAutoAcceptIfFootprintOverlap; // 0x34(0x01)
	bool bUseTargetFootprintForFOV; // 0x35(0x01)
	bool bIgnoreForSticky; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// Class Cognition.CogGroupEvaluation_CombinedBase
// Size: 0x50 (Inherited: 0x30)
struct UCogGroupEvaluation_CombinedBase : UCogGroupEvaluation {
	float FOV; // 0x30(0x04)
	float NearDistance; // 0x34(0x04)
	float FarDistance; // 0x38(0x04)
	float NearHeightUp; // 0x3c(0x04)
	float NearHeightDown; // 0x40(0x04)
	float FarHeightUp; // 0x44(0x04)
	float FarHeightDown; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Cognition.CogGroupBestTargetProcess
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupBestTargetProcess : UObject {
};

// Class Cognition.CogGroupEvaluation_SecondOrder
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupEvaluation_SecondOrder : UObject {
};

// Class Cognition.CogGroupEvaluation_Distance
// Size: 0x38 (Inherited: 0x30)
struct UCogGroupEvaluation_Distance : UCogGroupEvaluation {
	float NearDistance; // 0x30(0x04)
	float FarDistance; // 0x34(0x04)
};

// Class Cognition.CogGroupFocusDirection
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupFocusDirection : UObject {
};

// Class Cognition.CogGroupPerceiverPoint
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupPerceiverPoint : UObject {
};

// Class Cognition.CogGroupUpDirection
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupUpDirection : UObject {
};

// Class Cognition.CogTargetSceneComponent
// Size: 0x230 (Inherited: 0x220)
struct UCogTargetSceneComponent : USceneComponent {
	char pad_220[0x10]; // 0x220(0x10)

	void OnCharacterLoadComplete(struct AActor* Actor); // Function Cognition.CogTargetSceneComponent.OnCharacterLoadComplete // (Final|Native|Private) // @ game+0x5e1ef30
	void CogTargetSceneComponent_DebugDraw(bool bInFlag); // Function Cognition.CogTargetSceneComponent.CogTargetSceneComponent_DebugDraw // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x330f550
};

// Class Cognition.AISenseConfig_Cognition
// Size: 0x88 (Inherited: 0x48)
struct UAISenseConfig_Cognition : UAISenseConfig {
	bool bStartActive; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FInputContextWithType> LogicContexts; // 0x50(0x10)
	struct TArray<struct UCogGroupBestTargetProcess*> BestTargetProcesses; // 0x60(0x10)
	bool bStencilPerceivedTarget; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FStencilManagerEffectName StencilEffect; // 0x74(0x08)
	struct FStencilManagerEffectName StencilOwnedEffect; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Cognition.AISenseConfig_CogGroup
// Size: 0x108 (Inherited: 0x88)
struct UAISenseConfig_CogGroup : UAISenseConfig_Cognition {
	struct UAISense_CogGroup* Implementation; // 0x88(0x08)
	struct UCogGroupFocusDirection* FocusDirectionClass; // 0x90(0x08)
	struct UCogGroupUpDirection* UpDirectionClass; // 0x98(0x08)
	struct UCogGroupPerceiverPoint* PerceiverPointClass; // 0xa0(0x08)
	float TraceRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UCogGroupTargetPoint* TargetPointClass; // 0xb0(0x08)
	struct TArray<struct UCogGroupEvaluation*> TargetEvaluationArray; // 0xb8(0x10)
	struct TArray<struct UCogGroupEvaluation_SecondOrder*> TargetEvaluationArray_SecondOrder; // 0xc8(0x10)
	struct TArray<struct UCogGroupEvaluation*> BackgroundTargetEvaluationArray; // 0xd8(0x10)
	float PriorityBase; // 0xe8(0x04)
	bool bNormalizePriorityWeights; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float MinBufferDistance; // 0xf0(0x04)
	float MaxBufferDistance; // 0xf4(0x04)
	float MinReevaluationTime; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UCogGroupDebug* DebugClass; // 0x100(0x08)
};

// Class Cognition.CogGroupDebug_Default
// Size: 0x48 (Inherited: 0x48)
struct UCogGroupDebug_Default : UCogGroupDebug {
};

// Class Cognition.CogGroupEvaluation_DistanceWithWarp
// Size: 0x40 (Inherited: 0x30)
struct UCogGroupEvaluation_DistanceWithWarp : UCogGroupEvaluation {
	float NearDistance; // 0x30(0x04)
	float FarDistance; // 0x34(0x04)
	float WarpDistanceByFocus; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Cognition.CogGroupEvaluation_Height
// Size: 0x48 (Inherited: 0x30)
struct UCogGroupEvaluation_Height : UCogGroupEvaluation {
	float NearHeightUp; // 0x30(0x04)
	float NearHeightDown; // 0x34(0x04)
	float FarHeightUp; // 0x38(0x04)
	float FarHeightDown; // 0x3c(0x04)
	bool bAdjustCenterHeightByCameraDirection; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Cognition.CogGroupEvaluation_Class
// Size: 0x40 (Inherited: 0x30)
struct UCogGroupEvaluation_Class : UCogGroupEvaluation {
	struct TArray<struct UObject*> IncludeClasses; // 0x30(0x10)
};

// Class Cognition.CogGroupEvaluation_ScreenSpace
// Size: 0x38 (Inherited: 0x30)
struct UCogGroupEvaluation_ScreenSpace : UCogGroupEvaluation {
	float ScreenDistance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Cognition.CogGroupEvaluation_TargetFOV
// Size: 0x38 (Inherited: 0x30)
struct UCogGroupEvaluation_TargetFOV : UCogGroupEvaluation {
	bool bUsePerceiverFootprintForFOV; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Cognition.CogGroupEvaluation_SecondOrder_LOS
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupEvaluation_SecondOrder_LOS : UCogGroupEvaluation_SecondOrder {
};

// Class Cognition.CogGroupFocusDirection_ActorFacing
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupFocusDirection_ActorFacing : UCogGroupFocusDirection {
};

// Class Cognition.CogGroupFocusDirection_Movement
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupFocusDirection_Movement : UCogGroupFocusDirection {
};

// Class Cognition.CogGroupFocusDirection_Velocity
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupFocusDirection_Velocity : UCogGroupFocusDirection {
};

// Class Cognition.CogGroupFocusDirection_Camera
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupFocusDirection_Camera : UCogGroupFocusDirection {
};

// Class Cognition.CogGroupFocusDirection_Socket
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupFocusDirection_Socket : UCogGroupFocusDirection {
	struct FName SocketName; // 0x28(0x08)
};

// Class Cognition.CogGroupLookAtPoint
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint : UObject {
};

// Class Cognition.CogGroupLookAtPoint_World
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint_World : UCogGroupLookAtPoint {
};

// Class Cognition.CogGroupLookAtPoint_World_ActorOffset
// Size: 0x38 (Inherited: 0x28)
struct UCogGroupLookAtPoint_World_ActorOffset : UCogGroupLookAtPoint {
	struct FVector Offset; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Cognition.CogGroupLookAtPoint_CollisionCenter
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint_CollisionCenter : UCogGroupLookAtPoint {
};

// Class Cognition.CogGroupLookAtPoint_CollisionTop
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint_CollisionTop : UCogGroupLookAtPoint {
};

// Class Cognition.CogGroupLookAtPoint_Ground
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint_Ground : UCogGroupLookAtPoint {
};

// Class Cognition.CogGroupLookAtPoint_Socket
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupLookAtPoint_Socket : UCogGroupLookAtPoint {
	struct FName SocketName; // 0x28(0x08)
};

// Class Cognition.CogGroupLookAtPoint_Custom
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupLookAtPoint_Custom : UCogGroupLookAtPoint {
};

// Class Cognition.CogGroupPerceiverPoint_World
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupPerceiverPoint_World : UCogGroupPerceiverPoint {
};

// Class Cognition.CogGroupPerceiverPoint_World_ActorOffset
// Size: 0x38 (Inherited: 0x28)
struct UCogGroupPerceiverPoint_World_ActorOffset : UCogGroupPerceiverPoint {
	struct FVector Offset; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Cognition.CogGroupPerceiverPoint_Ground
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupPerceiverPoint_Ground : UCogGroupPerceiverPoint {
};

// Class Cognition.CogGroupPerceiverPoint_Camera
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupPerceiverPoint_Camera : UCogGroupPerceiverPoint {
};

// Class Cognition.CogGroupPerceiverPoint_Socket
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupPerceiverPoint_Socket : UCogGroupPerceiverPoint {
	struct FName SocketName; // 0x28(0x08)
};

// Class Cognition.CogGroupTargetPoint
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint : UObject {
};

// Class Cognition.CogGroupTargetPoint_World
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_World : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_World_ActorOffset
// Size: 0x38 (Inherited: 0x28)
struct UCogGroupTargetPoint_World_ActorOffset : UCogGroupTargetPoint {
	struct FVector Offset; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Cognition.CogGroupTargetPoint_CollisionCenter
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupTargetPoint_CollisionCenter : UCogGroupTargetPoint {
	bool bOnlyCollidingComponents; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class Cognition.CogGroupTargetPoint_CollisionCenterOLD
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupTargetPoint_CollisionCenterOLD : UCogGroupTargetPoint {
	bool bOnlyCollidingComponents; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class Cognition.CogGroupTargetPoint_Ground
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_Ground : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_Socket
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupTargetPoint_Socket : UCogGroupTargetPoint {
	struct FName SocketName; // 0x28(0x08)
};

// Class Cognition.CogGroupTargetPoint_StaticMeshCenter
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_StaticMeshCenter : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_PlayerWorld
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_PlayerWorld : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_Custom
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_Custom : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_ClosestPointOnCollision
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupTargetPoint_ClosestPointOnCollision : UCogGroupTargetPoint {
	float MinZHeightFromActorLocation; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Cognition.CogGroupTargetPoint_CustomRelative
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_CustomRelative : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupTargetPoint_CalloutAttach
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupTargetPoint_CalloutAttach : UCogGroupTargetPoint {
};

// Class Cognition.CogGroupUpDirection_World
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupUpDirection_World : UCogGroupUpDirection {
};

// Class Cognition.CogGroupUpDirection_Actor
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupUpDirection_Actor : UCogGroupUpDirection {
};

// Class Cognition.CogGroupUpDirection_Camera
// Size: 0x28 (Inherited: 0x28)
struct UCogGroupUpDirection_Camera : UCogGroupUpDirection {
};

// Class Cognition.CogGroupUpDirection_Socket
// Size: 0x30 (Inherited: 0x28)
struct UCogGroupUpDirection_Socket : UCogGroupUpDirection {
	struct FName SocketName; // 0x28(0x08)
};

// Class Cognition.CognitionComponent
// Size: 0x240 (Inherited: 0x1a8)
struct UCognitionComponent : UAIPerceptionComponent {
	float TimeOutCameraStickMoved; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FMulticastInlineDelegate TargetSightedDelegate; // 0x1b0(0x10)
	struct FMulticastInlineDelegate TargetChangedDelegate; // 0x1c0(0x10)
	struct FMulticastInlineDelegate TargetLostDelegate; // 0x1d0(0x10)
	struct FMulticastInlineDelegate CameraStickLastMovedDelegate; // 0x1e0(0x10)
	struct FMulticastInlineDelegate CameraStickTimerExpiredDelegate; // 0x1f0(0x10)
	char pad_200[0x40]; // 0x200(0x40)

	void TimerExpired(); // Function Cognition.CognitionComponent.TimerExpired // (Final|Native|Public) // @ game+0x5e1f4c0
	void SetRightStickMoving(bool bInFlag); // Function Cognition.CognitionComponent.SetRightStickMoving // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f430
	void SetMovementFocusDirection(struct FVector& WorldDirection); // Function Cognition.CognitionComponent.SetMovementFocusDirection // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e1f310
	void SetLeftStickMoving(bool bInFlag); // Function Cognition.CognitionComponent.SetLeftStickMoving // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f280
	void SetIsLocked(bool bInFlag); // Function Cognition.CognitionComponent.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f1f0
	void SetCameraLastMovedStick(bool InFlag); // Function Cognition.CognitionComponent.SetCameraLastMovedStick // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f050
	bool IsRightStickMoving(); // Function Cognition.CognitionComponent.IsRightStickMoving // (Final|Native|Public|BlueprintCallable) // @ game+0x33e0eb0
	bool IsLocked(); // Function Cognition.CognitionComponent.IsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ee70
	bool IsLeftStickMoving(); // Function Cognition.CognitionComponent.IsLeftStickMoving // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ee50
	bool IsCameraLastMovedStick(); // Function Cognition.CognitionComponent.IsCameraLastMovedStick // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ee30
	struct FVector GetMovementFocusDirection(); // Function Cognition.CognitionComponent.GetMovementFocusDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5e1ed60
	struct FVector2D GetCameraFlickDirection(); // Function Cognition.CognitionComponent.GetCameraFlickDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5e1ed10
	struct AActor* GetBestTarget(struct UAISense* SenseImplementation); // Function Cognition.CognitionComponent.GetBestTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ec70
	void DEBUG_CycleDebug(); // Function Cognition.CognitionComponent.DEBUG_CycleDebug // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ec20
	void DEBUG_ByIndex(int32_t InIndex); // Function Cognition.CognitionComponent.DEBUG_ByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1eb90
};

// Class Cognition.AISenseSpecificDetails
// Size: 0x58 (Inherited: 0x28)
struct UAISenseSpecificDetails : UObject {
	struct UCogGroupTargetPoint* TargetPointClass; // 0x28(0x08)
	struct FVector CalloutOffset; // 0x30(0x0c)
	float FarDistanceOverride; // 0x3c(0x04)
	bool bPositionCallOutsOverPerceiver; // 0x40(0x01)
	bool bPerceiverHeadtracksToTarget; // 0x41(0x01)
	bool bAllowStencil; // 0x42(0x01)
	bool bCalloutAboveCollision; // 0x43(0x01)
	char pad_44[0x14]; // 0x44(0x14)
};

// Class Cognition.AISenseFOVDetails
// Size: 0x38 (Inherited: 0x28)
struct UAISenseFOVDetails : UObject {
	struct FVector FOVAxis; // 0x28(0x0c)
	float FOV; // 0x34(0x04)
};

// Class Cognition.CognitionStimuliSourceComponent
// Size: 0x2c0 (Inherited: 0xe0)
struct UCognitionStimuliSourceComponent : UAIPerceptionStimuliSourceComponent {
	struct TMap<struct UAISense*, struct UAISenseSpecificDetails*> SenseSpecificDetails; // 0xe0(0x50)
	struct TArray<struct UCogGroupEvaluation*> TargetEvaluationArray; // 0x130(0x10)
	float FootprintRadius; // 0x140(0x04)
	float TopOffset; // 0x144(0x04)
	float BottomOffset; // 0x148(0x04)
	float PriorityWeight; // 0x14c(0x04)
	float VsPlayerPriorityWeightBump; // 0x150(0x04)
	float FarDistance_Override; // 0x154(0x04)
	float FOV_Override; // 0x158(0x04)
	enum class ESocialCombatMode SocialORCombatMode; // 0x15c(0x01)
	bool bIgnoreLineOfSight; // 0x15d(0x01)
	bool bIgnoreScreenSpace; // 0x15e(0x01)
	bool bSpecialOnScreenTarget; // 0x15f(0x01)
	bool bDisallowInteractInCombat; // 0x160(0x01)
	bool bDisallowAimTargeting; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct UCogGroupTargetPoint* TargetPointClass; // 0x168(0x08)
	struct UCogGroupLookAtPoint* LookAtPointClass; // 0x170(0x08)
	struct FVector CalloutOffset; // 0x178(0x0c)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct UAISenseFOVDetails*> TargetFOVDetails; // 0x188(0x10)
	bool bLockOnEnabled; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float MaxLockOnDistance; // 0x19c(0x04)
	bool bRecordInteractLocation; // 0x1a0(0x01)
	bool bAllowTargetWhileStandingOn; // 0x1a1(0x01)
	bool bOverrideMinAimDistance; // 0x1a2(0x01)
	char pad_1A3[0x1]; // 0x1a3(0x01)
	float MinAimDistance; // 0x1a4(0x04)
	enum class ECalloutType CalloutType; // 0x1a8(0x01)
	enum class ECalloutBlipType CalloutBlipType; // 0x1a9(0x01)
	enum class ECalloutActions CalloutAction; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
	struct FText TargetText; // 0x1b0(0x18)
	struct FSlateColor CalloutTextColor; // 0x1c8(0x28)
	bool bGrayOutButton; // 0x1f0(0x01)
	bool bIsTargetTextTranslatable; // 0x1f1(0x01)
	char pad_1F2[0x2]; // 0x1f2(0x02)
	struct FVector CustomTargetPoint; // 0x1f4(0x0c)
	struct FVector CustomLookAtPoint; // 0x200(0x0c)
	float ChargeTime; // 0x20c(0x04)
	float CalloutInteractDistance; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct TMap<struct UAISense*, struct UCogTargetSceneComponent*> SenseSpecificTargetSceneComponents; // 0x218(0x50)
	struct TMap<struct UCogGroupTargetPoint*, struct UCogTargetSceneComponent*> TargetPointSpecificTargetSceneComponents; // 0x268(0x50)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void SetPriorityWeight(float weight); // Function Cognition.CognitionStimuliSourceComponent.SetPriorityWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f3b0
	void SetIgnoreLineOfSight(bool bFlag); // Function Cognition.CognitionStimuliSourceComponent.SetIgnoreLineOfSight // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f160
	void SetFootprintRadius(float Radius); // Function Cognition.CognitionStimuliSourceComponent.SetFootprintRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1f0e0
	void SetAutoRegisterAsSource(bool bFlag); // Function Cognition.CognitionStimuliSourceComponent.SetAutoRegisterAsSource // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1efc0
	bool IsRegisteredForSense(struct UAISense* SenseToFind); // Function Cognition.CognitionStimuliSourceComponent.IsRegisteredForSense // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ee90
	bool IsOwned(); // Function Cognition.CognitionStimuliSourceComponent.IsOwned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8aa0
	struct UAISenseSpecificDetails* GetSenseSpecificDetails(struct UAISense* InSense); // Function Cognition.CognitionStimuliSourceComponent.GetSenseSpecificDetails // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ed90
	float GetPriorityWeight(); // Function Cognition.CognitionStimuliSourceComponent.GetPriorityWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x33e0980
	bool GetIgnoreLineOfSight(); // Function Cognition.CognitionStimuliSourceComponent.GetIgnoreLineOfSight // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1ed40
	float GetFootprintRadius(); // Function Cognition.CognitionStimuliSourceComponent.GetFootprintRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x33e1090
	bool GetAutoRegisterAsSource(); // Function Cognition.CognitionStimuliSourceComponent.GetAutoRegisterAsSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e1ec40
	void ChangeInformation(struct FCalloutInformation& NewInformation); // Function Cognition.CognitionStimuliSourceComponent.ChangeInformation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e1ea90
	float CalculateRadiusNeededToBePerceivedBy(float DistanceFromPerceiver, struct AController* PerceiverController, struct UAISense* SenseToUse, bool bIncludePerceiverRadius); // Function Cognition.CognitionStimuliSourceComponent.CalculateRadiusNeededToBePerceivedBy // (Final|Native|Public|BlueprintCallable) // @ game+0x5e1e930
	void AddRegisterAsSourceForSenses(struct UAISense*& Sense); // Function Cognition.CognitionStimuliSourceComponent.AddRegisterAsSourceForSenses // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e1e860
};

