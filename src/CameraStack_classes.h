// Class CameraStack.BTDecorator_CameraContext
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_CameraContext : UBTDecorator {
	struct FName Context; // 0x68(0x08)
};

// Class CameraStack.BTDecorator_CameraInputTimeout
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_CameraInputTimeout : UBTDecorator {
	float TimeLimit; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class CameraStack.BTDecorator_CameraActiveInputTimeout
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_CameraActiveInputTimeout : UBTDecorator_CameraInputTimeout {
};

// Class CameraStack.BTDecorator_JumpFallTimeout
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_JumpFallTimeout : UBTDecorator {
	float TimeLimit; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class CameraStack.BTService_Camera_DisableInput
// Size: 0x78 (Inherited: 0x70)
struct UBTService_Camera_DisableInput : UBTService {
	bool bDisableLookX; // 0x70(0x01)
	bool bDisableLookY; // 0x71(0x01)
	bool bOverrideMinDeadzone; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	float MinDeadzone; // 0x74(0x04)
};

// Class CameraStack.BTT_Camera_Base
// Size: 0x70 (Inherited: 0x70)
struct UBTT_Camera_Base : UBTTaskNode {
};

// Class CameraStack.BTT_Camera_AddBehavior
// Size: 0x88 (Inherited: 0x70)
struct UBTT_Camera_AddBehavior : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
	bool bReuseBehaviorOnReactivate; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class CameraStack.BTT_Camera_AddCrossBlendBehavior
// Size: 0xa0 (Inherited: 0x70)
struct UBTT_Camera_AddCrossBlendBehavior : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
	struct TArray<struct UCameraStackBehaviorMultiCrossBlend*> CrossBlendBehaviorClass; // 0x80(0x10)
	int32_t GroupIndex; // 0x90(0x04)
	float weight; // 0x94(0x04)
	enum class ECameraStackBehaviorSorting CrossBlendSorting; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t FilterFlags; // 0x9c(0x04)
};

// Class CameraStack.BTT_Camera_BlendToStackBase
// Size: 0x80 (Inherited: 0x70)
struct UBTT_Camera_BlendToStackBase : UBTT_Camera_Base {
	struct UCameraStackSettings* StackSettings; // 0x70(0x08)
	bool bReuseBehaviorOnReactivate; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class CameraStack.BTT_Camera_BlendToStack
// Size: 0x90 (Inherited: 0x80)
struct UBTT_Camera_BlendToStack : UBTT_Camera_BlendToStackBase {
	float BlendInDuration; // 0x80(0x04)
	float BlendOutDuration; // 0x84(0x04)
	bool bLazyBlendOut; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class CameraStack.BTT_Camera_BlendToStack_AnimationRequest
// Size: 0x80 (Inherited: 0x80)
struct UBTT_Camera_BlendToStack_AnimationRequest : UBTT_Camera_BlendToStackBase {
};

// Class CameraStack.BTT_Camera_CancelReset
// Size: 0x70 (Inherited: 0x70)
struct UBTT_Camera_CancelReset : UBTT_Camera_Base {
};

// Class CameraStack.BTT_Camera_DisableBehavior
// Size: 0x90 (Inherited: 0x70)
struct UBTT_Camera_DisableBehavior : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	enum class ECameraStackBehaviorSorting BehaviorSorting; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t FilterFlags; // 0x7c(0x04)
	float BlendOutDuration; // 0x80(0x04)
	float BlendInDuration; // 0x84(0x04)
	bool bReturnImmediately; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class CameraStack.BTT_Camera_DisableBehaviors
// Size: 0x90 (Inherited: 0x70)
struct UBTT_Camera_DisableBehaviors : UBTT_Camera_Base {
	struct TArray<struct UCameraStackBehavior*> BehaviorClasses; // 0x70(0x10)
	enum class ECameraStackBehaviorSorting BehaviorSorting; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t FilterFlags; // 0x84(0x04)
	float BlendOutDuration; // 0x88(0x04)
	float BlendInDuration; // 0x8c(0x04)
};

// Class CameraStack.BTT_Camera_InsertBehaviorAfter
// Size: 0xa0 (Inherited: 0x70)
struct UBTT_Camera_InsertBehaviorAfter : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
	struct TArray<struct UCameraStackBehavior*> InsertAfterBehaviorClass; // 0x80(0x10)
	enum class ECameraStackBehaviorSorting InsertAfterBehaviorSorting; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t FilterFlags; // 0x94(0x04)
	bool bReuseBehaviorOnReactivate; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class CameraStack.BTT_Camera_InsertBehaviorBefore
// Size: 0xa0 (Inherited: 0x70)
struct UBTT_Camera_InsertBehaviorBefore : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
	struct TArray<struct UCameraStackBehavior*> InsertBeforeBehaviorClass; // 0x80(0x10)
	enum class ECameraStackBehaviorSorting InsertBeforeBehaviorSorting; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t FilterFlags; // 0x94(0x04)
	bool bReuseBehaviorOnReactivate; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class CameraStack.BTT_Camera_PauseBehavior
// Size: 0x88 (Inherited: 0x70)
struct UBTT_Camera_PauseBehavior : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	enum class ECameraStackBehaviorSorting BehaviorSorting; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t FilterFlags; // 0x7c(0x04)
	bool bReturnImmediately; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class CameraStack.BTT_Camera_ReplaceBehavior
// Size: 0xa8 (Inherited: 0x70)
struct UBTT_Camera_ReplaceBehavior : UBTT_Camera_Base {
	struct UCameraStackBehavior* BehaviorClass; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
	struct TArray<struct UCameraStackBehavior*> BehaviorClassToReplace; // 0x80(0x10)
	float BlendOutPredecessorDuration; // 0x90(0x04)
	float BlendInPredecessorDuration; // 0x94(0x04)
	enum class ECameraStackBehaviorSorting PredecessorSorting; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t FilterFlags; // 0x9c(0x04)
	bool bRemovePredecessor; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class CameraStack.BTT_Camera_Reset
// Size: 0x90 (Inherited: 0x70)
struct UBTT_Camera_Reset : UBTT_Camera_Base {
	float ResetDuration; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UCurveFloat* ResetCurve; // 0x78(0x08)
	bool bCancelResetOnInput; // 0x80(0x01)
	bool bSkipResetOnMouseInput; // 0x81(0x01)
	bool bResetYaw; // 0x82(0x01)
	bool bResetPitch; // 0x83(0x01)
	bool bResetToPitchFoundOnStack; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float PitchToResetTo; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class CameraStack.BTT_Camera_ResetCut
// Size: 0x88 (Inherited: 0x70)
struct UBTT_Camera_ResetCut : UBTT_Camera_Base {
	enum class ECameraStackResetType ResetType; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FRotator FixedArmRotationValue; // 0x74(0x0c)
	struct FVector2D RotationOffset; // 0x80(0x08)
};

// Class CameraStack.BTT_Camera_SetPrimaryTargetActor
// Size: 0x80 (Inherited: 0x70)
struct UBTT_Camera_SetPrimaryTargetActor : UBTT_Camera_Base {
	struct UCameraStackSecondaryTargetGetter* TargetActor; // 0x70(0x08)
	float BlendInDuration; // 0x78(0x04)
	float BlendOutDuration; // 0x7c(0x04)
};

// Class CameraStack.BTT_PlayCameraShake
// Size: 0x80 (Inherited: 0x70)
struct UBTT_PlayCameraShake : UBTTaskNode {
	struct UCameraShakeBase* CameraShake; // 0x70(0x08)
	float Scale; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class CameraStack.CameraAspectRatioWidget
// Size: 0x270 (Inherited: 0x268)
struct UCameraAspectRatioWidget : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)

	void UI_UpdatePillarbox(float InBarScale); // Function CameraStack.CameraAspectRatioWidget.UI_UpdatePillarbox // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UI_UpdateLetterbox(float InBarScale); // Function CameraStack.CameraAspectRatioWidget.UI_UpdateLetterbox // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UI_HideBars(); // Function CameraStack.CameraAspectRatioWidget.UI_HideBars // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class CameraStack.CameraCheatManager
// Size: 0x88 (Inherited: 0x88)
struct UCameraCheatManager : UCheatManager {
};

// Class CameraStack.CameraDataHelper
// Size: 0x28 (Inherited: 0x28)
struct UCameraDataHelper : UObject {

	struct FRotator VecToRot(struct FVector Vec); // Function CameraStack.CameraDataHelper.VecToRot // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17088d0
	struct FRotator ToOrientationRotator(struct FVector Vec); // Function CameraStack.CameraDataHelper.ToOrientationRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1709800
	void SetTargetOffset(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity); // Function CameraStack.CameraDataHelper.SetTargetOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17096c0
	void SetRotation(struct FCameraData& CameraData, struct FRotator Value, struct FRotator Velocity); // Function CameraStack.CameraDataHelper.SetRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1709580
	void SetFocusDistance(struct FCameraData& CameraData, float Value, float Velocity); // Function CameraStack.CameraDataHelper.SetFocusDistance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1709440
	void SetFieldOfView(struct FCameraData& CameraData, float Value, float Velocity); // Function CameraStack.CameraDataHelper.SetFieldOfView // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1709300
	void SetCameraSpaceTranslation(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity); // Function CameraStack.CameraDataHelper.SetCameraSpaceTranslation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17091c0
	void SetCameraSpaceRotation(struct FCameraData& CameraData, struct FRotator Value, struct FRotator Velocity); // Function CameraStack.CameraDataHelper.SetCameraSpaceRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1709080
	void SetArmOrigin(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity); // Function CameraStack.CameraDataHelper.SetArmOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708f40
	void SetArmLength(struct FCameraData& CameraData, float Value, float Velocity); // Function CameraStack.CameraDataHelper.SetArmLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1708e00
	void SetAperture(struct FCameraData& CameraData, float Value, float Velocity); // Function CameraStack.CameraDataHelper.SetAperture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1708cc0
	void SetAccumulatedRotationDelta(struct FCameraData& CameraData, struct FRotator Value, struct FRotator Velocity); // Function CameraStack.CameraDataHelper.SetAccumulatedRotationDelta // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708b80
	float SafeUnwindDegrees(float Deg); // Function CameraStack.CameraDataHelper.SafeUnwindDegrees // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1708af0
	struct FVector RotToVec(struct FRotator Rot); // Function CameraStack.CameraDataHelper.RotToVec // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17088d0
	void RotateAroundLocation(struct FVector& TargetLocation, struct FVector& InOutViewLocation, struct FRotator& InOutViewRotation, float AngleInRadians); // Function CameraStack.CameraDataHelper.RotateAroundLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708970
	struct FVector RayPlaneIntersection(struct FVector& RayOrigin, struct FVector& RayDirection, struct FPlane& Plane); // Function CameraStack.CameraDataHelper.RayPlaneIntersection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708780
	struct FVector GetWorldDirectionAtScreenLocation(struct FVector2D& InScreenLocation, struct FMatrix& InInvViewProjectionMatrix); // Function CameraStack.CameraDataHelper.GetWorldDirectionAtScreenLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708680
	void GetTargetOffset(struct FCameraData& CameraData, struct FVector& OutValue, struct FVector& OutVelocity); // Function CameraStack.CameraDataHelper.GetTargetOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708540
	bool GetScreenLocationAtWorldLocation(struct FVector& InWorldLocation, struct FMatrix& InViewProjectionMatrix, struct FVector2D& OutScreenLocation); // Function CameraStack.CameraDataHelper.GetScreenLocationAtWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1708400
	void GetRotation(struct FCameraData& CameraData, struct FRotator& OutValue, struct FRotator& OutVelocity); // Function CameraStack.CameraDataHelper.GetRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17082c0
	float GetFOVFromFocalLength(float InFocalLength, float InSensorWidth, bool bIncOffset); // Function CameraStack.CameraDataHelper.GetFOVFromFocalLength // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1707e00
	void GetFocusDistance(struct FCameraData& CameraData, float& OutValue, float& OutVelocity); // Function CameraStack.CameraDataHelper.GetFocusDistance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1708170
	float GetFocalLengthFromFOV(float InFieldOfView, float InSensorWidth, bool bIncOffset); // Function CameraStack.CameraDataHelper.GetFocalLengthFromFOV // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1708060
	void GetFieldOfView(struct FCameraData& CameraData, float& OutValue, float& OutVelocity); // Function CameraStack.CameraDataHelper.GetFieldOfView // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1707f10
	void GetCameraSpaceTranslation(struct FCameraData& CameraData, struct FVector& OutValue, struct FVector& OutVelocity); // Function CameraStack.CameraDataHelper.GetCameraSpaceTranslation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707cc0
	void GetCameraSpaceRotation(struct FCameraData& CameraData, struct FRotator& OutValue, struct FRotator& OutVelocity); // Function CameraStack.CameraDataHelper.GetCameraSpaceRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707b80
	void GetArmOrigin(struct FCameraData& CameraData, struct FVector& OutValue, struct FVector& OutVelocity); // Function CameraStack.CameraDataHelper.GetArmOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707a40
	void GetArmLength(struct FCameraData& CameraData, float& OutValue, float& OutVelocity); // Function CameraStack.CameraDataHelper.GetArmLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17078f0
	void GetAperture(struct FCameraData& CameraData, float& OutValue, float& OutVelocity); // Function CameraStack.CameraDataHelper.GetAperture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17077a0
	void GetAccumulatedRotationDelta(struct FCameraData& CameraData, struct FRotator& OutValue, struct FRotator& OutVelocity); // Function CameraStack.CameraDataHelper.GetAccumulatedRotationDelta // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707660
	float FindSwingTwistDecomposition(struct FQuat& Quat, struct FVector& Axis); // Function CameraStack.CameraDataHelper.FindSwingTwistDecomposition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707570
	void DeprojectScreenToWorldStable(struct APlayerController* PlayerController, struct FVector2D& InScreenPosition, struct FVector& OutLocation, struct FVector& OutDirection); // Function CameraStack.CameraDataHelper.DeprojectScreenToWorldStable // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1707410
	struct FMatrix ComputeViewProjectionMatrix(struct AActor* InTargetActor, struct FTransform& InCameraTransform, float InFieldOfView); // Function CameraStack.CameraDataHelper.ComputeViewProjectionMatrix // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707270
	struct FVector ComputeClosestDirectionInFrustum(struct FVector& InTargetDirection, struct FBox2D& InScreenArea, struct FVector& InEyeLocation, struct FMatrix& InViewProjMatrix, struct FMatrix& InInvViewProjMatrix); // Function CameraStack.CameraDataHelper.ComputeClosestDirectionInFrustum // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1707060
	void AddTargetOffset(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddTargetOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1706ec0
	void AddRotation(struct FCameraData& CameraData, struct FRotator Value, struct FRotator Velocity, float Scale, bool bAccumulate); // Function CameraStack.CameraDataHelper.AddRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1706cf0
	void AddFocusDistance(struct FCameraData& CameraData, float Value, float Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddFocusDistance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1706b70
	void AddFieldOfView(struct FCameraData& CameraData, float Value, float Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddFieldOfView // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17069f0
	void AddCameraSpaceTranslation(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddCameraSpaceTranslation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1706850
	void AddCameraSpaceRotation(struct FCameraData& CameraData, struct FRotator Value, struct FRotator Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddCameraSpaceRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17066b0
	void AddArmOrigin(struct FCameraData& CameraData, struct FVector Value, struct FVector Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddArmOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1706510
	void AddArmLength(struct FCameraData& CameraData, float Value, float Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddArmLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1706390
	void AddAperture(struct FCameraData& CameraData, float Value, float Velocity, float Scale); // Function CameraStack.CameraDataHelper.AddAperture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1706210
};

// Class CameraStack.CameraPostProcessHandler
// Size: 0x58 (Inherited: 0x28)
struct UCameraPostProcessHandler : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct TWeakObjectPtr<struct UCameraComponent> BlendCamera; // 0x50(0x08)
};

// Class CameraStack.CameraStack
// Size: 0x1c8 (Inherited: 0x28)
struct UCameraStack : UObject {
	struct TArray<struct UCameraStackBehavior*> Behaviors; // 0x28(0x10)
	char pad_38[0x190]; // 0x38(0x190)

	bool UnpauseBehavior(struct UCameraStackBehavior* InBehavior); // Function CameraStack.CameraStack.UnpauseBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170e3e0
	bool ResetBehaviors(struct UCameraStackBehaviorCore* InBehavior); // Function CameraStack.CameraStack.ResetBehaviors // (Final|Native|Public|BlueprintCallable) // @ game+0x170dec0
	bool ReplaceCoreBehavior(struct UCameraStackBehaviorCore* InBehavior, float InBlendOutDuration, float InBlendInDuration); // Function CameraStack.CameraStack.ReplaceCoreBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170ddb0
	bool ReplaceBehavior(struct UCameraStackBehavior* InBehavior, struct UCameraStackBehavior* InPredecessorBehavior, float InBlendOutDuration, float InBlendInDuration); // Function CameraStack.CameraStack.ReplaceBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170dc50
	bool RemoveBehavior(struct UCameraStackBehavior* InBehavior, float InBlendOutDuration); // Function CameraStack.CameraStack.RemoveBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170db80
	bool PauseBehavior(struct UCameraStackBehavior* InBehavior); // Function CameraStack.CameraStack.PauseBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170d9e0
	bool InsertBeforeBehavior(struct UCameraStackBehavior* InBehavior, struct UCameraStackBehavior* InBeforeBehavior, float InBlendInDuration); // Function CameraStack.CameraStack.InsertBeforeBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170d7b0
	bool InsertAfterBehavior(struct UCameraStackBehavior* InBehavior, struct UCameraStackBehavior* InAfterBehavior, float InBlendInDuration); // Function CameraStack.CameraStack.InsertAfterBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170d690
	struct UCameraStackBehavior* GetTopmostBehavior(); // Function CameraStack.CameraStack.GetTopmostBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d600
	bool GetRotationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStack.GetRotationLimits // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x170d4b0
	struct ACameraStackActor* GetOwner(); // Function CameraStack.CameraStack.GetOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d3a0
	bool GetFocusDistanceLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStack.GetFocusDistanceLimits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170d1f0
	bool GetFieldOfViewLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStack.GetFieldOfViewLimits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170d100
	struct UCameraStackBehaviorCore* GetCoreBehavior(); // Function CameraStack.CameraStack.GetCoreBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d0d0
	bool GetCameraSpaceTranslationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStack.GetCameraSpaceTranslationLimits // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x170cf60
	bool GetCameraSpaceRotationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStack.GetCameraSpaceRotationLimits // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x170ce50
	struct UCameraStackBehavior* GetBehaviourWithType(struct UCameraStackBehavior* InType, enum class ECameraStackBehaviorSorting InSorting, int32_t FilterFlags); // Function CameraStack.CameraStack.GetBehaviourWithType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170cd40
	struct UCameraStackBehavior* GetBehaviorWithTypes(struct TArray<struct UCameraStackBehavior*>& InTypes, enum class ECameraStackBehaviorSorting InSorting, int32_t FilterFlags); // Function CameraStack.CameraStack.GetBehaviorWithTypes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x170c8f0
	struct TArray<struct UCameraStackBehavior*> GetBehaviorsWithTypes(struct TArray<struct UCameraStackBehavior*>& InTypes, enum class ECameraStackBehaviorSorting InSorting, int32_t FilterFlags); // Function CameraStack.CameraStack.GetBehaviorsWithTypes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x170cbb0
	struct TArray<struct UCameraStackBehavior*> GetBehaviorsWithType(struct UCameraStackBehavior* InType, enum class ECameraStackBehaviorSorting InSorting, int32_t FilterFlags); // Function CameraStack.CameraStack.GetBehaviorsWithType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170ca50
	bool GetArmOriginLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStack.GetArmOriginLimits // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x170c770
	bool GetArmLengthLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStack.GetArmLengthLimits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170c680
	bool GetApertureLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStack.GetApertureLimits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170c590
	bool EnableBehavior(struct UCameraStackBehavior* InBehavior, float InBlendInDuration); // Function CameraStack.CameraStack.EnableBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170c1a0
	bool DisableBehavior(struct UCameraStackBehavior* InBehavior, float InBlendOutDuration); // Function CameraStack.CameraStack.DisableBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170c0d0
	struct UCameraStackBehavior* CreateNonCoreBehavior(struct UCameraStackBehavior* BehaviorClass, struct UObject* Template); // Function CameraStack.CameraStack.CreateNonCoreBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170c000
	struct UCameraStackBehaviorCore* CreateCoreBehavior(struct UCameraStackBehaviorCore* BehaviorClass, struct UObject* Template); // Function CameraStack.CameraStack.CreateCoreBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170be60
	bool ContainsBehaviorWithType(struct UCameraStackBehavior*& InType, int32_t FilterFlags); // Function CameraStack.CameraStack.ContainsBehaviorWithType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x170bca0
	struct UCameraStackBehaviorMultiBehaviorBlend* AddStackBehaviors(struct FCameraStackData& InStackData, float InBlendInDuration); // Function CameraStack.CameraStack.AddStackBehaviors // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170bb10
	bool AddBehavior(struct UCameraStackBehavior* InBehavior, float InBlendInDuration, bool bInSkipFlags); // Function CameraStack.CameraStack.AddBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170b9f0
};

// Class CameraStack.CameraStackActor
// Size: 0x408 (Inherited: 0x248)
struct ACameraStackActor : AActor {
	struct UCameraStackCineComponent* CameraComponent; // 0x248(0x08)
	struct FCameraStackData DefaultData; // 0x250(0x18)
	struct UCameraStackTarget* Target; // 0x268(0x08)
	struct TArray<struct UBehaviorTree*> BehaviorTrees; // 0x270(0x10)
	bool bDestroyIfSpawnedOnEndViewTarget; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t InputPriorityOverride; // 0x284(0x04)
	bool bOverrideInputMappings; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FCameraInputMappings InputMappingsOverride; // 0x28c(0x98)
	bool bUnbindInputOnEndViewTarget; // 0x324(0x01)
	char pad_325[0x1b]; // 0x325(0x1b)
	struct UCameraStack* BehaviorStack; // 0x340(0x08)
	struct UCameraStackInput* Input; // 0x348(0x08)
	char pad_350[0xa0]; // 0x350(0xa0)
	struct UInputComponent* CameraInputComponent; // 0x3f0(0x08)
	struct TArray<struct FCameraStackActorBehaviorTreePair> BehaviorTreePairs; // 0x3f8(0x10)

	void SetNamedSecondaryTargetActor(struct FName InName, struct AActor* InActor); // Function CameraStack.CameraStackActor.SetNamedSecondaryTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x170e280
	void SetCameraContext(struct FName InContextName, bool bSet); // Function CameraStack.CameraStackActor.SetCameraContext // (Final|Native|Public|BlueprintCallable) // @ game+0x170e0e0
	void ResetRotationToTarget(float InBlendDuration, struct FRotator& InDesiredDelta, bool bInResetYaw, bool bInResetPitch); // Function CameraStack.CameraStackActor.ResetRotationToTarget // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x170df60
	bool IsCameraContextSet(struct FName InContextName); // Function CameraStack.CameraStackActor.IsCameraContextSet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d900
	struct FTransform GetUnblendedCameraViewTransform(); // Function CameraStack.CameraStackActor.GetUnblendedCameraViewTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d630
	struct UCameraStackTarget* GetTarget(); // Function CameraStack.CameraStackActor.GetTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d5e0
	struct AActor* GetNamedSecondaryTargetActor(struct FName InName); // Function CameraStack.CameraStackActor.GetNamedSecondaryTargetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d300
	struct UCameraStackInput* GetInput(); // Function CameraStack.CameraStackActor.GetInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d2e0
	struct FTransform GetCameraViewTransform(); // Function CameraStack.CameraStackActor.GetCameraViewTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d070
	struct UCameraStack* GetBehaviors(); // Function CameraStack.CameraStackActor.GetBehaviors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170ca30
	struct FRotator GetArmRotation(); // Function CameraStack.CameraStackActor.GetArmRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x170c880
	void ForceSetArmRotationTowardsLocation(struct FVector InLocation); // Function CameraStack.CameraStackActor.ForceSetArmRotationTowardsLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x170c400
	void ForceSetArmRotation(struct FRotator InRotation, bool bUseDefaultPitch); // Function CameraStack.CameraStackActor.ForceSetArmRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x170c320
	void ForceCameraReset(); // Function CameraStack.CameraStackActor.ForceCameraReset // (Final|Native|Public|BlueprintCallable) // @ game+0x170c300
	struct UCameraStackBehavior* CreateNonCoreBehavior(struct UCameraStackBehavior* BehaviorClass, struct UObject* Template); // Function CameraStack.CameraStackActor.CreateNonCoreBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170bf30
	struct UCameraStackBehaviorCore* CreateCoreBehavior(struct UCameraStackBehaviorCore* BehaviorClass, struct UObject* Template); // Function CameraStack.CameraStackActor.CreateCoreBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x170bd90
	void ClearCameraContext(struct FName InContextName); // Function CameraStack.CameraStackActor.ClearCameraContext // (Final|Native|Public|BlueprintCallable) // @ game+0x170bc10
};

// Class CameraStack.CameraStackAnimationComponent
// Size: 0x110 (Inherited: 0xc8)
struct UCameraStackAnimationComponent : UActorComponent {
	struct FCameraStackAnimationRequest CurrentRequest; // 0xc8(0x20)
	struct FCameraStackAnimationRequest LastRequest; // 0xe8(0x20)
	char pad_108[0x8]; // 0x108(0x08)

	void PlayAnimation(struct FCameraStackAnimationRequest& InAnimationRequest, struct UObject* InRequester); // Function CameraStack.CameraStackAnimationComponent.PlayAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x170da80
	void EndAnimation(struct UObject* InRequester); // Function CameraStack.CameraStackAnimationComponent.EndAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x170c270
};

// Class CameraStack.CameraStackSecondaryTargetGetter
// Size: 0x60 (Inherited: 0x28)
struct UCameraStackSecondaryTargetGetter : UObject {
	float CommitTime; // 0x28(0x04)
	char pad_2C[0x34]; // 0x2c(0x34)

	void Update(float DeltaSeconds); // Function CameraStack.CameraStackSecondaryTargetGetter.Update // (Native|Public|BlueprintCallable) // @ game+0x1722a10
	bool IsValid(); // Function CameraStack.CameraStackSecondaryTargetGetter.IsValid // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12bfb10
	bool HasValidData(); // Function CameraStack.CameraStackSecondaryTargetGetter.HasValidData // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1722030
	struct FVector GetTargetLocation(); // Function CameraStack.CameraStackSecondaryTargetGetter.GetTargetLocation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721fb0
	void GetTargetBoundingCylinder(struct FVector& OutCenterLocation, float& OutHalfHeight, float& OutRadius); // Function CameraStack.CameraStackSecondaryTargetGetter.GetTargetBoundingCylinder // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721e70
	struct AActor* GetTargetActor(); // Function CameraStack.CameraStackSecondaryTargetGetter.GetTargetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721e10
	void Activate(struct UCameraStack* InList); // Function CameraStack.CameraStackSecondaryTargetGetter.Activate // (Native|Public|BlueprintCallable) // @ game+0x1721010
};

// Class CameraStack.CameraStackAttachParentGetter
// Size: 0x60 (Inherited: 0x60)
struct UCameraStackAttachParentGetter : UCameraStackSecondaryTargetGetter {
};

// Class CameraStack.CameraStackBehavior
// Size: 0x50 (Inherited: 0x28)
struct UCameraStackBehavior : UObject {
	struct TWeakObjectPtr<struct UCameraStack> CurrentList; // 0x28(0x08)
	char pad_30[0x14]; // 0x30(0x14)
	int32_t DisableCounter; // 0x44(0x04)
	bool bPaused; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void SetPaused(bool bInPaused); // Function CameraStack.CameraStackBehavior.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x170e350
	void SetDisabled(bool bInDisabled, bool bForce); // Function CameraStack.CameraStackBehavior.SetDisabled // (Final|Native|Public|BlueprintCallable) // @ game+0x170e1b0
	bool IsPaused(); // Function CameraStack.CameraStackBehavior.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d9c0
	bool IsDisabled(); // Function CameraStack.CameraStackBehavior.IsDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d9a0
	bool IsActive(); // Function CameraStack.CameraStackBehavior.IsActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d8d0
	float GetSecondsActive(); // Function CameraStack.CameraStackBehavior.GetSecondsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d5c0
	bool GetPreviousValues(struct FCameraData& OutData); // Function CameraStack.CameraStackBehavior.GetPreviousValues // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d400
	struct ACameraStackActor* GetOwner(); // Function CameraStack.CameraStackBehavior.GetOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d3d0
	struct UCameraStack* GetBehaviorList(); // Function CameraStack.CameraStackBehavior.GetBehaviorList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170c8c0
	bool GetAllPreviousValues(struct FCameraData& OutData, bool bInUseUnblendedStackValues); // Function CameraStack.CameraStackBehavior.GetAllPreviousValues // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x170c490
};

// Class CameraStack.CameraStackBehaviorBlend
// Size: 0x1b8 (Inherited: 0x50)
struct UCameraStackBehaviorBlend : UCameraStackBehavior {
	char pad_50[0x168]; // 0x50(0x168)

	float GetBlendAlpha(); // Function CameraStack.CameraStackBehaviorBlend.GetBlendAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1713500
};

// Class CameraStack.CameraStackBehaviorAddAccumulatedRotation
// Size: 0x1e0 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddAccumulatedRotation : UCameraStackBehaviorBlend {
	struct FRotator RotationPerSecond; // 0x1b8(0x0c)
	char pad_1C4[0x1c]; // 0x1c4(0x1c)
};

// Class CameraStack.CameraStackBehaviorAddArmLength
// Size: 0x1c0 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddArmLength : UCameraStackBehaviorBlend {
	float ArmLengthOffset; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// Class CameraStack.CameraStackBehaviorAddArmLengthFromTargetSize
// Size: 0x260 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddArmLengthFromTargetSize : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* Target; // 0x1b8(0x08)
	struct FRuntimeFloatCurve ArmLengthOffsetFromTargetSize; // 0x1c0(0x88)
	bool bUpdateArmLength; // 0x248(0x01)
	char pad_249[0x17]; // 0x249(0x17)
};

// Class CameraStack.CameraStackBehaviorAddArmLengthFromTargetPitch
// Size: 0x258 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddArmLengthFromTargetPitch : UCameraStackBehaviorBlend {
	struct FRuntimeFloatCurve PitchToArmLengthOffsetCurve; // 0x1b8(0x88)
	float InterpSpeed; // 0x240(0x04)
	char pad_244[0x14]; // 0x244(0x14)
};

// Class CameraStack.CameraStackBehaviorAddArmOriginTranslation
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddArmOriginTranslation : UCameraStackBehaviorBlend {
	struct FVector ArmOriginTranslation; // 0x1b8(0x0c)
	bool bRelativeToTargetUpright; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
};

// Class CameraStack.CameraStackBehaviorAddCameraSpaceRotation
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddCameraSpaceRotation : UCameraStackBehaviorBlend {
	struct FRotator CameraSpaceRotation; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
};

// Class CameraStack.CameraStackBehaviorAddCameraSpaceTranslation
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddCameraSpaceTranslation : UCameraStackBehaviorBlend {
	struct FVector CameraSpaceTranslation; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
};

// Class CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromTargetSize
// Size: 0x368 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* Target; // 0x1b8(0x08)
	struct FRuntimeCurveVector TranslationOffsetFromTargetSize; // 0x1c0(0x188)
	bool bUpdateAtRuntime; // 0x348(0x01)
	char pad_349[0x1f]; // 0x349(0x1f)
};

// Class CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading
// Size: 0x360 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading : UCameraStackBehaviorBlend {
	struct FRuntimeCurveVector YawToTranslationCurve; // 0x1b8(0x188)
	float InterpSpeed; // 0x340(0x04)
	char pad_344[0x1c]; // 0x344(0x1c)
};

// Class CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromPitch
// Size: 0x358 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddCameraSpaceTranslationFromPitch : UCameraStackBehaviorBlend {
	struct FRuntimeCurveVector PitchToTranslationCurve; // 0x1b8(0x188)
	char pad_340[0x18]; // 0x340(0x18)
};

// Class CameraStack.CameraStackBehaviorAddTargetOffset
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorAddTargetOffset : UCameraStackBehaviorBlend {
	struct FVector TargetOffset; // 0x1b8(0x0c)
	bool bTargetLocalSpace; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
};

// Class CameraStack.CameraStackBehaviorSetTargetWorldLocation
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetTargetWorldLocation : UCameraStackBehaviorBlend {
	struct FVector TargetWorldLocation; // 0x1b8(0x0c)
	float PrimaryTargetOffsetFactor; // 0x1c4(0x04)
};

// Class CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity
// Size: 0x2d0 (Inherited: 0x1b8)
struct UCameraStackBehaviorAdjustArmFromTargetVelocity : UCameraStackBehaviorBlend {
	struct FVector Scale; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FRuntimeFloatCurve AngleToScale; // 0x1c8(0x88)
	float VelocityFilterHalflife; // 0x250(0x04)
	float SpeedFilterHalflife; // 0x254(0x04)
	float ScaleFilterHalflife; // 0x258(0x04)
	bool bDrawDebug; // 0x25c(0x01)
	char pad_25D[0x73]; // 0x25d(0x73)

	void SetVelocityFilterHalflife(float InHalflife); // Function CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity.SetVelocityFilterHalflife // (Final|Native|Public|BlueprintCallable) // @ game+0x17137e0
	void SetScaleFilterHalflife(float InHalflife); // Function CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity.SetScaleFilterHalflife // (Final|Native|Public|BlueprintCallable) // @ game+0x1713530
};

// Class CameraStack.CameraStackBehaviorAnimationBase
// Size: 0x610 (Inherited: 0x1b8)
struct UCameraStackBehaviorAnimationBase : UCameraStackBehaviorBlend {
	enum class ECameraStackAnimationLoopMode LoopMode; // 0x1b8(0x01)
	enum class ECameraStackAnimationFrame AnimationFrame; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1c0(0x08)
	float PlayRate; // 0x1c8(0x04)
	struct FVector AdditiveTranslationFactor; // 0x1cc(0x0c)
	struct FRotator AdditiveRotationFactor; // 0x1d8(0x0c)
	struct FCameraOptionName AdditiveFactorOptionName; // 0x1e4(0x08)
	struct FCameraOptionName PlayRateFactorOptionName; // 0x1ec(0x08)
	char pad_1F4[0xc]; // 0x1f4(0x0c)
	struct FCameraStackAnimData AnimData; // 0x200(0x150)
	struct UAnimSequenceBase* AnimSequence; // 0x350(0x08)
	char pad_358[0x2b8]; // 0x358(0x2b8)
};

// Class CameraStack.CameraStackBehaviorAnimationSequence
// Size: 0x620 (Inherited: 0x610)
struct UCameraStackBehaviorAnimationSequence : UCameraStackBehaviorAnimationBase {
	struct UAnimSequenceBase* SequenceToPlay; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class CameraStack.CameraStackBehaviorAnimationSequenceClosest
// Size: 0x620 (Inherited: 0x610)
struct UCameraStackBehaviorAnimationSequenceClosest : UCameraStackBehaviorAnimationBase {
	struct TArray<struct UAnimSequenceBase*> AnimSequenceOptions; // 0x610(0x10)
};

// Class CameraStack.CameraStackBehaviorAnimationSequenceRequested
// Size: 0x610 (Inherited: 0x610)
struct UCameraStackBehaviorAnimationSequenceRequested : UCameraStackBehaviorAnimationBase {
};

// Class CameraStack.CameraStackBehaviorAttachToSpline
// Size: 0x248 (Inherited: 0x1b8)
struct UCameraStackBehaviorAttachToSpline : UCameraStackBehaviorBlend {
	struct UCameraStackSplineGetter* SplineGetter; // 0x1b8(0x08)
	struct FVector CameraTargetOffset; // 0x1c0(0x0c)
	float DistanceFromTarget; // 0x1cc(0x04)
	bool bDebugDraw; // 0x1d0(0x01)
	char pad_1D1[0x77]; // 0x1d1(0x77)
};

// Class CameraStack.CameraStackBehaviorBakedShake
// Size: 0x1d0 (Inherited: 0x1b8)
struct UCameraStackBehaviorBakedShake : UCameraStackBehaviorBlend {
	struct UCurveVector* TraumaOverTime; // 0x1b8(0x08)
	char pad_1C0[0x10]; // 0x1c0(0x10)
};

// Class CameraStack.CameraStackBehaviorCamera
// Size: 0x350 (Inherited: 0x1b8)
struct UCameraStackBehaviorCamera : UCameraStackBehaviorBlend {
	bool bMaintainArmRotation; // 0x1b8(0x01)
	bool bMaintainArmOrigin; // 0x1b9(0x01)
	char pad_1BA[0x196]; // 0x1ba(0x196)

	void SetSourceCameraComponent(struct USceneComponent* InSourceCamera, bool bInIsValidOverDuration); // Function CameraStack.CameraStackBehaviorCamera.SetSourceCameraComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1713680
	void SetSourceCamera(struct AActor* InSourceCamera, bool bInIsValidOverDuration); // Function CameraStack.CameraStackBehaviorCamera.SetSourceCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x17135b0
};

// Class CameraStack.CameraStackBehaviorCameraLookAtOverride
// Size: 0x350 (Inherited: 0x350)
struct UCameraStackBehaviorCameraLookAtOverride : UCameraStackBehaviorCamera {
};

// Class CameraStack.CameraStackBehaviorCameraSpaceRotationLag
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorCameraSpaceRotationLag : UCameraStackBehaviorBlend {
	float LagSpeedYaw; // 0x1b8(0x04)
	float LagSpeedPitch; // 0x1bc(0x04)
	float LagSpeedRoll; // 0x1c0(0x04)
	bool bLagPreviousBehaviorOnly; // 0x1c4(0x01)
	bool bWorldSpace; // 0x1c5(0x01)
	bool bUseSubstepping; // 0x1c6(0x01)
	char pad_1C7[0x1]; // 0x1c7(0x01)
	float MaxTimeStep; // 0x1c8(0x04)
	char pad_1CC[0x4c]; // 0x1cc(0x4c)
};

// Class CameraStack.CameraStackBehaviorCameraStackComponent
// Size: 0x230 (Inherited: 0x1b8)
struct UCameraStackBehaviorCameraStackComponent : UCameraStackBehaviorBlend {
	char pad_1B8[0x78]; // 0x1b8(0x78)
};

// Class CameraStack.CameraStackBehaviorChooseByStyle
// Size: 0xa8 (Inherited: 0x50)
struct UCameraStackBehaviorChooseByStyle : UCameraStackBehavior {
	struct UCameraStackBehavior* DefaultBehavior; // 0x50(0x08)
	struct TMap<struct FName, struct UCameraStackBehavior*> StyleBehaviors; // 0x58(0x50)
};

// Class CameraStack.CameraStackBehaviorCollisionBase
// Size: 0x210 (Inherited: 0x1b8)
struct UCameraStackBehaviorCollisionBase : UCameraStackBehaviorBlend {
	float ProbeSize; // 0x1b8(0x04)
	float MinArmLengthLimit; // 0x1bc(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float CollisionInterpSpeed; // 0x1c4(0x04)
	float ReturnInterpSpeed; // 0x1c8(0x04)
	float MinCameraSpeedToReturn; // 0x1cc(0x04)
	float MaxCameraSpeedToReturn; // 0x1d0(0x04)
	bool bDrawDebug; // 0x1d4(0x01)
	char pad_1D5[0x3b]; // 0x1d5(0x3b)
};

// Class CameraStack.CameraStackBehaviorCollisionEyeOverlap
// Size: 0x218 (Inherited: 0x210)
struct UCameraStackBehaviorCollisionEyeOverlap : UCameraStackBehaviorCollisionBase {
	char pad_210[0x8]; // 0x210(0x08)
};

// Class CameraStack.CameraStackBehaviorCollisionPrediction
// Size: 0x2b8 (Inherited: 0x210)
struct UCameraStackBehaviorCollisionPrediction : UCameraStackBehaviorCollisionBase {
	float ForwardPredictionTime; // 0x210(0x04)
	float ForwardPredictionStep; // 0x214(0x04)
	int32_t SweepCountPerUpdate; // 0x218(0x04)
	float SecondsBetweenSweeps; // 0x21c(0x04)
	bool bCheckForEyeOverlap; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float BlendExponent; // 0x224(0x04)
	float MinCollisionInterpSpeed; // 0x228(0x04)
	float GridCellSize; // 0x22c(0x04)
	float GridPointThreshold; // 0x230(0x04)
	float GridDirectionThreshold; // 0x234(0x04)
	char pad_238[0x80]; // 0x238(0x80)
};

// Class CameraStack.CameraStackBehaviorCollisionSweep
// Size: 0x218 (Inherited: 0x210)
struct UCameraStackBehaviorCollisionSweep : UCameraStackBehaviorCollisionBase {
	bool bCheckForEyeOverlap; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class CameraStack.CameraStackBehaviorCollisionSweepVertical
// Size: 0x60 (Inherited: 0x50)
struct UCameraStackBehaviorCollisionSweepVertical : UCameraStackBehavior {
	float ProbeSize; // 0x50(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SweepStartHeight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class CameraStack.CameraStackBehaviorConvertToArmOriginTranslation
// Size: 0x228 (Inherited: 0x1b8)
struct UCameraStackBehaviorConvertToArmOriginTranslation : UCameraStackBehaviorBlend {
	char pad_1B8[0x70]; // 0x1b8(0x70)
};

// Class CameraStack.CameraStackBehaviorConvertToTranslation
// Size: 0x210 (Inherited: 0x1b8)
struct UCameraStackBehaviorConvertToTranslation : UCameraStackBehaviorBlend {
	char pad_1B8[0x58]; // 0x1b8(0x58)
};

// Class CameraStack.CameraStackBehaviorCore
// Size: 0x50 (Inherited: 0x50)
struct UCameraStackBehaviorCore : UCameraStackBehavior {
};

// Class CameraStack.CameraStackBehaviorCore_Actor
// Size: 0x128 (Inherited: 0x50)
struct UCameraStackBehaviorCore_Actor : UCameraStackBehaviorCore {
	struct TWeakObjectPtr<struct AActor> TransformActor; // 0x50(0x08)
	char pad_58[0xd0]; // 0x58(0xd0)

	void SetTransformActor(struct AActor* InTransformActor); // Function CameraStack.CameraStackBehaviorCore_Actor.SetTransformActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1713750
};

// Class CameraStack.CameraStackBehaviorCore_Identity
// Size: 0x50 (Inherited: 0x50)
struct UCameraStackBehaviorCore_Identity : UCameraStackBehaviorCore {
};

// Class CameraStack.CameraStackBehaviorMultiCrossBlend
// Size: 0x350 (Inherited: 0x1b8)
struct UCameraStackBehaviorMultiCrossBlend : UCameraStackBehaviorBlend {
	float MaxCrossBlendSpeed; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct TArray<struct FCameraCrossBlendBehaviorGroup> CrossBlendBehaviorGroups; // 0x1c0(0x10)
	char pad_1D0[0x180]; // 0x1d0(0x180)

	struct TArray<struct FCameraCrossBlendBehaviorGroup> GetCrossBlendBehaviorGroups(); // Function CameraStack.CameraStackBehaviorMultiCrossBlend.GetCrossBlendBehaviorGroups // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1716a00
	struct UCameraStackBehaviorMultiCrossBlend* CreateMultiCrossBlendBehavior(struct UCameraStack* InCameraStack, float InMaxCrossBlendSpeed); // Function CameraStack.CameraStackBehaviorMultiCrossBlend.CreateMultiCrossBlendBehavior // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1716930
};

// Class CameraStack.CameraStackBehaviorMultiCrossBlendStandalone
// Size: 0x368 (Inherited: 0x350)
struct UCameraStackBehaviorMultiCrossBlendStandalone : UCameraStackBehaviorMultiCrossBlend {
	struct TArray<struct FCameraStackMultiCrossBlendGroupTemplate> GroupTemplates; // 0x350(0x10)
	bool bUpdateWeightsFromImplementation; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
};

// Class CameraStack.CameraStackBehaviorCrossBlendBySpeed
// Size: 0x3f8 (Inherited: 0x368)
struct UCameraStackBehaviorCrossBlendBySpeed : UCameraStackBehaviorMultiCrossBlendStandalone {
	struct FRuntimeFloatCurve SpeedToWeightCurve; // 0x368(0x88)
	bool bHorizontalSpeed; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
};

// Class CameraStack.CameraStackBehaviorCrossBlendByTargetPitch
// Size: 0x3f0 (Inherited: 0x368)
struct UCameraStackBehaviorCrossBlendByTargetPitch : UCameraStackBehaviorMultiCrossBlendStandalone {
	struct FRuntimeFloatCurve TargetPitchToWeightCurve; // 0x368(0x88)
};

// Class CameraStack.CameraStackBehaviorDollyZoom
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorDollyZoom : UCameraStackBehaviorBlend {
	float FieldOfView; // 0x1b8(0x04)
	char pad_1BC[0x2c]; // 0x1bc(0x2c)
};

// Class CameraStack.CameraStackBehaviorFocusDistanceToTarget
// Size: 0x1d0 (Inherited: 0x1b8)
struct UCameraStackBehaviorFocusDistanceToTarget : UCameraStackBehaviorBlend {
	float MinFocusDistance; // 0x1b8(0x04)
	float FocusDistanceOffset; // 0x1bc(0x04)
	char pad_1C0[0x10]; // 0x1c0(0x10)
};

// Class CameraStack.CameraStackBehaviorFocusDistanceToAnimationTarget
// Size: 0x1d8 (Inherited: 0x1d0)
struct UCameraStackBehaviorFocusDistanceToAnimationTarget : UCameraStackBehaviorFocusDistanceToTarget {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1d0(0x08)
};

// Class CameraStack.CameraStackBehaviorFocusDistanceToLookAtTarget
// Size: 0x1d0 (Inherited: 0x1d0)
struct UCameraStackBehaviorFocusDistanceToLookAtTarget : UCameraStackBehaviorFocusDistanceToTarget {
};

// Class CameraStack.CameraStackBehaviorFocusDistanceToSecondaryTarget
// Size: 0x1e0 (Inherited: 0x1d0)
struct UCameraStackBehaviorFocusDistanceToSecondaryTarget : UCameraStackBehaviorFocusDistanceToTarget {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1d0(0x08)
	bool bSetToPrimaryTargetIfTargetIsInvalid; // 0x1d8(0x01)
	bool bKeepLastFocusDistance; // 0x1d9(0x01)
	char pad_1DA[0x6]; // 0x1da(0x06)
};

// Class CameraStack.CameraStackBehaviorFollowTargetRotationSpring
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorFollowTargetRotationSpring : UCameraStackBehaviorBlend {
	struct FVector2D DeadspotRangeDegrees; // 0x1b8(0x08)
	struct FVector2D TargetSpeedRange; // 0x1c0(0x08)
	float Frequency; // 0x1c8(0x04)
	float DampingRatio; // 0x1cc(0x04)
	bool bAffectYaw; // 0x1d0(0x01)
	bool bAffectPitch; // 0x1d1(0x01)
	bool bUseSubstepping; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	float MaxTimeStep; // 0x1d4(0x04)
	char pad_1D8[0x40]; // 0x1d8(0x40)
};

// Class CameraStack.CameraStackBehaviorIncludeSecondaryTarget
// Size: 0x1f0 (Inherited: 0x1b8)
struct UCameraStackBehaviorIncludeSecondaryTarget : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8(0x08)
	float OffsetRatio; // 0x1c0(0x04)
	float TargetRadiusFactor; // 0x1c4(0x04)
	char pad_1C8[0x28]; // 0x1c8(0x28)
};

// Class CameraStack.CameraStackBehaviorInfluenceCrossBlend
// Size: 0x350 (Inherited: 0x350)
struct UCameraStackBehaviorInfluenceCrossBlend : UCameraStackBehaviorMultiCrossBlend {
};

// Class CameraStack.CameraStackBehaviorInputToYawSpeed
// Size: 0x200 (Inherited: 0x1b8)
struct UCameraStackBehaviorInputToYawSpeed : UCameraStackBehaviorBlend {
	float MinRequiredInput; // 0x1b8(0x04)
	float MinTargetSpeed; // 0x1bc(0x04)
	float LagSpeed; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct UCurveFloat* AngleToYawSpeedCurve; // 0x1c8(0x08)
	float SpeedMultiplier; // 0x1d0(0x04)
	struct FCameraOptionName FollowCameraSpeedOptionName; // 0x1d4(0x08)
	char pad_1DC[0x24]; // 0x1dc(0x24)
};

// Class CameraStack.CameraStackBehaviorInterface
// Size: 0x28 (Inherited: 0x28)
struct UCameraStackBehaviorInterface : UInterface {

	bool OnWriteCameraDataEvent(struct FCameraData& CameraData); // Function CameraStack.CameraStackBehaviorInterface.OnWriteCameraDataEvent // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnUpdateEvent(float DeltaSeconds); // Function CameraStack.CameraStackBehaviorInterface.OnUpdateEvent // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	struct FString OnGetDebugStatsEvent(); // Function CameraStack.CameraStackBehaviorInterface.OnGetDebugStatsEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnActivateEvent(); // Function CameraStack.CameraStackBehaviorInterface.OnActivateEvent // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
};

// Class CameraStack.CameraStackBehaviorKeepLineOfSight
// Size: 0x238 (Inherited: 0x1b8)
struct UCameraStackBehaviorKeepLineOfSight : UCameraStackBehaviorBlend {
	bool bDrawDebug; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float MaximumAngleInRadians; // 0x1bc(0x04)
	struct UCurveFloat* WalkAxisToMaxAngleScaleCurve; // 0x1c0(0x08)
	int32_t SweepCountPerUpdate; // 0x1c8(0x04)
	float SecondsBetweenSweeps; // 0x1cc(0x04)
	float StepSizeInRadians; // 0x1d0(0x04)
	float RotationSpeed; // 0x1d4(0x04)
	float InterpSpeed; // 0x1d8(0x04)
	float RotationSpeedTight; // 0x1dc(0x04)
	float InterpSpeedTight; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct UCurveFloat* CollisionProximityTimeToSpeedAlpha; // 0x1e8(0x08)
	enum class ECollisionChannel LineOfSightProbeChannel; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	float LineOfSightProbeSize; // 0x1f4(0x04)
	struct FName TraceTagName; // 0x1f8(0x08)
	char pad_200[0x38]; // 0x200(0x38)
};

// Class CameraStack.CameraStackBehaviorLag
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorLag : UCameraStackBehaviorBlend {
	float SpeedX; // 0x1b8(0x04)
	float SpeedY; // 0x1bc(0x04)
	float SpeedZ; // 0x1c0(0x04)
	struct FVector MinDistances; // 0x1c4(0x0c)
	struct FVector MaxDistances; // 0x1d0(0x0c)
	bool bWorldSpace; // 0x1dc(0x01)
	bool bLagPreviousBehaviorOnly; // 0x1dd(0x01)
	bool bUseSubstepping; // 0x1de(0x01)
	char pad_1DF[0x1]; // 0x1df(0x01)
	float MaxTimeStep; // 0x1e0(0x04)
	char pad_1E4[0x34]; // 0x1e4(0x34)
};

// Class CameraStack.CameraStackBehaviorLagSpring
// Size: 0x208 (Inherited: 0x1b8)
struct UCameraStackBehaviorLagSpring : UCameraStackBehaviorBlend {
	float Frequency; // 0x1b8(0x04)
	float DampingRatio; // 0x1bc(0x04)
	struct FCameraOptionName FilteringAmountOptionName; // 0x1c0(0x08)
	char pad_1C8[0x40]; // 0x1c8(0x40)
};

// Class CameraStack.CameraStackBehaviorLagSpringAttached
// Size: 0x228 (Inherited: 0x1b8)
struct UCameraStackBehaviorLagSpringAttached : UCameraStackBehaviorBlend {
	float DamperHalflife; // 0x1b8(0x04)
	float SpringHalflife; // 0x1bc(0x04)
	char pad_1C0[0x68]; // 0x1c0(0x68)
};

// Class CameraStack.CameraStackBehaviorLinearSpring
// Size: 0x280 (Inherited: 0x1b8)
struct UCameraStackBehaviorLinearSpring : UCameraStackBehaviorBlend {
	bool bDrawDebug; // 0x1b8(0x01)
	bool bUseSubstepping; // 0x1b9(0x01)
	char pad_1BA[0x2]; // 0x1ba(0x02)
	float MaxTimeStep; // 0x1bc(0x04)
	float SpeedX; // 0x1c0(0x04)
	float SpeedY; // 0x1c4(0x04)
	float SpeedZ; // 0x1c8(0x04)
	float FrequencyX; // 0x1cc(0x04)
	float FrequencyY; // 0x1d0(0x04)
	float FrequencyZ; // 0x1d4(0x04)
	float DampingRatioX; // 0x1d8(0x04)
	float DampingRatioY; // 0x1dc(0x04)
	float DampingRatioZ; // 0x1e0(0x04)
	struct FVector MinDistances; // 0x1e4(0x0c)
	struct FVector MaxDistances; // 0x1f0(0x0c)
	float DefaultSpeed; // 0x1fc(0x04)
	bool bEnableSpring; // 0x200(0x01)
	char pad_201[0x7f]; // 0x201(0x7f)
};

// Class CameraStack.CameraStackBehaviorLineOfSightDistance
// Size: 0x228 (Inherited: 0x1b8)
struct UCameraStackBehaviorLineOfSightDistance : UCameraStackBehaviorBlend {
	bool bDrawDebug; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float MaximumAngleInDegrees; // 0x1bc(0x04)
	int32_t SweepCountPerUpdate; // 0x1c0(0x04)
	float SecondsBetweenSweeps; // 0x1c4(0x04)
	float StepSizeInDegrees; // 0x1c8(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	float ProbeSize; // 0x1d0(0x04)
	float SweepLength; // 0x1d4(0x04)
	struct FName TraceTagName; // 0x1d8(0x08)
	float MinArmLength; // 0x1e0(0x04)
	float MinTargetMovingSpeed; // 0x1e4(0x04)
	float MinTargetMovingTime; // 0x1e8(0x04)
	float CameraReturnSpeed; // 0x1ec(0x04)
	char pad_1F0[0x38]; // 0x1f0(0x38)
};

// Class CameraStack.CameraStackBehaviorLookAtBase
// Size: 0x290 (Inherited: 0x1b8)
struct UCameraStackBehaviorLookAtBase : UCameraStackBehaviorBlend {
	struct FBox2D ScreenArea; // 0x1b8(0x14)
	float RotationSpeed; // 0x1cc(0x04)
	struct UCurveFloat* AngleToRotationSpeed; // 0x1d0(0x08)
	bool bAffectYaw; // 0x1d8(0x01)
	bool bAffectPitch; // 0x1d9(0x01)
	char pad_1DA[0x2]; // 0x1da(0x02)
	struct FVector2D PitchLimits; // 0x1dc(0x08)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FRuntimeFloatCurve DistanceToWeightCurve; // 0x1e8(0x88)
	bool bDisableOnInput; // 0x270(0x01)
	bool bUseUnblendedStackValues; // 0x271(0x01)
	char pad_272[0x1e]; // 0x272(0x1e)
};

// Class CameraStack.CameraStackBehaviorLookAhead
// Size: 0x300 (Inherited: 0x290)
struct UCameraStackBehaviorLookAhead : UCameraStackBehaviorLookAtBase {
	float TimeAhead; // 0x290(0x04)
	float VelocityFilterHalflife; // 0x294(0x04)
	float LocationFilterHalflife; // 0x298(0x04)
	struct FCameraOptionName FollowCameraSpeedOptionName; // 0x29c(0x08)
	bool bDrawDebug; // 0x2a4(0x01)
	char pad_2A5[0x5b]; // 0x2a5(0x5b)
};

// Class CameraStack.CameraStackBehaviorLookAheadAlongSpline
// Size: 0x308 (Inherited: 0x290)
struct UCameraStackBehaviorLookAheadAlongSpline : UCameraStackBehaviorLookAtBase {
	struct UCameraStackSplineGetter* SplineGetter; // 0x290(0x08)
	struct FVector CameraTargetOffset; // 0x298(0x0c)
	struct FVector2D DistanceFromSplineThresholdRange; // 0x2a4(0x08)
	struct FVector2D HeightDifferenceFromSplineThresholdRange; // 0x2ac(0x08)
	float LookAheadDistance; // 0x2b4(0x04)
	float PointOrDirectionInterp; // 0x2b8(0x04)
	float TargetOffsetFactor; // 0x2bc(0x04)
	bool bOnlyInForwardDirection; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FVector2D DirectionDifferenceFromSplineThresholdRange; // 0x2c4(0x08)
	bool bReturnPitchToDefault; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FCameraOptionName FollowCameraSpeedOptionName; // 0x2d0(0x08)
	bool bDebugDraw; // 0x2d8(0x01)
	char pad_2D9[0x2f]; // 0x2d9(0x2f)
};

// Class CameraStack.CameraStackBehaviorLookAt
// Size: 0x298 (Inherited: 0x290)
struct UCameraStackBehaviorLookAt : UCameraStackBehaviorLookAtBase {
	struct UCameraStackSecondaryTargetGetter* LookAtTarget; // 0x290(0x08)
};

// Class CameraStack.CameraStackBehaviorMaintainTargetFraming
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorMaintainTargetFraming : UCameraStackBehaviorBlend {
	bool bDrawDebug; // 0x1b8(0x01)
	char pad_1B9[0x5f]; // 0x1b9(0x5f)
};

// Class CameraStack.CameraStackBehaviorMatchFloorPitch
// Size: 0x208 (Inherited: 0x1b8)
struct UCameraStackBehaviorMatchFloorPitch : UCameraStackBehaviorBlend {
	bool bDrawDebug; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	struct FName TraceTagName; // 0x1bc(0x08)
	float TraceLength; // 0x1c4(0x04)
	float TraceHeight; // 0x1c8(0x04)
	float TraceDepth; // 0x1cc(0x04)
	float PitchScaleUp; // 0x1d0(0x04)
	float PitchScaleDown; // 0x1d4(0x04)
	float PitchScaleDrop; // 0x1d8(0x04)
	float ProbeSize; // 0x1dc(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float InterpSpeed; // 0x1e4(0x04)
	float InterpSpeedDrop; // 0x1e8(0x04)
	char pad_1EC[0x1c]; // 0x1ec(0x1c)
};

// Class CameraStack.CameraStackBehaviorMatchFloorRotation
// Size: 0x1f0 (Inherited: 0x1b8)
struct UCameraStackBehaviorMatchFloorRotation : UCameraStackBehaviorBlend {
	bool bEnablePitch; // 0x1b8(0x01)
	bool bEnableYaw; // 0x1b9(0x01)
	bool bEnableRoll; // 0x1ba(0x01)
	char pad_1BB[0x35]; // 0x1bb(0x35)
};

// Class CameraStack.CameraStackBehaviorMatchTargetRotation
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorMatchTargetRotation : UCameraStackBehaviorBlend {
	float MatchYaw; // 0x1b8(0x04)
	float MatchPitch; // 0x1bc(0x04)
	float MatchRoll; // 0x1c0(0x04)
	char pad_1C4[0x24]; // 0x1c4(0x24)
};

// Class CameraStack.CameraStackBehaviorMirrorOnCollision
// Size: 0x58 (Inherited: 0x50)
struct UCameraStackBehaviorMirrorOnCollision : UCameraStackBehavior {
	float ProbeSize; // 0x50(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class CameraStack.CameraStackBehaviorMoveArmOriginToTarget
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorMoveArmOriginToTarget : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* Target; // 0x1b8(0x08)
	struct FVector Offset; // 0x1c0(0x0c)
	float PrimaryTargetOffsetFactor; // 0x1cc(0x04)
	char pad_1D0[0x18]; // 0x1d0(0x18)
};

// Class CameraStack.CameraStackBehaviorMoveTargetToActor
// Size: 0x1d8 (Inherited: 0x1b8)
struct UCameraStackBehaviorMoveTargetToActor : UCameraStackBehaviorBlend {
	char pad_1B8[0x20]; // 0x1b8(0x20)
};

// Class CameraStack.CameraStackBehaviorMoveTargetToAttachParent
// Size: 0x1d0 (Inherited: 0x1b8)
struct UCameraStackBehaviorMoveTargetToAttachParent : UCameraStackBehaviorBlend {
	char pad_1B8[0x18]; // 0x1b8(0x18)
};

// Class CameraStack.CameraStackBehaviorMoveToKeepInFrame
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorMoveToKeepInFrame : UCameraStackBehaviorBlend {
	struct FBox2D ScreenArea; // 0x1b8(0x14)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<struct UCameraStackSecondaryTargetGetter*> Targets; // 0x1d0(0x10)
	bool bConsiderTargetBounds; // 0x1e0(0x01)
	bool bTruck; // 0x1e1(0x01)
	bool bPedestal; // 0x1e2(0x01)
	char pad_1E3[0x1]; // 0x1e3(0x01)
	struct FVector2D DollyLimits; // 0x1e4(0x08)
	struct FVector2D TruckLimits; // 0x1ec(0x08)
	struct FVector2D PedestalLimits; // 0x1f4(0x08)
	bool bUseUnblendedStackValues; // 0x1fc(0x01)
	char pad_1FD[0x1b]; // 0x1fd(0x1b)
};

// Class CameraStack.CameraStackBehaviorMultiBehaviorBlend
// Size: 0x1c0 (Inherited: 0x1b8)
struct UCameraStackBehaviorMultiBehaviorBlend : UCameraStackBehaviorBlend {
	struct UCameraStackBehavior* FirstBehavior; // 0x1b8(0x08)

	void Initialize(struct UCameraStackBehavior* InFirstBehavior); // Function CameraStack.CameraStackBehaviorMultiBehaviorBlend.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x1716b40
};

// Class CameraStack.CameraStackBehaviorNoOp
// Size: 0x50 (Inherited: 0x50)
struct UCameraStackBehaviorNoOp : UCameraStackBehavior {
};

// Class CameraStack.CameraStackBehaviorPitchFromTargetDistance
// Size: 0x2f0 (Inherited: 0x1b8)
struct UCameraStackBehaviorPitchFromTargetDistance : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8(0x08)
	float PitchA; // 0x1c0(0x04)
	float PitchB; // 0x1c4(0x04)
	struct FRuntimeFloatCurve HorizontalDistanceInterpWeight; // 0x1c8(0x88)
	struct FRuntimeFloatCurve VerticalDistanceInterpWeight; // 0x250(0x88)
	bool bUseDistanceToTargetBounds; // 0x2d8(0x01)
	char pad_2D9[0x17]; // 0x2d9(0x17)
};

// Class CameraStack.CameraStackBehaviorPitchToFocalLength
// Size: 0x1d8 (Inherited: 0x1b8)
struct UCameraStackBehaviorPitchToFocalLength : UCameraStackBehaviorBlend {
	float DefaultFocalLength; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UCurveFloat* PitchToFocalLengthCurve; // 0x1c0(0x08)
	char pad_1C8[0x10]; // 0x1c8(0x10)
};

// Class CameraStack.CameraStackTransformCurveData
// Size: 0x48 (Inherited: 0x30)
struct UCameraStackTransformCurveData : UDataAsset {
	struct UCurveVector* CameraLocationCurve; // 0x30(0x08)
	struct UCurveVector* FocalPointCurve; // 0x38(0x08)
	struct UCurveFloat* InversePitchCurve; // 0x40(0x08)
};

// Class CameraStack.CameraStackBehaviorPitchToTransformCurves
// Size: 0x220 (Inherited: 0x1b8)
struct UCameraStackBehaviorPitchToTransformCurves : UCameraStackBehaviorBlend {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct UCameraStackTransformCurveData* CurveData; // 0x1c0(0x08)
	char pad_1C8[0x58]; // 0x1c8(0x58)
};

// Class CameraStack.CameraStackBehaviorPushPull
// Size: 0x218 (Inherited: 0x1b8)
struct UCameraStackBehaviorPushPull : UCameraStackBehaviorBlend {
	bool bEnableLag; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float LagSpeed; // 0x1bc(0x04)
	float MaxArmLength2D; // 0x1c0(0x04)
	float MinArmLength2D; // 0x1c4(0x04)
	float YawMinMax; // 0x1c8(0x04)
	char pad_1CC[0x4c]; // 0x1cc(0x4c)
};

// Class CameraStack.CameraStackBehaviorRail
// Size: 0x2c0 (Inherited: 0x1b8)
struct UCameraStackBehaviorRail : UCameraStackBehaviorBlend {
	struct UCameraStackSplineGetter* SplineGetter; // 0x1b8(0x08)
	struct FVector CameraTargetOffset; // 0x1c0(0x0c)
	float SplineMovementFrequency; // 0x1cc(0x04)
	float BlendDuration; // 0x1d0(0x04)
	bool bFollowSplineRotation; // 0x1d4(0x01)
	bool bDebugDraw; // 0x1d5(0x01)
	char pad_1D6[0xea]; // 0x1d6(0xea)
};

// Class CameraStack.CameraStackBehaviorRemoveArmOriginOffset
// Size: 0x210 (Inherited: 0x1b8)
struct UCameraStackBehaviorRemoveArmOriginOffset : UCameraStackBehaviorBlend {
	char pad_1B8[0x58]; // 0x1b8(0x58)
};

// Class CameraStack.CameraStackBehaviorResetRotation
// Size: 0x210 (Inherited: 0x1b8)
struct UCameraStackBehaviorResetRotation : UCameraStackBehaviorBlend {
	float ResetDuration; // 0x1b8(0x04)
	float DefaultPitch; // 0x1bc(0x04)
	struct UCurveFloat* ResetCurve; // 0x1c0(0x08)
	struct FRotator DesiredDelta; // 0x1c8(0x0c)
	bool bCancelResetOnInput; // 0x1d4(0x01)
	bool bResetYaw; // 0x1d5(0x01)
	bool bResetPitch; // 0x1d6(0x01)
	char pad_1D7[0x39]; // 0x1d7(0x39)
};

// Class CameraStack.CameraStackBehaviorRetargetAnimation
// Size: 0x300 (Inherited: 0x290)
struct UCameraStackBehaviorRetargetAnimation : UCameraStackBehaviorLookAtBase {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x290(0x08)
	struct FVector2D FramingScreenAreaExtent; // 0x298(0x08)
	bool bDrawDebug; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UCameraStackBehaviorAnimationBase* AnimBehavior; // 0x2a8(0x08)
	char pad_2B0[0x50]; // 0x2b0(0x50)
};

// Class CameraStack.CameraStackBehaviorRotateEyeToBisector
// Size: 0x208 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotateEyeToBisector : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8(0x08)
	float AngleRatio; // 0x1c0(0x04)
	struct FVector2D BlendOutAngleRange; // 0x1c4(0x08)
	struct FVector2D BlendOutDistanceRange; // 0x1cc(0x08)
	bool bDebugDraw; // 0x1d4(0x01)
	char pad_1D5[0x33]; // 0x1d5(0x33)
};

// Class CameraStack.CameraStackBehaviorRotateTowards
// Size: 0x1f0 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotateTowards : UCameraStackBehaviorBlend {
	bool bRotateYaw; // 0x1b8(0x01)
	bool bRotatePitch; // 0x1b9(0x01)
	bool bRotateRoll; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	struct FRotator TargetRotation; // 0x1bc(0x0c)
	float RotationSpeed; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct UCurveFloat* AngleToRotationSpeed; // 0x1d0(0x08)
	char pad_1D8[0x18]; // 0x1d8(0x18)
};

// Class CameraStack.CameraStackBehaviorRotateTowardsSecondaryTarget
// Size: 0x210 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotateTowardsSecondaryTarget : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8(0x08)
	struct UCurveFloat* DistanceToYaw; // 0x1c0(0x08)
	struct FVector2D YawAngleRange; // 0x1c8(0x08)
	bool bSymmetricalYaw; // 0x1d0(0x01)
	bool bCommitToDirection; // 0x1d1(0x01)
	bool bOtherSide; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	float RotationSpeed; // 0x1d4(0x04)
	struct UCurveFloat* AngleToRotationSpeed; // 0x1d8(0x08)
	float AngleBias; // 0x1e0(0x04)
	float AccumulatedRotationAmount; // 0x1e4(0x04)
	char pad_1E8[0x28]; // 0x1e8(0x28)
};

// Class CameraStack.CameraStackBehaviorRotationLag
// Size: 0x208 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotationLag : UCameraStackBehaviorBlend {
	float LagSpeed; // 0x1b8(0x04)
	bool bLagPreviousBehaviorOnly; // 0x1bc(0x01)
	bool bAffectsYaw; // 0x1bd(0x01)
	bool bAffectsPitch; // 0x1be(0x01)
	bool bAffectsRoll; // 0x1bf(0x01)
	bool bUseSubstepping; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float MaxTimeStep; // 0x1c4(0x04)
	char pad_1C8[0x40]; // 0x1c8(0x40)
};

// Class CameraStack.CameraStackBehaviorRotationLagSpringAttached
// Size: 0x240 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotationLagSpringAttached : UCameraStackBehaviorBlend {
	float YawAmount; // 0x1b8(0x04)
	float PitchAmount; // 0x1bc(0x04)
	float RollAmount; // 0x1c0(0x04)
	float MaxYawSpeed; // 0x1c4(0x04)
	float MaxPitchSpeed; // 0x1c8(0x04)
	float MaxRollSpeed; // 0x1cc(0x04)
	float DamperHalflife; // 0x1d0(0x04)
	float SpringHalflife; // 0x1d4(0x04)
	char pad_1D8[0x68]; // 0x1d8(0x68)
};

// Class CameraStack.CameraStackBehaviorRotationOffsetToTarget
// Size: 0x1f0 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotationOffsetToTarget : UCameraStackBehaviorBlend {
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8(0x08)
	struct UCurveFloat* DistanceToYaw; // 0x1c0(0x08)
	struct FVector2D YawAngleRange; // 0x1c8(0x08)
	bool bSymmetricalYaw; // 0x1d0(0x01)
	bool bCommitToDirection; // 0x1d1(0x01)
	bool bOtherSide; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	float AngleBias; // 0x1d4(0x04)
	char pad_1D8[0x18]; // 0x1d8(0x18)
};

