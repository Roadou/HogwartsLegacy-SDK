// BlueprintGeneratedClass BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C
// Size: 0x191 (Inherited: 0x150)
struct UBTT_Biped_UseInventoryItem_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FString PotionName; // 0x158(0x10)
	bool StickPressed; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct AInventoryItemTool* InventoryItemTool; // 0x170(0x08)
	struct FTimerHandle MinUsageTimerHandle; // 0x178(0x08)
	bool AllowUsageEnd; // 0x180(0x01)
	bool UsageEndDesired; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct FTimerHandle MaxUsageTimerHandle; // 0x188(0x08)
	bool Completed; // 0x190(0x01)

	void EndUsage(); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.EndUsage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MinTimerExpired(); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.MinTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MaxTimerExpired(); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.MaxTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_UseInventoryItem(int32_t EntryPoint); // Function BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ExecuteUbergraph_BTT_Biped_UseInventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

