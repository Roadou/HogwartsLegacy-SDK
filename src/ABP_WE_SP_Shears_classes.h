// AnimBlueprintGeneratedClass ABP_WE_SP_Shears.ABP_WE_SP_Shears_C
// Size: 0x760 (Inherited: 0x2c0)
struct UABP_WE_SP_Shears_C : UAnimInstance {
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
	struct ABP_PruningPotPlants_C* Shears_REF; // 0x758(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_8CCA2C4C4B6DDD91DC38419A19EC69CA(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_8CCA2C4C4B6DDD91DC38419A19EC69CA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_F55041C1411D7FEDA374DDB592688FD3(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_F55041C1411D7FEDA374DDB592688FD3 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_789912954221A11A830197AC3B180677(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_789912954221A11A830197AC3B180677 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_68850D204C76EE52A228878F2D6C50D4(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_SP_Shears_AnimGraphNode_TransitionResult_68850D204C76EE52A228878F2D6C50D4 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SpawnCuttings(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.AnimNotify_SpawnCuttings // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SPP_Stop_Snipping(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.AnimNotify_SPP_Stop_Snipping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_SP_Shears(int32_t EntryPoint); // Function ABP_WE_SP_Shears.ABP_WE_SP_Shears_C.ExecuteUbergraph_ABP_WE_SP_Shears // (Final|UbergraphFunction) // @ game+0x38a7480
};

