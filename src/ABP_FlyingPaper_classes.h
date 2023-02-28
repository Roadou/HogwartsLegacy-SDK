// AnimBlueprintGeneratedClass ABP_FlyingPaper.ABP_FlyingPaper_C
// Size: 0x1022 (Inherited: 0x2c0)
struct UABP_FlyingPaper_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x618(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x640(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x668(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x690(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x6b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x6e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x708(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x730(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x758(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x780(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x800(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x830(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x8b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x8e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x960(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x990(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0xa10(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa40(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xac0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xaf0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xb70(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xba0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xc20(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xc50(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xcd0(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xd00(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xd30(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xd58(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xdd8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xe08(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe88(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xeb8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf38(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf68(0xb0)
	bool bStart; // 0x1018(0x01)
	bool bHit; // 0x1019(0x01)
	bool bHitAgain; // 0x101a(0x01)
	bool bPanic; // 0x101b(0x01)
	bool bAccio; // 0x101c(0x01)
	bool bFlap; // 0x101d(0x01)
	bool bAppear; // 0x101e(0x01)
	bool bCollect; // 0x101f(0x01)
	bool InHit; // 0x1020(0x01)
	bool PanicOver; // 0x1021(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_8C30EEE2497030A59E459E9127BCE267(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_8C30EEE2497030A59E459E9127BCE267 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_3F6D76C843E78A3DA7E4D2847A1FF017(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_3F6D76C843E78A3DA7E4D2847A1FF017 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_4DFD4A5B45DF475DF7D02886F68486C3(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_4DFD4A5B45DF475DF7D02886F68486C3 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_F7DFBADA4941C2CA986DDD88CC5F3AF8(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_F7DFBADA4941C2CA986DDD88CC5F3AF8 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_691FC90E436FE95D9D7C3F8E74604505(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_691FC90E436FE95D9D7C3F8E74604505 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_D2BA77C944093553750E4C8D4B7D20BE(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_D2BA77C944093553750E4C8D4B7D20BE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_48CFD5604FBF218FFAA51BB42428D971(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlyingPaper_AnimGraphNode_TransitionResult_48CFD5604FBF218FFAA51BB42428D971 // (BlueprintEvent) // @ game+0x38a7480
	void StartFlight(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.StartFlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PaperHit(bool bHit); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.PaperHit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PaperPanic(bool bPanic); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.PaperPanic // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioPull(bool bStart); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.AccioPull // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Soar(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.Soar // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Flap(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.Flap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpell_Entered(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.AnimNotify_HitBySpell_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitByOtherSpell(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.HitByOtherSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpellAgain_Entered(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.AnimNotify_HitBySpellAgain_Entered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HitBySpell_Left(); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.AnimNotify_HitBySpell_Left // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_FlyingPaper(int32_t EntryPoint); // Function ABP_FlyingPaper.ABP_FlyingPaper_C.ExecuteUbergraph_ABP_FlyingPaper // (Final|UbergraphFunction) // @ game+0x38a7480
};

