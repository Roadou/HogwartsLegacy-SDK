// AnimBlueprintGeneratedClass ABP_Animated_Statue_Shadows_Experience.ABP_Animated_Statue_Shadows_Experience_C
// Size: 0x8aa (Inherited: 0x510)
struct UABP_Animated_Statue_Shadows_Experience_C : UAble_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x518(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x548(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x570(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x598(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x668(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x698(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x718(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x748(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7f8(0xb0)
	bool IsAttacking; // 0x8a8(0x01)
	bool IsHowling; // 0x8a9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Animated_Statue_Shadows_Experience.ABP_Animated_Statue_Shadows_Experience_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_TansitionToAttack(); // Function ABP_Animated_Statue_Shadows_Experience.ABP_Animated_Statue_Shadows_Experience_C.AnimNotify_TansitionToAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_TransitionToHowl(); // Function ABP_Animated_Statue_Shadows_Experience.ABP_Animated_Statue_Shadows_Experience_C.AnimNotify_TransitionToHowl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Animated_Statue_Shadows_Experience(int32_t EntryPoint); // Function ABP_Animated_Statue_Shadows_Experience.ABP_Animated_Statue_Shadows_Experience_C.ExecuteUbergraph_ABP_Animated_Statue_Shadows_Experience // (Final|UbergraphFunction) // @ game+0x38a7480
};

