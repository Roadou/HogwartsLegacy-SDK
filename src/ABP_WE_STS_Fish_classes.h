// AnimBlueprintGeneratedClass ABP_WE_STS_Fish.ABP_WE_STS_Fish_C
// Size: 0x651 (Inherited: 0x2c0)
struct UABP_WE_STS_Fish_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x478(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x528(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x558(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x608(0x48)
	bool hasFish; // 0x650(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_STS_Fish.ABP_WE_STS_Fish_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_STS_Fish(int32_t EntryPoint); // Function ABP_WE_STS_Fish.ABP_WE_STS_Fish_C.ExecuteUbergraph_ABP_WE_STS_Fish // (Final|UbergraphFunction) // @ game+0x38a7480
};

