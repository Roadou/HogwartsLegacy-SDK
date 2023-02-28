// AnimBlueprintGeneratedClass ABP_GAC_TreasureChest_Master.ABP_GAC_TreasureChest_Master_C
// Size: 0x5b1 (Inherited: 0x2c0)
struct UABP_GAC_TreasureChest_Master_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x370(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x420(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4a0(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x500(0xb0)
	bool Opened; // 0x5b0(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GAC_TreasureChest_Master.ABP_GAC_TreasureChest_Master_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_GAC_TreasureChest_Master(int32_t EntryPoint); // Function ABP_GAC_TreasureChest_Master.ABP_GAC_TreasureChest_Master_C.ExecuteUbergraph_ABP_GAC_TreasureChest_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