// Class CameraStack.CameraStackBehaviorRotationSpring
// Size: 0x1f8 (Inherited: 0x1b8)
struct UCameraStackBehaviorRotationSpring : UCameraStackBehaviorBlend {
	float Frequency; // 0x1b8(0x04)
	float DampingRatio; // 0x1bc(0x04)
	struct FCameraOptionName FilteringAmountOptionName; // 0x1c0(0x08)
	char pad_1C8[0x30]; // 0x1c8(0x30)
};

// Class CameraStack.CameraStackBehaviorRotationSpringVideoCapture
// Size: 0x1f8 (Inherited: 0x1f8)
struct UCameraStackBehaviorRotationSpringVideoCapture : UCameraStackBehaviorRotationSpring {
};

// Class CameraStack.CameraStackBehaviorSetAperture
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetAperture : UCameraStackBehaviorBlend {
	float Aperture; // 0x1b8(0x04)
	struct FCameraOptionName ApertureOptionName; // 0x1bc(0x08)
	char pad_1C4[0x4]; // 0x1c4(0x04)
};

// Class CameraStack.CameraStackBehaviorSetArmLength
// Size: 0x1c0 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetArmLength : UCameraStackBehaviorBlend {
	float ArmLength; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// Class CameraStack.CameraStackBehaviorSetDefaultPitch
