// BlueprintGeneratedClass VFX_BP_PortraitPainting_SirCadogan.VFX_BP_PortraitPainting_SirCadogan_C
// Size: 0x3b8 (Inherited: 0x3a0)
struct AVFX_BP_PortraitPainting_SirCadogan_C : AVFX_BP_PortraitPainting_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UChildActorComponent* MirroredFocusTrigger; // 0x3a8(0x08)
	struct UChildActorComponent* BP_Station_CustomPortraitSirCadogan_1P1; // 0x3b0(0x08)

	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function VFX_BP_PortraitPainting_SirCadogan.VFX_BP_PortraitPainting_SirCadogan_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_PortraitPainting_SirCadogan.VFX_BP_PortraitPainting_SirCadogan_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_PortraitPainting_SirCadogan(int32_t EntryPoint); // Function VFX_BP_PortraitPainting_SirCadogan.VFX_BP_PortraitPainting_SirCadogan_C.ExecuteUbergraph_VFX_BP_PortraitPainting_SirCadogan // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

