// BlueprintGeneratedClass VFX_BP_NiagaraBeam_AnimState.VFX_BP_NiagaraBeam_AnimState_C
// Size: 0xb9 (Inherited: 0x30)
struct UVFX_BP_NiagaraBeam_AnimState_C : UAnimNotifyState {
	bool Enabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UNiagaraSystem* NiagaraSystem; // 0x38(0x08)
	struct FVector Scale; // 0x40(0x0c)
	bool InheritParentScale; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FName Start_Bone; // 0x50(0x08)
	bool Start_Attached; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FVector Start_OffsetLocation; // 0x5c(0x0c)
	struct FRotator Start_OffsetRotation; // 0x68(0x0c)
	struct FName Target_Bone; // 0x74(0x08)
	bool Target_Attached; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FVector Target_OffsetLocation; // 0x80(0x0c)
	struct FRotator Target_OffsetRotation; // 0x8c(0x0c)
	struct FString TargetLocation_UserVarName; // 0x98(0x10)
	struct FString TargetRotation_UserVarName; // 0xa8(0x10)
	bool DeactivateOnComplete; // 0xb8(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function VFX_BP_NiagaraBeam_AnimState.VFX_BP_NiagaraBeam_AnimState_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function VFX_BP_NiagaraBeam_AnimState.VFX_BP_NiagaraBeam_AnimState_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function VFX_BP_NiagaraBeam_AnimState.VFX_BP_NiagaraBeam_AnimState_C.Received_NotifyTick // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