// Size: 0x60 (Inherited: 0x50)
struct UCameraStackBehaviorSetDefaultPitch : UCameraStackBehavior {
	float DefaultPitch; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* ResetCurve; // 0x58(0x08)
};

// Class CameraStack.CameraStackBehaviorSetFOV
// Size: 0x1c0 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetFOV : UCameraStackBehaviorBlend {
	float FieldOfView; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// Class CameraStack.CameraStackBehaviorSetRotationLimits
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetRotationLimits : UCameraStackBehaviorBlend {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	bool bEnablePitchLimits; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float MinPitch; // 0x1c4(0x04)
	float MaxPitch; // 0x1c8(0x04)
	bool bEnableYawLimits; // 0x1cc(0x01)
	bool bLimitYawRelativeToTarget; // 0x1cd(0x01)
	char pad_1CE[0x2]; // 0x1ce(0x02)
	float minYaw; // 0x1d0(0x04)
	float MaxYaw; // 0x1d4(0x04)
	bool bEnableRollLimits; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float minRoll; // 0x1dc(0x04)
	float MaxRoll; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
};

// Class CameraStack.CameraStackBehaviorSetRotationLimitsRelativeToTarget
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetRotationLimitsRelativeToTarget : UCameraStackBehaviorBlend {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1c0(0x08)
	bool bEnablePitchLimits; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float MinPitch; // 0x1cc(0x04)
	float MaxPitch; // 0x1d0(0x04)
	bool bEnableYawLimits; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	float minYaw; // 0x1d8(0x04)
	float MaxYaw; // 0x1dc(0x04)
	char pad_1E0[0x8]; // 0x1e0(0x08)
};

