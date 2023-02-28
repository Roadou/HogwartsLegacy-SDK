// AnimBlueprintGeneratedClass ABP_MapHelp.ABP_MapHelp_C
// Size: 0x885 (Inherited: 0x2c0)
struct UABP_MapHelp_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x438(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x460(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x510(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x590(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x640(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x670(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x720(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7a0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d0(0xb0)
	bool OpenBook; // 0x880(0x01)
	bool ReceivePage; // 0x881(0x01)
	bool CatchPage; // 0x882(0x01)
	bool CatchPageAgain; // 0x883(0x01)
	bool InCatch; // 0x884(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_MapHelp.ABP_MapHelp_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_0743C530449AA96914EF558D57AAC911(); // Function ABP_MapHelp.ABP_MapHelp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_0743C530449AA96914EF558D57AAC911 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_AB6D13DD44D4C0A6E17BD296C87780E0(); // Function ABP_MapHelp.ABP_MapHelp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_AB6D13DD44D4C0A6E17BD296C87780E0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_1529A0824F81BD24F1BEB7A0EACC8AAF(); // Function ABP_MapHelp.ABP_MapHelp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_1529A0824F81BD24F1BEB7A0EACC8AAF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_B70D79314F1B87A09EA11F86B98175BE(); // Function ABP_MapHelp.ABP_MapHelp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_B70D79314F1B87A09EA11F86B98175BE // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_OpenStarted(); // Function ABP_MapHelp.ABP_MapHelp_C.AnimNotify_OpenStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ReceiveStarted(); // Function ABP_MapHelp.ABP_MapHelp_C.AnimNotify_ReceiveStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCatchPage(); // Function ABP_MapHelp.ABP_MapHelp_C.SetCatchPage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Catch_Entered(); // Function ABP_MapHelp.ABP_MapHelp_C.AnimNotify_Catch_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Catch_Left(); // Function ABP_MapHelp.ABP_MapHelp_C.AnimNotify_Catch_Left // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CatchAgain_Entered(); // Function ABP_MapHelp.ABP_MapHelp_C.AnimNotify_CatchAgain_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_MapHelp(int32_t EntryPoint); // Function ABP_MapHelp.ABP_MapHelp_C.ExecuteUbergraph_ABP_MapHelp // (Final|UbergraphFunction) // @ game+0x38a7480
};

