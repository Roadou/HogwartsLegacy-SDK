// AnimBlueprintGeneratedClass ABP_Sanc_FreeStandingClock_Dwiz.ABP_Sanc_FreeStandingClock_Dwiz_C
// Size: 0x598 (Inherited: 0x2c0)
struct UABP_Sanc_FreeStandingClock_Dwiz_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2f8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4b8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4e8(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Sanc_FreeStandingClock_Dwiz.ABP_Sanc_FreeStandingClock_Dwiz_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Sanc_FreeStandingClock_Dwiz(int32_t EntryPoint); // Function ABP_Sanc_FreeStandingClock_Dwiz.ABP_Sanc_FreeStandingClock_Dwiz_C.ExecuteUbergraph_ABP_Sanc_FreeStandingClock_Dwiz // (Final|UbergraphFunction) // @ game+0x38a7480
};

