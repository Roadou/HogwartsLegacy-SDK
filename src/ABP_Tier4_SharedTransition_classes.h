// AnimBlueprintGeneratedClass ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C
// Size: 0x758 (Inherited: 0x2d0)
struct UABP_Tier4_SharedTransition_C : UAnimSharingTransitionInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x308(0xa0)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_2; // 0x3a8(0x1d8)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x580(0x1d8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Tier4_SharedTransition(int32_t EntryPoint); // Function ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C.ExecuteUbergraph_ABP_Tier4_SharedTransition // (Final|UbergraphFunction) // @ game+0x38a7480
};

