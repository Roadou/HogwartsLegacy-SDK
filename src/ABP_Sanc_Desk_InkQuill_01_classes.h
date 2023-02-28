// AnimBlueprintGeneratedClass ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C
// Size: 0x818 (Inherited: 0x2c0)
struct UABP_Sanc_Desk_InkQuill_01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x440(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x470(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x520(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x650(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x680(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x700(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x730(0xb0)
	struct UAnimSequence* StartFrame; // 0x7e0(0x08)
	struct UAnimSequence* Into; // 0x7e8(0x08)
	struct UAnimSequence* Loop; // 0x7f0(0x08)
	struct UAnimSequence* OutOf; // 0x7f8(0x08)
	struct UAnimSequence* EndFrame; // 0x800(0x08)
	bool Write; // 0x808(0x01)
	char pad_809[0x7]; // 0x809(0x07)
	struct ABP_Sanc_Desk_01_Parent_C* Desk; // 0x810(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_FA20906548463E5F86D5A5971CC925DA(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_FA20906548463E5F86D5A5971CC925DA // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_7EBA5F204B3BED6E2D1EFD90F6D6568B(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_7EBA5F204B3BED6E2D1EFD90F6D6568B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_A1F8C2EF47349DE93A20C5AE7ED89660(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_A1F8C2EF47349DE93A20C5AE7ED89660 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_008AE1A947DFC3C0963CF485524A2EF6(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01_AnimGraphNode_TransitionResult_008AE1A947DFC3C0963CF485524A2EF6 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetWrite(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.AnimNotify_ResetWrite // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WriteFinished(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.AnimNotify_WriteFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_WriteLoopStart(); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.AnimNotify_WriteLoopStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01(int32_t EntryPoint); // Function ABP_Sanc_Desk_InkQuill_01.ABP_Sanc_Desk_InkQuill_01_C.ExecuteUbergraph_ABP_Sanc_Desk_InkQuill_01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

