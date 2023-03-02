// AnimBlueprintGeneratedClass ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C
// Size: 0x7b3 (Inherited: 0x2c0)
struct UABP_StirCrazy_Ladle_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x410(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x568(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x598(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x618(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x648(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6f8(0xb0)
	struct ABP_StirCrazy_C* Stircrazy_REF; // 0x7a8(0x08)
	bool Stirring?; // 0x7b0(0x01)
	bool Clockwise?; // 0x7b1(0x01)
	bool Pour?; // 0x7b2(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Ladle_AnimGraphNode_TransitionResult_8AFDD4E74615DF20ED6CC6AFD582E4BE(); // Function ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Ladle_AnimGraphNode_TransitionResult_8AFDD4E74615DF20ED6CC6AFD582E4BE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Ladle_AnimGraphNode_TransitionResult_85484C1B401D2A11B1CB1FBEA3F540C8(); // Function ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Ladle_AnimGraphNode_TransitionResult_85484C1B401D2A11B1CB1FBEA3F540C8 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_StirCrazy_Ladle(int32_t EntryPoint); // Function ABP_StirCrazy_Ladle.ABP_StirCrazy_Ladle_C.ExecuteUbergraph_ABP_StirCrazy_Ladle // (Final|UbergraphFunction) // @ game+0x38a7480
};

