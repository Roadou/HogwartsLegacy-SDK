// AnimBlueprintGeneratedClass ABP_HouseElf_M_Teague_PostProcess.ABP_HouseElf_M_Teague_PostProcess_C
// Size: 0xcd0 (Inherited: 0x2c0)
struct UABP_HouseElf_M_Teague_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x338(0x118)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x450(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x890(0x440)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_HouseElf_M_Teague_PostProcess.ABP_HouseElf_M_Teague_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HouseElf_M_Teague_PostProcess(int32_t EntryPoint); // Function ABP_HouseElf_M_Teague_PostProcess.ABP_HouseElf_M_Teague_PostProcess_C.ExecuteUbergraph_ABP_HouseElf_M_Teague_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

