// AnimBlueprintGeneratedClass ABP_Ghost.ABP_Ghost_C
// Size: 0xcd8 (Inherited: 0x690)
struct UABP_Ghost_C : UEnemy_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x698(0xa0)
	char pad_738[0x8]; // 0x738(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x740(0xb0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x7f0(0x1b0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9a0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xaa8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xac8(0x20)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0xae8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xb98(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xbc8(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xc78(0x30)
	bool AlwaysTrue; // 0xca8(0x01)
	char pad_CA9[0x3]; // 0xca9(0x03)
	struct FVector GazeTargetWS; // 0xcac(0x0c)
	float GazeTargetWeight; // 0xcb8(0x04)
	float GhostBobAdditiveAlpha; // 0xcbc(0x04)
	float GhostBobPlayRate; // 0xcc0(0x04)
	struct FVector ActorVelocity; // 0xcc4(0x0c)
	float GhostBobAlphaRandom; // 0xcd0(0x04)
	float GhostBobRateRandom; // 0xcd4(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Ghost.ABP_Ghost_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DeathStart(); // Function ABP_Ghost.ABP_Ghost_C.AnimNotify_DeathStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_Ghost.ABP_Ghost_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FireWand(); // Function ABP_Ghost.ABP_Ghost_C.AnimNotify_FireWand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartupAbility(); // Function ABP_Ghost.ABP_Ghost_C.AnimNotify_StartupAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Ghost.ABP_Ghost_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_Ghost.ABP_Ghost_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ghost_AnimGraphNode_ModifyBone_DB36386347550CE6BB89BD99D580960D(); // Function ABP_Ghost.ABP_Ghost_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ghost_AnimGraphNode_ModifyBone_DB36386347550CE6BB89BD99D580960D // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Ghost(int32_t EntryPoint); // Function ABP_Ghost.ABP_Ghost_C.ExecuteUbergraph_ABP_Ghost // (Final|UbergraphFunction) // @ game+0x38a7480
};

