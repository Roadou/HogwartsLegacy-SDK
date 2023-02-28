// AnimBlueprintGeneratedClass ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C
// Size: 0x107c (Inherited: 0x690)
struct UABP_ChompingCabbage_Enemy_C : UEnemy_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x698(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x6c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x6f0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x718(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x798(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7c8(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7f0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x820(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x8d0(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x8f8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa50(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xa78(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xaa8(0xb0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xb58(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb80(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc00(0x30)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0xc30(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xce0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xd10(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xdc0(0x158)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xf18(0x158)
	bool AlwaysTrue; // 0x1070(0x01)
	char pad_1071[0x3]; // 0x1071(0x03)
	int32_t IdleIndex; // 0x1074(0x04)
	int32_t MoveIndex; // 0x1078(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_45BE584144BE360CFBE9B4A9B3FB709A(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_45BE584144BE360CFBE9B4A9B3FB709A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_6EC360D74F032226B6E4A9BC49A1F4E3(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_6EC360D74F032226B6E4A9BC49A1F4E3 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleReady(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_IdleReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_UpdateMoveAnim(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_UpdateMoveAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_90119CD747ECF94289ED9EBDFC91457A(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ChompingCabbage_Enemy_AnimGraphNode_TransitionResult_90119CD747ECF94289ED9EBDFC91457A // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Attack_End(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_Attack_End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Attack_Done(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_Attack_Done // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_AttackAnim_Done(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_AttackAnim_Done // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartupAbility(); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.AnimNotify_StartupAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_ChompingCabbage_Enemy(int32_t EntryPoint); // Function ABP_ChompingCabbage_Enemy.ABP_ChompingCabbage_Enemy_C.ExecuteUbergraph_ABP_ChompingCabbage_Enemy // (Final|UbergraphFunction) // @ game+0x38a7480
};

