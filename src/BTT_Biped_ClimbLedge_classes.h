// BlueprintGeneratedClass BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C
// Size: 0x170 (Inherited: 0x150)
struct UBTT_Biped_ClimbLedge_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float StickX; // 0x158(0x04)
	float StickY; // 0x15c(0x04)
	float StickMag; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct AActor* Ledge Actor; // 0x168(0x08)

	void ShouldAutoPullUp(bool& Result); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ShouldAutoPullUp // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool ShouldFallOffLedge(struct ABiped_Character* Player); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ShouldFallOffLedge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevertMovementMode(); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.RevertMovementMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCameraRelativeDirection(float X, float Y, struct FVector& Direction); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.GetCameraRelativeDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetRightArmState(enum class EClimbingLedgeState ClimbLedgeState); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.SetRightArmState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_ClimbLedge(int32_t EntryPoint); // Function BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ExecuteUbergraph_BTT_Biped_ClimbLedge // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

