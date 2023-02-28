// BlueprintGeneratedClass VFX_BP_PortraitPainting_LethiaBurbley.VFX_BP_PortraitPainting_LethiaBurbley_C
// Size: 0x3c8 (Inherited: 0x3a0)
struct AVFX_BP_PortraitPainting_LethiaBurbley_C : AVFX_BP_PortraitPainting_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UStaticMeshComponent* SM_HM_Cauldron_Cauldron_F; // 0x3a8(0x08)
	struct UStaticMeshComponent* SM_HW_TableDiv; // 0x3b0(0x08)
	struct UChildActorComponent* MirroredFocusTrigger; // 0x3b8(0x08)
	struct UChildActorComponent* BP_Station_CustomPortraitLethiaBurbley_1P; // 0x3c0(0x08)

	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function VFX_BP_PortraitPainting_LethiaBurbley.VFX_BP_PortraitPainting_LethiaBurbley_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_PortraitPainting_LethiaBurbley.VFX_BP_PortraitPainting_LethiaBurbley_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_PortraitPainting_LethiaBurbley(int32_t EntryPoint); // Function VFX_BP_PortraitPainting_LethiaBurbley.VFX_BP_PortraitPainting_LethiaBurbley_C.ExecuteUbergraph_VFX_BP_PortraitPainting_LethiaBurbley // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

