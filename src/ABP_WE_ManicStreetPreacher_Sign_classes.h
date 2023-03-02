// AnimBlueprintGeneratedClass ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C
// Size: 0x639 (Inherited: 0x2c0)
struct UABP_WE_ManicStreetPreacher_Sign_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x348(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x460(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x548(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x578(0xb0)
	float RandAnim; // 0x628(0x04)
	float RandStartPos; // 0x62c(0x04)
	float RandAnim2; // 0x630(0x04)
	float RandStartPos2; // 0x634(0x04)
	bool ShouldSwitch; // 0x638(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRandomNumbers(bool SetSecondNums); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.SetRandomNumbers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchIdle(); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.SwitchIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetSwitch(); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.AnimNotify_ResetSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RefreshFirstNumbers(); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.AnimNotify_RefreshFirstNumbers // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_RefreshSecondNumbers(); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.AnimNotify_RefreshSecondNumbers // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_ManicStreetPreacher_Sign(int32_t EntryPoint); // Function ABP_WE_ManicStreetPreacher_Sign.ABP_WE_ManicStreetPreacher_Sign_C.ExecuteUbergraph_ABP_WE_ManicStreetPreacher_Sign // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

