// AnimBlueprintGeneratedClass ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C
// Size: 0x908 (Inherited: 0x510)
struct UABP_WE_PWF_Baton_C : UAble_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x518(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x548(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x570(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x598(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x610(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x638(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x6b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x768(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x798(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x818(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x848(0xb0)
	bool CanHighThrow; // 0x8f8(0x01)
	bool CanGiveUp; // 0x8f9(0x01)
	char pad_8FA[0x6]; // 0x8fa(0x06)
	struct ABP_PlayingWithFire_C* OwnerActor; // 0x900(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_BeginTorchGiveUp(); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.AnimNotify_BeginTorchGiveUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_BeginTorchHighThrow(); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.AnimNotify_BeginTorchHighThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DropFirstBaton(); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.AnimNotify_DropFirstBaton // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DropRemainingBatons(); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.AnimNotify_DropRemainingBatons // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_PWF_Baton(int32_t EntryPoint); // Function ABP_WE_PWF_Baton.ABP_WE_PWF_Baton_C.ExecuteUbergraph_ABP_WE_PWF_Baton // (Final|UbergraphFunction) // @ game+0x38a7480
};

