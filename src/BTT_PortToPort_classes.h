// BlueprintGeneratedClass BTT_PortToPort.BTT_PortToPort_C
// Size: 0x179 (Inherited: 0x150)
struct UBTT_PortToPort_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AFastTravelPort* StartPortal; // 0x158(0x08)
	struct AFastTravelPort* EndPortal; // 0x160(0x08)
	struct FTimerHandle TeleportTimerHandle; // 0x168(0x08)
	struct USceneComponent* TravelerTransformComponent; // 0x170(0x08)
	bool Landed; // 0x178(0x01)

	void SetContexts(bool Flag); // Function BTT_PortToPort.BTT_PortToPort_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_PortToPort.BTT_PortToPort_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_PortToPort.BTT_PortToPort_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DelayBeforeTeleportExpired(); // Function BTT_PortToPort.BTT_PortToPort_C.DelayBeforeTeleportExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_PortToPort.BTT_PortToPort_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct UObject* Caller); // Function BTT_PortToPort.BTT_PortToPort_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_PortToPort(int32_t EntryPoint); // Function BTT_PortToPort.BTT_PortToPort_C.ExecuteUbergraph_BTT_PortToPort // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

