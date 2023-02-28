// AnimBlueprintGeneratedClass ABP_HebrideanBlack.ABP_HebrideanBlack_C
// Size: 0x1058 (Inherited: 0x2c0)
struct UABP_HebrideanBlack_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_11; // 0x410(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x528(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x548(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_10; // 0x568(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9; // 0x680(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_8; // 0x798(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7; // 0x8b0(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6; // 0x9c8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5; // 0xae0(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0xbf8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0xd10(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0xe28(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0xf40(0x118)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_HebrideanBlack.ABP_HebrideanBlack_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_HebrideanBlack(int32_t EntryPoint); // Function ABP_HebrideanBlack.ABP_HebrideanBlack_C.ExecuteUbergraph_ABP_HebrideanBlack // (Final|UbergraphFunction) // @ game+0x38a7480
};

