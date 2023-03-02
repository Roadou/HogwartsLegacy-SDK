// AnimBlueprintGeneratedClass ABP_Verbal_Warning_Howler.ABP_Verbal_Warning_Howler_C
// Size: 0x544 (Inherited: 0x2c0)
struct UABP_Verbal_Warning_Howler_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x320(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x450(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x480(0xb0)
	bool FinishedVoiceLine; // 0x530(0x01)
	bool ReadyToTalk; // 0x531(0x01)
	char pad_532[0x2]; // 0x532(0x02)
	float Distance; // 0x534(0x04)
	struct FVector StartPos; // 0x538(0x0c)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Verbal_Warning_Howler.ABP_Verbal_Warning_Howler_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Verbal_Warning_Howler(int32_t EntryPoint); // Function ABP_Verbal_Warning_Howler.ABP_Verbal_Warning_Howler_C.ExecuteUbergraph_ABP_Verbal_Warning_Howler // (Final|UbergraphFunction) // @ game+0x38a7480
};

