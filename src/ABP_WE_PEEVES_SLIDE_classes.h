// AnimBlueprintGeneratedClass ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C
// Size: 0x8b9 (Inherited: 0x2c0)
struct UABP_WE_PEEVES_SLIDE_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x408(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x430(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x458(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x480(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x500(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x530(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x660(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x690(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x710(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x740(0xb0)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x7f0(0xb0)
	bool Sliding; // 0x8a0(0x01)
	bool Exiting; // 0x8a1(0x01)
	char pad_8A2[0x6]; // 0x8a2(0x06)
	struct FMulticastInlineDelegate DiveFinished; // 0x8a8(0x10)
	bool LongSlide; // 0x8b8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_PEEVES_SLIDE_AnimGraphNode_TransitionResult_F9917CA84A07C016EE0B4F8FAA7BAB5A(); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_PEEVES_SLIDE_AnimGraphNode_TransitionResult_F9917CA84A07C016EE0B4F8FAA7BAB5A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_PEEVES_SLIDE_AnimGraphNode_TransitionResult_2002A92740EC5F7DDA9A4FB463F066B4(); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_PEEVES_SLIDE_AnimGraphNode_TransitionResult_2002A92740EC5F7DDA9A4FB463F066B4 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DiveEnd(); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.AnimNotify_DiveEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_PEEVES_SLIDE(int32_t EntryPoint); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.ExecuteUbergraph_ABP_WE_PEEVES_SLIDE // (Final|UbergraphFunction) // @ game+0x38a7480
	void DiveFinished__DelegateSignature(); // Function ABP_WE_PEEVES_SLIDE.ABP_WE_PEEVES_SLIDE_C.DiveFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

