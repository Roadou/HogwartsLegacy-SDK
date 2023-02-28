// AnimBlueprintGeneratedClass ABP_Ghost_Peeves_Dynamics_PP.ABP_Ghost_Peeves_Dynamics_PP_C
// Size: 0x47b8 (Inherited: 0x2c0)
struct UABP_Ghost_Peeves_Dynamics_PP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x2d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x710(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0xb50(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xf90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x13d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1810(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1c50(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2090(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x24d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2910(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2d50(0x440)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_5; // 0x3190(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_4; // 0x3298(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_3; // 0x33a0(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_2; // 0x34a8(0x108)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x35b0(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x36c8(0x20)
	char pad_36E8[0x8]; // 0x36e8(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail_2; // 0x36f0(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x3950(0x260)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3bb0(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3ff0(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4010(0x440)
	struct FAnimNode_Constraint AnimGraphNode_Constraint; // 0x4450(0x108)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x4558(0x30)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x4588(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x46a0(0x118)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Ghost_Peeves_Dynamics_PP.ABP_Ghost_Peeves_Dynamics_PP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Ghost_Peeves_Dynamics_PP(int32_t EntryPoint); // Function ABP_Ghost_Peeves_Dynamics_PP.ABP_Ghost_Peeves_Dynamics_PP_C.ExecuteUbergraph_ABP_Ghost_Peeves_Dynamics_PP // (Final|UbergraphFunction) // @ game+0x38a7480
};

