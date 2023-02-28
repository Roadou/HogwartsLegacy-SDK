// BlueprintGeneratedClass VFX_BP_NiagaraAnimNotify.VFX_BP_NiagaraAnimNotify_C
// Size: 0x7a (Inherited: 0x38)
struct UVFX_BP_NiagaraAnimNotify_C : UAnimNotify {
	bool Enabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UNiagaraSystem* NiagaraSystem; // 0x40(0x08)
	struct FName AttachToBone; // 0x48(0x08)
	struct FVector OffsetLocation; // 0x50(0x0c)
	struct FRotator OffsetRotation; // 0x5c(0x0c)
	bool Attached; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector Scale; // 0x6c(0x0c)
	bool CastShadow; // 0x78(0x01)
	bool AutoDestroy; // 0x79(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function VFX_BP_NiagaraAnimNotify.VFX_BP_NiagaraAnimNotify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

