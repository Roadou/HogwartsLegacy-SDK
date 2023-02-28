// AnimBlueprintGeneratedClass ABP_WE_MirrorMirror.ABP_WE_MirrorMirror_C
// Size: 0x4d9 (Inherited: 0x2c0)
struct UABP_WE_MirrorMirror_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x348(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x378(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3f8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x428(0xb0)
	bool Play; // 0x4d8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_MirrorMirror.ABP_WE_MirrorMirror_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FinishedTalking(); // Function ABP_WE_MirrorMirror.ABP_WE_MirrorMirror_C.AnimNotify_FinishedTalking // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_MirrorMirror(int32_t EntryPoint); // Function ABP_WE_MirrorMirror.ABP_WE_MirrorMirror_C.ExecuteUbergraph_ABP_WE_MirrorMirror // (Final|UbergraphFunction) // @ game+0x38a7480
};