// Class CameraStack.CameraStackBehaviorSetTargetOffset
// Size: 0x1c8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSetTargetOffset : UCameraStackBehaviorBlend {
	struct FVector TargetOffset; // 0x1b8(0x0c)
	char pad_1C4[0x4]; // 0x1c4(0x04)
};

// Class CameraStack.CameraStackBehaviorShake
// Size: 0x200 (Inherited: 0x1b8)
struct UCameraStackBehaviorShake : UCameraStackBehaviorBlend {
	struct FRotator ShakeLimits; // 0x1b8(0x0c)
	struct FVector2D ShakeDelay; // 0x1c4(0x08)
	float TraumaDuration; // 0x1cc(0x04)
	float TraumaStart; // 0x1d0(0x04)
	float TraumaPow; // 0x1d4(0x04)
	float RepeatTraumaDelay; // 0x1d8(0x04)
	bool bUsePerlinNoise; // 0x1dc(0x01)
	bool bMaintainSeed; // 0x1dd(0x01)
	bool bKeepAlive; // 0x1de(0x01)
	char pad_1DF[0x21]; // 0x1df(0x21)

	void AddTrauma(float InTrauma); // Function CameraStack.CameraStackBehaviorShake.AddTrauma // (Final|Native|Public|BlueprintCallable) // @ game+0x1719ea0
};

