// AnimBlueprintGeneratedClass ABP_AlohomoraLock.ABP_AlohomoraLock_C
// Size: 0xae5 (Inherited: 0x2c0)
struct UABP_AlohomoraLock_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x478(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x4a8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x568(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5e8(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x668(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x728(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7a8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d8(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x888(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x990(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9b0(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xab8(0x20)
	bool RightStick; // 0xad8(0x01)
	bool LeftStick; // 0xad9(0x01)
	bool IsUnlocked; // 0xada(0x01)
	char pad_ADB[0x1]; // 0xadb(0x01)
	float OuterRot; // 0xadc(0x04)
	float InnerRot; // 0xae0(0x04)
	bool BeginZoom; // 0xae4(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52(); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_AlohomoraLock(int32_t EntryPoint); // Function ABP_AlohomoraLock.ABP_AlohomoraLock_C.ExecuteUbergraph_ABP_AlohomoraLock // (Final|UbergraphFunction) // @ game+0x38a7480
};

