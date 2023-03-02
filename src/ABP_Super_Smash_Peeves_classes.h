// AnimBlueprintGeneratedClass ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C
// Size: 0xcaa (Inherited: 0x2c0)
struct UABP_Super_Smash_Peeves_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x578(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x5a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x620(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x650(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x6d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x700(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x780(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x7b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x830(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x860(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x8e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x910(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x990(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x9c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xa40(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa70(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xaf0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb20(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xba0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xbd0(0xb0)
	struct ABP_Super_Smash_Peeves_C* Peeves_REF; // 0xc80(0x08)
	bool Is_Reloading?; // 0xc88(0x01)
	bool Is_Throwing?; // 0xc89(0x01)
	bool Right?; // 0xc8a(0x01)
	bool Left?; // 0xc8b(0x01)
	float Alpha; // 0xc8c(0x04)
	bool Exit?; // 0xc90(0x01)
	bool Is_Taunting?; // 0xc91(0x01)
	char pad_C92[0x6]; // 0xc92(0x06)
	struct FMulticastInlineDelegate On_Peeves_Taunt; // 0xc98(0x10)
	enum class E_Super_Smash_Move_States Movement_State; // 0xca8(0x01)
	bool Taunts_Int; // 0xca9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_24D24D0E46F2F9F8DC0DB982C514115F(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_24D24D0E46F2F9F8DC0DB982C514115F // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_56204EFE4F6FB35C5E6C0FA79CCA31C0(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_56204EFE4F6FB35C5E6C0FA79CCA31C0 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_5D892B464628EF7BB09A0584A5796F25(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_5D892B464628EF7BB09A0584A5796F25 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_5F729FD941B6BD09CF35F0AE0E8E63B6(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_5F729FD941B6BD09CF35F0AE0E8E63B6 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_E210F60C44FA50327E0E33ACF76FFDF7(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_E210F60C44FA50327E0E33ACF76FFDF7 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_FFA7E8AD421157E0488E41A1A8642395(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_FFA7E8AD421157E0488E41A1A8642395 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_91F46A1444920408815B5CA260E7AAB4(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Super_Smash_Peeves_AnimGraphNode_TransitionResult_91F46A1444920408815B5CA260E7AAB4 // (BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Throw_Projectile(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_Throw_Projectile // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Grab_Projectile(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_Grab_Projectile // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Super_Smash_Taunt_End(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_Super_Smash_Taunt_End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SSG_Taunt_Point(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_SSG_Taunt_Point // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SSG_Taunt_Clutch(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_SSG_Taunt_Clutch // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SSG_Taunt_Laugh(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_SSG_Taunt_Laugh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SSG_Taunt_Clap(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_SSG_Taunt_Clap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DiveEnd(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.AnimNotify_DiveEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Super_Smash_Peeves(int32_t EntryPoint); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.ExecuteUbergraph_ABP_Super_Smash_Peeves // (Final|UbergraphFunction) // @ game+0x38a7480
	void On_Peeves_Taunt__DelegateSignature(); // Function ABP_Super_Smash_Peeves.ABP_Super_Smash_Peeves_C.On_Peeves_Taunt__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

