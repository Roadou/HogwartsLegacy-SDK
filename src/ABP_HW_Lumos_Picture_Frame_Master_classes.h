// AnimBlueprintGeneratedClass ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C
// Size: 0x1024 (Inherited: 0x2c0)
struct UABP_HW_Lumos_Picture_Frame_Master_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x618(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x640(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x6c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x6f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x770(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x7a0(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x850(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x880(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x900(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x930(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x9b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x9e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xa60(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa90(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xb10(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xb40(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xbc0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xbf0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xc70(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xca0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xd20(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xd50(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xdd0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xe00(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe80(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xeb0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf30(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf60(0xb0)
	bool PlayIdleBreak; // 0x1010(0x01)
	char pad_1011[0x3]; // 0x1011(0x03)
	int32_t IdleBreakNum; // 0x1014(0x04)
	bool IsActivated; // 0x1018(0x01)
	bool IsComplete; // 0x1019(0x01)
	char pad_101A[0x2]; // 0x101a(0x02)
	float IdleBreakTime; // 0x101c(0x04)
	float CurrentTime; // 0x1020(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6FE2E85344A4729AB79BFEA165A418C3(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6FE2E85344A4729AB79BFEA165A418C3 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_E6A4C3754AA24311D99EAC8EB698E95B(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_E6A4C3754AA24311D99EAC8EB698E95B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_A6521CDD4CA042198B23BB86A0FAE4AE(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_A6521CDD4CA042198B23BB86A0FAE4AE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_83F2E7B6437625841D9CB2B135691A6F(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_83F2E7B6437625841D9CB2B135691A6F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_D8D9141C4302A78B45CC819C5858733D(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_D8D9141C4302A78B45CC819C5858733D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_053B9B9D43F4827E01BB09ACF0A9F4B5(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_053B9B9D43F4827E01BB09ACF0A9F4B5 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_D104EBAE46F4A07C587657A1C8DE6160(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_D104EBAE46F4A07C587657A1C8DE6160 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_EC58B1A34552D57DA2C98EA46DB78138(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_EC58B1A34552D57DA2C98EA46DB78138 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_0809987541FB11BE79BED0B4E12EBC56(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_0809987541FB11BE79BED0B4E12EBC56 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_B1483DB44B4FFF3EA6F1CA9EA733279C(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_B1483DB44B4FFF3EA6F1CA9EA733279C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6985AFF54044CD4402493FAB234DFFEC(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6985AFF54044CD4402493FAB234DFFEC // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_87A3788E4D5AF53AF9E46498D07510FF(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_87A3788E4D5AF53AF9E46498D07510FF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_2F1C7A3845628E9FB715B9A93CF78537(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_2F1C7A3845628E9FB715B9A93CF78537 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_DFDF93FE4A7BF4051DEF76804475B36A(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_DFDF93FE4A7BF4051DEF76804475B36A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_C902A15D4081EFFADBEB6CAD89EF8CA8(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_C902A15D4081EFFADBEB6CAD89EF8CA8 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6BD0991B43D7AA97C16B5CA58E88FEA2(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_6BD0991B43D7AA97C16B5CA58E88FEA2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_2DBE4CCD402F3BD4CBF379A1076B511F(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_2DBE4CCD402F3BD4CBF379A1076B511F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_5C1905CD478FC5E659ED4DA406BB7A24(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master_AnimGraphNode_TransitionResult_5C1905CD478FC5E659ED4DA406BB7A24 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak1(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak2(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak3(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak4(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak5(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak5 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak6(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak6 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak7(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak7 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_IdleBreak8(); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.AnimNotify_IdleBreak8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master(int32_t EntryPoint); // Function ABP_HW_Lumos_Picture_Frame_Master.ABP_HW_Lumos_Picture_Frame_Master_C.ExecuteUbergraph_ABP_HW_Lumos_Picture_Frame_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

