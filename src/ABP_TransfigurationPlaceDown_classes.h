// AnimBlueprintGeneratedClass ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C
// Size: 0x915 (Inherited: 0x2c0)
struct UABP_TransfigurationPlaceDown_C : UAnimInstance {
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
	struct ABP_TransfigurationPreviewPlacementAnimator_C* PlacementAnimator; // 0x908(0x08)
	int32_t SelectedAnim; // 0x910(0x04)
	bool PlaceDownComplete; // 0x914(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_PlacementImpact(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimNotify_PlacementImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_PlaceDownFinished(); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimNotify_PlaceDownFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_TransfigurationPlaceDown(int32_t EntryPoint); // Function ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.ExecuteUbergraph_ABP_TransfigurationPlaceDown // (Final|UbergraphFunction) // @ game+0x38a7480
};

