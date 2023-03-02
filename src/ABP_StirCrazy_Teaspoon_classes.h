// AnimBlueprintGeneratedClass ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C
// Size: 0x719 (Inherited: 0x2c0)
struct UABP_StirCrazy_Teaspoon_C : UAnimInstance {
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
	bool Clockwise?; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct ABP_StirCrazy_C* Stircrazy_REF; // 0x710(0x08)
	bool Stirring?; // 0x718(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Teaspoon_AnimGraphNode_TransitionResult_C3F8C8AA415469F26169D88187BDBFDF(); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Teaspoon_AnimGraphNode_TransitionResult_C3F8C8AA415469F26169D88187BDBFDF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Teaspoon_AnimGraphNode_TransitionResult_138A4D324B5F5DE459F9C5BBADBD75E0(); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StirCrazy_Teaspoon_AnimGraphNode_TransitionResult_138A4D324B5F5DE459F9C5BBADBD75E0 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Stop_Stirring(); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.AnimNotify_Stop_Stirring // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_StirCrazy_Teaspoon(int32_t EntryPoint); // Function ABP_StirCrazy_Teaspoon.ABP_StirCrazy_Teaspoon_C.ExecuteUbergraph_ABP_StirCrazy_Teaspoon // (Final|UbergraphFunction) // @ game+0x38a7480
};

