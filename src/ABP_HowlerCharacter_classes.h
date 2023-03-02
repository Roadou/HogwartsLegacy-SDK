// AnimBlueprintGeneratedClass ABP_HowlerCharacter.ABP_HowlerCharacter_C
// Size: 0x510 (Inherited: 0x2c0)
struct UABP_HowlerCharacter_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CustomizableCharacterFacialPoseBlendNode AnimGraphNode_CustomizableCharacterFacialPoseBlendNode; // 0x2f8(0xb0)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x3b0(0xb0)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x460(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_HowlerCharacter.ABP_HowlerCharacter_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HowlerCharacter(int32_t EntryPoint); // Function ABP_HowlerCharacter.ABP_HowlerCharacter_C.ExecuteUbergraph_ABP_HowlerCharacter // (Final|UbergraphFunction) // @ game+0x38a7480
};

