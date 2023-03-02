// AnimBlueprintGeneratedClass ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C
// Size: 0xa80 (Inherited: 0x2c0)
struct UABP_WE_DRAGON_SHEEP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x448(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4c8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x588(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x608(0x30)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x638(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x700(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x780(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x800(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x830(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x8e0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9e8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa08(0x20)
	struct FMulticastInlineDelegate DragonGrab; // 0xa28(0x10)
	float FlapGlideAlpha; // 0xa38(0x04)
	float FlapPlayRate; // 0xa3c(0x04)
	bool DragonGrabbing; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	struct FMulticastInlineDelegate WingFlap; // 0xa48(0x10)
	struct FMulticastInlineDelegate PreyGrabbed; // 0xa58(0x10)
	bool DragonMisses; // 0xa68(0x01)
	char pad_A69[0x3]; // 0xa69(0x03)
	struct FRotator DragonLookRot; // 0xa6c(0x0c)
	float DragonLookAlpha; // 0xa78(0x04)
	float ExitTailBlend; // 0xa7c(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_SHEEP_AnimGraphNode_TransitionResult_70500A3348EF4301AD07518345A5F8A5(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_SHEEP_AnimGraphNode_TransitionResult_70500A3348EF4301AD07518345A5F8A5 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_SHEEP_AnimGraphNode_TransitionResult_85EFC0FB490E942F4533AEA543A4C96D(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_SHEEP_AnimGraphNode_TransitionResult_85EFC0FB490E942F4533AEA543A4C96D // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_AN_OnWingFlap(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.AnimNotify_AN_OnWingFlap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_AN_OnGrab(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.AnimNotify_AN_OnGrab // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_AN_Grab(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.AnimNotify_AN_Grab // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_DRAGON_SHEEP(int32_t EntryPoint); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.ExecuteUbergraph_ABP_WE_DRAGON_SHEEP // (Final|UbergraphFunction) // @ game+0x38a7480
	void PreyGrabbed__DelegateSignature(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.PreyGrabbed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WingFlap__DelegateSignature(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.WingFlap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonGrab__DelegateSignature(); // Function ABP_WE_DRAGON_SHEEP.ABP_WE_DRAGON_SHEEP_C.DragonGrab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

