// AnimBlueprintGeneratedClass ABP_Jobberknoll_PostProcess.ABP_Jobberknoll_PostProcess_C
// Size: 0xf60 (Inherited: 0x2c0)
struct UABP_Jobberknoll_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail_4; // 0x300(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail_3; // 0x560(0x260)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7c0(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7e0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x938(0x28)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x960(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa78(0x20)
	char pad_A98[0x8]; // 0xa98(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail_2; // 0xaa0(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0xd00(0x260)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Jobberknoll_PostProcess.ABP_Jobberknoll_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Jobberknoll_PostProcess(int32_t EntryPoint); // Function ABP_Jobberknoll_PostProcess.ABP_Jobberknoll_PostProcess_C.ExecuteUbergraph_ABP_Jobberknoll_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

