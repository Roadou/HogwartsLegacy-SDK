// AnimBlueprintGeneratedClass ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C
// Size: 0xbc8 (Inherited: 0x2c0)
struct UABP_RoHT_EyeStand_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2f8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x400(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x420(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x440(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x468(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x490(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4b8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x560(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x590(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x610(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x640(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x770(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a0(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x850(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x958(0x108)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xa60(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb20(0x80)
	bool bIsAwake; // 0xba0(0x01)
	bool bIsFrozen; // 0xba1(0x01)
	char pad_BA2[0x2]; // 0xba2(0x02)
	struct FRotator LookAtRotation; // 0xba4(0x0c)
	struct FRotator LookAtRotationEyeball; // 0xbb0(0x0c)
	float EyeballHeight; // 0xbbc(0x04)
	bool CanBlink; // 0xbc0(0x01)
	char pad_BC1[0x3]; // 0xbc1(0x03)
	float TimeDilation; // 0xbc4(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateRotationSpeed(struct FRotator PreviousRotation, struct FRotator NewRotation, float DeltaTime, float& DegreesPerSecond); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.CalculateRotationSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Look at Rotation(float DeltaTime, struct FRotator& Rotation); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.Get Look at Rotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_LayeredBoneBlend_1377604A4F63F2D4F1930CB6085D7786(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_LayeredBoneBlend_1377604A4F63F2D4F1930CB6085D7786 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_93E376734911CF75134A17A469FB2B2E(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_93E376734911CF75134A17A469FB2B2E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_ModifyBone_918FCCC94CCAC5C5AD2827A620C34B41(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_ModifyBone_918FCCC94CCAC5C5AD2827A620C34B41 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_F673C66842626F71264BAC813D8B633A(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_F673C66842626F71264BAC813D8B633A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_36F5898B4A6C9FFF1C83B0A712B60428(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_36F5898B4A6C9FFF1C83B0A712B60428 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_2974671945AE2E66E73CF6A2F5FFFA58(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_SequencePlayer_2974671945AE2E66E73CF6A2F5FFFA58 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_F324F382458A883B21BD6AA40BDF2A25(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_F324F382458A883B21BD6AA40BDF2A25 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_9675722C4887D91428867ABCC23215D1(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RoHT_EyeStand_AnimGraphNode_TransitionResult_9675722C4887D91428867ABCC23215D1 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WakeUp(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.WakeUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToSleep(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.GoToSleep // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Freeze(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.Freeze // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Thaw(); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.Thaw // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_RoHT_EyeStand(int32_t EntryPoint); // Function ABP_RoHT_EyeStand.ABP_RoHT_EyeStand_C.ExecuteUbergraph_ABP_RoHT_EyeStand // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

