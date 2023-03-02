// AnimBlueprintGeneratedClass ABP_Cow_PostProcess.ABP_Cow_PostProcess_C
// Size: 0x2be0 (Inherited: 0x2c0)
struct UABP_Cow_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x378(0xc8)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x440(0x118)
	char pad_558[0x8]; // 0x558(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x560(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9a0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9c0(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x9e0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xe20(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1260(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x16a0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1ae0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1f20(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2360(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x27a0(0x440)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Cow_PostProcess.ABP_Cow_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cow_PostProcess_AnimGraphNode_ApplyAdditive_047BF46441CCD8646F7F9EBA7663E0F4(); // Function ABP_Cow_PostProcess.ABP_Cow_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cow_PostProcess_AnimGraphNode_ApplyAdditive_047BF46441CCD8646F7F9EBA7663E0F4 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Cow_PostProcess(int32_t EntryPoint); // Function ABP_Cow_PostProcess.ABP_Cow_PostProcess_C.ExecuteUbergraph_ABP_Cow_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

