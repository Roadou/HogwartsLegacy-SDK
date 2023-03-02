// AnimBlueprintGeneratedClass ABP_WE_GHO_Lovestory.ABP_WE_GHO_Lovestory_C
// Size: 0x878 (Inherited: 0x2c0)
struct UABP_WE_GHO_Lovestory_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3e0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x460(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4e0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x560(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x5e0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x680(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x720(0xa0)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x7c0(0xb0)
	bool Male; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	int32_t WE_Variation; // 0x874(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_GHO_Lovestory.ABP_WE_GHO_Lovestory_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_GHO_Lovestory(int32_t EntryPoint); // Function ABP_WE_GHO_Lovestory.ABP_WE_GHO_Lovestory_C.ExecuteUbergraph_ABP_WE_GHO_Lovestory // (Final|UbergraphFunction) // @ game+0x38a7480
};

