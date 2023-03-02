// AnimBlueprintGeneratedClass ABP_WE_Special_Delivery.ABP_WE_Special_Delivery_C
// Size: 0x5a8 (Inherited: 0x2c0)
struct UABP_WE_Special_Delivery_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x378(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x3f8(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4c0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4f0(0xb0)
	float FlapGlideAlpha; // 0x5a0(0x04)
	float FlapPlayRate; // 0x5a4(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WE_Special_Delivery.ABP_WE_Special_Delivery_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_WE_Special_Delivery(int32_t EntryPoint); // Function ABP_WE_Special_Delivery.ABP_WE_Special_Delivery_C.ExecuteUbergraph_ABP_WE_Special_Delivery // (Final|UbergraphFunction) // @ game+0x38a7480
};

