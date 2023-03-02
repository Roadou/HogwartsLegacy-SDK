// AnimBlueprintGeneratedClass ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C
// Size: 0x669 (Inherited: 0x2c0)
struct UABP_StirCrazy_Spoon_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x578(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5a8(0xb0)
	bool Clockwise?; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct ABP_StirCrazy_C* Stircrazy_REF; // 0x660(0x08)
	bool Stirring?; // 0x668(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Spoon_AnimGraphNode_TransitionResult_FDA44C634C6B5EC772D30C888B7F7C63(); // Function ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Spoon_AnimGraphNode_TransitionResult_FDA44C634C6B5EC772D30C888B7F7C63 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Spoon_AnimGraphNode_TransitionResult_E2079F2E407D4FF1ECE095805D1A6935(); // Function ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Spoon_AnimGraphNode_TransitionResult_E2079F2E407D4FF1ECE095805D1A6935 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_StirCrazy_Spoon(int32_t EntryPoint); // Function ABP_StirCrazy_Spoon.ABP_StirCrazy_Spoon_C.ExecuteUbergraph_ABP_StirCrazy_Spoon // (Final|UbergraphFunction) // @ game+0x38a7480
};

