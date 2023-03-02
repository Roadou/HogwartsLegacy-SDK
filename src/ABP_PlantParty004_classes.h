// AnimBlueprintGeneratedClass ABP_PlantParty004.ABP_PlantParty004_C
// Size: 0x559 (Inherited: 0x2c0)
struct UABP_PlantParty004_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	bool Dance?; // 0x558(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_PlantParty004.ABP_PlantParty004_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_PlantParty004.ABP_PlantParty004_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_PlantParty004(int32_t EntryPoint); // Function ABP_PlantParty004.ABP_PlantParty004_C.ExecuteUbergraph_ABP_PlantParty004 // (Final|UbergraphFunction) // @ game+0x38a7480
};

