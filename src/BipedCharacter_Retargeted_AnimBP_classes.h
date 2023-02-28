// AnimBlueprintGeneratedClass BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C
// Size: 0xf9c (Inherited: 0x980)
struct UBipedCharacter_Retargeted_AnimBP_C : UBiped_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x980(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x988(0x30)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x9b8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa68(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa98(0xb0)
	char pad_B48[0x8]; // 0xb48(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0xb50(0xb0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0xc00(0xa0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xca0(0xa0)
	struct FAnimNode_AvaInertialization AnimGraphNode_AvaInertialization; // 0xd40(0x80)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0xdc0(0x1b0)
	float __CustomProperty_Alpha_2472CE0342E67777AB312F9301949E2F; // 0xf70(0x04)
	float MinHipMultiplier; // 0xf74(0x04)
	float MaxHipMultiplier; // 0xf78(0x04)
	int32_t ShowIKFloorContact; // 0xf7c(0x04)
	struct FVector GazeTargetWS; // 0xf80(0x0c)
	float GazeTargetWeight; // 0xf8c(0x04)
	struct UAnimationComponent* AnimComp; // 0xf90(0x08)
	float ShoulderFixupAlpha; // 0xf98(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHipMultipliers(float DeltaTime); // Function BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.SetHipMultipliers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_PickUpPocket(); // Function BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.AnimNotify_PickUpPocket // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP(int32_t EntryPoint); // Function BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP // (Final|UbergraphFunction) // @ game+0x38a7480
};

