// AnimBlueprintGeneratedClass ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C
// Size: 0x7d8 (Inherited: 0x2c0)
struct UABP_WE_STS_Hippogriff_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x598(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x618(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x698(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6c8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x778(0x48)
	bool Glide; // 0x7c0(0x01)
	bool hasFish; // 0x7c1(0x01)
	char pad_7C2[0x6]; // 0x7c2(0x06)
	struct FMulticastInlineDelegate VFX_Water; // 0x7c8(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_STS_Hippogriff_AnimGraphNode_TransitionResult_91C57E9C45B3F8AD92E67F93D3245ADE(); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_STS_Hippogriff_AnimGraphNode_TransitionResult_91C57E9C45B3F8AD92E67F93D3245ADE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_STS_Hippogriff_AnimGraphNode_TransitionResult_E3B0AA8F4061846FBD78B0884D952818(); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_STS_Hippogriff_AnimGraphNode_TransitionResult_E3B0AA8F4061846FBD78B0884D952818 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_VFX_Water(); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.AnimNotify_VFX_Water // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_STS_Hippogriff(int32_t EntryPoint); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.ExecuteUbergraph_ABP_WE_STS_Hippogriff // (Final|UbergraphFunction) // @ game+0x38a7480
	void VFX_Water__DelegateSignature(); // Function ABP_WE_STS_Hippogriff.ABP_WE_STS_Hippogriff_C.VFX_Water__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

