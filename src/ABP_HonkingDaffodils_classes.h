// AnimBlueprintGeneratedClass ABP_HonkingDaffodils.ABP_HonkingDaffodils_C
// Size: 0x57a (Inherited: 0x2c0)
struct UABP_HonkingDaffodils_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x348(0x30)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x378(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3f0(0x30)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x420(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x498(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4c8(0xb0)
	bool IsHonking; // 0x578(0x01)
	bool IsFinalStage; // 0x579(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HonkingDaffodils.ABP_HonkingDaffodils_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HonkingDaffodils(int32_t EntryPoint); // Function ABP_HonkingDaffodils.ABP_HonkingDaffodils_C.ExecuteUbergraph_ABP_HonkingDaffodils // (Final|UbergraphFunction) // @ game+0x38a7480
};

