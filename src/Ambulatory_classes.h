// Class Ambulatory.Ambulatory_AnimInstance
// Size: 0x5e0 (Inherited: 0x510)
struct UAmbulatory_AnimInstance : UAble_AnimInstance {
	char pad_510[0x8]; // 0x510(0x08)
	enum class EMobilityModeState MobilityModeState; // 0x518(0x01)
	enum class EMobilityModeState PrevMobilityModeState; // 0x519(0x01)
	bool bPartialBodyUseAbilitiesTest; // 0x51a(0x01)
	enum class EMobilityActionState MobilityActionState; // 0x51b(0x01)
	enum class EMobilityActionState PrevMobilityActionState; // 0x51c(0x01)
	enum class EJumpingType JumpType; // 0x51d(0x01)
	enum class ELandingType LandType; // 0x51e(0x01)
	enum class EAnimSpeedType AnimSpeedType; // 0x51f(0x01)
	enum class EAnimMechanicType AnimMechanicType; // 0x520(0x01)
	enum class EClimbingLedgeState ClimbingLedgeState; // 0x521(0x01)
	enum class EClimbingLadderState ClimbingLadderState; // 0x522(0x01)
	char pad_523[0x1]; // 0x523(0x01)
	float StrafeAngle; // 0x524(0x04)
	bool IsMoving; // 0x528(0x01)
	bool IsAim; // 0x529(0x01)
	bool IsMovementInput; // 0x52a(0x01)
	bool IsTurningInPlace; // 0x52b(0x01)
	bool IsStrafing; // 0x52c(0x01)
	bool DesiredIsStrafing; // 0x52d(0x01)
	bool ForceTurnAndFace; // 0x52e(0x01)
	bool BlockedByWall; // 0x52f(0x01)
	bool IsViewAlignedWithDesiredDirection; // 0x530(0x01)
	bool IsActorAlignedWithDesiredDirection; // 0x531(0x01)
	char pad_532[0x2]; // 0x532(0x02)
	float LookAtDirection; // 0x534(0x04)
	float DesiredDirection; // 0x538(0x04)
	float InterpedDesiredDirection; // 0x53c(0x04)
	float LastDesiredDirection; // 0x540(0x04)
	float FixedDesiredDirection; // 0x544(0x04)
	float StopTurnDirection; // 0x548(0x04)
	float StartTurnDirection; // 0x54c(0x04)
	float WalkRunLean; // 0x550(0x04)
	float Speed; // 0x554(0x04)
	float FixedSpeed; // 0x558(0x04)
	float TrackingSpeed; // 0x55c(0x04)
	float ShortStepTrackingSpeed; // 0x560(0x04)
	float LastDesiredWorldSpeed; // 0x564(0x04)
	float MaxSpeed; // 0x568(0x04)
	float PlayRate; // 0x56c(0x04)
	float DesiredForwardBodyLean; // 0x570(0x04)
	float DesiredHorizontalBodyLean; // 0x574(0x04)
	float DesiredBodyTurn; // 0x578(0x04)
	float GameTimeAtStartMove; // 0x57c(0x04)
	float GameTimeAtStopMove; // 0x580(0x04)
	float AimLeanYaw; // 0x584(0x04)
	float AimLeanPitch; // 0x588(0x04)
	float JumpHeight; // 0x58c(0x04)
	bool IsFlicked; // 0x590(0x01)
	bool IsOverridenForCinematic; // 0x591(0x01)
	bool IsInIdle; // 0x592(0x01)
	char pad_593[0x1]; // 0x593(0x01)
	float LookAtTargetPitch; // 0x594(0x04)
	float LookAtTargetYaw; // 0x598(0x04)
	struct FVector LookAtTargetLocation; // 0x59c(0x0c)
	bool HasLookAtTarget; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FVector ImpactDirection; // 0x5ac(0x0c)
	bool bUsingStairsAnims; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	struct FWandCastInfo WandCastInfo; // 0x5bc(0x1c)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	void WandCastInfo_ClearAttackCount(); // Function Ambulatory.Ambulatory_AnimInstance.WandCastInfo_ClearAttackCount // (Final|Native|Public|BlueprintCallable) // @ game+0x19822e0
	void SetWandCastInfo_PreWandCastState(enum class EPreWandCastState PreWandCastState); // Function Ambulatory.Ambulatory_AnimInstance.SetWandCastInfo_PreWandCastState // (Final|Native|Public|BlueprintCallable) // @ game+0x1981350
	void SetWandCastInfo_AnticipationWandCastState(enum class EPreWandCastState AnticipationWandCastState); // Function Ambulatory.Ambulatory_AnimInstance.SetWandCastInfo_AnticipationWandCastState // (Final|Native|Public|BlueprintCallable) // @ game+0x19812d0
	void SetStartMoveTimeToCurrentTime(); // Function Ambulatory.Ambulatory_AnimInstance.SetStartMoveTimeToCurrentTime // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19812b0
	void SetPlayerIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance.SetPlayerIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981220
	void SetNextWandCastType(enum class EWandCastType WandCastType); // Function Ambulatory.Ambulatory_AnimInstance.SetNextWandCastType // (Final|Native|Public|BlueprintCallable) // @ game+0x1981190
	void SetLandingType(enum class ELandingType InType); // Function Ambulatory.Ambulatory_AnimInstance.SetLandingType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981110
	void SetJumpingType(enum class EJumpingType InType); // Function Ambulatory.Ambulatory_AnimInstance.SetJumpingType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981090
	void SetIsViewAlignedWithDesiredDirection(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.SetIsViewAlignedWithDesiredDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981000
	void SetIsAim(bool InIsAim); // Function Ambulatory.Ambulatory_AnimInstance.SetIsAim // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980f70
	void SetIsActorAlignedWithDesiredDirection(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.SetIsActorAlignedWithDesiredDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980ee0
	void SetIKStateWithEaseIn(bool State, float Delay, float EaseTime); // Function Ambulatory.Ambulatory_AnimInstance.SetIKStateWithEaseIn // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980dc0
	void SetIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance.SetIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980d30
	void SetGlobalIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance.SetGlobalIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980ca0
	void SetClimbingLedgeState(enum class EClimbingLedgeState InType); // Function Ambulatory.Ambulatory_AnimInstance.SetClimbingLedgeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980c20
	void SetClimbingLadderState(enum class EClimbingLadderState InType); // Function Ambulatory.Ambulatory_AnimInstance.SetClimbingLadderState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980ba0
	void Set_WandCastMelee(bool bInFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_WandCastMelee // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1982250
	void Set_WalkRunLean(float InWalkRunLean); // Function Ambulatory.Ambulatory_AnimInstance.Set_WalkRunLean // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19821c0
	void Set_TrackingSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_TrackingSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1982130
	void Set_StopTurnDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance.Set_StopTurnDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19820a0
	void Set_StartTurnDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance.Set_StartTurnDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1982010
	void Set_Speed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_Speed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981f80
	void Set_ShortStepTrackingSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_ShortStepTrackingSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981ef0
	void Set_PlayRate(float InPlayRate); // Function Ambulatory.Ambulatory_AnimInstance.Set_PlayRate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981e60
	void Set_MobilityModeState(enum class EMobilityModeState InState); // Function Ambulatory.Ambulatory_AnimInstance.Set_MobilityModeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981de0
	void Set_MobilityActionState(enum class EMobilityActionState InState); // Function Ambulatory.Ambulatory_AnimInstance.Set_MobilityActionState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981d60
	void Set_MaxSpeed(float InMaxSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_MaxSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981cd0
	void Set_LookAtDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance.Set_LookAtDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981c40
	void Set_LastDesiredWorldSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_LastDesiredWorldSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981bb0
	void Set_IsTurningInPlace(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_IsTurningInPlace // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981b20
	void Set_IsStrafing(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_IsStrafing // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981a90
	void Set_IsOverridenForCinematic(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_IsOverridenForCinematic // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981a00
	void Set_IsMoving(bool InIsMoving); // Function Ambulatory.Ambulatory_AnimInstance.Set_IsMoving // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981970
	void Set_IsMovementInput(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_IsMovementInput // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19818e0
	void Set_ForceTurnAndFace(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance.Set_ForceTurnAndFace // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981850
	void Set_FixedSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Set_FixedSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19817c0
	void Set_FixedDesiredDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance.Set_FixedDesiredDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981730
	void Set_DesiredHorizontalBodyLean(float InDesiredHorizontalBodyLean); // Function Ambulatory.Ambulatory_AnimInstance.Set_DesiredHorizontalBodyLean // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19816a0
	void Set_DesiredForwardBodyLean(float InDesiredForwardBodyLean); // Function Ambulatory.Ambulatory_AnimInstance.Set_DesiredForwardBodyLean // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981610
	void Set_DesiredDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance.Set_DesiredDirection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981580
	void Set_DesiredBodyTurn(float InDesiredBodyTurn); // Function Ambulatory.Ambulatory_AnimInstance.Set_DesiredBodyTurn // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19814f0
	void Set_AimLeanYaw(float InAimLeanYaw); // Function Ambulatory.Ambulatory_AnimInstance.Set_AimLeanYaw // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1981460
	void Set_AimLeanPitch(float InAimLeanPitch); // Function Ambulatory.Ambulatory_AnimInstance.Set_AimLeanPitch // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19813d0
	void Revert_MobilityModeState(); // Function Ambulatory.Ambulatory_AnimInstance.Revert_MobilityModeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980b80
	void Revert_MobilityActionState(); // Function Ambulatory.Ambulatory_AnimInstance.Revert_MobilityActionState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980b60
	void InitRootMotionModifierVectors(); // Function Ambulatory.Ambulatory_AnimInstance.InitRootMotionModifierVectors // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980b40
	enum class EPreWandCastState GetWandCastInfo_AnticipationWandCastState(); // Function Ambulatory.Ambulatory_AnimInstance.GetWandCastInfo_AnticipationWandCastState // (Final|Native|Public|BlueprintCallable) // @ game+0x197ffc0
	bool GetPlayerIKState(); // Function Ambulatory.Ambulatory_AnimInstance.GetPlayerIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x197ff90
	void GetLandingType(enum class ELandingType& OutType); // Function Ambulatory.Ambulatory_AnimInstance.GetLandingType // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x197fef0
	void GetJumpingType(enum class EJumpingType& OutType); // Function Ambulatory.Ambulatory_AnimInstance.GetJumpingType // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x197fe50
	bool GetIKState(); // Function Ambulatory.Ambulatory_AnimInstance.GetIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x197fe20
	bool GetGlobalIKState(); // Function Ambulatory.Ambulatory_AnimInstance.GetGlobalIKState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x197fdf0
	void GetClimbingLedgeState(enum class EClimbingLedgeState& OutType); // Function Ambulatory.Ambulatory_AnimInstance.GetClimbingLedgeState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x197fd50
	void GetClimbingLadderState(enum class EClimbingLadderState& OutType); // Function Ambulatory.Ambulatory_AnimInstance.GetClimbingLadderState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x197fcb0
	bool Get_WandCastMelee(); // Function Ambulatory.Ambulatory_AnimInstance.Get_WandCastMelee // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980b10
	float Get_WalkRunLean(); // Function Ambulatory.Ambulatory_AnimInstance.Get_WalkRunLean // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1980ad0
	void Get_StopTurnDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance.Get_StopTurnDirection // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980a30
	void Get_StartTurnDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance.Get_StartTurnDirection // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980990
	void Get_Speed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Get_Speed // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19808f0
	void Get_PrevMobilityModeState(enum class EMobilityModeState& OutState); // Function Ambulatory.Ambulatory_AnimInstance.Get_PrevMobilityModeState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980850
	void Get_PrevMobilityActionState(enum class EMobilityActionState& OutState); // Function Ambulatory.Ambulatory_AnimInstance.Get_PrevMobilityActionState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19807b0
	void Get_PlayRate(float& OutPlayRate); // Function Ambulatory.Ambulatory_AnimInstance.Get_PlayRate // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980710
	void Get_MobilityModeState(enum class EMobilityModeState& OutState); // Function Ambulatory.Ambulatory_AnimInstance.Get_MobilityModeState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980670
	void Get_MobilityActionState(enum class EMobilityActionState& OutState); // Function Ambulatory.Ambulatory_AnimInstance.Get_MobilityActionState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19805d0
	void Get_MaxSpeed(float& OutMaxSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Get_MaxSpeed // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980530
	void Get_LookAtDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance.Get_LookAtDirection // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980490
	void Get_Lean(float& OutAimLeanYaw, float& OutAimLeanPitch); // Function Ambulatory.Ambulatory_AnimInstance.Get_Lean // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19803a0
	void Get_LastDesiredWorldSpeed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Get_LastDesiredWorldSpeed // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980300
	void Get_IsTurningInPlace(bool& OutFlag); // Function Ambulatory.Ambulatory_AnimInstance.Get_IsTurningInPlace // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980260
	void Get_IsMoving(bool& InIsMoving); // Function Ambulatory.Ambulatory_AnimInstance.Get_IsMoving // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19801c0
	void Get_IsMovementInput(bool& OutFlag); // Function Ambulatory.Ambulatory_AnimInstance.Get_IsMovementInput // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980120
	void Get_FixedSpeed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance.Get_FixedSpeed // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1980080
	void Get_DesiredDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance.Get_DesiredDirection // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x197ffe0
	void AnimNotify_TurnAssistOn(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_TurnAssistOn // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc90
	void AnimNotify_TurnAssistOff(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_TurnAssistOff // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc70
	void AnimNotify_StartMoveBegin(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_StartMoveBegin // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc30
	void AnimNotify_SetStrafing(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_SetStrafing // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc50
	void AnimNotify_MoveEnd(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_MoveEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc30
	void AnimNotify_MoveBegin(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_MoveBegin // (Final|Native|Public|BlueprintCallable) // @ game+0x197fc10
	void AnimNotify_LeftIdle(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_LeftIdle // (Final|Native|Public|BlueprintCallable) // @ game+0x197fbf0
	void AnimNotify_LandingFinished(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_LandingFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x197fbd0
	void AnimNotify_JumpStarted(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_JumpStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x197fbb0
	void AnimNotify_JumpFinished(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_JumpFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x197fb90
	void AnimNotify_IdleBegin(); // Function Ambulatory.Ambulatory_AnimInstance.AnimNotify_IdleBegin // (Final|Native|Public|BlueprintCallable) // @ game+0x197fb70
};

// Class Ambulatory.Ambulatory_AnimInstance_Interface
// Size: 0x28 (Inherited: 0x28)
struct UAmbulatory_AnimInstance_Interface : UInterface {

	void SetStartMoveTimeToCurrentTime(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetStartMoveTimeToCurrentTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRootMotionOffsets(struct FVector& TranslationOffset, struct FRotator& RotationOffset); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetRootMotionOffsets // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayerIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetPlayerIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLandingType(enum class ELandingType InType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetLandingType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetJumpingType(enum class EJumpingType InType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetJumpingType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsViewAlignedWithDesiredDirection(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetIsViewAlignedWithDesiredDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsAim(bool InIsAim); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetIsAim // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsActorAlignedWithDesiredDirection(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetIsActorAlignedWithDesiredDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGlobalIKState(bool State); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetGlobalIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClimbingLedgeState(enum class EClimbingLedgeState InType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetClimbingLedgeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClimbingLadderState(enum class EClimbingLadderState InType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.SetClimbingLadderState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_WandCastMelee(bool bInFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_WandCastMelee // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_WalkRunLean(float InWalkRunLean); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_WalkRunLean // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_TrackingSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_TrackingSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_StopTurnDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_StopTurnDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_StartTurnDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_StartTurnDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Speed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_Speed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_ShortStepTrackingSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_ShortStepTrackingSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_PlayRate(float InPlayRate); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_PlayRate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_MobilityModeState(enum class EMobilityModeState InState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_MobilityModeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_MobilityActionState(enum class EMobilityActionState InState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_MobilityActionState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_MaxSpeed(float InMaxSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_MaxSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_LookAtDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_LookAtDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_LastDesiredWorldSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_LastDesiredWorldSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_IsTurningInPlace(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsTurningInPlace // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_IsStrafing(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsStrafing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_IsOverridenForCinematic(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsOverridenForCinematic // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_IsMoving(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsMoving // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_IsMovementInput(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsMovementInput // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_ForceTurnAndFace(bool InFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_ForceTurnAndFace // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_FixedSpeed(float InSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_FixedSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_FixedDesiredDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_FixedDesiredDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredHorizontalBodyLean(float InDesiredHorizontalBodyLean); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredHorizontalBodyLean // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredForwardBodyLean(float InDesiredForwardBodyLean); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredForwardBodyLean // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredDirection(float InDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredBodyTurn(float InDesiredBodyTurn); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredBodyTurn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_AimLeanYaw(float InAimLeanYaw); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_AimLeanYaw // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_AimLeanPitch(float InAimLeanPitch); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Set_AimLeanPitch // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Revert_MobilityModeState(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Revert_MobilityModeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Revert_MobilityActionState(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Revert_MobilityActionState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitRootMotionModifierVectors(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.InitRootMotionModifierVectors // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetPlayerIKState(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetPlayerIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLandingType(enum class ELandingType& OutType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetLandingType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetJumpingType(enum class EJumpingType& OutType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetJumpingType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetIKState(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetGlobalIKState(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetGlobalIKState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetClimbingLedgeState(enum class EClimbingLedgeState& OutType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetClimbingLedgeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetClimbingLadderState(enum class EClimbingLadderState& OutType); // Function Ambulatory.Ambulatory_AnimInstance_Interface.GetClimbingLadderState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Get_WandCastMelee(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_WandCastMelee // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float Get_WalkRunLean(); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_WalkRunLean // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_StopTurnDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_StopTurnDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_StartTurnDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_StartTurnDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_Speed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_Speed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_PrevMobilityModeState(enum class EMobilityModeState& OutState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_PrevMobilityModeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_PrevMobilityActionState(enum class EMobilityActionState& OutState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_PrevMobilityActionState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_PlayRate(float& OutPlayRate); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_PlayRate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_MobilityModeState(enum class EMobilityModeState& OutState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_MobilityModeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_MobilityActionState(enum class EMobilityActionState& OutState); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_MobilityActionState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_MaxSpeed(float& OutMaxSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_MaxSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_LookAtDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_LookAtDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_Lean(float& OutAimLeanYaw, float& OutAimLeanPitch); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_Lean // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_LastDesiredWorldSpeed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_LastDesiredWorldSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_IsTurningInPlace(bool& OutFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsTurningInPlace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_IsMoving(bool& OutFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsMoving // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_IsMovementInput(bool& OutFlag); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsMovementInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_FixedSpeed(float& OutSpeed); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_FixedSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_FixedDesiredDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_FixedDesiredDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_DesiredDirection(float& OutDirection); // Function Ambulatory.Ambulatory_AnimInstance_Interface.Get_DesiredDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class Ambulatory.AmbulatoryAnimTask
// Size: 0x30 (Inherited: 0x28)
struct UAmbulatoryAnimTask : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Ambulatory.AmbulatoryTurnAssistAnimTask
// Size: 0x58 (Inherited: 0x30)
struct UAmbulatoryTurnAssistAnimTask : UAmbulatoryAnimTask {
	bool bUseFixedDirection; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* TurnAssistCurve; // 0x38(0x08)
	struct UCurveFloat* TurnAssistTimeMultiplier; // 0x40(0x08)
	struct FVector2D ResetTimerWithinRange; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Ambulatory.Ambulatory_Character
// Size: 0xcc0 (Inherited: 0x540)
struct AAmbulatory_Character : AAble_Character {
	char pad_540[0x8]; // 0x540(0x08)
	struct UAkAudioEvent* AkEvent; // 0x548(0x08)
	struct UFootPlantEffects* FootPlantEffects; // 0x550(0x08)
	bool bIsBiped; // 0x558(0x01)
	bool bUseTurnAssist; // 0x559(0x01)
	bool bAbstractMobility; // 0x55a(0x01)
	bool bTestNewMobilityMotions; // 0x55b(0x01)
	bool bOnlyLockOnMode; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	float MinimumMovementSpeed; // 0x560(0x04)
	float MaximumMovementSpeed; // 0x564(0x04)
	float SlowWalkMovementSpeed; // 0x568(0x04)
	float WalkMovementSpeed; // 0x56c(0x04)
	float FastWalkMovementSpeed; // 0x570(0x04)
	float JogMovementSpeed; // 0x574(0x04)
	float SprintMovementSpeed; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UAmbulatory_Data* AmbulatoryData; // 0x580(0x08)
	char pad_588[0x8]; // 0x588(0x08)
	struct FOdcPathSpec PathSpec; // 0x590(0x50)
	float JumpStartHeight; // 0x5e0(0x04)
	struct FVector JumpStartVelocity; // 0x5e4(0x0c)
	char pad_5F0[0x5]; // 0x5f0(0x05)
	bool Debug; // 0x5f5(0x01)
	char pad_5F6[0x2]; // 0x5f6(0x02)
	struct AActor* LadderActor; // 0x5f8(0x08)
	char pad_600[0x28]; // 0x600(0x28)
	struct FValueTracker WorldSpeedTracker; // 0x628(0x0c)
	char pad_634[0x4]; // 0x634(0x04)
	struct FMulticastInlineDelegate CharacterTeleportedDelegate; // 0x638(0x10)
	struct UTargetTracker* LookAtTargetTracker; // 0x648(0x08)
	struct UTargetTracker* FaceTargetTracker; // 0x650(0x08)
	struct UTargetTracker* AimAtTargetTracker; // 0x658(0x08)
	struct USpeedModeTracker* SpeedModeTracker; // 0x660(0x08)
	struct USpeedModeTracker* SpeedModifierTracker; // 0x668(0x08)
	struct TArray<struct UPrimitiveComponent*> WadingWaterComponents; // 0x670(0x10)
	char pad_680[0x18]; // 0x680(0x18)
	struct FVector FixedWorldDirection; // 0x698(0x0c)
	char pad_6A4[0x538]; // 0x6a4(0x538)
	struct TWeakObjectPtr<struct UPrimitiveComponent> LedgeComponent; // 0xbdc(0x08)
	char pad_BE4[0xb8]; // 0xbe4(0xb8)
	bool m_navLinkUsingLedge; // 0xc9c(0x01)
	enum class ELinkType m_linkType; // 0xc9d(0x01)
	char pad_C9E[0x2]; // 0xc9e(0x02)
	float m_traceWallRadius; // 0xca0(0x04)
	float m_traceWallDropRadius; // 0xca4(0x04)
	float m_traceWallForward; // 0xca8(0x04)
	float m_traceWallHeightAdjust; // 0xcac(0x04)
	float m_traceLedgeRadius; // 0xcb0(0x04)
	float m_traceLedgeIntoWallAdjust; // 0xcb4(0x04)
	float m_traceLedgeUpAdjust; // 0xcb8(0x04)
	float m_traceLedgeDownCast; // 0xcbc(0x04)

	void StopWorldTurnInPlace(); // Function Ambulatory.Ambulatory_Character.StopWorldTurnInPlace // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986e00
	void StartWorldTurnInPlace(struct FVector WorldDirection); // Function Ambulatory.Ambulatory_Character.StartWorldTurnInPlace // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1986d70
	void SprintStop(); // Function Ambulatory.Ambulatory_Character.SprintStop // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986d50
	void SprintStart(enum class ESpeedModifierType SpeedModType); // Function Ambulatory.Ambulatory_Character.SprintStart // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986cd0
	void ShowTimingMessage(struct FString MyMessage, struct UObject* WorldContextObject, float Duration); // Function Ambulatory.Ambulatory_Character.ShowTimingMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1986b60
	void SetWorldSpeedAndDirection(float WorldSpeed, struct FVector WorldDirection); // Function Ambulatory.Ambulatory_Character.SetWorldSpeedAndDirection // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x19869f0
	void SetWorldSpeed(float WorldSpeed); // Function Ambulatory.Ambulatory_Character.SetWorldSpeed // (Native|Public|BlueprintCallable) // @ game+0x1986960
	void SetUseSpeedModifier(bool bUseSpeedModifier); // Function Ambulatory.Ambulatory_Character.SetUseSpeedModifier // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19868d0
	void SetTargetSpeedAndDirection(float InAbstractSpeed, struct FVector InDirection, bool InSetMobilityStateBasedOnSpeed); // Function Ambulatory.Ambulatory_Character.SetTargetSpeedAndDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x19867a0
	void SetTargetSpeed(float InAbstractSpeed, bool InSetMobilityStateBasedOnSpeed); // Function Ambulatory.Ambulatory_Character.SetTargetSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x19866c0
	void SetSpeedMode(enum class ETargetSpeedMode SpeedMode, enum class ETargetSpeedMode SpeedModifier, enum class ETargetSpeedPriority SpeedPriority); // Function Ambulatory.Ambulatory_Character.SetSpeedMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19865b0
	void SetMovementSpeeds(float InMin, float InMax); // Function Ambulatory.Ambulatory_Character.SetMovementSpeeds // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19864e0
	void SetMountTransform(struct FTransform& Transform); // Function Ambulatory.Ambulatory_Character.SetMountTransform // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1986400
	void SetMountNormal(struct FVector& Normal); // Function Ambulatory.Ambulatory_Character.SetMountNormal // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1986370
	void SetMobilityModeState(enum class EMobilityModeState InMobilityModeState); // Function Ambulatory.Ambulatory_Character.SetMobilityModeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19862f0
	void SetMobilityActionState(enum class EMobilityActionState InMobilityActionState, bool bSetTargetSpeed); // Function Ambulatory.Ambulatory_Character.SetMobilityActionState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986210
	void SetLandingType(enum class ELandingType InType); // Function Ambulatory.Ambulatory_Character.SetLandingType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986190
	void SetJumpingType(enum class EJumpingType& InType); // Function Ambulatory.Ambulatory_Character.SetJumpingType // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19860f0
	void SetIsInIdle(bool isIdle); // Function Ambulatory.Ambulatory_Character.SetIsInIdle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986060
	void SetInWaterVolume(bool InFlag); // Function Ambulatory.Ambulatory_Character.SetInWaterVolume // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985fd0
	void SetDesiredDirection(struct FVector InWorldDirection); // Function Ambulatory.Ambulatory_Character.SetDesiredDirection // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1985f40
	void SetClimbingLedgeState(enum class EClimbingLedgeState InType); // Function Ambulatory.Ambulatory_Character.SetClimbingLedgeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985ec0
	void SetClimbingLadderState(enum class EClimbingLadderState InType); // Function Ambulatory.Ambulatory_Character.SetClimbingLadderState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985e40
	void SetBaseSpeedMode(enum class ETargetSpeedMode SpeedMode, enum class ETargetSpeedMode SpeedModifier); // Function Ambulatory.Ambulatory_Character.SetBaseSpeedMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985d70
	void Set_ForceTurnAndFace(bool InFlag); // Function Ambulatory.Ambulatory_Character.Set_ForceTurnAndFace // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1986ad0
	void RevertSpeedMode(enum class ETargetSpeedPriority SpeedPriority); // Function Ambulatory.Ambulatory_Character.RevertSpeedMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985cf0
	void RevertMobilityModeState(); // Function Ambulatory.Ambulatory_Character.RevertMobilityModeState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985cd0
	void RevertMobilityActionState(bool bSetTargetSpeed); // Function Ambulatory.Ambulatory_Character.RevertMobilityActionState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985c40
	void RemoveWadingComponent(struct UPrimitiveComponent* InWaterComponent); // Function Ambulatory.Ambulatory_Character.RemoveWadingComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1985af0
	void JumpStarted(struct UAnimInstance* InAnimInstance); // Function Ambulatory.Ambulatory_Character.JumpStarted // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985a60
	void JumpFinished(struct UAnimInstance* InAnimInstance); // Function Ambulatory.Ambulatory_Character.JumpFinished // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19859d0
	bool IsWadingComponent(struct UPrimitiveComponent* InWaterComponent); // Function Ambulatory.Ambulatory_Character.IsWadingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1985910
	bool IsUsingSpeedModifier(); // Function Ambulatory.Ambulatory_Character.IsUsingSpeedModifier // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19858e0
	int32_t GetWadingComponentCount(); // Function Ambulatory.Ambulatory_Character.GetWadingComponentCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19858c0
	struct UPrimitiveComponent* GetWadingComponent(); // Function Ambulatory.Ambulatory_Character.GetWadingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1985880
	void GetTargetSpeedModifier(enum class ETargetSpeedMode& OutState); // Function Ambulatory.Ambulatory_Character.GetTargetSpeedModifier // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19857e0
	enum class ESpeedModifierType GetSpeedModifierType(); // Function Ambulatory.Ambulatory_Character.GetSpeedModifierType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19857b0
	void GetPreviousMobilityActionState(enum class EMobilityActionState& OutMobilityActionState); // Function Ambulatory.Ambulatory_Character.GetPreviousMobilityActionState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1985710
	struct FOdcPathSpec GetPathSpec(); // Function Ambulatory.Ambulatory_Character.GetPathSpec // (Native|Public|Const) // @ game+0x1985620
	void GetMountTransform(struct FTransform& LedgeTransform); // Function Ambulatory.Ambulatory_Character.GetMountTransform // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1985540
	void GetMountNormal(struct FVector& LedgeNormal); // Function Ambulatory.Ambulatory_Character.GetMountNormal // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19854b0
	void GetMobilityModeState(enum class EMobilityModeState& OutMobilityModeState); // Function Ambulatory.Ambulatory_Character.GetMobilityModeState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1985410
	void GetMobilityActionStateName(struct UAnimInstance* InAnimInstance, struct FString& OutString); // Function Ambulatory.Ambulatory_Character.GetMobilityActionStateName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1985320
	void GetMobilityActionState(enum class EMobilityActionState& OutMobilityActionState); // Function Ambulatory.Ambulatory_Character.GetMobilityActionState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1985280
	struct UTargetTracker* GetLookAtTargetTracker(); // Function Ambulatory.Ambulatory_Character.GetLookAtTargetTracker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1985250
	int32_t GetLinkUsageFlags(); // Function Ambulatory.Ambulatory_Character.GetLinkUsageFlags // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1985220
	void GetLedgeTransform(struct FTransform& LedgeTransform); // Function Ambulatory.Ambulatory_Character.GetLedgeTransform // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1985140
	void GetLedgeNormal(struct FVector& LedgeNormal); // Function Ambulatory.Ambulatory_Character.GetLedgeNormal // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19850b0
	void GetLandingType(enum class ELandingType& OutType); // Function Ambulatory.Ambulatory_Character.GetLandingType // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1985010
	void GetJumpingType(enum class EJumpingType& OutType); // Function Ambulatory.Ambulatory_Character.GetJumpingType // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1984f70
	bool GetIsMovementInput(); // Function Ambulatory.Ambulatory_Character.GetIsMovementInput // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984f40
	bool GetIsInIdle(); // Function Ambulatory.Ambulatory_Character.GetIsInIdle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984f10
	struct UTargetTracker* GetFaceTargetTracker(); // Function Ambulatory.Ambulatory_Character.GetFaceTargetTracker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984ee0
	void GetClimbingLedgeState(enum class EClimbingLedgeState& OutType); // Function Ambulatory.Ambulatory_Character.GetClimbingLedgeState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1984e40
	void GetClimbingLadderState(enum class EClimbingLadderState& OutType); // Function Ambulatory.Ambulatory_Character.GetClimbingLadderState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1984da0
	int32_t GetBlockageFlags(); // Function Ambulatory.Ambulatory_Character.GetBlockageFlags // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1984d70
	void GetBaseSpeedMode(enum class ETargetSpeedMode& OutState); // Function Ambulatory.Ambulatory_Character.GetBaseSpeedMode // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1984cd0
	struct UTargetTracker* GetAimAtTargetTracker(); // Function Ambulatory.Ambulatory_Character.GetAimAtTargetTracker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984ca0
	void DestroyAttachedSceneComponent(struct USceneComponent* InSceneComponent); // Function Ambulatory.Ambulatory_Character.DestroyAttachedSceneComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984c10
	float ComputeDesiredDirectionAngle(struct FVector& InDirection, bool bInComputeDegrees); // Function Ambulatory.Ambulatory_Character.ComputeDesiredDirectionAngle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1984b20
	float ComputeAngleBetweenTargetTrackers(struct UTargetTracker* SourceTracker, struct UTargetTracker* DestTracker, bool bInComputeDegrees); // Function Ambulatory.Ambulatory_Character.ComputeAngleBetweenTargetTrackers // (Final|Native|Public|BlueprintCallable) // @ game+0x1984a10
	float ComputeAngle(struct FVector& InDirection, struct FVector& InSourceForward, bool bInComputeDegrees); // Function Ambulatory.Ambulatory_Character.ComputeAngle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19848d0
	void CharacterRotatedBySupport(struct FRotator DeltaRotation); // Function Ambulatory.Ambulatory_Character.CharacterRotatedBySupport // (Native|Public|HasDefaults) // @ game+0x1984840
	struct USceneComponent* AttachSceneComponent(struct FTransform InTransform, struct FName InTag); // Function Ambulatory.Ambulatory_Character.AttachSceneComponent // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19846f0
	void ApplySlideHorizontalMovement(float WorldSpeed, struct FVector InWorldDirection); // Function Ambulatory.Ambulatory_Character.ApplySlideHorizontalMovement // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1984610
	void ApplyMobilityModeStateSpeeds(enum class EMobilityModeState InMobilityModeState); // Function Ambulatory.Ambulatory_Character.ApplyMobilityModeStateSpeeds // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1984590
	bool AmIMovingIntoStairs(); // Function Ambulatory.Ambulatory_Character.AmIMovingIntoStairs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1984560
	bool AmIMovingIntoSlopes(); // Function Ambulatory.Ambulatory_Character.AmIMovingIntoSlopes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1984530
	bool AmIGoingUpStairs(); // Function Ambulatory.Ambulatory_Character.AmIGoingUpStairs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1984500
	bool AmIGoingDownStairs(); // Function Ambulatory.Ambulatory_Character.AmIGoingDownStairs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19844d0
	void AddWadingComponent(struct UPrimitiveComponent* InWaterComponent); // Function Ambulatory.Ambulatory_Character.AddWadingComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1984430
};

// Class Ambulatory.Ambulatory_Character_Interface
// Size: 0x28 (Inherited: 0x28)
struct UAmbulatory_Character_Interface : UInterface {

	void StopWorldTurnInPlace(); // Function Ambulatory.Ambulatory_Character_Interface.StopWorldTurnInPlace // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartWorldTurnInPlace(struct FVector WorldDirection); // Function Ambulatory.Ambulatory_Character_Interface.StartWorldTurnInPlace // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SprintStop(); // Function Ambulatory.Ambulatory_Character_Interface.SprintStop // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SprintStart(enum class ESpeedModifierType SpeedModType); // Function Ambulatory.Ambulatory_Character_Interface.SprintStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUseSpeedModifier(bool bUseSpeedModifier); // Function Ambulatory.Ambulatory_Character_Interface.SetUseSpeedModifier // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTurnAssist(bool InFlag); // Function Ambulatory.Ambulatory_Character_Interface.SetTurnAssist // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpeedMode(enum class ETargetSpeedMode SpeedMode, enum class ETargetSpeedMode SpeedModifier, enum class ETargetSpeedPriority SpeedPriority); // Function Ambulatory.Ambulatory_Character_Interface.SetSpeedMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMovementSpeeds(float InMin, float InMax); // Function Ambulatory.Ambulatory_Character_Interface.SetMovementSpeeds // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMountTransform(struct FTransform& Transform); // Function Ambulatory.Ambulatory_Character_Interface.SetMountTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMountNormal(struct FVector& Normal); // Function Ambulatory.Ambulatory_Character_Interface.SetMountNormal // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMobilityModeState(enum class EMobilityModeState InMobilityModeState); // Function Ambulatory.Ambulatory_Character_Interface.SetMobilityModeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMobilityActionState(enum class EMobilityActionState InMobilityActionState, bool bSetTargetSpeed); // Function Ambulatory.Ambulatory_Character_Interface.SetMobilityActionState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLandingType(enum class ELandingType InType); // Function Ambulatory.Ambulatory_Character_Interface.SetLandingType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetJumpingType(enum class EJumpingType InType); // Function Ambulatory.Ambulatory_Character_Interface.SetJumpingType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsInIdle(bool IsInIdle); // Function Ambulatory.Ambulatory_Character_Interface.SetIsInIdle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInWaterVolume(bool bInFlag); // Function Ambulatory.Ambulatory_Character_Interface.SetInWaterVolume // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDesiredDirection(struct FVector InWorldDirection); // Function Ambulatory.Ambulatory_Character_Interface.SetDesiredDirection // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClimbingLedgeState(enum class EClimbingLedgeState InType); // Function Ambulatory.Ambulatory_Character_Interface.SetClimbingLedgeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClimbingLadderState(enum class EClimbingLadderState InType); // Function Ambulatory.Ambulatory_Character_Interface.SetClimbingLadderState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBaseSpeedMode(enum class ETargetSpeedMode SpeedMode, enum class ETargetSpeedMode SpeedModifier); // Function Ambulatory.Ambulatory_Character_Interface.SetBaseSpeedMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_ForceTurnAndFace(bool InFlag); // Function Ambulatory.Ambulatory_Character_Interface.Set_ForceTurnAndFace // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevertSpeedMode(enum class ETargetSpeedPriority SpeedPriority); // Function Ambulatory.Ambulatory_Character_Interface.RevertSpeedMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevertMobilityModeState(); // Function Ambulatory.Ambulatory_Character_Interface.RevertMobilityModeState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevertMobilityActionState(bool bSetTargetSpeed); // Function Ambulatory.Ambulatory_Character_Interface.RevertMobilityActionState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void JumpStarted(struct UAnimInstance* InAnimInstance); // Function Ambulatory.Ambulatory_Character_Interface.JumpStarted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void JumpFinished(struct UAnimInstance* InAnimInstance); // Function Ambulatory.Ambulatory_Character_Interface.JumpFinished // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsUsingSpeedModifier(); // Function Ambulatory.Ambulatory_Character_Interface.IsUsingSpeedModifier // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTargetSpeedModifier(enum class ETargetSpeedMode& OutState); // Function Ambulatory.Ambulatory_Character_Interface.GetTargetSpeedModifier // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19891c0
	enum class ESpeedModifierType GetSpeedModifierType(); // Function Ambulatory.Ambulatory_Character_Interface.GetSpeedModifierType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPreviousMobilityActionState(enum class EMobilityActionState& OutMobilityActionState); // Function Ambulatory.Ambulatory_Character_Interface.GetPreviousMobilityActionState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMountTransform(struct FTransform& LedgeTransform); // Function Ambulatory.Ambulatory_Character_Interface.GetMountTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMountNormal(struct FVector& LedgeNormal); // Function Ambulatory.Ambulatory_Character_Interface.GetMountNormal // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMobilityModeState(enum class EMobilityModeState& OutMobilityModeState); // Function Ambulatory.Ambulatory_Character_Interface.GetMobilityModeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMobilityActionState(enum class EMobilityActionState& OutMobilityActionState); // Function Ambulatory.Ambulatory_Character_Interface.GetMobilityActionState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UTargetTracker* GetLookAtTargetTracker(); // Function Ambulatory.Ambulatory_Character_Interface.GetLookAtTargetTracker // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLedgeTransform(struct FTransform& OutTransform); // Function Ambulatory.Ambulatory_Character_Interface.GetLedgeTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLedgeNormal(struct FVector& OutVector); // Function Ambulatory.Ambulatory_Character_Interface.GetLedgeNormal // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLandingType(enum class ELandingType& OutType); // Function Ambulatory.Ambulatory_Character_Interface.GetLandingType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetJumpingType(enum class EJumpingType& OutType); // Function Ambulatory.Ambulatory_Character_Interface.GetJumpingType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetIsMovementInput(); // Function Ambulatory.Ambulatory_Character_Interface.GetIsMovementInput // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetIsInIdle(); // Function Ambulatory.Ambulatory_Character_Interface.GetIsInIdle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UTargetTracker* GetFaceTargetTracker(); // Function Ambulatory.Ambulatory_Character_Interface.GetFaceTargetTracker // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetClimbingLedgeState(enum class EClimbingLedgeState& OutType); // Function Ambulatory.Ambulatory_Character_Interface.GetClimbingLedgeState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetClimbingLadderState(enum class EClimbingLadderState& OutType); // Function Ambulatory.Ambulatory_Character_Interface.GetClimbingLadderState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBaseSpeedMode(enum class ETargetSpeedMode& OutState); // Function Ambulatory.Ambulatory_Character_Interface.GetBaseSpeedMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UTargetTracker* GetAimAtTargetTracker(); // Function Ambulatory.Ambulatory_Character_Interface.GetAimAtTargetTracker // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyAttachedSceneComponent(struct USceneComponent* InSceneComponent); // Function Ambulatory.Ambulatory_Character_Interface.DestroyAttachedSceneComponent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USceneComponent* AttachSceneComponent(struct FTransform InTransform, struct FName InTag); // Function Ambulatory.Ambulatory_Character_Interface.AttachSceneComponent // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyMobilityModeStateSpeeds(enum class EMobilityModeState InMobilityModeState); // Function Ambulatory.Ambulatory_Character_Interface.ApplyMobilityModeStateSpeeds // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class Ambulatory.Ambulatory_Data
// Size: 0xa8 (Inherited: 0x30)
struct UAmbulatory_Data : UDataAsset {
	struct UCurveFloat* IdleTurnAssistCurve; // 0x30(0x08)
	struct UCurveFloat* TurnAssistCurve; // 0x38(0x08)
	struct UCurveFloat* SpeedCurve; // 0x40(0x08)
	struct UCurveFloat* PlayRateCurve; // 0x48(0x08)
	struct UCurveFloat* CPS2SpeedCurve; // 0x50(0x08)
	struct TMap<enum class EMobilityModeState, struct FAmbulatory_MobilityMode> MobilityModes; // 0x58(0x50)
};

// Class Ambulatory.Ambulatory_MovementComponent
// Size: 0xfa0 (Inherited: 0xb40)
struct UAmbulatory_MovementComponent : UAble_MovementComponent {
	char pad_B40[0x8]; // 0xb40(0x08)
	bool bOverridePhysWalking; // 0xb48(0x01)
	bool bComputeDistanceToSurfaceWhenFalling; // 0xb49(0x01)
	char pad_B4A[0x2]; // 0xb4a(0x02)
	struct FVector WindVelocity; // 0xb4c(0x0c)
	float SuckHeight; // 0xb58(0x04)
	bool bAllowTransitionalImpulse; // 0xb5c(0x01)
	char pad_B5D[0x3]; // 0xb5d(0x03)
	float AdditionalGravityScale; // 0xb60(0x04)
	bool bUseNavMetricsForStepUp; // 0xb64(0x01)
	bool bMitigateStuckFalling; // 0xb65(0x01)
	bool bMitigateStuckPenetratingExtraMovementCapsule; // 0xb66(0x01)
	bool bCanEverStepOutOfWater; // 0xb67(0x01)
	bool bUseWaterSurfaceForStepUp; // 0xb68(0x01)
	char pad_B69[0x3]; // 0xb69(0x03)
	float SwimDepth; // 0xb6c(0x04)
	float WaterDepth; // 0xb70(0x04)
	float WaterLevel; // 0xb74(0x04)
	float FluidFriction; // 0xb78(0x04)
	float WaterTerminalVelocity; // 0xb7c(0x04)
	float FlowForceScale; // 0xb80(0x04)
	bool bApplyMaxFlowForceLimit; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	float MaxFlowForce; // 0xb88(0x04)
	bool bDisableSurfaceAcceleration; // 0xb8c(0x01)
	char pad_B8D[0x243]; // 0xb8d(0x243)
	struct FAvaRootMotionWarper AvaRootMotionWarper; // 0xdd0(0x78)
	char pad_E48[0x10]; // 0xe48(0x10)
	struct UAblAbilityComponent* AbleAbilityComponent; // 0xe58(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0xe60(0x08)
	struct FRotator AnimRootMotionAngularVelocity; // 0xe68(0x0c)
	char pad_E74[0x12c]; // 0xe74(0x12c)

	void ZeroVelocity(); // Function Ambulatory.Ambulatory_MovementComponent.ZeroVelocity // (Final|Native|Public|BlueprintCallable) // @ game+0x19897e0
	void ZeroLinearVelocity(); // Function Ambulatory.Ambulatory_MovementComponent.ZeroLinearVelocity // (Final|Native|Public|BlueprintCallable) // @ game+0x19897c0
	void UpdateSharedContinuousImpulse(struct FSharedContinuousImpulseHelper ImpulseContainer, struct FVector& InImpulse, bool bInIgnoreMass); // Function Ambulatory.Ambulatory_MovementComponent.UpdateSharedContinuousImpulse // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1989660
	struct FSharedContinuousImpulseHelper SetSharedContinuousLinearImpulse(struct FVector& InImpulse); // Function Ambulatory.Ambulatory_MovementComponent.SetSharedContinuousLinearImpulse // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1989570
	void SetFrictionOverride(float InFrictionOverride); // Function Ambulatory.Ambulatory_MovementComponent.SetFrictionOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x19894f0
	void SetFallImpulse(struct FVector& Impulse); // Function Ambulatory.Ambulatory_MovementComponent.SetFallImpulse // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1989450
	void SetAllowTransitionalImpulse(bool bFlag); // Function Ambulatory.Ambulatory_MovementComponent.SetAllowTransitionalImpulse // (Final|Native|Public|BlueprintCallable) // @ game+0x1989380
	void HermesBindSurfaceTypeChanged(struct FDelegate Delegate_SurfaceTypeChanged, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function Ambulatory.Ambulatory_MovementComponent.HermesBindSurfaceTypeChanged // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1989250
	float GetSurfaceIncline(); // Function Ambulatory.Ambulatory_MovementComponent.GetSurfaceIncline // (Final|Native|Public|BlueprintCallable) // @ game+0x19891a0
	struct FVector GetFallLineFlat(); // Function Ambulatory.Ambulatory_MovementComponent.GetFallLineFlat // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1989170
	struct FVector GetFallLine(); // Function Ambulatory.Ambulatory_MovementComponent.GetFallLine // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1989140
	float GetFallAlongSurfaceDistance(); // Function Ambulatory.Ambulatory_MovementComponent.GetFallAlongSurfaceDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x1989120
	enum class EPhysicalSurface GetCurrentSurfaceType(); // Function Ambulatory.Ambulatory_MovementComponent.GetCurrentSurfaceType // (Final|Native|Public|BlueprintCallable) // @ game+0x19890e0
	struct FVector GetAdditiveToRootMotionVelocity(); // Function Ambulatory.Ambulatory_MovementComponent.GetAdditiveToRootMotionVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19890b0
	struct FVector ComputeSurfaceAccelerationDirection(bool& bFlatGround); // Function Ambulatory.Ambulatory_MovementComponent.ComputeSurfaceAccelerationDirection // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1989000
	void ClearTransitionalImpulse(); // Function Ambulatory.Ambulatory_MovementComponent.ClearTransitionalImpulse // (Final|Native|Public|BlueprintCallable) // @ game+0x1988fd0
	void ClearSharedContinuousImpulse(struct FSharedContinuousImpulseHelper ImpulseContainer); // Function Ambulatory.Ambulatory_MovementComponent.ClearSharedContinuousImpulse // (Final|Native|Public|BlueprintCallable) // @ game+0x1988f10
	void ClearLastSurfaceType(); // Function Ambulatory.Ambulatory_MovementComponent.ClearLastSurfaceType // (Final|Native|Public|BlueprintCallable) // @ game+0x1988ef0
	void ClearAdditiveToRootMotionVelocity(); // Function Ambulatory.Ambulatory_MovementComponent.ClearAdditiveToRootMotionVelocity // (Final|Native|Public|BlueprintCallable) // @ game+0x1988eb0
	void AddToRootMotionVelocity(struct FVector InAdditiveToRootMotionVelocity); // Function Ambulatory.Ambulatory_MovementComponent.AddToRootMotionVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1988e00
};

// Class Ambulatory.Ambulatory_TurnAssistOffNotify
// Size: 0x30 (Inherited: 0x30)
struct UAmbulatory_TurnAssistOffNotify : UAnimNotifyState {
};

// Class Ambulatory.AmbulatoryAnimationAssetChooser
// Size: 0x48 (Inherited: 0x48)
struct UAmbulatoryAnimationAssetChooser : UAblAnimationAssetChooser {
};

// Class Ambulatory.AmbulatoryHUD
// Size: 0x338 (Inherited: 0x338)
struct AAmbulatoryHUD : AAbleHUD {

	void ToggleAmbulatoryHUD(); // Function Ambulatory.AmbulatoryHUD.ToggleAmbulatoryHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
	void OnIntegrate(); // Function Ambulatory.AmbulatoryHUD.OnIntegrate // (Final|Native|Public) // @ game+0x1074730
};

// Class Ambulatory.AmbulatoryHUDWidgetStyle
// Size: 0x22f0 (Inherited: 0x30)
struct UAmbulatoryHUDWidgetStyle : USlateWidgetStyleContainerBase {
	struct FAmbulatoryHUDStyle AmbulatoryHUDWidgetStyle; // 0x30(0x22c0)
};

// Class Ambulatory.AnimNotify_MotionTableEvent
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_MotionTableEvent : UAnimNotify {
	struct FName Name; // 0x38(0x08)
};

// Class Ambulatory.AnimNotifyState_AvaMotionWarp
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_AvaMotionWarp : UAnimNotifyState {
	struct UAvaMotionWarpingModifierConfig* RootMotionModifierConfig; // 0x30(0x08)

	void AddMotionWarpModifier(struct FAvaRootMotionWarper& InMotionWarper, struct UAvaMotionWarpWindowFinder* InWindowFinder, struct UAnimSequenceBase* InAnimation, float StartTime, float EndTime); // Function Ambulatory.AnimNotifyState_AvaMotionWarp.AddMotionWarpModifier // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x198e0e0
};

// Class Ambulatory.AvaMotionWarpingModifierConfig
// Size: 0x28 (Inherited: 0x28)
struct UAvaMotionWarpingModifierConfig : UObject {
};

// Class Ambulatory.AvaMotionWarpingModifierConfig_Scale
// Size: 0x38 (Inherited: 0x28)
struct UAvaMotionWarpingModifierConfig_Scale : UAvaMotionWarpingModifierConfig {
	struct FVector Scale; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)

	void AddRootMotionModifierScale(struct FAvaRootMotionWarper& InMotionWarper, struct UAvaMotionWarpWindowFinder* InWindowFinder, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FVector InScale); // Function Ambulatory.AvaMotionWarpingModifierConfig_Scale.AddRootMotionModifierScale // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x198e7d0
};

// Class Ambulatory.AvaMotionWarpingModifierConfig_Warp
// Size: 0x40 (Inherited: 0x28)
struct UAvaMotionWarpingModifierConfig_Warp : UAvaMotionWarpingModifierConfig {
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

	void AddRootMotionModifierSimpleWarp(struct FAvaRootMotionWarper& InMotionWarper, struct UAvaMotionWarpWindowFinder* InWindowFinder, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InSyncPointName, bool bInWarpTranslation, bool bInDisallowHorizontalStretching, bool bInDisallowHorizontalSquishing, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // Function Ambulatory.AvaMotionWarpingModifierConfig_Warp.AddRootMotionModifierSimpleWarp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x198eaa0
};

// Class Ambulatory.AvaMotionWarpingModifierConfig_SkewWarp
// Size: 0x40 (Inherited: 0x40)
struct UAvaMotionWarpingModifierConfig_SkewWarp : UAvaMotionWarpingModifierConfig_Warp {

	void AddMotionWarpingModifierSkewWarp(struct FAvaRootMotionWarper& InMotionWarper, struct UAvaMotionWarpWindowFinder* InWindowFinder, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // Function Ambulatory.AvaMotionWarpingModifierConfig_SkewWarp.AddMotionWarpingModifierSkewWarp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x198e380
};

// Class Ambulatory.MotionWarpingUtilities
// Size: 0x28 (Inherited: 0x28)
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary {

	struct FAvaMotionWarpingSyncPoint MakeMotionWarpingSyncPoint(struct FVector Location, struct FRotator Rotation); // Function Ambulatory.MotionWarpingUtilities.MakeMotionWarpingSyncPoint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1990800
	struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // Function Ambulatory.MotionWarpingUtilities.ExtractRootMotionFromAnimation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x198f180
	void BreakMotionWarpingSyncPoint(struct FAvaMotionWarpingSyncPoint& SyncPoint, struct FVector& Location, struct FRotator& Rotation); // Function Ambulatory.MotionWarpingUtilities.BreakMotionWarpingSyncPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x198f030
};

// Class Ambulatory.AvaMotionWarpWindowFinder
// Size: 0x38 (Inherited: 0x28)
struct UAvaMotionWarpWindowFinder : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Ambulatory.AvaEmptyMotionWarpWindowFinder
// Size: 0x38 (Inherited: 0x38)
struct UAvaEmptyMotionWarpWindowFinder : UAvaMotionWarpWindowFinder {
};

// Class Ambulatory.CurveClip
// Size: 0x4b0 (Inherited: 0x30)
struct UCurveClip : UCurveBase {
	struct FRichCurve TimeToPhaseCurve; // 0x30(0x80)
	struct FRichCurve PhaseToTimeCurve; // 0xb0(0x80)
	struct FRichCurve FootPlantsCurve; // 0x130(0x80)
	struct FRichCurve VelocityCurves[0x3]; // 0x1b0(0x180)
	struct FRichCurve AccelerationCurves[0x3]; // 0x330(0x180)

	struct FVector GetVelocity(float InTime); // Function Ambulatory.CurveClip.GetVelocity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19905c0
	enum class EFootPlantEnum GetFootPlants(float InTime); // Function Ambulatory.CurveClip.GetFootPlants // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f6b0
	struct FVector GetAcceleration(float InTime); // Function Ambulatory.CurveClip.GetAcceleration // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f2d0
};

// Class Ambulatory.FacialAnimationAnimNotifyState
// Size: 0xb8 (Inherited: 0x30)
struct UFacialAnimationAnimNotifyState : UAnimNotifyState {
	struct FFacialAnimation FacialAnimation; // 0x30(0x30)
	enum class EManagedFacialAnimationPriority FacialAnimationPriority; // 0x60(0x01)
	char pad_61[0x57]; // 0x61(0x57)
};

// Class Ambulatory.FacialEmotionInstanceData
// Size: 0x28 (Inherited: 0x28)
struct UFacialEmotionInstanceData : UObject {
};

// Class Ambulatory.FacialEmotionAnimNotifyState
// Size: 0xb0 (Inherited: 0x30)
struct UFacialEmotionAnimNotifyState : UAnimNotifyState {
	enum class EFacialEmotion FacialEmotion; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TransitionTime; // 0x34(0x04)
	enum class EManagedFacialEmotionPriority FacialEmotionPriority; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayTagContainer AnimTags; // 0x40(0x20)
	char pad_60[0x50]; // 0x60(0x50)
};

// Class Ambulatory.FootPlantAnimNotify
// Size: 0x60 (Inherited: 0x38)
struct UFootPlantAnimNotify : UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
	struct FName ImpactTypeName; // 0x40(0x08)
	enum class EFootPlantEnum FootPlant; // 0x48(0x01)
	bool bRegenerateOnCreatePhaseCurve; // 0x49(0x01)
	bool bIgnoreFootPlant; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	float NotifyTime; // 0x4c(0x04)
	float TimeID; // 0x50(0x04)
	float AudioMaxDistanceToListener; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Ambulatory.FootPlantEffects
// Size: 0x50 (Inherited: 0x28)
struct UFootPlantEffects : UObject {
	struct FMulticastInlineDelegate FootPlantOccurredDelegate; // 0x28(0x10)
	struct UDataTable* SurfaceTypeToVFXTable; // 0x38(0x08)
	struct UParticleSystem* TestVFX; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Ambulatory.MotionTable
// Size: 0x1c0 (Inherited: 0x30)
struct UMotionTable : UDataAsset {
	struct TMap<struct FName, struct FMotionTableState> StateData; // 0x30(0x50)
	struct TMap<struct FName, struct FMotionTableEvent> EventData; // 0x80(0x50)
	struct TMap<struct FString, struct FName> AliasStateNameMap; // 0xd0(0x50)
	struct TSet<struct FString> AliasesWithVariations; // 0x120(0x50)
	struct TMap<struct FString, struct FName> AnimationStateNameMap; // 0x170(0x50)

	bool HasStateTransition(struct FName InStartState, struct FName InEndState); // Function Ambulatory.MotionTable.HasStateTransition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1990730
	bool HasEventTransition(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.HasEventTransition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1990660
	struct FName GetVariationStateNameFromAnimation(struct FString InAnimationName); // Function Ambulatory.MotionTable.GetVariationStateNameFromAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1990500
	float GetTravelDistanceToState(float InTimeToReachState, struct FName InEndState, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTravelDistanceToState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19903a0
	float GetTravelDistanceToEvent(float InTimeToReachEvent, struct FName InEventName, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTravelDistanceToEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1990240
	float GetTimeToReachEventBefore(float InTimeToReachEvent, struct FName InEventName, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTimeToReachEventBefore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19900e0
	float GetTimeToReachEvent(struct FName InEventName, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTimeToReachEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198ffc0
	float GetTimeToReachEndStateBefore(float InTimeToReachEndState, struct FName InEndState, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTimeToReachEndStateBefore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fe60
	float GetTimeToReachEndState(struct FName InEndState, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetTimeToReachEndState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fd40
	float GetStateTransitionTravelDistance(struct FName InStartState, struct FName InEndState); // Function Ambulatory.MotionTable.GetStateTransitionTravelDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fc70
	float GetStateTransitionDuration(struct FName InStartState, struct FName InEndState); // Function Ambulatory.MotionTable.GetStateTransitionDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fba0
	struct FName GetStateNameFromAlias(struct FString InAliasedStateName); // Function Ambulatory.MotionTable.GetStateNameFromAlias // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fae0
	struct FName GetStateContainingEvent(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.GetStateContainingEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198fa00
	float GetNearestTimeToReachEvent(float InTimeToReachEvent, struct FName InEventName, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetNearestTimeToReachEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f8a0
	float GetNearestTimeToReachEndState(float InTimeToReachEndState, struct FName InEndState, struct FName InStartState, float InCycleTime); // Function Ambulatory.MotionTable.GetNearestTimeToReachEndState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f740
	float GetEventTransitionTravelDistance(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.GetEventTransitionTravelDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f5e0
	float GetEventFollowThroughTravelDistance(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.GetEventFollowThroughTravelDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f510
	float GetEventFollowThroughDuration(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.GetEventFollowThroughDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f440
	float GetEventCycleTime(struct FName InEventName, struct FName InStartState); // Function Ambulatory.MotionTable.GetEventCycleTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198f370
	bool AliasHasVariations(struct FString InAliasedStateName); // Function Ambulatory.MotionTable.AliasHasVariations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x198ef80
};

// Class Ambulatory.MovementPredictionComponent
// Size: 0x4b0 (Inherited: 0xc8)
struct UMovementPredictionComponent : UActorComponent {
	struct FMovementPredictionSettings Settings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UMotionTable* MotionTable; // 0x100(0x08)
	bool bEnableEventMatching; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TMap<enum class EMovementSensorType, struct FMovementEventData> MovementEventData; // 0x110(0x50)
	float MovementWarpingStrength; // 0x160(0x04)
	float SteeringCorrectionStrength; // 0x164(0x04)
	struct FRuntimeFloatCurve SteeringCorrectionWeightOverTime; // 0x168(0x88)
	struct FRuntimeFloatCurve FlightSteeringYawCorrectionWeightOverTime; // 0x1f0(0x88)
	struct FRuntimeFloatCurve FlightSteeringPitchCorrectionWeightOverTime; // 0x278(0x88)
	bool bDebugDrawMotionEvents; // 0x300(0x01)
	char pad_301[0x1af]; // 0x301(0x1af)

	void TriggerMovementEvent(enum class EMovementSensorType InType); // Function Ambulatory.MovementPredictionComponent.TriggerMovementEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1996570
	void SetMovementState(struct FName InState); // Function Ambulatory.MovementPredictionComponent.SetMovementState // (Final|Native|Public|BlueprintCallable) // @ game+0x19961b0
	bool IsLastEventFollowThroughComplete(); // Function Ambulatory.MovementPredictionComponent.IsLastEventFollowThroughComplete // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995dc0
	bool GetTimeToEventTransition(struct FName InEventName, float& OutTimeUntilTransition); // Function Ambulatory.MovementPredictionComponent.GetTimeToEventTransition // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995ce0
	float GetSteeringCorrectionAngle(); // Function Ambulatory.MovementPredictionComponent.GetSteeringCorrectionAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995790
	struct FTransform GetPredictedUncorrectedTransform(float InTimeFromNow); // Function Ambulatory.MovementPredictionComponent.GetPredictedUncorrectedTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19956b0
	struct FTransform GetPredictedTransform(float InTimeFromNow); // Function Ambulatory.MovementPredictionComponent.GetPredictedTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19955f0
	bool GetNextSensorInfoOfTypes(struct TArray<enum class EMovementSensorType>& SensorTypes, float InTimeFromNow, struct FMovementSensorInfo& OutSensorInfo); // Function Ambulatory.MovementPredictionComponent.GetNextSensorInfoOfTypes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995400
	bool GetNextSensorInfo(enum class EMovementSensorType SensorType, float InTimeFromNow, struct FMovementSensorInfo& OutSensorInfo); // Function Ambulatory.MovementPredictionComponent.GetNextSensorInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995260
	bool GetNextBlockingCollision(float InGlancingAngleThresholdDegrees, struct FMovementSensorInfo& OutSensorInfo); // Function Ambulatory.MovementPredictionComponent.GetNextBlockingCollision // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19950d0
	struct FName GetMovementState(); // Function Ambulatory.MovementPredictionComponent.GetMovementState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995090
	bool GetMovementEventTarget(enum class EMovementSensorType& OutType, float& OutTimeToEvent); // Function Ambulatory.MovementPredictionComponent.GetMovementEventTarget // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994fa0
	float GetMovementAnimTime(); // Function Ambulatory.MovementPredictionComponent.GetMovementAnimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994f70
	struct FRotator GetFlightSteeringCorrectionAngles(struct FRotator& InInputRotation); // Function Ambulatory.MovementPredictionComponent.GetFlightSteeringCorrectionAngles // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994ec0
	bool GetEventFollowThroughAnimTime(struct FName InEventName, struct FName InCurrentState, float& OutAnimTime); // Function Ambulatory.MovementPredictionComponent.GetEventFollowThroughAnimTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994d80
	bool GetEventAnimTime(struct FName InEventName, struct FName InCurrentState, float& OutAnimTime); // Function Ambulatory.MovementPredictionComponent.GetEventAnimTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994c60
};

// Class Ambulatory.SpeedModeTracker
// Size: 0x88 (Inherited: 0x28)
struct USpeedModeTracker : UObject {
	char pad_28[0x60]; // 0x28(0x60)

	void SetTargetSpeedMode(enum class ETargetSpeedMode InSpeedMode, enum class ETargetSpeedPriority InPriority, bool bBroadcastChange); // Function Ambulatory.SpeedModeTracker.SetTargetSpeedMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1996450
	void SetBaseTargetSpeedMode(enum class ETargetSpeedMode InSpeedMode); // Function Ambulatory.SpeedModeTracker.SetBaseTargetSpeedMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1996030
	enum class ETargetSpeedMode GetTargetSpeedMode(); // Function Ambulatory.SpeedModeTracker.GetTargetSpeedMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1995ba0
	enum class ETargetSpeedMode GetBaseTargetSpeedMode(); // Function Ambulatory.SpeedModeTracker.GetBaseTargetSpeedMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1994aa0
	void ClearTargetSpeedMode(enum class ETargetSpeedPriority InPriority, bool bBroadcastChange); // Function Ambulatory.SpeedModeTracker.ClearTargetSpeedMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1994420
};

// Class Ambulatory.TargetTypeBase
// Size: 0x38 (Inherited: 0x28)
struct UTargetTypeBase : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetExpirationTime(float InExpirationTime); // Function Ambulatory.TargetTypeBase.SetExpirationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1996130
	void SetComputedPriority(float InPriority); // Function Ambulatory.TargetTypeBase.SetComputedPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x19960b0
	enum class ETargetType GetTargetType(); // Function Ambulatory.TargetTypeBase.GetTargetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1995bd0
	float GetExpirationTime(); // Function Ambulatory.TargetTypeBase.GetExpirationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1994ea0
	float GetComputedPriority(); // Function Ambulatory.TargetTypeBase.GetComputedPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1994c40
};

// Class Ambulatory.TargetTypeActor
// Size: 0x60 (Inherited: 0x38)
struct UTargetTypeActor : UTargetTypeBase {
	char pad_38[0x28]; // 0x38(0x28)

	void SetTargetActor(struct AActor* InTargetActor); // Function Ambulatory.TargetTypeActor.SetTargetActor // (Native|Public|BlueprintCallable) // @ game+0x19963c0
	void SetSocketName(struct FName InSocketName); // Function Ambulatory.TargetTypeActor.SetSocketName // (Final|Native|Public|BlueprintCallable) // @ game+0x19962b0
	void SetActorOffset(struct FVector InActorOffset); // Function Ambulatory.TargetTypeActor.SetActorOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1995fb0
	struct AActor* GetTargetActor(); // Function Ambulatory.TargetTypeActor.GetTargetActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19958e0
	struct FName GetSocketName(); // Function Ambulatory.TargetTypeActor.GetSocketName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995770
	struct FVector GetActorOffset(); // Function Ambulatory.TargetTypeActor.GetActorOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994a70
};

// Class Ambulatory.TargetTypeLocation
// Size: 0x48 (Inherited: 0x38)
struct UTargetTypeLocation : UTargetTypeBase {
	char pad_38[0x10]; // 0x38(0x10)

	void SetTargetLocation(struct FVector InTargetLocation); // Function Ambulatory.TargetTypeLocation.SetTargetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1996340
	struct FVector GetTargetLocation(); // Function Ambulatory.TargetTypeLocation.GetTargetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995b70
};

// Class Ambulatory.TargetTypeCamera
// Size: 0x40 (Inherited: 0x38)
struct UTargetTypeCamera : UTargetTypeBase {
	char pad_38[0x8]; // 0x38(0x08)

	void SetPlayerCameraManager(struct APlayerCameraManager* InPlayerCameraManager); // Function Ambulatory.TargetTypeCamera.SetPlayerCameraManager // (Final|Native|Public|BlueprintCallable) // @ game+0x1996220
	struct APlayerCameraManager* GetPlayerCameraManager(); // Function Ambulatory.TargetTypeCamera.GetPlayerCameraManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19955c0
};

// Class Ambulatory.TargetTypeDesiredDirection
// Size: 0x38 (Inherited: 0x38)
struct UTargetTypeDesiredDirection : UTargetTypeBase {
};

// Class Ambulatory.TargetTypeStaticWorldDirection
// Size: 0x48 (Inherited: 0x38)
struct UTargetTypeStaticWorldDirection : UTargetTypeBase {
	char pad_38[0x10]; // 0x38(0x10)

	void SetStaticWorldDirection(struct FVector InStaticWorldDirection); // Function Ambulatory.TargetTypeStaticWorldDirection.SetStaticWorldDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1996340
};

// Class Ambulatory.TargetTracker
// Size: 0xa8 (Inherited: 0x28)
struct UTargetTracker : UObject {
	struct FMulticastInlineDelegate NotifyOfNewBestTarget; // 0x28(0x10)
	struct FMulticastInlineDelegate NotifyTargetListIsNowEmpty; // 0x38(0x10)
	struct TMap<enum class ETargetID, struct UTargetTypeBase*> Targets; // 0x48(0x50)
	char pad_98[0x10]; // 0x98(0x10)

	void RemoveTargetByPtr(enum class ETargetID InTargetID, struct UTargetTypeBase* InTargetToRemove); // Function Ambulatory.TargetTracker.RemoveTargetByPtr // (Final|Native|Public|BlueprintCallable) // @ game+0x1995ee0
	void RemoveTarget(enum class ETargetID InTargetID, bool bCheckForEmptyList); // Function Ambulatory.TargetTracker.RemoveTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1995e10
	bool IsTargetListEmptyThisFrame(); // Function Ambulatory.TargetTracker.IsTargetListEmptyThisFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x1995df0
	struct TMap<enum class ETargetID, struct UTargetTypeBase*> GetTargets(); // Function Ambulatory.TargetTracker.GetTargets // (Final|Native|Public|BlueprintCallable) // @ game+0x1995bf0
	struct FVector GetTargetLocation(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.GetTargetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x19959a0
	struct UTargetTypeBase* GetTargetByID(enum class ETargetID InTargetType); // Function Ambulatory.TargetTracker.GetTargetByID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1995910
	struct AActor* GetTargetActor(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.GetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x19957c0
	float GetComputedPriority(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.GetComputedPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1994b40
	enum class ETargetID GetBestTargetID(); // Function Ambulatory.TargetTracker.GetBestTargetID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994b00
	struct UTargetTypeBase* GetBestTarget(); // Function Ambulatory.TargetTracker.GetBestTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994ad0
	struct FVector ComputeTargetLocation(struct FVector ProjectFromLocation, float ProjectDistance); // Function Ambulatory.TargetTracker.ComputeTargetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19948e0
	struct FVector ComputeDirectionToTargetOfType(struct FVector SourceLocation, enum class ETargetID InTargetID, bool bFlattenInXYPlane, bool bNormalize); // Function Ambulatory.TargetTracker.ComputeDirectionToTargetOfType // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1994730
	struct FVector ComputeDirection(struct FVector SourceLocation, bool bFlattenInXYPlane, bool bNormalize); // Function Ambulatory.TargetTracker.ComputeDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x19945d0
	struct FVector ComputeCameraDirection(struct AActor* InActor, bool bFlattenInXYPlane); // Function Ambulatory.TargetTracker.ComputeCameraDirection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x19944f0
	bool AnyValidTargetsByType(enum class ETargetType InTargetType); // Function Ambulatory.TargetTracker.AnyValidTargetsByType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994390
	bool AnyValidTargetsByID(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AnyValidTargetsByID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19942a0
	bool AnyValidTargets(); // Function Ambulatory.TargetTracker.AnyValidTargets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994270
	struct UTargetTypeBase* AddTarget_StaticWorldDirection(struct FVector InStaticWorldDirection, enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_StaticWorldDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1994190
	struct UTargetTypeBase* AddTarget_Location(struct FVector InTargetLocation, enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_Location // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x19940b0
	struct UTargetTypeBase* AddTarget_DesiredDirection(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_DesiredDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x1994020
	struct UTargetTypeBase* AddTarget_Custom(struct UTargetTypeBase* TargetClass, enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_Custom // (Final|Native|Public|BlueprintCallable) // @ game+0x1993f50
	struct UTargetTypeBase* AddTarget_CameraDirection(enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_CameraDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x1993ec0
	struct UTargetTypeBase* AddTarget_ActorWithOffset(struct AActor* InTargetActor, struct FVector& InTargetOffset, enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_ActorWithOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1993d90
	struct UTargetTypeBase* AddTarget_Actor(struct AActor* InTargetActor, enum class ETargetID InTargetID); // Function Ambulatory.TargetTracker.AddTarget_Actor // (Final|Native|Public|BlueprintCallable) // @ game+0x1993cc0
};

// Class Ambulatory.TraversalSettings
// Size: 0x238 (Inherited: 0x30)
struct UTraversalSettings : UDataAsset {
	struct FTraversalDetectionSettings GroundTraversalSettings; // 0x30(0x50)
	struct FTraversalDetectionSettings JumpFallTraversalSettings; // 0x80(0x50)
	struct FTraversalMetricsSettings MetricsSettings; // 0xd0(0x30)
	struct FTraversalSnappingSettings SnappingSettings; // 0x100(0xd8)
	struct FTraversalSwimDiveSettings SwimDiveSettings; // 0x1d8(0x28)
	struct FTraversalLadderSettings LadderSettings; // 0x200(0x24)
	struct FTraversalDropDownSettings DropDownSettings; // 0x224(0x14)
};

