// AnimBlueprintGeneratedClass ABP_WE_DragonBush.ABP_WE_DragonBush_C
// Size: 0x551 (Inherited: 0x2c0)
struct UABP_WE_DragonBush_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x3f8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x470(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a0(0xb0)
	bool HitBySpell; // 0x550(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_DragonBush.ABP_WE_DragonBush_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DragonBush_AnimGraphNode_TransitionResult_CE2E08654A36F62309A753B0A8238B5E(); // Function ABP_WE_DragonBush.ABP_WE_DragonBush_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DragonBush_AnimGraphNode_TransitionResult_CE2E08654A36F62309A753B0A8238B5E // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_DragonBush(int32_t EntryPoint); // Function ABP_WE_DragonBush.ABP_WE_DragonBush_C.ExecuteUbergraph_ABP_WE_DragonBush // (Final|UbergraphFunction) // @ game+0x38a7480
};

