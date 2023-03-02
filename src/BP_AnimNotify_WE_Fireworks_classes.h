// BlueprintGeneratedClass BP_AnimNotify_WE_Fireworks.BP_AnimNotify_WE_Fireworks_C
// Size: 0x35 (Inherited: 0x30)
struct UBP_AnimNotify_WE_Fireworks_C : UAnimNotifyState {
	int32_t CastType; // 0x30(0x04)
	bool Block FX; // 0x34(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_AnimNotify_WE_Fireworks.BP_AnimNotify_WE_Fireworks_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function BP_AnimNotify_WE_Fireworks.BP_AnimNotify_WE_Fireworks_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

