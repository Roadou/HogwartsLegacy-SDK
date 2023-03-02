// AnimBlueprintGeneratedClass ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C
// Size: 0x80a (Inherited: 0x2c0)
struct UABP_WE_MagicKiteBattle_Kelpie_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x440(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x470(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x520(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x650(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x680(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x700(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x730(0xb0)
	struct UAnimSequence* DeployPoseAnim; // 0x7e0(0x08)
	struct UAnimSequence* DeployAnim; // 0x7e8(0x08)
	struct UAnimSequence* IdleAnim; // 0x7f0(0x08)
	struct UAnimSequence* ReturnAnim; // 0x7f8(0x08)
	struct ABP_WE_MagicKiteBattle_Kite_C* Owner; // 0x800(0x08)
	bool ShouldReturn; // 0x808(0x01)
	bool ShouldDelay; // 0x809(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie_AnimGraphNode_TransitionResult_0C1282094B7C78B8736FAE8FE3B4F9FC(); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie_AnimGraphNode_TransitionResult_0C1282094B7C78B8736FAE8FE3B4F9FC // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie_AnimGraphNode_TransitionResult_A3FC3AE0464652CE37BE918D4BD9796D(); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie_AnimGraphNode_TransitionResult_A3FC3AE0464652CE37BE918D4BD9796D // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetReturn(); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.AnimNotify_ResetReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FinishedReturnAnim(); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.AnimNotify_FinishedReturnAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie(int32_t EntryPoint); // Function ABP_WE_MagicKiteBattle_Kelpie.ABP_WE_MagicKiteBattle_Kelpie_C.ExecuteUbergraph_ABP_WE_MagicKiteBattle_Kelpie // (Final|UbergraphFunction) // @ game+0x38a7480
};

