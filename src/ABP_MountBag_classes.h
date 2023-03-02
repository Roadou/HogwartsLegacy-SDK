// AnimBlueprintGeneratedClass ABP_MountBag.ABP_MountBag_C
// Size: 0xec8 (Inherited: 0x2c0)
struct UABP_MountBag_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5a0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x5c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x648(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x678(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x6f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x728(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x7a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x7d8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x858(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x888(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x908(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x938(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x9b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xa68(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xa98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xb18(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xb48(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xbc8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xbf8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xc78(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xca8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xd28(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xd58(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xdd8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xe08(0xb0)
	enum class EMountTransitionAnimState MountTransitionAnimState; // 0xeb8(0x01)
	char pad_EB9[0x7]; // 0xeb9(0x07)
	struct ACreatureMountTransitionActor* MountTransitionActor; // 0xec0(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_MountBag.ABP_MountBag_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_31BB4E6A4C0680DFB0EE4482D1BC34A3(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_31BB4E6A4C0680DFB0EE4482D1BC34A3 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_9262AE9247DA5D2B022A049AE489993C(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_9262AE9247DA5D2B022A049AE489993C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_302322ED40FEBDD6E2900297E2FF7067(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_302322ED40FEBDD6E2900297E2FF7067 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_978F15564B65F5B4F8B946825D2020F6(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_978F15564B65F5B4F8B946825D2020F6 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_45A50DD94FB530005CC37CA69FB523ED(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_45A50DD94FB530005CC37CA69FB523ED // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_34C044564227B028D92538969362BDF2(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_34C044564227B028D92538969362BDF2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_C066495C408823B1B61EACA4B8CB1A0E(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_C066495C408823B1B61EACA4B8CB1A0E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_02CE04D64C2F2841FAADFBB0485A852D(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_02CE04D64C2F2841FAADFBB0485A852D // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_00F8F76F48C9E5B3E5B8D3AAE8AEAFDB(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_00F8F76F48C9E5B3E5B8D3AAE8AEAFDB // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_53255FE245CA2B3A781FDE8598B49BE1(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_53255FE245CA2B3A781FDE8598B49BE1 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_FDCDDB104EBB2ED4C59E0D959A66EA6F(); // Function ABP_MountBag.ABP_MountBag_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MountBag_AnimGraphNode_TransitionResult_FDCDDB104EBB2ED4C59E0D959A66EA6F // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_MountBag.ABP_MountBag_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_HideBag(); // Function ABP_MountBag.ABP_MountBag_C.AnimNotify_HideBag // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ShowBag(); // Function ABP_MountBag.ABP_MountBag_C.AnimNotify_ShowBag // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_MountBag.ABP_MountBag_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_MountBag(int32_t EntryPoint); // Function ABP_MountBag.ABP_MountBag_C.ExecuteUbergraph_ABP_MountBag // (Final|UbergraphFunction) // @ game+0x38a7480
};

