// WidgetBlueprintGeneratedClass UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C
// Size: 0x3a8 (Inherited: 0x328)
struct UUI_BP_FG_InventoryDetails_C : UPhoenixUserWidget {
	struct UPhoenixTextBlock* beastNotification; // 0x328(0x08)
	struct UVerticalBox* beastVivariumNotice; // 0x330(0x08)
	struct UVerticalBox* destroyNotification; // 0x338(0x08)
	struct UPhoenixTextBlock* destroyText; // 0x340(0x08)
	struct UPhoenixTextBlock* detailsDescription; // 0x348(0x08)
	struct UOverlay* detailsLegend; // 0x350(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x358(0x08)
	struct UPhoenixTextBlock* emptyInventoryMessage; // 0x360(0x08)
	struct UVerticalBox* Item; // 0x368(0x08)
	struct UUI_BP_FG_IDP_ItemHeader_C* itemHeader; // 0x370(0x08)
	struct UVerticalBox* SellValue; // 0x378(0x08)
	struct UUI_BP_MoneyBar_C* SellValue_MoneyBar; // 0x380(0x08)
	struct UPhoenixTextBlock* SellValueText; // 0x388(0x08)
	struct ULegendItem* LegendHoldItem; // 0x390(0x08)
	struct FMulticastInlineDelegate LegendHoldItemReleased; // 0x398(0x10)

	void Inventory Hold Event Complete(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.Inventory Hold Event Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLegendItemData(struct TArray<struct FLegendItemData>& LegendItemArray); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetLegendItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetSellValue(bool Sellable, int32_t SellPrice); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetSellValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildEmptyTooltip(); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.BuildEmptyTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTooltip(); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.ResetTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStandardTooltip(struct FName GearID, struct FName GearVariation); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetStandardTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCapturedCreatureInfo(struct FName GearID, struct FName Variation); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetCapturedCreatureInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build Inventory Tooltip(struct UUI_BP_InventoryIconButton_C* Button, struct TArray<struct FLegendItemData>& ToolTip); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.Build Inventory Tooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LegendHoldItemReleased__DelegateSignature(struct ULegendItem* InventoryLegendItem, bool HoldWasCompleted); // Function UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.LegendHoldItemReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