// Class CameraStack.CameraStackBehaviorSlopeMovementPitch
// Size: 0x3d8 (Inherited: 0x1b8)
struct UCameraStackBehaviorSlopeMovementPitch : UCameraStackBehaviorBlend {
	struct FRuntimeFloatCurve MovementPitchToCameraPitch; // 0x1b8(0x88)
	float PitchSpeed; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UCurveFloat* PitchToPitchSpeed; // 0x248(0x08)
	struct FRuntimeFloatCurve MovementSpeedToPitchSpeed; // 0x250(0x88)
	struct FRuntimeFloatCurve MovementPitchToPitchSpeed; // 0x2d8(0x88)
	float MovementPitchFrequency; // 0x360(0x04)
	float MovementPitchDamping; // 0x364(0x04)
	float SpeedRampUpFrequency; // 0x368(0x04)
	float SpeedRampDownFrequency; // 0x36c(0x04)
	float SpeedDamping; // 0x370(0x04)
	char pad_374[0x64]; // 0x374(0x64)
};

// Class CameraStack.CameraStackBehaviorSteerAroundCorners
// Size: 0x270 (Inherited: 0x1b8)
struct UCameraStackBehaviorSteerAroundCorners : UCameraStackBehaviorBlend {
	float RotationSpeed; // 0x1b8(0x04)
	float BlendExponent; // 0x1bc(0x04)
	struct FRuntimeFloatCurve SpeedToWeightCurve; // 0x1c0(0x88)
	float AccelerationEaseSpeed; // 0x248(0x04)
	float DecelerationEaseSpeed; // 0x24c(0x04)
	struct FCameraOptionName SpeedOptionName; // 0x250(0x08)
	char pad_258[0x18]; // 0x258(0x18)
};

