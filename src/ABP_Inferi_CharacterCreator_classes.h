// AnimBlueprintGeneratedClass ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C
// Size: 0x815 (Inherited: 0x2c0)
struct UABP_Inferi_CharacterCreator_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x578(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5a8(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x690(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6c0(0xb0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x770(0xa0)
	float Speed; // 0x810(0x04)
	enum class EPhysicalSurface SurfaceType; // 0x814(0x01)

	void SetPaused(bool bPaused, bool& Result); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.SetPaused // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpeed(float Speed, bool& Result); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.SetSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType, bool& Result); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.SetSurfaceType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySoundForFootImpact(struct FName ImpactType); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.PlaySoundForFootImpact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_SequencePlayer_489B3F414234890E59007EA9FE60DFAA(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_SequencePlayer_489B3F414234890E59007EA9FE60DFAA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_ED0CFE4E40557AE92C85E1A03FF0C51E(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_ED0CFE4E40557AE92C85E1A03FF0C51E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_C2ED47754476FD840A928CB960EF9389(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_C2ED47754476FD840A928CB960EF9389 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_71AAB60145CA8A40A3103C9E004FC940(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_71AAB60145CA8A40A3103C9E004FC940 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_7D0C7D6348F9F47FD3528F8053D8CF4F(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Inferi_CharacterCreator_AnimGraphNode_TransitionResult_7D0C7D6348F9F47FD3528F8053D8CF4F // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Walk(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.AnimNotify_Walk // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Run(); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.AnimNotify_Run // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Inferi_CharacterCreator(int32_t EntryPoint); // Function ABP_Inferi_CharacterCreator.ABP_Inferi_CharacterCreator_C.ExecuteUbergraph_ABP_Inferi_CharacterCreator // (Final|UbergraphFunction) // @ game+0x38a7480
};

