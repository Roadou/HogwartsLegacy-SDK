// WidgetBlueprintGeneratedClass UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C
// Size: 0x548 (Inherited: 0x4a8)
struct UUI_BP_CollectionItemButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnSelectedAnimation; // 0x4b0(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x4b8(0x08)
	struct USizeBox* buttonSizeBox; // 0x4c0(0x08)
	struct UImage* Complete; // 0x4c8(0x08)
	struct UCanvasPanel* knownCard; // 0x4d0(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x4d8(0x08)
	struct UImage* selected; // 0x4e0(0x08)
	struct UCanvasPanel* unknownCard; // 0x4e8(0x08)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnHoveredEventDispatcher; // 0x500(0x10)
	struct FMulticastInlineDelegate OnUnhoveredEventDispatcher; // 0x510(0x10)
	struct FName ItemName; // 0x520(0x08)
	struct FName ItemState; // 0x528(0x08)
	struct FName ParentCategory; // 0x530(0x08)
	struct FString PlayerHouse; // 0x538(0x10)

	void InitCollectionItem(struct FName Name, struct FName State, struct FName Category); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.InitCollectionItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNewItemVisibility(); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.SetNewItemVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCollectionItemState(struct FName State); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.SetCollectionItemState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.BndEvt__UI_BP_CollectionItemButton_TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnCollectionIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.OnCollectionIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CollectionItemButton(int32_t EntryPoint); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.ExecuteUbergraph_UI_BP_CollectionItemButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnUnhoveredEventDispatcher__DelegateSignature(struct UUI_BP_CollectionItemButton_C* CollectionItem); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.OnUnhoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_CollectionItemButton_C* CollectionItem); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.OnHoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClickEventDispatcher__DelegateSignature(struct UUI_BP_CollectionItemButton_C* CollectionItem); // Function UI_BP_CollectionItemButton.UI_BP_CollectionItemButton_C.OnClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

