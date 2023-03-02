// AnimBlueprintGeneratedClass ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C
// Size: 0x5ac (Inherited: 0x2c0)
struct UABP_WE_TF_Hippogriff_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x558(0x48)
	bool Glide; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float FlyStart; // 0x5a4(0x04)
	float FlapRate; // 0x5a8(0x04)

	void IsHippogriff(bool& IsHippogriff); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.IsHippogriff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFlapRate(float& Flap Rate); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.GetFlapRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFlyStart(float& Fly Start); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.GetFlyStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGlide(bool& Glide); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.GetGlide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFlapRate(float FlapRate); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.SetFlapRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFlyStart(float FlyStart); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.SetFlyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGlide(bool Glide); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.SetGlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_TF_Hippogriff(int32_t EntryPoint); // Function ABP_WE_TF_Hippogriff.ABP_WE_TF_Hippogriff_C.ExecuteUbergraph_ABP_WE_TF_Hippogriff // (Final|UbergraphFunction) // @ game+0x38a7480
};

