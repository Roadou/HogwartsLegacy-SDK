// AnimBlueprintGeneratedClass ABP_Thestral_PostProcess.ABP_Thestral_PostProcess_C
// Size: 0xbf8 (Inherited: 0x2c0)
struct UABP_Thestral_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7; // 0x410(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x528(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6; // 0x548(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5; // 0x660(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x778(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x890(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x9a8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0xac0(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbd8(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Thestral_PostProcess.ABP_Thestral_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Thestral_PostProcess(int32_t EntryPoint); // Function ABP_Thestral_PostProcess.ABP_Thestral_PostProcess_C.ExecuteUbergraph_ABP_Thestral_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