// Class CameraStack.CameraStackBehaviorTargetPitchToPitch
// Size: 0x268 (Inherited: 0x1b8)
struct UCameraStackBehaviorTargetPitchToPitch : UCameraStackBehaviorBlend {
	struct FRuntimeFloatCurve TargetPitchToPitchCurve; // 0x1b8(0x88)
	float InterpSpeed; // 0x240(0x04)
	float OutputInterpSpeed; // 0x244(0x04)
	char pad_248[0x20]; // 0x248(0x20)
};

// Class CameraStack.CameraStackBehaviorUserFOVDollyZoom
// Size: 0x1f8 (Inherited: 0x1e8)
struct UCameraStackBehaviorUserFOVDollyZoom : UCameraStackBehaviorDollyZoom {
	struct FCameraOptionName FieldOfViewOffsetOptionName; // 0x1e8(0x08)
	char pad_1F0[0x8]; // 0x1f0(0x08)
};

// Class CameraStack.CameraStackBehaviorUserInput
// Size: 0x260 (Inherited: 0x1b8)
struct UCameraStackBehaviorUserInput : UCameraStackBehaviorBlend {
	float YawSpeed; // 0x1b8(0x04)
	float DefaultPitchSpeed; // 0x1bc(0x04)
	struct UCurveFloat* PitchToPitchSpeedPositive; // 0x1c0(0x08)
	struct UCurveFloat* PitchToPitchSpeedNegative; // 0x1c8(0x08)
	float DefaultPitch; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UCurveFloat* InputMappingCurve; // 0x1d8(0x08)
	float MinGamepadInputForAcceleration; // 0x1e0(0x04)
	float AccelerationSpeedFactor; // 0x1e4(0x04)
	float AccelerationEaseSpeed; // 0x1e8(0x04)
	float DecelerationEaseSpeed; // 0x1ec(0x04)
	float ResetTime; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct UCurveFloat* ResetCurve; // 0x1f8(0x08)
	struct FCameraOptionName InvertXOptionName; // 0x200(0x08)
	struct FCameraOptionName InvertYOptionName; // 0x208(0x08)
	struct FCameraOptionName SensitivityOptionName; // 0x210(0x08)
	struct FCameraOptionName AccelerationOptionName; // 0x218(0x08)
	struct FCameraOptionName AimingSwitchOptionName; // 0x220(0x08)
	bool bSwapCameraSticks; // 0x228(0x01)
	char pad_229[0x37]; // 0x229(0x37)
};

// Class CameraStack.CameraStackBehaviorUserNudgingInput
// Size: 0x238 (Inherited: 0x1b8)
struct UCameraStackBehaviorUserNudgingInput : UCameraStackBehaviorBlend {
	float MaxYaw; // 0x1b8(0x04)
	float MaxPitch; // 0x1bc(0x04)
	float SmoothingFrequency; // 0x1c0(0x04)
	float SmoothingDampingRatio; // 0x1c4(0x04)
	struct UCurveFloat* InputMappingCurve; // 0x1c8(0x08)
	struct FCameraOptionName InvertXOptionName; // 0x1d0(0x08)
	struct FCameraOptionName InvertYOptionName; // 0x1d8(0x08)
	struct FCameraOptionName AimingSwitchOptionName; // 0x1e0(0x08)
	char pad_1E8[0x50]; // 0x1e8(0x50)
};

// Class CameraStack.CameraStackBehaviorUserTilt
// Size: 0x1e0 (Inherited: 0x1b8)
struct UCameraStackBehaviorUserTilt : UCameraStackBehaviorBlend {
	struct FRotator MinTilt; // 0x1b8(0x0c)
	struct FRotator MaxTilt; // 0x1c4(0x0c)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class CameraStack.CameraStackBehaviorVelocityPitch
// Size: 0x1e8 (Inherited: 0x1b8)
struct UCameraStackBehaviorVelocityPitch : UCameraStackBehaviorBlend {
	float MaxVerticalSpeed; // 0x1b8(0x04)
	float MaxPitchSpeed; // 0x1bc(0x04)
	struct UCurveFloat* PitchToPitchSpeedPositive; // 0x1c0(0x08)
	struct UCurveFloat* PitchToPitchSpeedNegative; // 0x1c8(0x08)
	char pad_1D0[0x18]; // 0x1d0(0x18)
};

// Class CameraStack.CameraStackBehaviorWindwaker
// Size: 0x240 (Inherited: 0x1b8)
struct UCameraStackBehaviorWindwaker : UCameraStackBehaviorBlend {
	float MaxArmLength2D; // 0x1b8(0x04)
	float MinArmLength2D; // 0x1bc(0x04)
	char pad_1C0[0x80]; // 0x1c0(0x80)
};

// Class CameraStack.CameraStackSecondaryTargetGetterBlend
// Size: 0xb0 (Inherited: 0x60)
struct UCameraStackSecondaryTargetGetterBlend : UCameraStackSecondaryTargetGetter {
	float BlendDuration; // 0x60(0x04)
	char pad_64[0x4c]; // 0x64(0x4c)
};

// Class CameraStack.CameraStackCameraLookAtTargetGetter
// Size: 0xc0 (Inherited: 0xb0)
struct UCameraStackCameraLookAtTargetGetter : UCameraStackSecondaryTargetGetterBlend {
	enum class ECameraStackLookAtStrength LookAtStrength; // 0xa8(0x01)
	bool bReturnHigherStrengthTargets; // 0xa9(0x01)
	char pad_B2[0xe]; // 0xb2(0x0e)
};

// Class CameraStack.CameraStackCineComponent
// Size: 0x980 (Inherited: 0x980)
struct UCameraStackCineComponent : UCineCameraComponent {
};

// Class CameraStack.CameraStackComponent
// Size: 0x230 (Inherited: 0x220)
struct UCameraStackComponent : USceneComponent {
	struct UCameraStackSettings* StackSettings; // 0x218(0x08)
	struct ACameraStackActor* OverrideActorClass; // 0x220(0x08)
};

// Class CameraStack.CameraStackFramingLocationComponent
// Size: 0x220 (Inherited: 0x220)
struct UCameraStackFramingLocationComponent : USceneComponent {
};

// Class CameraStack.CameraStackInfluenceHandle
// Size: 0x40 (Inherited: 0x28)
struct UCameraStackInfluenceHandle : UObject {
	struct UCameraStackVolumePreset* Preset; // 0x28(0x08)
	int32_t Priority; // 0x30(0x04)
	float MaxBlendSpeed; // 0x34(0x04)
	float weight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	void SetInfluenceWeight(float NewWeight); // Function CameraStack.CameraStackInfluenceHandle.SetInfluenceWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x171df40
};

// Class CameraStack.CameraStackInfluenceManager
// Size: 0x58 (Inherited: 0x28)
struct UCameraStackInfluenceManager : UObject {
	char pad_28[0x30]; // 0x28(0x30)

