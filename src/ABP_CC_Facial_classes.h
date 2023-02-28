// AnimBlueprintGeneratedClass ABP_CC_Facial.ABP_CC_Facial_C
// Size: 0x700 (Inherited: 0x2c0)
struct UABP_CC_Facial_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CustomizableCharacterFacialPoseBlendNode AnimGraphNode_CustomizableCharacterFacialPoseBlendNode; // 0x2f8(0xb0)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x3a8(0x118)
	struct FAnimNode_CustomizableCharacterEyeCap AnimGraphNode_CustomizableCharacterEyeCap; // 0x4c0(0x78)
	char pad_538[0x8]; // 0x538(0x08)
	struct FAnimNode_EyeTarget AnimGraphNode_EyeTarget; // 0x540(0x160)
	struct FAnimNode_CustomizableCharacterLocalModifyBoneScales AnimGraphNode_CustomizableCharacterLocalModifyBoneScales; // 0x6a0(0x60)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_CC_Facial.ABP_CC_Facial_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_CC_Facial.ABP_CC_Facial_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_CC_Facial(int32_t EntryPoint); // Function ABP_CC_Facial.ABP_CC_Facial_C.ExecuteUbergraph_ABP_CC_Facial // (Final|UbergraphFunction) // @ game+0x38a7480
};

