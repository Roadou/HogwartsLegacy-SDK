// AnimBlueprintGeneratedClass ABP_PropOwl_Base.ABP_PropOwl_Base_C
// Size: 0xfd4 (Inherited: 0x2c0)
struct UABP_PropOwl_Base_C : UPropOwl_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x618(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x640(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x6c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x6f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x770(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x7a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x820(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x850(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x8d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x900(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x980(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x9b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xa30(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xa60(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xae0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb10(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xb90(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xbc0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc40(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xc70(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xcf0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xd20(0xb0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0xdd0(0x1b0)
	struct UAnimSequence* IdleAnim; // 0xf80(0x08)
	struct UAnimSequence* ReactAnim; // 0xf88(0x08)
	float ReactAnimStartPosition; // 0xf90(0x04)
	char pad_F94[0x4]; // 0xf94(0x04)
	struct UAnimSequence* SleepingAnim; // 0xf98(0x08)
	float InitIdleRandomStartPosition; // 0xfa0(0x04)
	float ReactRandomStartPositionOffset; // 0xfa4(0x04)
	struct UAnimSequence* LyingToSleepingAnim; // 0xfa8(0x08)
	struct UAnimSequence* SleepingToLyingAnim; // 0xfb0(0x08)
	struct UAnimSequence* IdleToLyingAnim; // 0xfb8(0x08)
	struct UAnimSequence* LyingToIdleAnim; // 0xfc0(0x08)
	struct UAnimSequence* LyingAnim; // 0xfc8(0x08)
	float InitSleepingRandomStartPosition; // 0xfd0(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_22AB2C864AB0CE4A0F37929906FE746C(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_22AB2C864AB0CE4A0F37929906FE746C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_SequencePlayer_A0A5CB7E49165BA7F9325298A3E1A1C0(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_SequencePlayer_A0A5CB7E49165BA7F9325298A3E1A1C0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_46B1CD034930C0EB2B0AE2B6C73B9384(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_46B1CD034930C0EB2B0AE2B6C73B9384 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_A12307DF4B632181970AE586A835D3C6(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_A12307DF4B632181970AE586A835D3C6 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_F361240249AD29384FA38091C2809637(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_F361240249AD29384FA38091C2809637 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_28C261DB4675FF68D81051953A345F3D(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_28C261DB4675FF68D81051953A345F3D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_2973FF6843DBCED3F0A824A3957A9F3D(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_2973FF6843DBCED3F0A824A3957A9F3D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_AAAB9EDF41EF227C18F2C0B8385C7BDD(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_AAAB9EDF41EF227C18F2C0B8385C7BDD // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_B1188A594430A7356FABFFBABC09F3FA(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_B1188A594430A7356FABFFBABC09F3FA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_16B96FD649CD9BA800B7AA80C6F5CFBC(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_16B96FD649CD9BA800B7AA80C6F5CFBC // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_3BF0480148741D1DFDD44C8B5A54EF30(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_3BF0480148741D1DFDD44C8B5A54EF30 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_08B5DDA74AEE66D9D377E49C571287D0(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_08B5DDA74AEE66D9D377E49C571287D0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_2DBF55E74A7397DE6780228835FC0ECF(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PropOwl_Base_AnimGraphNode_TransitionResult_2DBF55E74A7397DE6780228835FC0ECF // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_PropOwl_Base(int32_t EntryPoint); // Function ABP_PropOwl_Base.ABP_PropOwl_Base_C.ExecuteUbergraph_ABP_PropOwl_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

