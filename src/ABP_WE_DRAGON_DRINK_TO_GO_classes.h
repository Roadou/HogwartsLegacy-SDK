// AnimBlueprintGeneratedClass ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C
// Size: 0x804 (Inherited: 0x2c0)
struct UABP_WE_DRAGON_DRINK_TO_GO_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3c8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x488(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x508(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x538(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b8(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x638(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x700(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x730(0xb0)
	float FlapGlideAlpha; // 0x7e0(0x04)
	float FlapPlayRate; // 0x7e4(0x04)
	bool DragonDrinking; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct FMulticastInlineDelegate CameraShake; // 0x7f0(0x10)
	float DragonDrinkToFlyBlend; // 0x800(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_DRINK_TO_GO_AnimGraphNode_TransitionResult_6C3D51BC4103FA8F7E32349166386CEB(); // Function ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WE_DRAGON_DRINK_TO_GO_AnimGraphNode_TransitionResult_6C3D51BC4103FA8F7E32349166386CEB // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Camera Shake(); // Function ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C.AnimNotify_Camera Shake // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_DRAGON_DRINK_TO_GO(int32_t EntryPoint); // Function ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C.ExecuteUbergraph_ABP_WE_DRAGON_DRINK_TO_GO // (Final|UbergraphFunction) // @ game+0x38a7480
	void CameraShake__DelegateSignature(); // Function ABP_WE_DRAGON_DRINK_TO_GO.ABP_WE_DRAGON_DRINK_TO_GO_C.CameraShake__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

