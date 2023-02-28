// WidgetBlueprintGeneratedClass UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C
// Size: 0x484 (Inherited: 0x328)
struct UUI_BP_FG_GearInvTooltip_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* broomUpgradeDesc; // 0x330(0x08)
	struct UOverlay* detailsLegend; // 0x338(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x340(0x08)
	struct UVerticalBox* emptyContent; // 0x348(0x08)
	struct UPhoenixRichTextBlock* emptyDescription; // 0x350(0x08)
	struct UHorizontalBox* equippedTitle; // 0x358(0x08)
	struct UPhoenixTextBlock* equippedTitleText; // 0x360(0x08)
	struct UVerticalBox* gearContent; // 0x368(0x08)
	struct UPhoenixImage* gearHeaderBackLeft; // 0x370(0x08)
	struct UPhoenixImage* gearHeaderBackMiddle; // 0x378(0x08)
	struct UPhoenixImage* gearHeaderBackRight; // 0x380(0x08)
	struct UBorder* GearRarityFlame; // 0x388(0x08)
	struct UUI_BP_GearUpgrades_C* gearUpgrades; // 0x390(0x08)
	struct UPhoenixTextBlock* itemDesc; // 0x398(0x08)
	struct UPhoenixTextBlock* itemTitle; // 0x3a0(0x08)
	struct UUI_BP_FG_IDP_TraitStat_C* itemTraits; // 0x3a8(0x08)
	struct UPhoenixTextBlock* ItemType; // 0x3b0(0x08)
	struct UUI_BP_GearStat_C* mainStat; // 0x3b8(0x08)
	struct UPhoenixTextBlock* NoMagicMessage; // 0x3c0(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3c8(0x08)
	struct UPhoenixImage* rarityHeaderBack; // 0x3d0(0x08)
	struct UBorder* rarityHeaderBackBorder; // 0x3d8(0x08)
	struct UPhoenixTextBlock* RequiredLevel; // 0x3e0(0x08)
	struct UCanvasPanel* requiredLevelShield; // 0x3e8(0x08)
	struct UVerticalBox* SellValue; // 0x3f0(0x08)
	struct UUI_BP_MoneyBar_C* SellValue_MoneyBar; // 0x3f8(0x08)
	struct UPhoenixTextBlock* SellValueText; // 0x400(0x08)
	struct UVerticalBox* SimpleContent; // 0x408(0x08)
	struct UPhoenixTextBlock* simpleDescription; // 0x410(0x08)
	struct UPhoenixTextBlock* simpleSubTitle; // 0x418(0x08)
	struct UPhoenixTextBlock* simpleTitle; // 0x420(0x08)
	struct UOverlay* Stats; // 0x428(0x08)
	struct UHorizontalBox* statsBox; // 0x430(0x08)
	struct UUI_BP_GearStat_C* upgradeStat; // 0x438(0x08)
	struct FName subjectRarity; // 0x440(0x08)
	struct AActor* UpgradeBlipArray; // 0x448(0x08)
	int32_t EquippedRequiredLevel; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct ULegendItem* LegendHoldItem; // 0x458(0x08)
	struct FMulticastInlineDelegate LegendHoldItemReleased; // 0x460(0x10)
	struct FGearItemID EquippedGearItemID; // 0x470(0x14)

	void UpdateWandTooltip(struct FName ToolType, struct UIconButtonWidget* Button); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateWandTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Update Appearance Tooltip(struct UUI_BP_AppearanceIcon_C* Button, bool IsEquipped); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Appearance Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLegendItemData(struct TArray<struct FLegendItemData>& LegendItemData); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetLegendItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetEquippedItemData(enum class EGearSlotIDEnum GearSlot); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetEquippedItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Unidentified Info(enum class EGearSlotIDEnum GearSlotID); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Unidentified Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateAppearanceInfo(); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateAppearanceInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateGearSharedInfo(struct FGearItemID GearItemID, bool IsAppearance, struct FName& GearID); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateGearSharedInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateGearUpgrades(struct FGearItemID CurrentGearItem, struct FName ItemRarity); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateGearUpgrades // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMainToolTooltip(struct FName ToolType, struct UIconButtonWidget* Button); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateMainToolTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSellValue(bool Sellable, int32_t SellPrice); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetSellValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateEmptyTooltip(struct FString EmptyMessage); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateEmptyTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Compare Stats to Equipped(enum class EGearSlotIDEnum hoveredGearSlot); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Compare Stats to Equipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTraitData(struct TArray<struct FName>& TraitData, struct FGearItemID GearItemID); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetTraitData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTraits(struct FName NewTraitID, int32_t EmptySlotCount); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateTraits // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Simple Tooltip(struct FString WandStyle); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Simple Tooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRequiredLevel(int32_t ItemLevel, struct FName ItemRarity); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetRequiredLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateEquippedTooltip(enum class EGearSlotIDEnum EquippedSlot); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateEquippedTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateStatTooltip(struct FString statTitle); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateStatTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Tool Tooltip(struct FName ToolType, struct UIconButtonWidget* Button); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Tool Tooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStats(enum class EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, struct FName ItemRarity); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRarity(struct FName Rarity, bool& ShowRarityGraphics); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetRarity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Gear Tooltip(struct UUI_BP_GearButton_C* Button, bool IsAppearanceInventory, bool IsEquipped); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Gear Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoldReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.HoldReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayPanelAnimation(); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.PlayPanelAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_GearInvTooltip(int32_t EntryPoint); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.ExecuteUbergraph_UI_BP_FG_GearInvTooltip // (Final|UbergraphFunction) // @ game+0x38a7480
	void LegendHoldItemReleased__DelegateSignature(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.LegendHoldItemReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

