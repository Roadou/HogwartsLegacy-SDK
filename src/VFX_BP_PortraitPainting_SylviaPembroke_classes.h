// BlueprintGeneratedClass VFX_BP_PortraitPainting_SylviaPembroke.VFX_BP_PortraitPainting_SylviaPembroke_C
// Size: 0x3c8 (Inherited: 0x3a0)
struct AVFX_BP_PortraitPainting_SylviaPembroke_C : AVFX_BP_PortraitPainting_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UStaticMeshComponent* SM_HM_GR_DB_Crystal_Ball; // 0x3a8(0x08)
	struct UStaticMeshComponent* SM_HW_TableDivSpreadA; // 0x3b0(0x08)
	struct UChildActorComponent* MirroredFocusTrigger; // 0x3b8(0x08)
	struct UChildActorComponent* BP_Station_CustomPortraitSylviaPembroke_1p1; // 0x3c0(0x08)

	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function VFX_BP_PortraitPainting_SylviaPembroke.VFX_BP_PortraitPainting_SylviaPembroke_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_PortraitPainting_SylviaPembroke.VFX_BP_PortraitPainting_SylviaPembroke_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_PortraitPainting_SylviaPembroke(int32_t EntryPoint); // Function VFX_BP_PortraitPainting_SylviaPembroke.VFX_BP_PortraitPainting_SylviaPembroke_C.ExecuteUbergraph_VFX_BP_PortraitPainting_SylviaPembroke // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

