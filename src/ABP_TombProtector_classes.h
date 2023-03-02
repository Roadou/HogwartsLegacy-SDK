// AnimBlueprintGeneratedClass ABP_TombProtector.ABP_TombProtector_C
// Size: 0xaa9 (Inherited: 0x690)
struct UABP_TombProtector_C : UEnemy_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x698(0x1b0)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x848(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8f8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x928(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x9d8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0xa08(0xa0)
	bool AlwaysTrue; // 0xaa8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_TombProtector.ABP_TombProtector_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DeathStart(); // Function ABP_TombProtector.ABP_TombProtector_C.AnimNotify_DeathStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_TombProtector.ABP_TombProtector_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartupAbility(); // Function ABP_TombProtector.ABP_TombProtector_C.AnimNotify_StartupAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WeaponFireAOE1(); // Function ABP_TombProtector.ABP_TombProtector_C.AnimNotify_WeaponFireAOE1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_TombProtector(int32_t EntryPoint); // Function ABP_TombProtector.ABP_TombProtector_C.ExecuteUbergraph_ABP_TombProtector // (Final|UbergraphFunction) // @ game+0x38a7480
};

