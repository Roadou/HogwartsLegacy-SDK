// AnimBlueprintGeneratedClass ABP_WE_BOP_Hippogriff.ABP_WE_BOP_Hippogriff_C
// Size: 0x6f2 (Inherited: 0x2c0)
struct UABP_WE_BOP_Hippogriff_C : UAnimInstance {
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
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x6a8(0x48)
	bool Glide; // 0x6f0(0x01)
	bool snap; // 0x6f1(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_BOP_Hippogriff.ABP_WE_BOP_Hippogriff_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_BOP_Hippogriff_AnimGraphNode_TransitionResult_8E117DDD4292308D7D04CAAEDFA6018A(); // Function ABP_WE_BOP_Hippogriff.ABP_WE_BOP_Hippogriff_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_BOP_Hippogriff_AnimGraphNode_TransitionResult_8E117DDD4292308D7D04CAAEDFA6018A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_BOP_Hippogriff_AnimGraphNode_TransitionResult_ED80FAF74A6BDB972B8FCB86340F6A77(); // Function ABP_WE_BOP_Hippogriff.ABP_WE_BOP_Hippogriff_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_BOP_Hippogriff_AnimGraphNode_TransitionResult_ED80FAF74A6BDB972B8FCB86340F6A77 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_BOP_Hippogriff(int32_t EntryPoint); // Function ABP_WE_BOP_Hippogriff.ABP_WE_BOP_Hippogriff_C.ExecuteUbergraph_ABP_WE_BOP_Hippogriff // (Final|UbergraphFunction) // @ game+0x38a7480
};

