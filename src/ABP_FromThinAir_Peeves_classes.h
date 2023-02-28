// AnimBlueprintGeneratedClass ABP_FromThinAir_Peeves.ABP_FromThinAir_Peeves_C
// Size: 0x65d (Inherited: 0x2c0)
struct UABP_FromThinAir_Peeves_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x3e0(0xb0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x490(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x538(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x568(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x598(0xb0)
	struct FMulticastInlineDelegate OnPeevesFinished; // 0x648(0x10)
	float BlendTime; // 0x658(0x04)
	bool JumpScare; // 0x65c(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_FromThinAir_Peeves.ABP_FromThinAir_Peeves_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_PeevesFinished(); // Function ABP_FromThinAir_Peeves.ABP_FromThinAir_Peeves_C.AnimNotify_PeevesFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_FromThinAir_Peeves(int32_t EntryPoint); // Function ABP_FromThinAir_Peeves.ABP_FromThinAir_Peeves_C.ExecuteUbergraph_ABP_FromThinAir_Peeves // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnPeevesFinished__DelegateSignature(); // Function ABP_FromThinAir_Peeves.ABP_FromThinAir_Peeves_C.OnPeevesFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

