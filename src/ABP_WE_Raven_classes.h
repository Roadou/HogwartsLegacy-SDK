// AnimBlueprintGeneratedClass ABP_WE_Raven.ABP_WE_Raven_C
// Size: 0x838 (Inherited: 0x2c0)
struct UABP_WE_Raven_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3e8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x410(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x490(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x540(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x570(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x620(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x750(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x780(0xb0)
	bool ShouldFlee; // 0x830(0x01)
	bool ShouldLand; // 0x831(0x01)
	bool ShouldHarrass; // 0x832(0x01)
	char pad_833[0x1]; // 0x833(0x01)
	float AnimStartPosition; // 0x834(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_Raven.ABP_WE_Raven_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Raven_AnimGraphNode_TransitionResult_490843A842B746A3DBB3869F1FEBA160(); // Function ABP_WE_Raven.ABP_WE_Raven_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Raven_AnimGraphNode_TransitionResult_490843A842B746A3DBB3869F1FEBA160 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_WE_Raven.ABP_WE_Raven_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FinishedLanding(); // Function ABP_WE_Raven.ABP_WE_Raven_C.AnimNotify_FinishedLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RandomiseAnimStart(); // Function ABP_WE_Raven.ABP_WE_Raven_C.AnimNotify_RandomiseAnimStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_Raven(int32_t EntryPoint); // Function ABP_WE_Raven.ABP_WE_Raven_C.ExecuteUbergraph_ABP_WE_Raven // (Final|UbergraphFunction) // @ game+0x38a7480
};

