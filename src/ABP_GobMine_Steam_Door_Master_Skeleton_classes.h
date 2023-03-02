// AnimBlueprintGeneratedClass ABP_GobMine_Steam_Door_Master_Skeleton.ABP_GobMine_Steam_Door_Master_Skeleton_C
// Size: 0x90a (Inherited: 0x2c0)
struct UABP_GobMine_Steam_Door_Master_Skeleton_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x410(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x568(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x598(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x618(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x648(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x6c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x778(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x828(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x858(0xb0)
	bool SteamOn; // 0x908(0x01)
	bool Opened; // 0x909(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GobMine_Steam_Door_Master_Skeleton.ABP_GobMine_Steam_Door_Master_Skeleton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton_AnimGraphNode_TransitionResult_A7B740C2492F2CBDD4E4BB998E289AEE(); // Function ABP_GobMine_Steam_Door_Master_Skeleton.ABP_GobMine_Steam_Door_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton_AnimGraphNode_TransitionResult_A7B740C2492F2CBDD4E4BB998E289AEE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton_AnimGraphNode_TransitionResult_E1C7C4B9448BB2EE134935A3D6C77B8F(); // Function ABP_GobMine_Steam_Door_Master_Skeleton.ABP_GobMine_Steam_Door_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton_AnimGraphNode_TransitionResult_E1C7C4B9448BB2EE134935A3D6C77B8F // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton(int32_t EntryPoint); // Function ABP_GobMine_Steam_Door_Master_Skeleton.ABP_GobMine_Steam_Door_Master_Skeleton_C.ExecuteUbergraph_ABP_GobMine_Steam_Door_Master_Skeleton // (Final|UbergraphFunction) // @ game+0x38a7480
};

