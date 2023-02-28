// AnimBlueprintGeneratedClass ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C
// Size: 0x116d (Inherited: 0x2c0)
struct UABP_DisillusionmentChest_Master_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x618(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x640(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x668(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x690(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x6b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x738(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x768(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x7e8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x818(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x840(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x8c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x8f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x970(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x9a0(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xa50(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa80(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xb00(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xb30(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xbb0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xbe0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xc60(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xc90(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xd10(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xd40(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xdc0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xdf0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe70(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xea0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf20(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf50(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1000(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1108(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1128(0x20)
	struct FRotator EyeballRotation; // 0x1148(0x0c)
	bool Awake; // 0x1154(0x01)
	bool Locked; // 0x1155(0x01)
	bool Open; // 0x1156(0x01)
	bool ShouldBlink; // 0x1157(0x01)
	float DeltaSec; // 0x1158(0x04)
	float LastBlinkTime; // 0x115c(0x04)
	float TimeToNextBlink; // 0x1160(0x04)
	bool Suspect; // 0x1164(0x01)
	char pad_1165[0x3]; // 0x1165(0x03)
	float StartOpenPosition; // 0x1168(0x04)
	bool OpenImmediately; // 0x116c(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_1FF298B2445F745133E7A2B900AB98C8(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_1FF298B2445F745133E7A2B900AB98C8 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_E82E55BA4677348461DE51AD8482F90F(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_E82E55BA4677348461DE51AD8482F90F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_CADB3D1E468B3F7942BACE84AA4ED08B(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_CADB3D1E468B3F7942BACE84AA4ED08B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_0F3B794E452708CBD0A965BB06597664(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_0F3B794E452708CBD0A965BB06597664 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_97219A4249903E84163004A370E22023(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_97219A4249903E84163004A370E22023 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_3C0060464074DFA0E44EDA8D46F23F7D(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_3C0060464074DFA0E44EDA8D46F23F7D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_18A73F4B4BC3A093AA940891CC66CE7B(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_18A73F4B4BC3A093AA940891CC66CE7B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_5414AAC545B0504AAB4D0A83EF918AD5(); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DisillusionmentChest_Master_AnimGraphNode_TransitionResult_5414AAC545B0504AAB4D0A83EF918AD5 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_DisillusionmentChest_Master(int32_t EntryPoint); // Function ABP_DisillusionmentChest_Master.ABP_DisillusionmentChest_Master_C.ExecuteUbergraph_ABP_DisillusionmentChest_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

