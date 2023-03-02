// AnimBlueprintGeneratedClass ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C
// Size: 0xdc0 (Inherited: 0x2c0)
struct UABP_WE_Mirage_Actor_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x618(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x640(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x668(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x6e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x718(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x798(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x7c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x848(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x878(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x8f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x928(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x9a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x9d8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xa58(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xa88(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xb08(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xb38(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xbb8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xbe8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xc68(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc98(0xb0)
	struct TArray<struct UAnimSequence*> AnimIdleStages; // 0xd48(0x10)
	struct UAnimSequence* AnimDamagedFull; // 0xd58(0x08)
	struct TArray<struct UAnimSequence*> AnimDamagedStages; // 0xd60(0x10)
	struct UAnimSequence* AnimRepairFull; // 0xd70(0x08)
	struct TArray<struct UAnimSequence*> AnimRepairStages; // 0xd78(0x10)
	struct UAnimSequence* AnimTurn; // 0xd88(0x08)
	struct UAnimSequence* AnimReactionFriendly; // 0xd90(0x08)
	struct UAnimSequence* AnimReactionGrateful; // 0xd98(0x08)
	struct UAnimSequence* AnimReactionAngry; // 0xda0(0x08)
	struct ABP_WE_Mirage_Actor_C* OwnerBP; // 0xda8(0x08)
	bool IsDamaged; // 0xdb0(0x01)
	bool IsDamagedFull; // 0xdb1(0x01)
	bool IsRepaired; // 0xdb2(0x01)
	bool IsReactingFriendly; // 0xdb3(0x01)
	bool IsReactingGrateful; // 0xdb4(0x01)
	bool IsReactingAngry; // 0xdb5(0x01)
	bool ShouldTurn; // 0xdb6(0x01)
	char pad_DB7[0x1]; // 0xdb7(0x01)
	int32_t DestructionStage; // 0xdb8(0x04)
	int32_t DestructionStageIdle; // 0xdbc(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_1B9FB9E04E81A7ED6FA7C0BE294BAE37(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_1B9FB9E04E81A7ED6FA7C0BE294BAE37 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_6B844E84442CD1865747A1AC0C4B13FF(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_6B844E84442CD1865747A1AC0C4B13FF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_651847D64F698324882C338900251C7D(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_651847D64F698324882C338900251C7D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_E30209B44F7B8E5A83C6949992F4BB8F(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_E30209B44F7B8E5A83C6949992F4BB8F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_F354B0644B18818D294B2D9870476F91(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_F354B0644B18818D294B2D9870476F91 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_B9C07778439B5B000266EEAFBC8138EB(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_SequencePlayer_B9C07778439B5B000266EEAFBC8138EB // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_C4C153504FFB0E39EDF132B6987E4FAA(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_C4C153504FFB0E39EDF132B6987E4FAA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_2EDB859349D59883118047A45B75C9C8(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_2EDB859349D59883118047A45B75C9C8 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_C88B058B4545BE499DB7B698CAB81BD1(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_C88B058B4545BE499DB7B698CAB81BD1 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_B0FDEF9340B929F34F6D25B1AF944311(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_B0FDEF9340B929F34F6D25B1AF944311 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_FBA0D46B4B2A286C118B68B016E9B35E(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_FBA0D46B4B2A286C118B68B016E9B35E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_EEDB2696438779C8E8FA76B3AD982940(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_EEDB2696438779C8E8FA76B3AD982940 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetDamaged(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_ResetDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetReaction(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_ResetReaction // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetRepair(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_ResetRepair // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveOwnerInfo(struct ABP_WE_Mirage_Actor_C* OwnerBP); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.ReceiveOwnerInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ThrowObject(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_ThrowObject // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_GrabObject(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_GrabObject // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartTurn(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_StartTurn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_52BD119649B22B01DFEEC7A38504989B(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_Mirage_Actor_AnimGraphNode_TransitionResult_52BD119649B22B01DFEEC7A38504989B // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetTurn(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_ResetTurn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SetDestructionStage(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_SetDestructionStage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FinishDamageAnimating(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_FinishDamageAnimating // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CheckRepair(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_CheckRepair // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FinishFullRepair(); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.AnimNotify_FinishFullRepair // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_Mirage_Actor(int32_t EntryPoint); // Function ABP_WE_Mirage_Actor.ABP_WE_Mirage_Actor_C.ExecuteUbergraph_ABP_WE_Mirage_Actor // (Final|UbergraphFunction) // @ game+0x38a7480
};

