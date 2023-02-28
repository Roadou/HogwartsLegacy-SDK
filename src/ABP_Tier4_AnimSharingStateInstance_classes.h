// AnimBlueprintGeneratedClass ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C
// Size: 0x830 (Inherited: 0x3b0)
struct UABP_Tier4_AnimSharingStateInstance_C : UPhxAnimSharingStateInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3e8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x468(0x80)
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x4e8(0xd0)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x5b8(0xa0)
	char pad_658[0x8]; // 0x658(0x08)
	struct FAnimNode_AmbientFacial AnimGraphNode_AmbientFacial; // 0x660(0x1d0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance(int32_t EntryPoint); // Function ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C.ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance // (Final|UbergraphFunction) // @ game+0x38a7480
};

