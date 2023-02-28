// AnimBlueprintGeneratedClass ABP_AmbientGhost.ABP_AmbientGhost_C
// Size: 0xb44 (Inherited: 0x2c0)
struct UABP_AmbientGhost_C : UAmbientGhost_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x378(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x3a8(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x458(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5d8(0x28)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x600(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6a0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x720(0x80)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7a0(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7c8(0xc0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x888(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x8b8(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8e0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x910(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x9c0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xb18(0x28)
	int32_t RandomWaveType; // 0xb40(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_AmbientGhost.ABP_AmbientGhost_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbientGhost_AnimGraphNode_TransitionResult_F2CAA4DC46C898890213F5A00F5A6ECD(); // Function ABP_AmbientGhost.ABP_AmbientGhost_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbientGhost_AnimGraphNode_TransitionResult_F2CAA4DC46C898890213F5A00F5A6ECD // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WaveStarted(); // Function ABP_AmbientGhost.ABP_AmbientGhost_C.AnimNotify_WaveStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WaveCompleted(); // Function ABP_AmbientGhost.ABP_AmbientGhost_C.AnimNotify_WaveCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_AmbientGhost(int32_t EntryPoint); // Function ABP_AmbientGhost.ABP_AmbientGhost_C.ExecuteUbergraph_ABP_AmbientGhost // (Final|UbergraphFunction) // @ game+0x38a7480
};

