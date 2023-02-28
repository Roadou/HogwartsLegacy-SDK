// AnimBlueprintGeneratedClass ABP_Rat_Creature.ABP_Rat_Creature_C
// Size: 0xaa0 (Inherited: 0x670)
struct UABP_Rat_Creature_C : UNPC_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x678(0x30)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x6a8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x758(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x788(0xb0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x838(0x1b0)
	char pad_9E8[0x8]; // 0x9e8(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x9f0(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Rat_Creature.ABP_Rat_Creature_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Rat_Creature(int32_t EntryPoint); // Function ABP_Rat_Creature.ABP_Rat_Creature_C.ExecuteUbergraph_ABP_Rat_Creature // (Final|UbergraphFunction) // @ game+0x38a7480
};

