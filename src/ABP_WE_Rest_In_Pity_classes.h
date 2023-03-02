// AnimBlueprintGeneratedClass ABP_WE_Rest_In_Pity.ABP_WE_REST_IN_PITY_C
// Size: 0x6d2 (Inherited: 0x2c0)
struct UABP_WE_REST_IN_PITY_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3e0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x408(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x488(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x538(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x568(0xb0)
	char pad_618[0x8]; // 0x618(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x620(0xb0)
	bool GhostReact; // 0x6d0(0x01)
	bool GhostExit; // 0x6d1(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_Rest_In_Pity.ABP_WE_REST_IN_PITY_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_REST_IN_PITY(int32_t EntryPoint); // Function ABP_WE_Rest_In_Pity.ABP_WE_REST_IN_PITY_C.ExecuteUbergraph_ABP_WE_REST_IN_PITY // (Final|UbergraphFunction) // @ game+0x38a7480
};

