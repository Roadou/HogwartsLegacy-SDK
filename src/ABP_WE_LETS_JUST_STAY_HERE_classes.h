// AnimBlueprintGeneratedClass ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C
// Size: 0x1410 (Inherited: 0x2c0)
struct UABP_WE_LETS_JUST_STAY_HERE_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x408(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x430(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x458(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x480(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x4a8(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x4d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x500(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x580(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x600(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x6a0(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x6d0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x6f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x798(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x818(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x898(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x8c8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x968(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xa68(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa98(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xb18(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xb98(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xc38(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xc68(0xb0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xd18(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xd40(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xdc0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xdf0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xe70(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xef0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xf70(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xff0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1090(0xa0)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x1130(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x11d0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1200(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x12b0(0xa0)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x1350(0xb0)
	struct ABP_WE_LetsJustStayHere_scene_C* Owner Actor; // 0x1400(0x08)
	int32_t WatchingSunset Variation index; // 0x1408(0x04)
	bool GhostExitSequence; // 0x140c(0x01)
	bool Sunset?; // 0x140d(0x01)
	bool Ghost Actor A or B?; // 0x140e(0x01)
	bool DancePartnerReady?; // 0x140f(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DanceStarted(); // Function ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C.AnimNotify_DanceStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DanceFinished(); // Function ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C.AnimNotify_DanceFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_GhostExitComplete(); // Function ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C.AnimNotify_GhostExitComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_LETS_JUST_STAY_HERE(int32_t EntryPoint); // Function ABP_WE_LETS_JUST_STAY_HERE.ABP_WE_LETS_JUST_STAY_HERE_C.ExecuteUbergraph_ABP_WE_LETS_JUST_STAY_HERE // (Final|UbergraphFunction) // @ game+0x38a7480
};
