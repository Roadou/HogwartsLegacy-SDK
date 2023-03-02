// AnimBlueprintGeneratedClass ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C
// Size: 0x80a (Inherited: 0x2c0)
struct UABP_StirCrazy_Pot_Lid_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x498(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x518(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x548(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x678(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x728(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x758(0xb0)
	bool Simmer?; // 0x808(0x01)
	bool Open_Lid?; // 0x809(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Pot_Lid_AnimGraphNode_TransitionResult_E7024C4C49CE814F4356AA9B54702FA9(); // Function ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Pot_Lid_AnimGraphNode_TransitionResult_E7024C4C49CE814F4356AA9B54702FA9 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Pot_Lid_AnimGraphNode_TransitionResult_39B1588247882194FD468CA7CD4439FE(); // Function ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Pot_Lid_AnimGraphNode_TransitionResult_39B1588247882194FD468CA7CD4439FE // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_StirCrazy_Pot_Lid(int32_t EntryPoint); // Function ABP_StirCrazy_Pot_Lid.ABP_StirCrazy_Pot_Lid_C.ExecuteUbergraph_ABP_StirCrazy_Pot_Lid // (Final|UbergraphFunction) // @ game+0x38a7480
};

