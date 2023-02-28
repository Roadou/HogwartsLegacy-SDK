// AnimBlueprintGeneratedClass ABP_HUM_F_Hat_StudentHat01.ABP_HUM_F_Hat_StudentHat01_C
// Size: 0xcd8 (Inherited: 0x2c0)
struct UABP_HUM_F_Hat_StudentHat01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2f8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x318(0x20)
	char pad_338[0x8]; // 0x338(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x340(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x780(0x440)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xbc0(0x118)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_HUM_F_Hat_StudentHat01.ABP_HUM_F_Hat_StudentHat01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HUM_F_Hat_StudentHat01(int32_t EntryPoint); // Function ABP_HUM_F_Hat_StudentHat01.ABP_HUM_F_Hat_StudentHat01_C.ExecuteUbergraph_ABP_HUM_F_Hat_StudentHat01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

