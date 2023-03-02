// AnimBlueprintGeneratedClass ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C
// Size: 0x620 (Inherited: 0x2c0)
struct UABP_HogwartsExpress_Engine_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x2f8(0xd0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x448(0x80)
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x4c8(0xd0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x598(0x80)
	struct ATrain* Train; // 0x618(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_B4C336B54E6CC11F7A34908A5486A682(); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_B4C336B54E6CC11F7A34908A5486A682 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_80C852D94A50EEBE4D2AC78028321E6F(); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_80C852D94A50EEBE4D2AC78028321E6F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_0FFDDB0045AB014B77C0A8BC19D9AB01(); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HogwartsExpress_Engine_AnimGraphNode_SequencePlayer_0FFDDB0045AB014B77C0A8BC19D9AB01 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HogwartsExpress_Engine(int32_t EntryPoint); // Function ABP_HogwartsExpress_Engine.ABP_HogwartsExpress_Engine_C.ExecuteUbergraph_ABP_HogwartsExpress_Engine // (Final|UbergraphFunction) // @ game+0x38a7480
};

