// AnimBlueprintGeneratedClass ABP_GiantClock.ABP_GiantClock_C
// Size: 0x458 (Inherited: 0x2c0)
struct UABP_GiantClock_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x378(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3a8(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GiantClock.ABP_GiantClock_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_NotifyWhoosh(); // Function ABP_GiantClock.ABP_GiantClock_C.AnimNotify_NotifyWhoosh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_GiantClock(int32_t EntryPoint); // Function ABP_GiantClock.ABP_GiantClock_C.ExecuteUbergraph_ABP_GiantClock // (Final|UbergraphFunction) // @ game+0x38a7480
};

