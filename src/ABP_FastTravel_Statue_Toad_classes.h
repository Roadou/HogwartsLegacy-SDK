// AnimBlueprintGeneratedClass ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C
// Size: 0x6aa (Inherited: 0x2c0)
struct UABP_FastTravel_Statue_Toad_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x498(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x518(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x548(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5f8(0xb0)
	bool StatueOpenMouth; // 0x6a8(0x01)
	bool StatueExit; // 0x6a9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FastTravel_Statue_Toad_AnimGraphNode_TransitionResult_A4FDEE0448B4FA05F59482B24B10CFDB(); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FastTravel_Statue_Toad_AnimGraphNode_TransitionResult_A4FDEE0448B4FA05F59482B24B10CFDB // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FastTravel_Statue_Toad_AnimGraphNode_TransitionResult_FF20B83449A9D13D1535DFB7D67F36CE(); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FastTravel_Statue_Toad_AnimGraphNode_TransitionResult_FF20B83449A9D13D1535DFB7D67F36CE // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_OpenStarted(); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.AnimNotify_OpenStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ExitStarted(); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.AnimNotify_ExitStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_FastTravel_Statue_Toad(int32_t EntryPoint); // Function ABP_FastTravel_Statue_Toad.ABP_FastTravel_Statue_Toad_C.ExecuteUbergraph_ABP_FastTravel_Statue_Toad // (Final|UbergraphFunction) // @ game+0x38a7480
};

