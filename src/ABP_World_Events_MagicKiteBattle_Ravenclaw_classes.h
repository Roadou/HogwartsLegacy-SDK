// AnimBlueprintGeneratedClass ABP_World_Events_MagicKiteBattle_Ravenclaw.ABP_World_Events_MagicKiteBattle_Ravenclaw_C
// Size: 0x3750 (Inherited: 0x2c0)
struct UABP_World_Events_MagicKiteBattle_Ravenclaw_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x410(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x850(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xc90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x10d0(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1510(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1530(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1550(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1990(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1dd0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2210(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2650(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2a90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2ed0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3310(0x440)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_World_Events_MagicKiteBattle_Ravenclaw.ABP_World_Events_MagicKiteBattle_Ravenclaw_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_World_Events_MagicKiteBattle_Ravenclaw(int32_t EntryPoint); // Function ABP_World_Events_MagicKiteBattle_Ravenclaw.ABP_World_Events_MagicKiteBattle_Ravenclaw_C.ExecuteUbergraph_ABP_World_Events_MagicKiteBattle_Ravenclaw // (Final|UbergraphFunction) // @ game+0x38a7480
};

