// WidgetBlueprintGeneratedClass UI_BP_Vendor.UI_BP_Vendor_C
// Size: 0x5d6 (Inherited: 0x370)
struct UUI_BP_Vendor_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* ShowItemDetails; // 0x378(0x08)
	struct UWidgetAnimation* FromPreviewMode; // 0x380(0x08)
	struct UWidgetAnimation* ToPreviewModeV2; // 0x388(0x08)
	struct UWidgetAnimation* ShowComparisonDetails; // 0x390(0x08)
	struct UWidgetAnimation* FadeOut_ShopRB; // 0x398(0x08)
	struct UWidgetAnimation* Fadeout_Shop; // 0x3a0(0x08)
	struct UWidgetAnimation* FadeIn_Shop; // 0x3a8(0x08)
	struct UWidgetAnimation* FadeIn_ShopRB; // 0x3b0(0x08)
	struct UWidgetAnimation* TriggerErrorMessage; // 0x3b8(0x08)
	struct UPhoenixTextBlock* categoryText; // 0x3c0(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x3c8(0x08)
	struct UUI_BP_FG_GearInvTooltip_C* equippedTooltip; // 0x3d0(0x08)
	struct UImage* ErrorIcon; // 0x3d8(0x08)
	struct UPhoenixTextBlock* ErrorMessageText; // 0x3e0(0x08)
	struct UUI_BP_Sparkels_C* Image_Sparkel; // 0x3e8(0x08)
	struct UUI_BP_Sparkels_C* Image_Sparkel_2; // 0x3f0(0x08)
	struct UUI_BP_Sparkels_C* Image_Sparkel_3; // 0x3f8(0x08)
	struct UUI_BP_FG_VendorDetails_C* itemDetails; // 0x400(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x408(0x08)
	struct UCanvasPanel* Menu; // 0x410(0x08)
	struct UUI_BP_MoneyBar_C* moneyBar; // 0x418(0x08)
	struct UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x420(0x08)
	struct UOverlay* Overlay_Sparkel; // 0x428(0x08)
	struct UVerticalBox* PlayerVerticalBox; // 0x430(0x08)
	struct UButton* previewButton; // 0x438(0x08)
	struct UUI_BP_FG_VendorDetails_C* previewDetails; // 0x440(0x08)
	struct URetainerBox* RetainerBox_Shop; // 0x448(0x08)
	struct UUI_BP_BackgroundSmoke_C* UI_BP_BackgroundSmoke_Vendor; // 0x450(0x08)
	struct UImage* VendorShopIcon; // 0x458(0x08)
	struct UPhoenixTextBlock* VendorShopName; // 0x460(0x08)
	struct UVerticalBox* VendorVerticalBox; // 0x468(0x08)
	struct FMulticastInlineDelegate AbortInteraction; // 0x470(0x10)
	int32_t icon_stride; // 0x480(0x04)
	struct FName TargetVendor; // 0x484(0x08)
	int32_t Quantity; // 0x48c(0x04)
	struct UUI_BP_InventoryIconButton_C* hoveredButton; // 0x490(0x08)
	bool IsPreviewing; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct TArray<struct FInventoryResult> CumulativeTransferTotals; // 0x4a0(0x10)
	struct FString PreviewedGearID; // 0x4b0(0x10)
	int32_t PageIndex; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FMulticastInlineDelegate StartPreview; // 0x4c8(0x10)
	struct FMulticastInlineDelegate LeavePreview; // 0x4d8(0x10)
	bool SpecialItemsExist; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FMulticastInlineDelegate OnItemPurchased; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnItemSold; // 0x500(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoMoney; // 0x510(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoSpace; // 0x520(0x10)
	bool BuyPageHidden; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	float MatRef_FillGlow; // 0x534(0x04)
	float MatRef_MoveY; // 0x538(0x04)
	float MatRef_MoveY_Shop; // 0x53c(0x04)
	float MatRef_MaskLerpAlpha; // 0x540(0x04)
	float MatRef_MaskGradianAlpha; // 0x544(0x04)
	struct FName PreviewedBroomID; // 0x548(0x08)
	bool IsPreviewingBroom; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct TArray<struct FString> VendorCategories; // 0x558(0x10)
	bool IsBeastVendor; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float MatRef_blur; // 0x56c(0x04)
	struct ABP_BroomPreviewLocator_C* CachedBroomPreviewLocator; // 0x570(0x08)
	struct AActor* BroomPreviewActor; // 0x578(0x08)
	struct FObjectHandles GearHandles; // 0x580(0x10)
	struct TArray<struct FGearItemID> EquippedGearIDs; // 0x590(0x10)
	struct UIconButtonWidget* PressedButton; // 0x5a0(0x08)
	bool IsGearItem; // 0x5a8(0x01)
	bool IsGearComparisonShowing; // 0x5a9(0x01)
	char pad_5AA[0x6]; // 0x5aa(0x06)
	struct TArray<struct UUI_BP_Vendor_ItemGroup_C*> CachedVendorItemGroups; // 0x5b0(0x10)
	struct TArray<struct UUI_BP_Vendor_ItemGroup_C*> CachedPlayerItemGroups; // 0x5c0(0x10)
	int32_t HoveredNavBarIndex; // 0x5d0(0x04)
	bool NotifyOliAugustusVendorOnExit; // 0x5d4(0x01)
	bool IsSellPage; // 0x5d5(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_7(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_7 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_6(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_5(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_4(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_3(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_2(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Vendor_1(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_Vendor.UI_BP_Vendor_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshEquippedGearIDs(); // Function UI_BP_Vendor.UI_BP_Vendor_C.RefreshEquippedGearIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Vendor.UI_BP_Vendor_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void CanPreviewBroom(bool& Result); // Function UI_BP_Vendor.UI_BP_Vendor_C.CanPreviewBroom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ToggleGearComparison(); // Function UI_BP_Vendor.UI_BP_Vendor_C.ToggleGearComparison // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoBuySell(); // Function UI_BP_Vendor.UI_BP_Vendor_C.DoBuySell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsEquippedGear(struct FName GearID, struct FName GearVariation, bool& Result); // Function UI_BP_Vendor.UI_BP_Vendor_C.IsEquippedGear // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void PreloadGear(); // Function UI_BP_Vendor.UI_BP_Vendor_C.PreloadGear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopBroomModelPreview(); // Function UI_BP_Vendor.UI_BP_Vendor_C.StopBroomModelPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartBroomModelPreview(); // Function UI_BP_Vendor.UI_BP_Vendor_C.StartBroomModelPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleNotificationCategories(bool ShouldPause); // Function UI_BP_Vendor.UI_BP_Vendor_C.ToggleNotificationCategories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemPurchasedFailedNoSpace(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchasedFailedNoSpace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnLeavePreview(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnLeavePreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnGearPreview(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnGearPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_AbortInteraction(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_AbortInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemSold(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemSold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemPurchasedFailedNoMoney(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchasedFailedNoMoney // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemPurchased(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnEnterVendor(); // Function UI_BP_Vendor.UI_BP_Vendor_C.VO_OnEnterVendor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Vendor Sign(); // Function UI_BP_Vendor.UI_BP_Vendor_C.Set Vendor Sign // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayErrorMessage(struct FString ErrorMessage); // Function UI_BP_Vendor.UI_BP_Vendor_C.DisplayErrorMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshLegend(); // Function UI_BP_Vendor.UI_BP_Vendor_C.RefreshLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionalAutosave(); // Function UI_BP_Vendor.UI_BP_Vendor_C.ConditionalAutosave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNotifications(); // Function UI_BP_Vendor.UI_BP_Vendor_C.ShowNotifications // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategorySwitch(int32_t NewIndex); // Function UI_BP_Vendor.UI_BP_Vendor_C.CategorySwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(int32_t PageIndex); // Function UI_BP_Vendor.UI_BP_Vendor_C.GoToPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Vendor.UI_BP_Vendor_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemRarityString(int32_t RarityIndex, struct FString& Rarity); // Function UI_BP_Vendor.UI_BP_Vendor_C.GetItemRarityString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuyItems(struct FInventoryResult& InventoryResult, bool& Success, int32_t& TotalCost, bool& FailReasonCost, bool& FailReasonSpace); // Function UI_BP_Vendor.UI_BP_Vendor_C.BuyItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddToCumulativeTransferTotal(struct FName Name, struct FName Variation, int32_t Count); // Function UI_BP_Vendor.UI_BP_Vendor_C.AddToCumulativeTransferTotal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Calculate VendorBuySellModifier(struct FInventoryResult& InventoryResult, bool IsBuying, float& CostModifier); // Function UI_BP_Vendor.UI_BP_Vendor_C.Calculate VendorBuySellModifier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateAdjustedSellBuyCost(struct FInventoryResult& InventoryResult, int32_t& AdjustedCost); // Function UI_BP_Vendor.UI_BP_Vendor_C.CalculateAdjustedSellBuyCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCost(struct FInventoryResult InvResult); // Function UI_BP_Vendor.UI_BP_Vendor_C.UpdateCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Failed_Buy(struct UUserWidget* Button, bool FailReasonCost, bool FailReasonSpace, struct FName ItemName); // Function UI_BP_Vendor.UI_BP_Vendor_C.Failed_Buy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Icon Button Released(struct UIconButtonWidget* IconButton); // Function UI_BP_Vendor.UI_BP_Vendor_C.Icon Button Released // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Icon Button Pressed(struct UIconButtonWidget* IconButton); // Function UI_BP_Vendor.UI_BP_Vendor_C.Icon Button Pressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Unhovered(struct UIconButtonWidget* Button); // Function UI_BP_Vendor.UI_BP_Vendor_C.IconButton_Unhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Clicked(struct UIconButtonWidget* Button); // Function UI_BP_Vendor.UI_BP_Vendor_C.IconButton_Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Hover(struct UIconButtonWidget* Button); // Function UI_BP_Vendor.UI_BP_Vendor_C.IconButton_Hover // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatePlayerItemButton(struct FInventoryResult InventoryResult, struct UUI_BP_InventoryIconButton_C*& Button); // Function UI_BP_Vendor.UI_BP_Vendor_C.CreatePlayerItemButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatePlayerItemGroup(struct FString VendorCategory, struct TArray<struct FInventoryResult>& PlayerInventory, bool& Created, struct UUI_BP_Vendor_ItemGroup_C*& ItemGroup); // Function UI_BP_Vendor.UI_BP_Vendor_C.CreatePlayerItemGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshPlayerInventory(); // Function UI_BP_Vendor.UI_BP_Vendor_C.RefreshPlayerInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsPriorityMissionItem(struct FInventoryResult Item, bool& IsPriority); // Function UI_BP_Vendor.UI_BP_Vendor_C.IsPriorityMissionItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetVendorCategoryForItem(struct FName ItemName, struct FName ItemType, struct FName HolderID, struct FString& VendorCategory); // Function UI_BP_Vendor.UI_BP_Vendor_C.GetVendorCategoryForItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CreateVendorItemButton(struct FInventoryResult InventoryResult, float Cost Modifier, bool IsTutorialHighlighted, bool IsAvailable, struct FUnavailableIconInfo UnavailableInfo, bool SpecialMissionItem, struct UUI_BP_InventoryIconButton_C*& Button); // Function UI_BP_Vendor.UI_BP_Vendor_C.CreateVendorItemButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateVendorItemGroup(struct FString VendorCategory, struct TArray<struct FInventoryResult>& VendorInventory, struct TArray<struct FUnavailableIconInfo>& UnavailableInventory, struct TArray<struct FName>& TutorialHighlights, bool& Created, struct UUI_BP_Vendor_ItemGroup_C*& ItemGroup); // Function UI_BP_Vendor.UI_BP_Vendor_C.CreateVendorItemGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateVendorImportantItemGroup(struct FString VendorCategory, struct TArray<struct FInventoryResult>& VendorInventory, bool& Created, struct UUI_BP_Vendor_ItemGroup_C*& ItemGroup); // Function UI_BP_Vendor.UI_BP_Vendor_C.CreateVendorImportantItemGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateTutorialHighlights(struct TArray<struct FName>& TutorialHighlights); // Function UI_BP_Vendor.UI_BP_Vendor_C.PopulateTutorialHighlights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshVendorInventory(); // Function UI_BP_Vendor.UI_BP_Vendor_C.RefreshVendorInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshAllInventories(); // Function UI_BP_Vendor.UI_BP_Vendor_C.RefreshAllInventories // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_05C86C324CC2E3F67B4598AA730580A6(); // Function UI_BP_Vendor.UI_BP_Vendor_C.Finished_05C86C324CC2E3F67B4598AA730580A6 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_2A89DBBA44E746A9DCB98DB457DDB514(); // Function UI_BP_Vendor.UI_BP_Vendor_C.Finished_2A89DBBA44E746A9DCB98DB457DDB514 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPreviewDetails(); // Function UI_BP_Vendor.UI_BP_Vendor_C.ShowPreviewDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCurrentIndex(); // Function UI_BP_Vendor.UI_BP_Vendor_C.ShowCurrentIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Vendor.UI_BP_Vendor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Vendor.UI_BP_Vendor_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Vendor.UI_BP_Vendor_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CollapseItemDetails(); // Function UI_BP_Vendor.UI_BP_Vendor_C.CollapseItemDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_ItemFadeOut(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_ItemFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitVendor(); // Function UI_BP_Vendor.UI_BP_Vendor_C.InitVendor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_SmokeFadeOut(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_SmokeFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnVendorBroomPreviewClassLoaded(struct FName BroomID, struct AActor* ActorClass); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnVendorBroomPreviewClassLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void GearTutorialRefreshAllInventories(struct UObject* Caller); // Function UI_BP_Vendor.UI_BP_Vendor_C.GearTutorialRefreshAllInventories // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_SmokeFadeIn(); // Function UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_SmokeFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Vendor(int32_t EntryPoint); // Function UI_BP_Vendor.UI_BP_Vendor_C.ExecuteUbergraph_UI_BP_Vendor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnItemPurchaseFailedNoSpace__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchaseFailedNoSpace__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchaseFailedNoMoney__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchaseFailedNoMoney__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemSold__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnItemSold__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchased__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeavePreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_Vendor.UI_BP_Vendor_C.LeavePreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartPreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_Vendor.UI_BP_Vendor_C.StartPreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortInteraction__DelegateSignature(); // Function UI_BP_Vendor.UI_BP_Vendor_C.AbortInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

