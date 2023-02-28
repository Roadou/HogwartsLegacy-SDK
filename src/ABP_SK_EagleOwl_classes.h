// AnimBlueprintGeneratedClass ABP_SK_EagleOwl.ABP_SK_EagleOwl_C
// Size: 0x8b4 (Inherited: 0x2c0)
struct UABP_SK_EagleOwl_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x450(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x568(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x680(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x798(0x118)
	float featherDynAmnt; // 0x8b0(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_SK_EagleOwl.ABP_SK_EagleOwl_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_SK_EagleOwl(int32_t EntryPoint); // Function ABP_SK_EagleOwl.ABP_SK_EagleOwl_C.ExecuteUbergraph_ABP_SK_EagleOwl // (Final|UbergraphFunction) // @ game+0x38a7480
};

