// BlueprintGeneratedClass BP_BreakableFloor.BP_BreakableFloor_C
// Size: 0x3f0 (Inherited: 0x357)
struct ABP_BreakableFloor_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct AActor* HangingActor; // 0x360(0x08)
	struct FHitResult HitResult; // 0x368(0x88)

	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_BreakableFloor.BP_BreakableFloor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_BreakableFloor.BP_BreakableFloor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_BreakableFloor_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BreakableFloor.BP_BreakableFloor_C.BndEvt__BP_BreakableFloor_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BreakableFloor(int32_t EntryPoint); // Function BP_BreakableFloor.BP_BreakableFloor_C.ExecuteUbergraph_BP_BreakableFloor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

