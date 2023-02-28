// AnimBlueprintGeneratedClass ABP_FastTravel_Brazier.ABP_FastTravel_Brazier_C
// Size: 0x450 (Inherited: 0x2c0)
struct UABP_FastTravel_Brazier_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	char pad_398[0x8]; // 0x398(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x3a0(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_FastTravel_Brazier.ABP_FastTravel_Brazier_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_FastTravel_Brazier(int32_t EntryPoint); // Function ABP_FastTravel_Brazier.ABP_FastTravel_Brazier_C.ExecuteUbergraph_ABP_FastTravel_Brazier // (Final|UbergraphFunction) // @ game+0x38a7480
};

