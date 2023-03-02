// AnimBlueprintGeneratedClass ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C
// Size: 0x918 (Inherited: 0x2c0)
struct UABP_WE_HungryForRubbish_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x410(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x568(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x598(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x618(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x648(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x6c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x778(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x828(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x858(0xb0)
	bool Waiting?; // 0x908(0x01)
	bool Eating?; // 0x909(0x01)
	bool Burping?; // 0x90a(0x01)
	char pad_90B[0x5]; // 0x90b(0x05)
	struct ABP_WE_HungryForRubbish_Bin_C* Actor ref; // 0x910(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Burp Timer(float Min, float Max); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.Set Burp Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BurpTimer(); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.BurpTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_BackToIdle(); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.AnimNotify_BackToIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartedBurp(); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.AnimNotify_StartedBurp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_LeavingIdle(); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.AnimNotify_LeavingIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_HungryForRubbish(int32_t EntryPoint); // Function ABP_WE_HungryForRubbish.ABP_WE_HungryForRubbish_C.ExecuteUbergraph_ABP_WE_HungryForRubbish // (Final|UbergraphFunction) // @ game+0x38a7480
};

