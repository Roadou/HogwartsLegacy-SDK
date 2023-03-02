// AnimBlueprintGeneratedClass ABP_WE_GhostChase.ABP_WE_GhostChase_C
// Size: 0x9e0 (Inherited: 0x2c0)
struct UABP_WE_GhostChase_C : UAmbientGhost_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x378(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x3f8(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x498(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x4c8(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x578(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x6d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6f8(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x720(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x750(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x778(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a8(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x858(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x9b0(0x28)
	int32_t RandomWaveType; // 0x9d8(0x04)
	int32_t GhostID; // 0x9dc(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_GhostChase.ABP_WE_GhostChase_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_GhostChase_AnimGraphNode_TransitionResult_18F939DD47961E0FD4355F9C92CECEFA(); // Function ABP_WE_GhostChase.ABP_WE_GhostChase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_GhostChase_AnimGraphNode_TransitionResult_18F939DD47961E0FD4355F9C92CECEFA // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WaveStarted(); // Function ABP_WE_GhostChase.ABP_WE_GhostChase_C.AnimNotify_WaveStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WaveCompleted(); // Function ABP_WE_GhostChase.ABP_WE_GhostChase_C.AnimNotify_WaveCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_GhostChase(int32_t EntryPoint); // Function ABP_WE_GhostChase.ABP_WE_GhostChase_C.ExecuteUbergraph_ABP_WE_GhostChase // (Final|UbergraphFunction) // @ game+0x38a7480
};

