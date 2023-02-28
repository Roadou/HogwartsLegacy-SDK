// AnimBlueprintGeneratedClass ABP_PaperAndQuill.ABP_PaperAndQuill_C
// Size: 0xb4e (Inherited: 0x2c0)
struct UABP_PaperAndQuill_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5a0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x5c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x648(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x678(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x6f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x728(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7d8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x858(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x888(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x908(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x938(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x9b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa68(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa98(0xb0)
	bool DisappearPage; // 0xb48(0x01)
	bool CollectPage; // 0xb49(0x01)
	bool Accio; // 0xb4a(0x01)
	bool Hit; // 0xb4b(0x01)
	bool HitAgain; // 0xb4c(0x01)
	bool InHit; // 0xb4d(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33 // (BlueprintEvent) // @ game+0x38a7480
	void AccioPull(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.AccioPull // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitByOtherSpell(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.HitByOtherSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpell_Entered(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpell_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpellAgain_Entered(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpellAgain_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpell_Left(); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpell_Left // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_PaperAndQuill(int32_t EntryPoint); // Function ABP_PaperAndQuill.ABP_PaperAndQuill_C.ExecuteUbergraph_ABP_PaperAndQuill // (Final|UbergraphFunction) // @ game+0x38a7480
};

