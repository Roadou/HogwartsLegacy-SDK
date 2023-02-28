// BlueprintGeneratedClass BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C
// Size: 0x18a (Inherited: 0x150)
struct UBTT_BipedUpper_UseInventoryItem_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FString PotionName; // 0x158(0x10)
	enum class EBTCustomActionType SpawnInvItemState; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FHermesBPDelegateHandle ItemUsageEndedHandle; // 0x170(0x10)
	struct AInventoryItemTool* InventoryItemTool; // 0x180(0x08)
	bool ContextsSet; // 0x188(0x01)
	bool RiderHandIKDisabled; // 0x189(0x01)

	void RestoreMountRiderHandIK(struct AActor* InActor); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.RestoreMountRiderHandIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OptionalDisableMountRiderHandIK(struct AActor* InActor); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.OptionalDisableMountRiderHandIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ItemUsageEnded(struct UObject* Caller); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ItemUsageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_BipedUpper_UseInventoryItem(int32_t EntryPoint); // Function BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ExecuteUbergraph_BTT_BipedUpper_UseInventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

