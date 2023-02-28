// AnimBlueprintGeneratedClass ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C
// Size: 0x1b98 (Inherited: 0x2c0)
struct UABP_Kneazle_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x410(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x450(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x890(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0xcd0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1110(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1550(0x440)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1990(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x19b8(0x28)
	struct FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend; // 0x19e0(0x50)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a30(0x158)
	float PlayRate; // 0x1b88(0x04)
	char pad_1B8C[0x4]; // 0x1b8c(0x04)
	struct UAmbulatory_AnimInstance* AnimBP; // 0x1b90(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Kneazle_PostProcess_AnimGraphNode_MultiWayBlend_3E1CC2A84448314DDEC433955168967D(); // Function ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Kneazle_PostProcess_AnimGraphNode_MultiWayBlend_3E1CC2A84448314DDEC433955168967D // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Kneazle_PostProcess(int32_t EntryPoint); // Function ABP_Kneazle_PostProcess.ABP_Kneazle_PostProcess_C.ExecuteUbergraph_ABP_Kneazle_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

