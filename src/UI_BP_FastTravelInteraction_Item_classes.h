// WidgetBlueprintGeneratedClass UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C
// Size: 0x3f0 (Inherited: 0x328)
struct UUI_BP_FastTravelInteraction_Item_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* toInactive; // 0x330(0x08)
	struct UWidgetAnimation* toActive; // 0x338(0x08)
	struct UImage* buttonIcon; // 0x340(0x08)
	struct UImage* Fresnel; // 0x348(0x08)
	struct UImage* highlight; // 0x350(0x08)
	struct UImage* highlightBack; // 0x358(0x08)
	struct UImage* iconBack; // 0x360(0x08)
	struct UImage* iconBack_2; // 0x368(0x08)
	struct UButton* ItemButton; // 0x370(0x08)
	struct UHorizontalBox* leftCallout; // 0x378(0x08)
	struct UPhoenixTextBlock* leftText; // 0x380(0x08)
	struct UHorizontalBox* rightCallout; // 0x388(0x08)
	struct UPhoenixTextBlock* rightText; // 0x390(0x08)
	struct UPhoenixTextBlock* CurrentTextField; // 0x398(0x08)
	struct UWidgetAnimation* CurrentAnimation; // 0x3a0(0x08)
	struct FString ItemName; // 0x3a8(0x10)
	int32_t ItemIndex; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FMulticastInlineDelegate OnFastTravelButtonSelected; // 0x3c0(0x10)
	struct UWidgetAnimation* CurrentInactiveAnimation; // 0x3d0(0x08)
	bool Enabled; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FMulticastInlineDelegate OnFastTravelButtonHovered; // 0x3e0(0x10)

	void IsEnabled(bool& Enabled); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.IsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetEnable(bool Enable); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetEnable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemState(bool IsActive); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetItemState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemData(int32_t ItemIndex, struct FString ItemId); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetItemData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSynchronizeProperties(); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FastTravelInteraction_Item(int32_t EntryPoint); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.ExecuteUbergraph_UI_BP_FastTravelInteraction_Item // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnFastTravelButtonHovered__DelegateSignature(struct UUI_BP_FastTravelInteraction_Item_C* Button); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnFastTravelButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFastTravelButtonSelected__DelegateSignature(struct UUI_BP_FastTravelInteraction_Item_C* Button); // Function UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnFastTravelButtonSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

