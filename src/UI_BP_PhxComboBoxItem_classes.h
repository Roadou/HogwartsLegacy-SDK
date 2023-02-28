// WidgetBlueprintGeneratedClass UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C
// Size: 0xba9 (Inherited: 0x328)
struct UUI_BP_PhxComboBoxItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UButton* ItemButton; // 0x330(0x08)
	struct UPhoenixTextBlock* TextBlock; // 0x338(0x08)
	struct FString ItemText; // 0x340(0x10)
	struct FTableRowStyle Style; // 0x350(0x7c8)
	bool IsActive; // 0xb18(0x01)
	char pad_B19[0x7]; // 0xb19(0x07)
	struct FSlateFontInfo Font; // 0xb20(0x58)
	struct FMulticastInlineDelegate OnItemClicked; // 0xb78(0x10)
	struct FMulticastInlineDelegate OnItemHovered; // 0xb88(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0xb98(0x10)
	bool IsTranslatable; // 0xba8(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateDynamicStyle(); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.UpdateDynamicStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsActive(bool ACTIVE); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PhxComboBoxItem(int32_t EntryPoint); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.ExecuteUbergraph_UI_BP_PhxComboBoxItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnItemUnhovered__DelegateSignature(struct UUI_BP_PhxComboBoxItem_C* Item); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemHovered__DelegateSignature(struct UUI_BP_PhxComboBoxItem_C* Item); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemClicked__DelegateSignature(struct UUI_BP_PhxComboBoxItem_C* Item); // Function UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