	void UnregisterInfluence(struct UCameraStackInfluenceHandle* InHandle); // Function CameraStack.CameraStackInfluenceManager.UnregisterInfluence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x171e590
	struct UCameraStackInfluenceHandle* RegisterInfluence(struct UCameraStackVolumePreset* InPreset, int32_t Priority, float MaxBlendSpeed); // Function CameraStack.CameraStackInfluenceManager.RegisterInfluence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x171dd10
};

// Class CameraStack.CameraStackInput
// Size: 0x88 (Inherited: 0x28)
struct UCameraStackInput : UObject {
	char pad_28[0x60]; // 0x28(0x60)

	bool IsLooking(); // Function CameraStack.CameraStackInput.IsLooking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171daa0
	bool HasAnyMouseLookInput(); // Function CameraStack.CameraStackInput.HasAnyMouseLookInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d9a0
	bool HasAnyLookInput(); // Function CameraStack.CameraStackInput.HasAnyLookInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d970
	float GetZoom(); // Function CameraStack.CameraStackInput.GetZoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d940
	struct FVector2D GetWalk(bool bInvertX, bool bInvertY); // Function CameraStack.CameraStackInput.GetWalk // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d860
	struct FVector2D GetTilt(); // Function CameraStack.CameraStackInput.GetTilt // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d820
	float GetRoll(); // Function CameraStack.CameraStackInput.GetRoll // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d7b0
	bool GetResetPressed(); // Function CameraStack.CameraStackInput.GetResetPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d790
	bool GetQuickTurnPressed(); // Function CameraStack.CameraStackInput.GetQuickTurnPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d770
	float GetPedestal(); // Function CameraStack.CameraStackInput.GetPedestal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d740
	struct FVector2D GetMouseLook(bool bInvertX, bool bInvertY); // Function CameraStack.CameraStackInput.GetMouseLook // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d660
	struct FVector2D GetLook(bool bInvertX, bool bInvertY); // Function CameraStack.CameraStackInput.GetLook // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d580
	enum class ELastCameraInput GetLastCameraInput(); // Function CameraStack.CameraStackInput.GetLastCameraInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d560
	float GetFocusDistance(); // Function CameraStack.CameraStackInput.GetFocusDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d430
	struct FVector2D GetDollyAndTruck(); // Function CameraStack.CameraStackInput.GetDollyAndTruck // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d2f0
};

// Class CameraStack.CameraStackLevelActor
// Size: 0x488 (Inherited: 0x408)
struct ACameraStackLevelActor : ACameraStackActor {
	struct FCameraPreUpdateTickFunction PreUpdateTick; // 0x408(0x48)
	LazyObjectProperty TargetReference; // 0x450(0x1c)
	bool bIsInWorldSpace; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct TWeakObjectPtr<struct AActor> RuntimeTarget; // 0x470(0x08)
	char pad_478[0x10]; // 0x478(0x10)

	void SetRuntimeTarget(struct AActor* InActor); // Function CameraStack.CameraStackLevelActor.SetRuntimeTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x171dfc0
	struct AActor* GetRuntimeTarget(); // Function CameraStack.CameraStackLevelActor.GetRuntimeTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d7e0
};

// Class CameraStack.CameraStackLimitsInterface
// Size: 0x28 (Inherited: 0x28)
struct UCameraStackLimitsInterface : UInterface {

	bool GetRotationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetRotationLimits // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool GetFocusDistanceLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetFocusDistanceLimits // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x171d460
	bool GetFieldOfViewLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetFieldOfViewLimits // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x171d330
	bool GetCameraSpaceTranslationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetCameraSpaceTranslationLimits // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool GetCameraSpaceRotationLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetCameraSpaceRotationLimits // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool GetArmOriginLimits(struct FOptionalTriplet& OutMin, struct FOptionalTriplet& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetArmOriginLimits // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool GetArmLengthLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetArmLengthLimits // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x171d1e0
	bool GetApertureLimits(float& OutMin, float& OutMax); // Function CameraStack.CameraStackLimitsInterface.GetApertureLimits // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x171d0e0
};

// Class CameraStack.CameraStackLookAtTargetActor
// Size: 0x398 (Inherited: 0x248)
struct ACameraStackLookAtTargetActor : AActor {
	enum class ECameraStackLookAtStrength LookAtStrength; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TSoftObjectPtr<ATriggerVolume> TriggerVolume; // 0x250(0x28)
	float TimeoutAfterTriggerEntered; // 0x278(0x04)
	bool bTriggerOnReEntry; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct TSoftObjectPtr<AActor> CameraActorOverride; // 0x280(0x28)
	char pad_2A8[0xf0]; // 0x2a8(0xf0)

	void StopPlayerInitiation(int32_t PlayerIndex); // Function CameraStack.CameraStackLookAtTargetActor.StopPlayerInitiation // (Final|Native|Public|BlueprintCallable) // @ game+0x171e1f0
	void StartPlayerInitiation(int32_t PlayerIndex); // Function CameraStack.CameraStackLookAtTargetActor.StartPlayerInitiation // (Final|Native|Public|BlueprintCallable) // @ game+0x171e160
	void OnTriggerEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function CameraStack.CameraStackLookAtTargetActor.OnTriggerEndOverlap // (Final|Native|Protected) // @ game+0x171dc40
	void OnTriggerBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function CameraStack.CameraStackLookAtTargetActor.OnTriggerBeginOverlap // (Final|Native|Protected) // @ game+0x171db70
	bool IsPlayerInitiationActive(int32_t PlayerIndex); // Function CameraStack.CameraStackLookAtTargetActor.IsPlayerInitiationActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171dad0
	bool IsActiveLookAtTargetForPlayer(int32_t PlayerIndex); // Function CameraStack.CameraStackLookAtTargetActor.IsActiveLookAtTargetForPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d9d0
	void DeactivateLookAt(int32_t PlayerIndex); // Function CameraStack.CameraStackLookAtTargetActor.DeactivateLookAt // (Final|Native|Public|BlueprintCallable) // @ game+0x171cfb0
	void ActivateLookAt(int32_t PlayerIndex, float Duration); // Function CameraStack.CameraStackLookAtTargetActor.ActivateLookAt // (Final|Native|Public|BlueprintCallable) // @ game+0x171cee0
};

// Class CameraStack.CameraStackManager
// Size: 0x2e70 (Inherited: 0x2ba0)
struct ACameraStackManager : APlayerCameraManager {
	struct FName DefaultCameraStyle; // 0x2ba0(0x08)
	struct FCameraDefaultData DefaultData; // 0x2ba8(0x0c)
	struct FCameraInputMappings InputMappings; // 0x2bb4(0x98)
	char pad_2C4C[0x4]; // 0x2c4c(0x04)
	struct FCameraOptionMappings OptionMappings; // 0x2c50(0xa0)
	char pad_2CF0[0x18]; // 0x2cf0(0x18)
	struct ACameraStackActor* DefaultActorClass; // 0x2d08(0x08)
	struct UCameraAspectRatioWidget* AspectRatioWidgetClass; // 0x2d10(0x08)
	struct UCameraPostProcessHandler* PostProcessHandler; // 0x2d18(0x08)
	char pad_2D20[0x88]; // 0x2d20(0x88)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct ACameraStackActor*> CameraActorMap; // 0x2da8(0x50)
	struct TWeakObjectPtr<struct AActor> ActiveTarget; // 0x2df8(0x08)
	bool bOnlyTickAssigned; // 0x2e00(0x01)
	bool bOverrideBlendDuration; // 0x2e01(0x01)
	char pad_2E02[0x2]; // 0x2e02(0x02)
	float BlendDurationOverride; // 0x2e04(0x04)
	struct FVector2D LazyBlendSpeedRange; // 0x2e08(0x08)
	struct UCameraAspectRatioWidget* AspectRatioWidget; // 0x2e10(0x08)
	struct UUserWidget* RuleOfThirdsWidget; // 0x2e18(0x08)
	struct UStaticMesh* FocusPlaneVisualizationMesh; // 0x2e20(0x08)
	struct UMaterial* FocusPlaneVisualizationMaterial; // 0x2e28(0x08)
	struct UStaticMeshComponent* DebugFocusPlaneComponent; // 0x2e30(0x08)
	struct UMaterialInstanceDynamic* DebugFocusPlaneMID; // 0x2e38(0x08)
	char pad_2E40[0x30]; // 0x2e40(0x30)

	void SwitchToCamera(struct AActor* NewCamera, bool bInOverrideBlendDuration, float InBlendDuration); // Function CameraStack.CameraStackManager.SwitchToCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x171e470
	void SwitchToActorsCameraActor(struct AActor* newActor, bool bInOverrideBlendDuration, float InBlendDuration); // Function CameraStack.CameraStackManager.SwitchToActorsCameraActor // (Final|Native|Public|BlueprintCallable) // @ game+0x171e350
	void SwitchToActiveTargetCamera(bool bInOverrideBlendDuration, float InBlendDuration); // Function CameraStack.CameraStackManager.SwitchToActiveTargetCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x171e280
	struct ACameraStackActor* SpawnCameraActorForTarget(struct AActor* InTargetActor, struct UCameraStackSettings* InStackSettings, struct ACameraStackActor* InCameraActorClass); // Function CameraStack.CameraStackManager.SpawnCameraActorForTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x171e050
	void SetFixedCameraInPlace(bool bSetToFixed); // Function CameraStack.CameraStackManager.SetFixedCameraInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x171deb0
	void RemoveFromCameraActorMap(struct AActor* InActor); // Function CameraStack.CameraStackManager.RemoveFromCameraActorMap // (Final|Native|Private) // @ game+0x171de20
	bool IsCameraFixedInPlace(); // Function CameraStack.CameraStackManager.IsCameraFixedInPlace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171da70
	struct FName GetCameraStyle(); // Function CameraStack.CameraStackManager.GetCameraStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d2d0
	struct ACameraStackActor* GetActorsCameraActor(struct AActor* InActor); // Function CameraStack.CameraStackManager.GetActorsCameraActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x171d040
};

// Class CameraStack.CameraStackModificationSettings
// Size: 0x40 (Inherited: 0x30)
struct UCameraStackModificationSettings : UDataAsset {
	struct TArray<struct UCameraStackOperationBase*> StackOperations; // 0x30(0x10)
};

// Class CameraStack.CameraStackOperationScratchData
// Size: 0x48 (Inherited: 0x28)
struct UCameraStackOperationScratchData : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class CameraStack.CameraStackOperationBase
// Size: 0x30 (Inherited: 0x28)
struct UCameraStackOperationBase : UObject {
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CameraStack.CameraStackOperationInsert
// Size: 0x68 (Inherited: 0x30)
struct UCameraStackOperationInsert : UCameraStackOperationBase {
	struct UCameraStackBehavior* Behavior; // 0x30(0x08)
	float BlendInDuration; // 0x38(0x04)
	float BlendOutDuration; // 0x3c(0x04)
	enum class ECameraStackOperationInsertLocation InsertLocation; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UCameraStackBehavior*> BehaviorsToFind; // 0x48(0x10)
	enum class ECameraStackBehaviorSorting BehaviorSorting; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t FilterFlags; // 0x5c(0x04)
	bool bLazyBlendOut; // 0x60(0x01)
	bool bReuseBehaviorOnReactivate; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class CameraStack.CameraStackOperationReplace
// Size: 0x60 (Inherited: 0x30)
struct UCameraStackOperationReplace : UCameraStackOperationBase {
	struct UCameraStackBehavior* Behavior; // 0x30(0x08)
	float BlendInDuration; // 0x38(0x04)
	float BlendOutDuration; // 0x3c(0x04)
	struct TArray<struct UCameraStackBehavior*> BehaviorsToFind; // 0x40(0x10)
	enum class ECameraStackBehaviorSorting BehaviorSorting; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t FilterFlags; // 0x54(0x04)
	bool bLazyBlendOut; // 0x58(0x01)
	bool bReuseBehaviorOnReactivate; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class CameraStack.CameraStackOperationDisable
// Size: 0x50 (Inherited: 0x30)
struct UCameraStackOperationDisable : UCameraStackOperationBase {
	float BlendOutDuration; // 0x30(0x04)
	float BlendInDuration; // 0x34(0x04)
	struct TArray<struct UCameraStackBehavior*> BehaviorsToDisable; // 0x38(0x10)
	int32_t FilterFlags; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class CameraStack.CameraStackOperationBlendToStack
// Size: 0x48 (Inherited: 0x30)
struct UCameraStackOperationBlendToStack : UCameraStackOperationBase {
	struct UCameraStackSettings* StackSettings; // 0x30(0x08)
	float BlendInDuration; // 0x38(0x04)
	float BlendOutDuration; // 0x3c(0x04)
	bool bLazyBlendOut; // 0x40(0x01)
	bool bReuseBehaviorOnReactivate; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class CameraStack.CameraStackPointOfInterestActor
// Size: 0x250 (Inherited: 0x248)
struct ACameraStackPointOfInterestActor : AActor {
	float MaxDistance; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class CameraStack.CameraStackNearbyPointOfInterestTargetGetter
// Size: 0xc0 (Inherited: 0xb0)
struct UCameraStackNearbyPointOfInterestTargetGetter : UCameraStackSecondaryTargetGetterBlend {
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class CameraStack.CameraStackPrimaryCameraTargetGetter
// Size: 0x70 (Inherited: 0x60)
struct UCameraStackPrimaryCameraTargetGetter : UCameraStackSecondaryTargetGetter {
	struct FVector OffsetFromTarget; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class CameraStack.CameraStackSettings
// Size: 0x98 (Inherited: 0x30)
struct UCameraStackSettings : UDataAsset {
	struct FCameraStackData StackData; // 0x30(0x18)
	struct TMap<struct FName, struct UCameraStackSettings*> StyleOverrides; // 0x48(0x50)

