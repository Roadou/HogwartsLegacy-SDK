// AnimBlueprintGeneratedClass ABP_HUM_M_Hat_StudentHat01.ABP_HUM_M_Hat_StudentHat01_C
// Size: 0xcd0 (Inherited: 0x2c0)
struct UABP_HUM_M_Hat_StudentHat01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x450(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x890(0x440)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_HUM_M_Hat_StudentHat01.ABP_HUM_M_Hat_StudentHat01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HUM_M_Hat_StudentHat01(int32_t EntryPoint); // Function ABP_HUM_M_Hat_StudentHat01.ABP_HUM_M_Hat_StudentHat01_C.ExecuteUbergraph_ABP_HUM_M_Hat_StudentHat01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

