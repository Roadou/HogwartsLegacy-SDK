// WidgetBlueprintGeneratedClass UI_BP_PhxComboBox.UI_BP_PhxComboBox_C
// Size: 0x1068 (Inherited: 0x328)
struct UUI_BP_PhxComboBox_C : UPhxComboBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* rotateArrow; // 0x330(0x08)
	struct UWidgetAnimation* Hover; // 0x338(0x08)
	struct UPhoenixTextBlock* ActiveItemHeaderText; // 0x340(0x08)
	struct UImage* ArrowImage; // 0x348(0x08)
	struct UVerticalBox* ContentsBox; // 0x350(0x08)
	struct UImage* goldleafBorder; // 0x358(0x08)
	struct UImage* goldleafLeft; // 0x360(0x08)
	struct UImage* goldleafRigth; // 0x368(0x08)
	struct UButton* HeaderButton; // 0x370(0x08)
	struct UBorder* ScrollBorder; // 0x378(0x08)
	struct UUI_BP_SimpleScrollBox_C* ScrollBox; // 0x380(0x08)
	struct USizeBox* ScrollSizeBox; // 0x388(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x390(0x08)
	bool IsExpanded; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float MaxListHeight; // 0x39c(0x04)
	struct FComboBoxStyle Style_1; // 0x3a0(0x3f0)
	struct TArray<struct FString> DropdownItems; // 0x790(0x10)
	struct FTableRowStyle ItemStyle; // 0x7a0(0x7c8)
	struct FSlateFontInfo Font_1; // 0xf68(0x58)
	int32_t SelectedIndex; // 0xfc0(0x04)
	char pad_FC4[0x4]; // 0xfc4(0x04)
	struct TArray<struct UUI_BP_PhxComboBoxItem_C*> ItemArray; // 0xfc8(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0xfd8(0x10)
	struct FMulticastInlineDelegate OnItemHovered; // 0xfe8(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0xff8(0x10)
	struct FMulticastInlineDelegate OnOpen; // 0x1008(0x10)
	struct FMulticastInlineDelegate OnClose; // 0x1018(0x10)
	struct FMulticastInlineDelegate OnHeaderButtonHovered; // 0x1028(0x10)
	struct FMulticastInlineDelegate OnHeaderButtonUnhovered; // 0x1038(0x10)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1048(0x10)
	bool ItemsTranslatable; // 0x1058(0x01)
	bool ScaleTextFont; // 0x1059(0x01)
	bool WantsPaintGeo; // 0x105a(0x01)
	char pad_105B[0x5]; // 0x105b(0x05)
	struct UUI_BP_PhxComboBoxItem_C* LastHoveredItem; // 0x1060(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetTitle(struct FString NewTitleText, bool IsTranslatable); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDropdownOptions(struct TArray<struct FString>& NewOptions); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetDropdownOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindOptionIndex(struct FString InOption, int32_t& Index, bool& bSuccessful); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.FindOptionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetDesiredScrollSize(float NewHeight); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetDesiredScrollSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSelectedOption(struct FString& SelectedOption); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.GetSelectedOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetItemsTranslatable(bool ItemsTranslatable); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetItemsTranslatable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSelectedIndex(int32_t& SelectedIndex); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.GetSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetSelectedIndex(int32_t NewIndex, bool TriggerValueChangedEvent); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetSelectedIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateItems(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.PopulateItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ItemClicked(struct UUI_BP_PhxComboBoxItem_C* Item); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ItemUnhovered(struct UUI_BP_PhxComboBoxItem_C* UnhoveredItem); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ItemHovered(struct UUI_BP_PhxComboBoxItem_C* HoveredItem); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TogglePopout(bool ShouldExpand); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.TogglePopout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PhxComboBox(int32_t EntryPoint); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ExecuteUbergraph_UI_BP_PhxComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnSelectionChanged__DelegateSignature(struct FString NewSelection); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClose__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHeaderButtonUnhovered__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnHeaderButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHeaderButtonHovered__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnHeaderButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOpen__DelegateSignature(); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemUnhovered__DelegateSignature(struct FString ItemUnhovered); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemHovered__DelegateSignature(struct FString ItemHovered); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemClicked__DelegateSignature(struct FString ItemClicked); // Function UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

