// AnimBlueprintGeneratedClass ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C
// Size: 0x931 (Inherited: 0x2c0)
struct UABP_WE_PlayingWithFire_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x408(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x430(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x458(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x480(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x4a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4d0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x578(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x628(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x658(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6d8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x708(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x788(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7b8(0xb0)
	char pad_868[0x8]; // 0x868(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x870(0xb0)
	struct ABP_PlayingWithFire_C* Owner Actor; // 0x920(0x08)
	bool ReadyToExit?; // 0x928(0x01)
	bool CanHighThrow; // 0x929(0x01)
	char pad_92A[0x2]; // 0x92a(0x02)
	int32_t ThrowChance; // 0x92c(0x04)
	bool NewVar_1; // 0x930(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Begin DropProps Event(); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.AnimNotify_Begin DropProps Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_JuggleFinished(); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.AnimNotify_JuggleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_BeginHighThrow(); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.AnimNotify_BeginHighThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DiveFinished(); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.AnimNotify_DiveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_PlayingWithFire(int32_t EntryPoint); // Function ABP_WE_PlayingWithFire.ABP_WE_PlayingWithFire_C.ExecuteUbergraph_ABP_WE_PlayingWithFire // (Final|UbergraphFunction) // @ game+0x38a7480
};

