// AnimBlueprintGeneratedClass ABP_ShoulderFixup.ABP_ShoulderFixup_C
// Size: 0x874 (Inherited: 0x2c0)
struct UABP_ShoulderFixup_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x410(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x518(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x538(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x558(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x660(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x768(0x108)
	float Alpha; // 0x870(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_ShoulderFixup.ABP_ShoulderFixup_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_ShoulderFixup.ABP_ShoulderFixup_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_ShoulderFixup(int32_t EntryPoint); // Function ABP_ShoulderFixup.ABP_ShoulderFixup_C.ExecuteUbergraph_ABP_ShoulderFixup // (Final|UbergraphFunction) // @ game+0x38a7480
};

