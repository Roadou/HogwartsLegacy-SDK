// AnimBlueprintGeneratedClass ABP_DummyActor.ABP_DummyActor_C
// Size: 0x688 (Inherited: 0x2c0)
struct UABP_DummyActor_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8(0xa0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x398(0x1b0)
	char pad_548[0x8]; // 0x548(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x550(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x600(0x80)
	struct UAnimSequence* Idle Anim; // 0x680(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_DummyActor.ABP_DummyActor_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_DummyActor.ABP_DummyActor_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_DummyActor.ABP_DummyActor_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_DummyActor(int32_t EntryPoint); // Function ABP_DummyActor.ABP_DummyActor_C.ExecuteUbergraph_ABP_DummyActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

