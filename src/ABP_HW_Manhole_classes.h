// AnimBlueprintGeneratedClass ABP_HW_Manhole.ABP_HW_Manhole_C
// Size: 0x5b1 (Inherited: 0x2c0)
struct UABP_HW_Manhole_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x370(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x420(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4a0(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x500(0xb0)
	bool Opened; // 0x5b0(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HW_Manhole.ABP_HW_Manhole_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Manhole_AnimGraphNode_TransitionResult_B1AC4684430569242206369FB9F634A1(); // Function ABP_HW_Manhole.ABP_HW_Manhole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Manhole_AnimGraphNode_TransitionResult_B1AC4684430569242206369FB9F634A1 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Manhole_AnimGraphNode_TransitionResult_53E7027042C41697A4EC3094882E2278(); // Function ABP_HW_Manhole.ABP_HW_Manhole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Manhole_AnimGraphNode_TransitionResult_53E7027042C41697A4EC3094882E2278 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HW_Manhole(int32_t EntryPoint); // Function ABP_HW_Manhole.ABP_HW_Manhole_C.ExecuteUbergraph_ABP_HW_Manhole // (Final|UbergraphFunction) // @ game+0x38a7480
};

