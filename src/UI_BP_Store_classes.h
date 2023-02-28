// WidgetBlueprintGeneratedClass UI_BP_Store.UI_BP_Store_C
// Size: 0x4e0 (Inherited: 0x370)
struct UUI_BP_Store_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* ShowPopup; // 0x378(0x08)
	struct UWidgetAnimation* OnItemSelected; // 0x380(0x08)
	struct UWidgetAnimation* OutroAnimation; // 0x388(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x390(0x08)
	struct UWidgetAnimation* ScrollToPreviousItem; // 0x398(0x08)
	struct UWidgetAnimation* ScrollToNextItem; // 0x3a0(0x08)
	struct UPhoenixImage* activeFrame; // 0x3a8(0x08)
	struct UPhoenixImage* ActiveHighlight; // 0x3b0(0x08)
	struct UUI_BP_StoreItem_C* activeItem; // 0x3b8(0x08)
	struct UPhoenixImage* frame_L1; // 0x3c0(0x08)
	struct UPhoenixImage* frame_R1; // 0x3c8(0x08)
	struct UPhoenixImage* highlight_L1; // 0x3d0(0x08)
	struct UPhoenixImage* highlight_R1; // 0x3d8(0x08)
	struct UUI_BP_StoreItem_C* item_L1; // 0x3e0(0x08)
	struct UUI_BP_StoreItem_C* item_L2; // 0x3e8(0x08)
	struct UUI_BP_StoreItem_C* item_R1; // 0x3f0(0x08)
	struct UUI_BP_StoreItem_C* item_R2; // 0x3f8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x400(0x08)
	struct UUI_BP_StoreScrollButton_C* nextButton; // 0x408(0x08)
	struct UOverlay* Overlay_Active; // 0x410(0x08)
	struct UOverlay* Overlay_L1; // 0x418(0x08)
	struct UOverlay* Overlay_L2; // 0x420(0x08)
	struct UOverlay* Overlay_R1; // 0x428(0x08)
	struct UOverlay* Overlay_R2; // 0x430(0x08)
	struct UUI_BP_StoreScrollButton_C* previousButton; // 0x438(0x08)
	struct UButton* purchaseButton; // 0x440(0x08)
	struct UUI_BP_StorePopup_C* storePopup; // 0x448(0x08)
	struct UPhoenixTextBlock* StoreTitle; // 0x450(0x08)
	int32_t carouselIndex; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UUI_BP_StoreItem_C* currentStoreItem; // 0x460(0x08)
	int32_t MaxIndex; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UTween* menuTween; // 0x470(0x08)
	bool canTween; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	int32_t CurrentDirection; // 0x47c(0x04)
	struct ULegendItem* ViewDetailsLegendItem; // 0x480(0x08)
	int32_t TotalOfferCount; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct TArray<struct FOnlineOfferStruct> OnlineOfferArray; // 0x490(0x10)
	struct UPopupScreen* NetworkDisconnectedPopup; // 0x4a0(0x08)
	struct FHermesBPDelegateHandle NetworkChangeHandle; // 0x4a8(0x10)
	bool isHovering; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct ULegendItem* PreviousLegendItem; // 0x4c0(0x08)
	struct ULegendItem* NextLegendItem; // 0x4c8(0x08)
	bool canPurchaseItem; // 0x4d0(0x01)
	bool isPopupShowing; // 0x4d1(0x01)
	bool IsFirstRead; // 0x4d2(0x01)
	char pad_4D3[0x5]; // 0x4d3(0x05)
	struct ULegendItem* PurchaseLegendItem; // 0x4d8(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_Store_4(); // Function UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Store_3(); // Function UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Store_2(); // Function UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Store_1(); // Function UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Store.UI_BP_Store_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Store.UI_BP_Store_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Item From Array(int32_t ItemIndex, struct UUI_BP_StoreItem_C* Item, struct UOverlay* itemOverlay); // Function UI_BP_Store.UI_BP_Store_C.Set Item From Array // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCarousel(int32_t NewSpellIndex); // Function UI_BP_Store.UI_BP_Store_C.UpdateCarousel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetItemsToStandardPosition(); // Function UI_BP_Store.UI_BP_Store_C.ResetItemsToStandardPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DLCLoaded(struct UObject* Caller); // Function UI_BP_Store.UI_BP_Store_C.DLCLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tween Finished(); // Function UI_BP_Store.UI_BP_Store_C.Tween Finished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Init Store Items(); // Function UI_BP_Store.UI_BP_Store_C.Init Store Items // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginNextScroll(); // Function UI_BP_Store.UI_BP_Store_C.BeginNextScroll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginPreviousScroll(); // Function UI_BP_Store.UI_BP_Store_C.BeginPreviousScroll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollAnimationComplete(); // Function UI_BP_Store.UI_BP_Store_C.ScrollAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Store.UI_BP_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Store.UI_BP_Store_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NetworkChange(struct UObject* Caller, int32_t Connected); // Function UI_BP_Store.UI_BP_Store_C.NetworkChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopupDismissed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_Store.UI_BP_Store_C.PopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature(); // Function UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature(); // Function UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Store(int32_t EntryPoint); // Function UI_BP_Store.UI_BP_Store_C.ExecuteUbergraph_UI_BP_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

