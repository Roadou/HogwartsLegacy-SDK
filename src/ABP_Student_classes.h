// AnimBlueprintGeneratedClass ABP_Student.ABP_Student_C
// Size: 0xc9c (Inherited: 0x690)
struct UABP_Student_C : UEnemy_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x698(0x30)
	struct FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x6c8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x778(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a8(0xb0)
	char pad_858[0x8]; // 0x858(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x860(0xb0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x910(0xa0)
	struct FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x9b0(0x1b0)
	struct FAnimNode_AvaInertialization AnimGraphNode_AvaInertialization; // 0xb60(0x80)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xbe0(0xa0)
	float __CustomProperty_Alpha_F1978D8B4221F52E612EB48690FE99F8; // 0xc80(0x04)
	bool AlwaysTrue; // 0xc84(0x01)
	char pad_C85[0x3]; // 0xc85(0x03)
	struct FVector GazeTargetWS; // 0xc88(0x0c)
	float GazeTargetWeight; // 0xc94(0x04)
	float ShoulderFixupAlpha; // 0xc98(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Student.ABP_Student_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_FireWand(); // Function ABP_Student.ABP_Student_C.AnimNotify_FireWand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DeathStart(); // Function ABP_Student.ABP_Student_C.AnimNotify_DeathStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_Student.ABP_Student_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_StartupAbility(); // Function ABP_Student.ABP_Student_C.AnimNotify_StartupAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Student.ABP_Student_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Student(int32_t EntryPoint); // Function ABP_Student.ABP_Student_C.ExecuteUbergraph_ABP_Student // (Final|UbergraphFunction) // @ game+0x38a7480
};

