// AnimBlueprintGeneratedClass ABP_DragonMural.ABP_DragonMural_C
// Size: 0x5c0 (Inherited: 0x510)
struct UABP_DragonMural_C : UAble_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x518(0x30)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x548(0x78)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_DragonMural.ABP_DragonMural_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_DragonMural(int32_t EntryPoint); // Function ABP_DragonMural.ABP_DragonMural_C.ExecuteUbergraph_ABP_DragonMural // (Final|UbergraphFunction) // @ game+0x38a7480
};

