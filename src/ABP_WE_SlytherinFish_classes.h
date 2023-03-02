// AnimBlueprintGeneratedClass ABP_WE_SlytherinFish.ABP_WE_SlytherinFish_C
// Size: 0x854 (Inherited: 0x2c0)
struct UABP_WE_SlytherinFish_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4b0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4d8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x558(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x588(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x608(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x638(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x768(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x798(0xb0)
	bool FishSwim; // 0x848(0x01)
	bool FishIdle; // 0x849(0x01)
	bool FishSwimFast; // 0x84a(0x01)
	bool Fish180L; // 0x84b(0x01)
	float StartPosSwim; // 0x84c(0x04)
	float StartPosIdle; // 0x850(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_SlytherinFish.ABP_WE_SlytherinFish_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SlytherinFish_AnimGraphNode_TransitionResult_A452D15F495FCD9ECB504B8C4B51BEFF(); // Function ABP_WE_SlytherinFish.ABP_WE_SlytherinFish_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SlytherinFish_AnimGraphNode_TransitionResult_A452D15F495FCD9ECB504B8C4B51BEFF // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_SlytherinFish(int32_t EntryPoint); // Function ABP_WE_SlytherinFish.ABP_WE_SlytherinFish_C.ExecuteUbergraph_ABP_WE_SlytherinFish // (Final|UbergraphFunction) // @ game+0x38a7480
};

