// WidgetBlueprintGeneratedClass UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C
// Size: 0x353 (Inherited: 0x268)
struct UUI_BP_ExpandableToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* AlbinoIcon; // 0x270(0x08)
	struct UPhoenixRichTextBlock* descriptionText; // 0x278(0x08)
	struct UHorizontalBox* ErrorText; // 0x280(0x08)
	struct UPhoenixTextBlock* ErrorTextMain; // 0x288(0x08)
	struct UExpandableArea* expandableContent; // 0x290(0x08)
	struct UOverlay* footer; // 0x298(0x08)
	struct UImage* footerDivider; // 0x2a0(0x08)
	struct UImage* GenderIcon; // 0x2a8(0x08)
	struct USpacer* headerSpacer; // 0x2b0(0x08)
	struct UImage* Image_5; // 0x2b8(0x08)
	struct UProgressBar* inProgressMeter; // 0x2c0(0x08)
	struct UPhoenixTextBlock* ItemName; // 0x2c8(0x08)
	struct UUI_BP_LegendBox_C* LegendBox; // 0x2d0(0x08)
	struct USizeBox* meterSizeBox; // 0x2d8(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* NewTooltipLegend; // 0x2e0(0x08)
	struct UVerticalBox* nonExpandableContent; // 0x2e8(0x08)
	struct UImage* rarityBack; // 0x2f0(0x08)
	struct UCanvasPanel* rarityPanel; // 0x2f8(0x08)
	struct UPhoenixTextBlock* rarityTitle; // 0x300(0x08)
	struct UHorizontalBox* titleBox; // 0x308(0x08)
	struct UVerticalBox* TooltipBody; // 0x310(0x08)
	struct UVerticalBox* TooltipContentContainer; // 0x318(0x08)
	struct USpacer* toolTipSpacer; // 0x320(0x08)
	float titleWidth; // 0x328(0x04)
	bool IsExpanded; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTween* expandTween; // 0x330(0x08)
	bool IsExpandable; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FLegendItemData> CurrentLegendData; // 0x340(0x10)
	bool LegendErrorUsed; // 0x350(0x01)
	bool LegendTextUsed; // 0x351(0x01)
	bool NewLegendUsed; // 0x352(0x01)

	void CollapseContent(bool ShouldAnimate); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.CollapseContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExpandContent(bool ShouldAnimate); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ExpandContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshBodyDividerAndFooterVisibility(); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.RefreshBodyDividerAndFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTooltipLegendItem(int32_t LegendItemIndex, struct ULegendItem*& LegendItem); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.GetTooltipLegendItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipLegendData(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetTooltipLegendData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRarityState(struct FName RarityTier); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetRarityState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRTInfoCallout(bool ShowCallout); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleRTInfoCallout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddNonExpandableContent(struct UUserWidget* NewContent, bool ClearExistingContent); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.AddNonExpandableContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsExpandable(bool IsExpandable); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetIsExpandable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimateToolTipWidth(bool isExpanding); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.AnimateToolTipWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleInProgressMeter(bool IsShowing); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleInProgressMeter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateExpandableLegend(struct FText NewLegend); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.PopulateExpandableLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleExpandableContent(bool ShouldAnimate); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleExpandableContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipData(struct FString NewTitle, bool TitleTranslatable, struct FString NewDescription, bool DescriptionTranslatable, struct FString NewQuality, struct FText NewLegend, struct UUserWidget* ContentWidget, struct FName RarityTier, bool UsesGenderIcon, bool IsMale, bool UsesLegendError, struct FText LegendErrorMessage, bool UseAlbinoIcon); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetTooltipData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(struct UExpandableArea* Area, bool bIsExpanded); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ExpandableToolTip(int32_t EntryPoint); // Function UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ExecuteUbergraph_UI_BP_ExpandableToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

