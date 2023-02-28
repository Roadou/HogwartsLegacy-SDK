// AnimBlueprintGeneratedClass ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C
// Size: 0x8f8 (Inherited: 0x2c0)
struct UABP_Sanc_Desk_Paper_01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x3e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x498(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x518(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x548(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x678(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x728(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x758(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x808(0xb0)
	struct UAnimSequence* Flipping_StartFrame; // 0x8b8(0x08)
	struct UAnimSequence* Flipping_Action; // 0x8c0(0x08)
	struct UAnimSequence* Flipping_EndFrame; // 0x8c8(0x08)
	struct UAnimSequence* FlipBack_StartFrame; // 0x8d0(0x08)
	struct UAnimSequence* FlipBack_Action; // 0x8d8(0x08)
	struct UAnimSequence* FlipBack_EndFrame; // 0x8e0(0x08)
	bool Flip; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)
	struct ABP_Sanc_Desk_01_Parent_C* Desk; // 0x8f0(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_B9BCC7C34697647E204877966D3ED835(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_B9BCC7C34697647E204877966D3ED835 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_7C5976614B25DC943B4585A66DF4D4C4(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_7C5976614B25DC943B4585A66DF4D4C4 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_828B08554B242ACF43BEB8AACC353329(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_828B08554B242ACF43BEB8AACC353329 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_E3A34F54432A48DA2C6490B54F4DC94E(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_Paper_01_AnimGraphNode_TransitionResult_E3A34F54432A48DA2C6490B54F4DC94E // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetFlip(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.AnimNotify_ResetFlip // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FlipFinished(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.AnimNotify_FlipFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FlipBackFinished(); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.AnimNotify_FlipBackFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Sanc_Desk_Paper_01(int32_t EntryPoint); // Function ABP_Sanc_Desk_Paper_01.ABP_Sanc_Desk_Paper_01_C.ExecuteUbergraph_ABP_Sanc_Desk_Paper_01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

