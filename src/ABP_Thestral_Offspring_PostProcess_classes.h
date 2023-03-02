// AnimBlueprintGeneratedClass ABP_Thestral_Offspring_PostProcess.ABP_Thestral_Offspring_PostProcess_C
// Size: 0x660 (Inherited: 0x2c0)
struct UABP_Thestral_Offspring_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x450(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x558(0x108)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Thestral_Offspring_PostProcess.ABP_Thestral_Offspring_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess_AnimGraphNode_ModifyBone_07DFA13341648B0524955C8A96980682(); // Function ABP_Thestral_Offspring_PostProcess.ABP_Thestral_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess_AnimGraphNode_ModifyBone_07DFA13341648B0524955C8A96980682 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess_AnimGraphNode_ModifyBone_9D7486584A0CE666F8CFD0BAD1EE3AC2(); // Function ABP_Thestral_Offspring_PostProcess.ABP_Thestral_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess_AnimGraphNode_ModifyBone_9D7486584A0CE666F8CFD0BAD1EE3AC2 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess(int32_t EntryPoint); // Function ABP_Thestral_Offspring_PostProcess.ABP_Thestral_Offspring_PostProcess_C.ExecuteUbergraph_ABP_Thestral_Offspring_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

