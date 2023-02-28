// AnimBlueprintGeneratedClass ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C
// Size: 0x108d (Inherited: 0x2c0)
struct UABP_HW_Lumos_Moth_Master_Skeleton_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x4c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x4f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x578(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x5a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x5d0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x5f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x678(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x6a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x6d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x6f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x720(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x748(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x770(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x798(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x7c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x7e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x810(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x838(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x860(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x888(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x908(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x938(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x9b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xa68(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xa98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xb18(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb48(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xbc8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xbf8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xc78(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xca8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xd28(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xd58(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe08(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xe38(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xee8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf18(0xb0)
	struct FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0xfc8(0xa0)
	bool bAwake; // 0x1068(0x01)
	bool bOrbiting; // 0x1069(0x01)
	bool bWasAwake; // 0x106a(0x01)
	char pad_106B[0x1]; // 0x106b(0x01)
	float IdleStartTime; // 0x106c(0x04)
	float TimeToIdleBreak; // 0x1070(0x04)
	int32_t IdleBreakNum; // 0x1074(0x04)
	float Y (Pitch); // 0x1078(0x04)
	float Z (Yaw); // 0x107c(0x04)
	float CurrentPitch; // 0x1080(0x04)
	float CurrentYaw; // 0x1084(0x04)
	float LerpAlpha; // 0x1088(0x04)
	bool Hovering; // 0x108c(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_EA61ECA94AB954E87BD169BD0B3EF8EB(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_EA61ECA94AB954E87BD169BD0B3EF8EB // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_608F54E445AE66315FBCB4B6463F776C(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_608F54E445AE66315FBCB4B6463F776C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_D80B40BB43133211F8F333820744B051(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_D80B40BB43133211F8F333820744B051 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_77F1A73E4D580B483751689F6D19488D(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_77F1A73E4D580B483751689F6D19488D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_807DE6044BCECD75103D02859BD338B0(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_807DE6044BCECD75103D02859BD338B0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B3891FD54AF4D708524EFB86EA25EBE9(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B3891FD54AF4D708524EFB86EA25EBE9 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_010C8999467553163B37B383D23C26EE(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_010C8999467553163B37B383D23C26EE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_394A41D244B9F9A74A96BB98EE518EBE(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_394A41D244B9F9A74A96BB98EE518EBE // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_0B07EAEA415BA5E7E888A88A3196C6AC(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_0B07EAEA415BA5E7E888A88A3196C6AC // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_05E73E504E5A9CC4EFA036BDAF8B71ED(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_05E73E504E5A9CC4EFA036BDAF8B71ED // (BlueprintEvent) // @ game+0x38a7480
	void ToggleFlying(bool bFly); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.ToggleFlying // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleOrbiting(bool bOrbit); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.ToggleOrbiting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B87BD7CF4EF5FE671D18D38CA8283A12(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B87BD7CF4EF5FE671D18D38CA8283A12 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B32670FE42E77D9CBA7E39A6985E9E04(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_B32670FE42E77D9CBA7E39A6985E9E04 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_8ABF1441430C8196E6E3A097F8673ECC(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_8ABF1441430C8196E6E3A097F8673ECC // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_26D0F8F847360C952F6900ABF1ED1772(); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton_AnimGraphNode_TransitionResult_26D0F8F847360C952F6900ABF1ED1772 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton(int32_t EntryPoint); // Function ABP_HW_Lumos_Moth_Master_Skeleton.ABP_HW_Lumos_Moth_Master_Skeleton_C.ExecuteUbergraph_ABP_HW_Lumos_Moth_Master_Skeleton // (Final|UbergraphFunction) // @ game+0x38a7480
};

