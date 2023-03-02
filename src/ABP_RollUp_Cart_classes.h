// AnimBlueprintGeneratedClass ABP_RollUp_Cart.ABP_RollUp_Cart_C
// Size: 0x9c3 (Inherited: 0x2c0)
struct UABP_RollUp_Cart_C : UAnimInstance {
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
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x568(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x598(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x618(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x648(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x778(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x828(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x858(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x908(0xb0)
	struct ABP_RollUp_Cart_C* Owner; // 0x9b8(0x08)
	bool ShouldOpen; // 0x9c0(0x01)
	bool ShouldPackUp; // 0x9c1(0x01)
	bool ShouldCurtainsOpen; // 0x9c2(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_90A98C4D4484AB3FEF88B6923693210E(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_90A98C4D4484AB3FEF88B6923693210E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_97A350C1490ED9E26D240F9AE5B5264D(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_97A350C1490ED9E26D240F9AE5B5264D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_049AEEB649537A64EBAF84841BB960BA(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_049AEEB649537A64EBAF84841BB960BA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_690AA2C941FA9D2E27FF6FB285BEF756(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_690AA2C941FA9D2E27FF6FB285BEF756 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_C5C6E5D34407D9AB023FFA82DA0AA024(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RollUp_Cart_AnimGraphNode_TransitionResult_C5C6E5D34407D9AB023FFA82DA0AA024 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetPackUp(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_ResetPackUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetOpen(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_ResetOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_TriggerCandles(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_TriggerCandles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CartUnpacked(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_CartUnpacked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CartFullSize(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_CartFullSize // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RepackCurtainsClosed(); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.AnimNotify_RepackCurtainsClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_RollUp_Cart(int32_t EntryPoint); // Function ABP_RollUp_Cart.ABP_RollUp_Cart_C.ExecuteUbergraph_ABP_RollUp_Cart // (Final|UbergraphFunction) // @ game+0x38a7480
};

