// AnimBlueprintGeneratedClass ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C
// Size: 0x760 (Inherited: 0x2c0)
struct UABP_WE_SP_Secateurs_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x578(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x628(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x658(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x708(0x48)
	bool Float?; // 0x750(0x01)
	bool Snipping?; // 0x751(0x01)
	enum class E_PruningPotPlants_State State; // 0x752(0x01)
	char pad_753[0x5]; // 0x753(0x05)
	struct ABP_PruningPotPlants_C* Secateurs_REF; // 0x758(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_E16E56B8422AEE1F43F435BF2E62C6DE(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_E16E56B8422AEE1F43F435BF2E62C6DE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_4F1ACBFA497A08170BDD569622B9E8F7(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_4F1ACBFA497A08170BDD569622B9E8F7 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_C7E88DCA482415B35185D6AF1EF3BE06(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_C7E88DCA482415B35185D6AF1EF3BE06 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_46E4C035448640FAC2B22F9125CA8424(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Secateurs_AnimGraphNode_TransitionResult_46E4C035448640FAC2B22F9125CA8424 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SpawnCuttings(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.AnimNotify_SpawnCuttings // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SPP_Stop_Snipping(); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.AnimNotify_SPP_Stop_Snipping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_SP_Secateurs(int32_t EntryPoint); // Function ABP_WE_SP_Secateurs.ABP_WE_SP_Secateurs_C.ExecuteUbergraph_ABP_WE_SP_Secateurs // (Final|UbergraphFunction) // @ game+0x38a7480
};

