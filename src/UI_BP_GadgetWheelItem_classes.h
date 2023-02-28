// WidgetBlueprintGeneratedClass UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C
// Size: 0x460 (Inherited: 0x328)
struct UUI_BP_GadgetWheelItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x330(0x08)
	struct UWidgetAnimation* SelectedAnimation; // 0x338(0x08)
	struct UImage* ActiveFlames; // 0x340(0x08)
	struct UImage* ActiveGlow; // 0x348(0x08)
	struct UCanvasPanel* ActiveHighlight; // 0x350(0x08)
	struct UPhoenixImage* ActiveSparks; // 0x358(0x08)
	struct UImage* BackgroundFill; // 0x360(0x08)
	struct UButton* BoundingBox; // 0x368(0x08)
	struct UCanvasPanel* buttonContent; // 0x370(0x08)
	struct UCanvasPanel* Count; // 0x378(0x08)
	struct UPhoenixImage* goldLeafHighlight; // 0x380(0x08)
	struct UPhoenixTextBlock* ItemCountText; // 0x388(0x08)
	struct UImage* ItemIcon; // 0x390(0x08)
	struct UImage* LockedImage; // 0x398(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x3a0(0x08)
	struct UImage* Outline; // 0x3a8(0x08)
	struct UPhoenixImage* selectedGlow; // 0x3b0(0x08)
	struct UPhoenixImage* selectedOutline; // 0x3b8(0x08)
	bool IsLocked; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct FName ItemName; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FMulticastInlineDelegate OnClickEvent; // 0x3d0(0x10)
	int32_t WedgePosition; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FSlateColor DefaultHighlightColor; // 0x3e8(0x28)
	struct TMap<struct FName, struct FSlateColor> PotionColorMap; // 0x410(0x50)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetActiveHighlightColor(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.SetActiveHighlightColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFillMeter(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.UpdateFillMeter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNewItemIndicatorVisibility(bool IsUnlocked); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.SetNewItemIndicatorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleHighlight(bool isHighlighted); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ToggleHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemData(struct FName ItemName, int32_t Count, bool IsUnlocked); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.SetItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ItemMeterIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ItemMeterIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateToolMeter(float Percentage); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.UpdateToolMeter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GadgetWheelItem(int32_t EntryPoint); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ExecuteUbergraph_UI_BP_GadgetWheelItem // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClickEvent__DelegateSignature(); // Function UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.OnClickEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

