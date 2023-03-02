// AnimBlueprintGeneratedClass ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C
// Size: 0x10d8 (Inherited: 0x2c0)
struct UABP_Mooncalf_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x410(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x528(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x548(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x568(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x680(0x118)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x798(0xc8)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x860(0x118)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x978(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x9a0(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x9c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x9f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xa78(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xaa8(0xb0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xb58(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xb80(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xba8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xc28(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xc58(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xc88(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xd38(0xc8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xe00(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xe28(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe50(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xe80(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf00(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf30(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xfe0(0xc8)
	float EarTimer; // 0x10a8(0x04)
	float BlinkTimer; // 0x10ac(0x04)
	int32_t RandomEarAnimIndex; // 0x10b0(0x04)
	char pad_10B4[0x4]; // 0x10b4(0x04)
	struct TArray<struct UAnimSequence*> EarAnimations; // 0x10b8(0x10)
	float DartTimer; // 0x10c8(0x04)
	float PlayRate; // 0x10cc(0x04)
	struct UAmbulatory_AnimInstance* AnimBP; // 0x10d0(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_58F13EF848989DC7B49E3491C62BA4EA(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_58F13EF848989DC7B49E3491C62BA4EA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_E43F38374D6E4FD278273DB9202F44F0(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_E43F38374D6E4FD278273DB9202F44F0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_A8B7759E4104912FA84090AD39EC2C07(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_ApplyAdditive_A8B7759E4104912FA84090AD39EC2C07 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_41A2F9ED4E329DA1E5C2BDA4B9B0B231(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_41A2F9ED4E329DA1E5C2BDA4B9B0B231 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_4D286C214A3F9147AC13E88870FFF300(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_4D286C214A3F9147AC13E88870FFF300 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_SequencePlayer_6EDFD63D4E3FE3C3C79F92BC3D2AA9F6(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_SequencePlayer_6EDFD63D4E3FE3C3C79F92BC3D2AA9F6 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_29BC3F3B4DEADA263433C5AB73232C9E(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_29BC3F3B4DEADA263433C5AB73232C9E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_D155D9A74E86A4BAF49BA4BF11F7A0E9(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_D155D9A74E86A4BAF49BA4BF11F7A0E9 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_816C1DB4430B64376F8DCCB86F44932E(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_816C1DB4430B64376F8DCCB86F44932E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_09C33BE549AE0C0DA42A37B963365236(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mooncalf_PostProcess_AnimGraphNode_TransitionResult_09C33BE549AE0C0DA42A37B963365236 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RandomFloatEars(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.AnimNotify_RandomFloatEars // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RandomEarAnimIndex(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.AnimNotify_RandomEarAnimIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RandomFloatBlink(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.AnimNotify_RandomFloatBlink // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RandomFloatDarts(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.AnimNotify_RandomFloatDarts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Mooncalf_PostProcess(int32_t EntryPoint); // Function ABP_Mooncalf_PostProcess.ABP_Mooncalf_PostProcess_C.ExecuteUbergraph_ABP_Mooncalf_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

