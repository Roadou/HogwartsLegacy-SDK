// AnimBlueprintGeneratedClass ABP_AnimalGuide_Eagle.ABP_AnimalGuide_Eagle_C
// Size: 0x568 (Inherited: 0x2c0)
struct UABP_AnimalGuide_Eagle_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x2f8(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x410(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x430(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x548(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_AnimalGuide_Eagle.ABP_AnimalGuide_Eagle_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_AnimalGuide_Eagle(int32_t EntryPoint); // Function ABP_AnimalGuide_Eagle.ABP_AnimalGuide_Eagle_C.ExecuteUbergraph_ABP_AnimalGuide_Eagle // (Final|UbergraphFunction) // @ game+0x38a7480
};

