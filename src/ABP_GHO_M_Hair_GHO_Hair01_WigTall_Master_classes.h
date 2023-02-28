// AnimBlueprintGeneratedClass ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master.ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master_C
// Size: 0x1110 (Inherited: 0x2c0)
struct UABP_GHO_M_Hair_GHO_Hair01_WigTall_Master_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x410(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x850(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xc90(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x10d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x10f0(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master.ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master(int32_t EntryPoint); // Function ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master.ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master_C.ExecuteUbergraph_ABP_GHO_M_Hair_GHO_Hair01_WigTall_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

