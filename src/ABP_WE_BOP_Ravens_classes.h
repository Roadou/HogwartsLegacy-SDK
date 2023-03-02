// AnimBlueprintGeneratedClass ABP_WE_BOP_Ravens.ABP_WE_BOP_Ravens_C
// Size: 0x5a1 (Inherited: 0x2c0)
struct UABP_WE_BOP_Ravens_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x558(0x48)
	bool Glide; // 0x5a0(0x01)

	void GetBirdGlide(bool& Glide); // Function ABP_WE_BOP_Ravens.ABP_WE_BOP_Ravens_C.GetBirdGlide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_BOP_Ravens.ABP_WE_BOP_Ravens_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBirdGlide(bool Glide?); // Function ABP_WE_BOP_Ravens.ABP_WE_BOP_Ravens_C.SetBirdGlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_BOP_Ravens(int32_t EntryPoint); // Function ABP_WE_BOP_Ravens.ABP_WE_BOP_Ravens_C.ExecuteUbergraph_ABP_WE_BOP_Ravens // (Final|UbergraphFunction) // @ game+0x38a7480
};

