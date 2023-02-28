// AnimBlueprintGeneratedClass ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C
// Size: 0x770 (Inherited: 0x2c0)
struct UABP_Puzzle_Arithmancy_Door_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2f8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x420(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x538(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x558(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x660(0x108)
	float DoorRotation; // 0x768(0x04)
	float LockTranslation; // 0x76c(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_4FF182EB47F7E3DC8083EFB3174B46DD(); // Function ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_4FF182EB47F7E3DC8083EFB3174B46DD // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_EBBB911F49EFFE6BD87B7A9FCE1FA4F7(); // Function ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_EBBB911F49EFFE6BD87B7A9FCE1FA4F7 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_A037CD794EE2E06E8B3564AFB8C2B087(); // Function ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door_AnimGraphNode_ModifyBone_A037CD794EE2E06E8B3564AFB8C2B087 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door(int32_t EntryPoint); // Function ABP_Puzzle_Arithmancy_Door.ABP_Puzzle_Arithmancy_Door_C.ExecuteUbergraph_ABP_Puzzle_Arithmancy_Door // (Final|UbergraphFunction) // @ game+0x38a7480
};

