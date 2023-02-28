// AnimBlueprintGeneratedClass ABP_HUM_F_Hair_StuHair23_AfroWrap_Master.ABP_HUM_F_Hair_StuHair23_AfroWrap_Master_C
// Size: 0x6a0 (Inherited: 0x2c0)
struct UABP_HUM_F_Hair_StuHair23_AfroWrap_Master_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x2f8(0x128)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x420(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x440(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x558(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x578(0x128)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_HUM_F_Hair_StuHair23_AfroWrap_Master.ABP_HUM_F_Hair_StuHair23_AfroWrap_Master_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HUM_F_Hair_StuHair23_AfroWrap_Master(int32_t EntryPoint); // Function ABP_HUM_F_Hair_StuHair23_AfroWrap_Master.ABP_HUM_F_Hair_StuHair23_AfroWrap_Master_C.ExecuteUbergraph_ABP_HUM_F_Hair_StuHair23_AfroWrap_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

