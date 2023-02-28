// WidgetBlueprintGeneratedClass UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C
// Size: 0x45a (Inherited: 0x328)
struct UUI_BP_FG_VendorDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Appear; // 0x330(0x08)
	struct UImage* AlbinoIcon; // 0x338(0x08)
	struct UVerticalBox* destroyNotification; // 0x340(0x08)
	struct UPhoenixTextBlock* destroyText; // 0x348(0x08)
	struct UPhoenixTextBlock* detailsDescription; // 0x350(0x08)
	struct UOverlay* detailsLegend; // 0x358(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x360(0x08)
	struct UVerticalBox* gearContent; // 0x368(0x08)
	struct UPhoenixTextBlock* GearDeleteMessage; // 0x370(0x08)
	struct UPhoenixTextBlock* gearDesc; // 0x378(0x08)
	struct UUI_BP_FG_IDP_GearHeader_C* gearHeader; // 0x380(0x08)
	struct UUI_BP_FG_IDP_TraitStat_C* GearTraits; // 0x388(0x08)
	struct UUI_BP_GearUpgrades_C* gearUpgrades; // 0x390(0x08)
	struct UImage* GenderIcon; // 0x398(0x08)
	struct UVerticalBox* itemContent; // 0x3a0(0x08)
	struct UPhoenixTextBlock* itemRequiredLevel; // 0x3a8(0x08)
	struct UCanvasPanel* itemRequiredLevelShield; // 0x3b0(0x08)
	struct UPhoenixTextBlock* itemTitle; // 0x3b8(0x08)
	struct UUI_BP_FG_VDP_ItemValue_C* ItemValue; // 0x3c0(0x08)
	struct UUI_BP_GearStat_C* mainStat; // 0x3c8(0x08)
	struct UPhoenixTextBlock* NoMagicMessage; // 0x3d0(0x08)
	struct UBorder* OutOfStock; // 0x3d8(0x08)
	struct UPhoenixTextBlock* OutOfStockLabel; // 0x3e0(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3e8(0x08)
	struct UPhoenixTextBlock* RequiredLevel; // 0x3f0(0x08)
	struct UCanvasPanel* requiredLevelShield; // 0x3f8(0x08)
	struct UVerticalBox* SellValue; // 0x400(0x08)
	struct UPhoenixTextBlock* SellValueText; // 0x408(0x08)
	struct UOverlay* Stats; // 0x410(0x08)
	struct UHorizontalBox* statsBox; // 0x418(0x08)
	struct UUI_BP_GearStat_C* upgradeStat; // 0x420(0x08)
	struct FMulticastInlineDelegate VendorDetailCollapseDistpatch; // 0x428(0x10)
	struct ULegendItem* LegendHoldItem; // 0x438(0x08)
	struct FMulticastInlineDelegate OnHoldButtonReleasedEvent; // 0x440(0x10)
	struct FName ObjectRarity; // 0x450(0x08)
	bool IsAlbino; // 0x458(0x01)
	bool IsMale; // 0x459(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Compare Stats to Equipped(enum class EGearSlotIDEnum EquippedSlot); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.Compare Stats to Equipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipLegend(struct TArray<struct FLegendItemData>& LegendItemArray, bool UseHold, int32_t HoldIndex); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetTooltipLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearUpgrades(struct FGearItemID GearItemID, struct FName ItemRarity); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearUpgrades // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRequiredGearLevel(int32_t ItemLevel, struct FName ItemRarity); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetRequiredGearLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUnidentifiedInfo(enum class EGearSlotIDEnum GearSlot); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetUnidentifiedInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearStats(enum class EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, struct FName ItemRarity); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVendorDetailsDisAppearAnim(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsDisAppearAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVendorDetailsAppearAnim(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsAppearAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLevel(int32_t Level, bool Usable); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTooltip(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.ResetTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStandardTooltip(struct FName GearID, struct FName GearVariation); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetStandardTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCapturedCreatureInfo(struct FName GearID, struct FName Variation); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetCapturedCreatureInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearLevelRequirement(struct FName GearID, struct FName GearVariation); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearLevelRequirement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearDeleteMessage(struct FName GearID, struct FName GearVariation, bool DisplayIfSafeToDelete); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearDeleteMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearTraits(struct TArray<struct FName>& GearAbilityArray, struct FGearItemID GearItemID); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearTraits // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGearInfo(struct FGearItemID GearItemID); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildItemTooltip(struct UUI_BP_InventoryIconButton_C* Button); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.BuildItemTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_C5DEB46F48574714135D02ADCD8BFB31(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.Finished_C5DEB46F48574714135D02ADCD8BFB31 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVendorDetailsDisAppearAnimm(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsDisAppearAnimm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVendorDetailsAppearAnimm(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsAppearAnimm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DetailsHoldButtonReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.DetailsHoldButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_VendorDetails(int32_t EntryPoint); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.ExecuteUbergraph_UI_BP_FG_VendorDetails // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.OnHoldButtonReleasedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VendorDetailCollapseDistpatch__DelegateSignature(); // Function UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.VendorDetailCollapseDistpatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

