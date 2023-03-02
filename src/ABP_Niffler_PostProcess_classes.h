// AnimBlueprintGeneratedClass ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C
// Size: 0xa98 (Inherited: 0x2c0)
struct UABP_Niffler_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x410(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x850(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x870(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x9c8(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9f0(0x20)
	struct FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend; // 0xa10(0x50)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa60(0x28)
	float PlayRate; // 0xa88(0x04)
	char pad_A8C[0x4]; // 0xa8c(0x04)
	struct UAmbulatory_AnimInstance* AnimBP; // 0xa90(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Niffler_PostProcess_AnimGraphNode_MultiWayBlend_6DB46D5147672A90AFEFB09316940640(); // Function ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Niffler_PostProcess_AnimGraphNode_MultiWayBlend_6DB46D5147672A90AFEFB09316940640 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Niffler_PostProcess(int32_t EntryPoint); // Function ABP_Niffler_PostProcess.ABP_Niffler_PostProcess_C.ExecuteUbergraph_ABP_Niffler_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

