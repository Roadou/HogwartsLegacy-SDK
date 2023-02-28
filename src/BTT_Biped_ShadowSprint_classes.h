// BlueprintGeneratedClass BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C
// Size: 0x17c (Inherited: 0x150)
struct UBTT_Biped_ShadowSprint_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool IKRestoreState; // 0x158(0x01)
	bool MinTimerExpired; // 0x159(0x01)
	bool ExitMechanic; // 0x15a(0x01)
	bool OnButtslideSurface; // 0x15b(0x01)
	bool IsInterruptible; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float OldCapsuleRadius; // 0x160(0x04)
	struct FVector LastDirection; // 0x164(0x0c)
	struct ABP_ShadowSprint_C* ShadowSprintActor; // 0x170(0x08)
	float OldCapsuleHalfHeight; // 0x178(0x04)

	void ShrinkCapsule(struct ACharacter* Character); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ShrinkCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnShadowSprintActor(struct ABiped_Player* BipedPlayer); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.SpawnShadowSprintActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RecoverCapsule(struct ACharacter* Character); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.RecoverCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopShadowSprint(); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.StopShadowSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MinShadowSprintTimerExpired(); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.MinShadowSprintTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_ShadowSprint(int32_t EntryPoint); // Function BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ExecuteUbergraph_BTT_Biped_ShadowSprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

