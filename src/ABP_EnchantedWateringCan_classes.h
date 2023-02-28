// AnimBlueprintGeneratedClass ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C
// Size: 0x9bb (Inherited: 0x2c0)
struct UABP_EnchantedWateringCan_C : UAnimInstance {
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
	bool Move_Into_Air?; // 0x9b8(0x01)
	bool Is_Pouring?; // 0x9b9(0x01)
	enum class E_WateringCanStates State; // 0x9ba(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_551017644634F71D4B6B28ACF1FEF6CE(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_551017644634F71D4B6B28ACF1FEF6CE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_8518D13D4CC4155E51CA478C0C355A8A(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_8518D13D4CC4155E51CA478C0C355A8A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_D4DBA8964BB05B2558A72EABF7D54184(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_D4DBA8964BB05B2558A72EABF7D54184 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_E6E864844B2DA5A10E992BBB0F92B8AF(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_E6E864844B2DA5A10E992BBB0F92B8AF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_F895E7DA4BE72A23D7D605BAB2C61AE4(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_F895E7DA4BE72A23D7D605BAB2C61AE4 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_90A8ED9E4638250E1471758B95C9DC50(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_90A8ED9E4638250E1471758B95C9DC50 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_FD1F967142D5B45F5A88AEB5B0F5F3C7(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_FD1F967142D5B45F5A88AEB5B0F5F3C7 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_6C365AAF44D235BD6BD94ABF937DD3E4(); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnchantedWateringCan_AnimGraphNode_TransitionResult_6C365AAF44D235BD6BD94ABF937DD3E4 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_EnchantedWateringCan(int32_t EntryPoint); // Function ABP_EnchantedWateringCan.ABP_EnchantedWateringCan_C.ExecuteUbergraph_ABP_EnchantedWateringCan // (Final|UbergraphFunction) // @ game+0x38a7480
};

