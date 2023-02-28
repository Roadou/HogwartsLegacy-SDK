// AnimBlueprintGeneratedClass ABP_SlytherinEntrance_Doorway.ABP_SlytherinEntrance_Doorway_C
// Size: 0x659 (Inherited: 0x2c0)
struct UABP_SlytherinEntrance_Doorway_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x468(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x498(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x548(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x578(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5a8(0xb0)
	bool bOpen; // 0x658(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SlytherinEntrance_Doorway.ABP_SlytherinEntrance_Doorway_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_SlytherinEntrance_Doorway(int32_t EntryPoint); // Function ABP_SlytherinEntrance_Doorway.ABP_SlytherinEntrance_Doorway_C.ExecuteUbergraph_ABP_SlytherinEntrance_Doorway // (Final|UbergraphFunction) // @ game+0x38a7480
};

