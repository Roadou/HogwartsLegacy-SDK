// AnimBlueprintGeneratedClass ABP_Tier3.ABP_Tier3_C
// Size: 0xb74 (Inherited: 0x690)
struct UABP_Tier3_C : UEnemy_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x698(0x30)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x6c8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x778(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a8(0xb0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x858(0x1b0)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0xa10(0xb0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0xac0(0xa0)
	bool AlwaysTrue; // 0xb60(0x01)
	char pad_B61[0x3]; // 0xb61(0x03)
	struct FVector GazeTargetWS; // 0xb64(0x0c)
	float GazeTargetWeight; // 0xb70(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Tier3.ABP_Tier3_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FireWand(); // Function ABP_Tier3.ABP_Tier3_C.AnimNotify_FireWand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DeathStart(); // Function ABP_Tier3.ABP_Tier3_C.AnimNotify_DeathStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_Tier3.ABP_Tier3_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartupAbility(); // Function ABP_Tier3.ABP_Tier3_C.AnimNotify_StartupAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Tier3(int32_t EntryPoint); // Function ABP_Tier3.ABP_Tier3_C.ExecuteUbergraph_ABP_Tier3 // (Final|UbergraphFunction) // @ game+0x38a7480
};