	struct FCameraStackData GetStackData(struct UObject* WorldContextObject); // Function CameraStack.CameraStackSettings.GetStackData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721d70
};

// Class CameraStack.CameraStackSplineActor
// Size: 0x270 (Inherited: 0x248)
struct ACameraStackSplineActor : AActor {
	enum class ECameraStackSplineType SplineType; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct ACameraStackSplineActor* RailPairedSplineActor; // 0x250(0x08)
	bool bUseDifferentSplineWhenStartingAtEnd; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ACameraStackSplineActor* RailPairedSplineActorStartingAtEnd; // 0x260(0x08)
	struct USplineComponent* SplineComponent; // 0x268(0x08)
};

// Class CameraStack.CameraStackSplineGetter
// Size: 0x30 (Inherited: 0x28)
struct UCameraStackSplineGetter : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void Update(float DeltaSeconds); // Function CameraStack.CameraStackSplineGetter.Update // (Native|Public|BlueprintCallable) // @ game+0x1722a10
	bool IsValid(); // Function CameraStack.CameraStackSplineGetter.IsValid // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12bfb10
	struct USplineComponent* GetSpline(); // Function CameraStack.CameraStackSplineGetter.GetSpline // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721d40
	void Activate(struct UCameraStack* InList); // Function CameraStack.CameraStackSplineGetter.Activate // (Native|Public|BlueprintCallable) // @ game+0x1721010
};

// Class CameraStack.CameraStackNearbyCameraSplineGetter
// Size: 0x58 (Inherited: 0x30)
struct UCameraStackNearbyCameraSplineGetter : UCameraStackSplineGetter {
	enum class ECameraStackSplineType SplineType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DistanceThreshold; // 0x34(0x04)
	struct FVector CameraTargetOffset; // 0x38(0x0c)
	float LookAheadDistance; // 0x44(0x04)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class CameraStack.CameraStackStatics
// Size: 0x28 (Inherited: 0x28)
struct UCameraStackStatics : UBlueprintFunctionLibrary {

	struct ACameraStackActor* SpawnCameraStackActorForTarget(struct AActor* InTargetActor, struct UCameraStackSettings* InStackSettings, struct ACameraStackActor* InCameraActorClass); // Function CameraStack.CameraStackStatics.SpawnCameraStackActorForTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1722520
	void SetPlayerCameraNamedTargetActor(struct UObject* WorldContextObject, struct FName InTargetName, struct AActor* InTargetActor, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.SetPlayerCameraNamedTargetActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17223e0
	void SetPlayerCameraContext(struct UObject* WorldContextObject, struct FName InContextName, bool bSet, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.SetPlayerCameraContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1722290
	void ResetPlayerCameraRotation(struct UObject* WorldContextObject, int32_t PlayerIndex, float ResetDuration, struct FRotator& DesiredDelta, bool bResetYaw, bool bResetPitch); // Function CameraStack.CameraStackStatics.ResetPlayerCameraRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1722090
	struct FTransform GetPlayerViewTransform(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.GetPlayerViewTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1721c40
	struct FTransform GetPlayerCameraTransform(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.GetPlayerCameraTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1721b10
	struct ACameraStackManager* GetPlayerCameraStackManager(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.GetPlayerCameraStackManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1721a40
	struct FRotator GetPlayerCameraArmRotation(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.GetPlayerCameraArmRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1721960
	struct ACameraStackActor* GetCameraStackActorForTarget(struct AActor* InTargetActor); // Function CameraStack.CameraStackStatics.GetCameraStackActorForTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17218d0
	void ForceSetPlayerCameraArmRotationTowardsLocation(struct UObject* WorldContextObject, int32_t PlayerIndex, struct FVector InTargetLocation); // Function CameraStack.CameraStackStatics.ForceSetPlayerCameraArmRotationTowardsLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17217c0
	void ForceSetPlayerCameraArmRotation(struct UObject* WorldContextObject, int32_t PlayerIndex, struct FRotator InRotation); // Function CameraStack.CameraStackStatics.ForceSetPlayerCameraArmRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17216b0
	void ForcePlayerCameraReset(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.ForcePlayerCameraReset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17215f0
	void FilterCurrentPlayerCameraInput(struct UObject* WorldContextObject, int32_t PlayerIndex, float InDuration); // Function CameraStack.CameraStackStatics.FilterCurrentPlayerCameraInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17214f0
	void ClearPlayerCameraContext(struct UObject* WorldContextObject, struct FName InContextName, int32_t PlayerIndex); // Function CameraStack.CameraStackStatics.ClearPlayerCameraContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17213f0
	bool CheckForCameraCutOnTeleport(struct AActor* InTeleportingActor); // Function CameraStack.CameraStackStatics.CheckForCameraCutOnTeleport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17210a0
};

// Class CameraStack.CameraStackTarget
// Size: 0xa0 (Inherited: 0x28)
struct UCameraStackTarget : UObject {
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x28(0x08)
	struct FName TargetSocket; // 0x30(0x08)
	struct FVector TargetOffset; // 0x38(0x0c)
	char pad_44[0x5c]; // 0x44(0x5c)

	bool IsWorldCamera(); // Function CameraStack.CameraStackTarget.IsWorldCamera // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1722060
	struct FVector GetTargetVelocity(); // Function CameraStack.CameraStackTarget.GetTargetVelocity // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721ff0
	struct AActor* GetTargetActor(); // Function CameraStack.CameraStackTarget.GetTargetActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1721d40
};

// Class CameraStack.CameraStackTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCameraStackTargetInterface : UInterface {

	struct AActor* GetRuntimeTarget(); // Function CameraStack.CameraStackTargetInterface.GetRuntimeTarget // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
};

// Class CameraStack.CameraStackTransitionController
// Size: 0x280 (Inherited: 0x248)
struct ACameraStackTransitionController : AActor {
	struct UCameraStackSettings* StackSettings; // 0x248(0x08)
	struct ACameraStackActor* CameraActorClass; // 0x250(0x08)
	bool bConstrainAspectRatio; // 0x258(0x01)
	bool bRelativeToArmRotation; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct ACameraStackActor* CameraStackActor; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)

	void TransitionToCameraAndTargetLocation(struct AActor* InCameraActor, struct FVector InTargetLocation, float InTransitionDuration, float InDelay); // Function CameraStack.CameraStackTransitionController.TransitionToCameraAndTargetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1722890
	void TransitionToCameraAndTargetActor(struct AActor* InCameraActor, struct AActor* InTargetLocationActor, float InTransitionDuration, float InDelay); // Function CameraStack.CameraStackTransitionController.TransitionToCameraAndTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1722730
	void TransitionToCamera(struct AActor* InCameraActor, float InTransitionDuration, float InDelay); // Function CameraStack.CameraStackTransitionController.TransitionToCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x1722620
	struct APlayerController* GetPlayerController(); // Function CameraStack.CameraStackTransitionController.GetPlayerController // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1721c10
};

// Class CameraStack.CameraStackVolume
// Size: 0x2c0 (Inherited: 0x280)
struct ACameraStackVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct FCameraStackVolumeInterfaceProperties VolumeSettings; // 0x288(0x18)
	struct UCameraStackVolumeComponent* VolumeComponent; // 0x2a0(0x08)
	struct UCameraStackVolumePreset* VolumePreset; // 0x2a8(0x08)
	int32_t Priority; // 0x2b0(0x04)
	float weight; // 0x2b4(0x04)
	float BlendRadius; // 0x2b8(0x04)
	float MaxCrossBlendSpeed; // 0x2bc(0x04)
};

// Class CameraStack.CameraStackVolumeComponent
// Size: 0x250 (Inherited: 0x220)
struct UCameraStackVolumeComponent : USceneComponent {
	struct FCameraStackVolumeInterfaceProperties VolumeSettings; // 0x220(0x18)
	struct UCameraStackVolumePreset* VolumePreset; // 0x238(0x08)
	int32_t Priority; // 0x240(0x04)
	float weight; // 0x244(0x04)
	float BlendRadius; // 0x248(0x04)
	float MaxCrossBlendSpeed; // 0x24c(0x04)
};

// Class CameraStack.CameraStackVolumeInfluenceComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UCameraStackVolumeInfluenceComponent : UActorComponent {
	struct TArray<struct FCameraStackVolumeInfluence> Influences; // 0xc8(0x10)
};

// Class CameraStack.CameraStackVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct UCameraStackVolumeInterface : UInterface {
};

// Class CameraStack.CameraStackVolumePreset
// Size: 0x90 (Inherited: 0x30)
struct UCameraStackVolumePreset : UDataAsset {
	struct TArray<struct FCameraStackVolumeOperationSettings> VolumeOperations; // 0x30(0x10)
	struct TMap<struct FName, struct UCameraStackVolumePreset*> StyleOverrides; // 0x40(0x50)
};

// Class CameraStack.OptionalTripletHelper
// Size: 0x28 (Inherited: 0x28)
struct UOptionalTripletHelper : UObject {

	struct FVector ClampVec(struct FVector& InVec, struct FOptionalTriplet& InMin, struct FOptionalTriplet& InMax); // Function CameraStack.OptionalTripletHelper.ClampVec // (Final|Native|Static|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1721290
	struct FRotator ClampRot(struct FRotator& InRot, struct FOptionalTriplet& InMin, struct FOptionalTriplet& InMax); // Function CameraStack.OptionalTripletHelper.ClampRot // (Final|Native|Static|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1721130
};

// Class CameraStack.QuatValueVelocityHelper
// Size: 0x28 (Inherited: 0x28)
struct UQuatValueVelocityHelper : UObject {

	void Update(struct FQuatValueVelocity& Data, struct FRotator& Value, float& DeltaSeconds); // Function CameraStack.QuatValueVelocityHelper.Update // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1724180
	struct FQuatValueVelocity Inverse(struct FQuatValueVelocity& Data); // Function CameraStack.QuatValueVelocityHelper.Inverse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1723ec0
	void Get(struct FQuatValueVelocity& Data, struct FRotator& OutValue, struct FVector& OutVelocity); // Function CameraStack.QuatValueVelocityHelper.Get // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17239d0
	void Activate(struct FQuatValueVelocity& Data, struct FRotator Value, struct FVector Velocity); // Function CameraStack.QuatValueVelocityHelper.Activate // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17234f0
};

// Class CameraStack.RotatorValueVelocityHelper
// Size: 0x28 (Inherited: 0x28)
struct URotatorValueVelocityHelper : UObject {

	void Update(struct FRotatorValueVelocity& Data, struct FRotator& Value, float& DeltaSeconds); // Function CameraStack.RotatorValueVelocityHelper.Update // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17242c0
	struct FRotatorValueVelocity Inverse(struct FRotatorValueVelocity& Data); // Function CameraStack.RotatorValueVelocityHelper.Inverse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1723f70
	void Get(struct FRotatorValueVelocity& Data, struct FRotator& OutValue, struct FRotator& OutVelocity); // Function CameraStack.RotatorValueVelocityHelper.Get // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1723b10
	void Activate(struct FRotatorValueVelocity& Data, struct FRotator Value, struct FRotator Velocity); // Function CameraStack.RotatorValueVelocityHelper.Activate // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1723630
};

// Class CameraStack.ScalarValueVelocityHelper
// Size: 0x28 (Inherited: 0x28)
struct UScalarValueVelocityHelper : UObject {

	void Update(struct FScalarValueVelocity& Data, float& Value, float& DeltaSeconds); // Function CameraStack.ScalarValueVelocityHelper.Update // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1724400
	struct FScalarValueVelocity Inverse(struct FScalarValueVelocity& Data); // Function CameraStack.ScalarValueVelocityHelper.Inverse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1724020
	void Get(struct FScalarValueVelocity& Data, float& OutValue, float& OutVelocity); // Function CameraStack.ScalarValueVelocityHelper.Get // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1723c50
	void Activate(struct FScalarValueVelocity& Data, float Value, float Velocity); // Function CameraStack.ScalarValueVelocityHelper.Activate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1723770
};

// Class CameraStack.VectorValueVelocityHelper
// Size: 0x28 (Inherited: 0x28)
struct UVectorValueVelocityHelper : UObject {

	void Update(struct FVectorValueVelocity& Data, struct FVector& Value, float& DeltaSeconds); // Function CameraStack.VectorValueVelocityHelper.Update // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1724530
	struct FVectorValueVelocity Inverse(struct FVectorValueVelocity& Data); // Function CameraStack.VectorValueVelocityHelper.Inverse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17240d0
	void Get(struct FVectorValueVelocity& Data, struct FVector& OutValue, struct FVector& OutVelocity); // Function CameraStack.VectorValueVelocityHelper.Get // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1723d80
	void Activate(struct FVectorValueVelocity& Data, struct FVector Value, struct FVector Velocity); // Function CameraStack.VectorValueVelocityHelper.Activate // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1723890
};

