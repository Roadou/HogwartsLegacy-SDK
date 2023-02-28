// BlueprintGeneratedClass BP_HW_Globe_interact.BP_HW_Globe_interact_C
// Size: 0x328 (Inherited: 0x2d8)
struct ABP_HW_Globe_interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_C_Frame; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct USceneComponent* Tag; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_C_Ball; // 0x2f8(0x08)
	float Timeline_0_NewTrack_0_4C1C56E1431D330F444B73AABFBFAD17; // 0x300(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4C1C56E1431D330F444B73AABFBFAD17; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_1; // 0x308(0x08)
	struct FKey NewVar_1; // 0x310(0x18)

	struct UCurveFloat* GetSpeedGovernorCurve(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetSpeedGovernorCurve // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateClimbingLedgeState(enum class EClimbingLedgeState& OutState, enum class EJumpingType& OutType); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.CalculateClimbingLedgeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector CalculateLookAtDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.CalculateLookAtDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float ComputeAngleToDesiredDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ComputeAngleToDesiredDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeAttack(struct AActor*& TargetActor); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ComputeAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeReaction(struct FVector HitLocation, struct FVector TraceDirection, struct FString OverrideName, enum class EReactionState& ReactionState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ComputeReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAdditiveBodyState(enum class EAdditiveBodyState& OutState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetAdditiveBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetAutoTargetFocusDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetAutoTargetFocusDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetAutoTargetUpDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetAutoTargetUpDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* GetBestAutoTargetActor(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetBestAutoTargetActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetBestAutoTargetActor_WorldLocation(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetBestAutoTargetActor_WorldLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* GetBestLockOnActor(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetBestLockOnActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetBestLockOnActor_ScreenLocation(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetBestLockOnActor_ScreenLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetBestLockOnActor_WorldLocation(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetBestLockOnActor_WorldLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFullBodyState(enum class EFullBodyState& OutState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetFullBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFullBodyStateLast(enum class EFullBodyState& OutState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetFullBodyStateLast // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* GetHighlitActor(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetHighlitActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FInventoryResult GetInventoryResult(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetInventoryResult // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetParryState(enum class EParryState& OutState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetParryState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPartialBodyState(enum class EPartialBodyState& OutState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetPartialBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct APickupTool* GetPickupTool(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetPickupTool // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetPickupToolHeight(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetPickupToolHeight // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetPutdownToolHeight(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetPutdownToolHeight // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	enum class ERightArmState GetRightArmState(enum class ERightArmPriority InPriority); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetRightArmState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetRootMotionOffset(struct FVector& OutTranslationOffset); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetRootMotionOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USkeletalMeshComponent* GetSkeletalMesh(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct UCurveFloat* GetSpeedCurve(bool& bIgnoreGovernor); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetSpeedCurve // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSpellCastHandle(int32_t& OutSpellCastHandle); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetSpellCastHandle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FName GetTargetBoneName(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetTargetBoneName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetTargetComponent(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetTargetComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetTargetDestination(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetTargetDestination // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FVector GetTargetDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetTargetDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetToTargetDirection(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetToTargetDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AWandTool* GetWand(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.GetWand // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool InLockOnMode(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.InLockOnMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InstaUseInventoryItem(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.InstaUseInventoryItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsDead(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.IsDead // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInReadyMode(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.IsInReadyMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FName ParkourJump(struct FName DefaultNode); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ParkourJump // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ProcessStick(float StickX, float StickY, float DeltaTime, struct UCurveFloat* DeadZoneCurve, struct UCurveFloat* SpeedCurve, struct UCurveFloat* SpeedGovernorCurve, float& WorldSpeed, struct FVector& WorldDirection, enum class ECustomInterpType InterpType, float InterpSpeed, float StickMagReductionDelayTimer); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ProcessStick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool QuickActionInteract(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.QuickActionInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestMove(float StickX, float StickY, float DeltaTime, float& Speed, float& Direction, float& LookAtDirection); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.RequestMove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* SpawnFaceTarget(struct AActor* SpawnActorClass); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SpawnFaceTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* SpawnLookAtTarget(struct AActor* SpawnActorClass); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SpawnLookAtTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct APawn* SpawnStudent(struct ABiped_Character* StudentClass); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SpawnStudent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ClearStick(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ClearStick // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EquipWand(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.EquipWand // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlooStart(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.FlooStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FullyResetPhoenixCamera(float ResetSpeed, struct UCurveFloat* ResetSpeedCurve); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.FullyResetPhoenixCamera // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockOnCameraMoving(bool bFlag); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.LockOnCameraMoving // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockOnCamFlick(struct UStickFlickWatcherRecord* InStickFlickWatcherRecord); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.LockOnCamFlick // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockOnToActor(struct AActor* InLockOnActor); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.LockOnToActor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseMenuStart(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.PauseMenuStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopDisableStack(struct FName_GameLogicVarInt32 StackName); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.PopDisableStack // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushDisableStack(struct FName_GameLogicVarInt32 StackName); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.PushDisableStack // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadyModeStart(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ReadyModeStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadyModeStop(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ReadyModeStop // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReleasePhoenixCameraLookAt(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ReleasePhoenixCameraLookAt // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestStick(float StickX, float StickY); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.RequestStick // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetPhoenixCameraRotation(float ResetSpeed, struct UCurveFloat* ResetSpeedCurve); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ResetPhoenixCameraRotation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAdditiveBodyState(enum class EAdditiveBodyState& InState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetAdditiveBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFinisherOptimalRatio(float OptimalRatio, enum class EDynamicForceFeedbackAction FeedbackAction); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetFinisherOptimalRatio // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFullBodyState(enum class EFullBodyState& InState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetFullBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFullBodyStateLast(enum class EFullBodyState& InState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetFullBodyStateLast // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParryState(enum class EParryState& InState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetParryState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPartialBodyState(enum class EPartialBodyState& InState); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPartialBodyState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPhoenixCameraLookAt(struct FVector& LookAtPoint, float ScaleSpeed); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPhoenixCameraLookAt // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPhoenixCameraLookAt_Actor(struct AActor* LookAtActor, float ScaleSpeed); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPhoenixCameraLookAt_Actor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPhoenixCameraLookAt_ActorAndTime(struct AActor* LookAtActor, float LookAtTime); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPhoenixCameraLookAt_ActorAndTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPhoenixCameraLookAt_TimeBased(struct FVector& LookAtPoint, float LookAtTime); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPhoenixCameraLookAt_TimeBased // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPhoenixCameraRotation(struct FRotator& DesiredRotation); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPhoenixCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPickupTool(struct APickupTool* InPickupTool); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetPickupTool // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRightArmState(enum class ERightArmState InState, enum class ERightArmPriority InPriority, bool bBroadcastChange); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetRightArmState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRootMotionOffset(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetRootMotionOffset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRootMotionOffsets(struct FVector& TranslationOffset, struct FRotator& RotationOffset); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetRootMotionOffsets // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellCastHandle(int32_t InSpellCastHandle); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.SetSpellCastHandle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopMove(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.StopMove // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnEquipWand(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.UnEquipWand // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnLockOnToActor(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.UnLockOnToActor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UseInventoryItemByName(struct FName InventoryObjectID); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.UseInventoryItemByName // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Globe_interact(int32_t EntryPoint); // Function BP_HW_Globe_interact.BP_HW_Globe_interact_C.ExecuteUbergraph_BP_HW_Globe_interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

