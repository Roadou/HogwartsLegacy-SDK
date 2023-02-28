// WidgetBlueprintGeneratedClass UI_BP_MenuTextButton.UI_BP_MenuTextButton_C
// Size: 0x3cb (Inherited: 0x328)
struct UUI_BP_MenuTextButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowSparkles; // 0x330(0x08)
	struct UWidgetAnimation* OnTextButtonDeselected; // 0x338(0x08)
	struct UWidgetAnimation* OnTextButtonSelected; // 0x340(0x08)
	struct UWidgetAnimation* OnTextButtonHovered; // 0x348(0x08)
	struct UPhoenixImage* BackGorund; // 0x350(0x08)
	struct UImage* Border; // 0x358(0x08)
	struct UImage* goldleafL; // 0x360(0x08)
	struct UImage* goldleafR; // 0x368(0x08)
	struct UButton* TheButton; // 0x370(0x08)
	struct UPhoenixTextBlock* TheText; // 0x378(0x08)
	struct UUI_BP_SelectedBox_C* UI_BP_SelectedBox; // 0x380(0x08)
	struct FMulticastInlineDelegate MenuTextButtonClicked; // 0x388(0x10)
	struct FMulticastInlineDelegate MenuTextButtonHovered; // 0x398(0x10)
	struct FMulticastInlineDelegate MenuTextButtonUnhovered; // 0x3a8(0x10)
	struct FString ButtonText; // 0x3b8(0x10)
	enum class ETextJustify ButtonTextJustification; // 0x3c8(0x01)
	bool IsButtonSelected; // 0x3c9(0x01)
	bool TranslateButtonText; // 0x3ca(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HandleUnhovered(struct UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.HandleUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleHovered(struct UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.HandleHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(bool IsSelected); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hovered(bool CurrentlyHovered); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.SetButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MenuTextButton(int32_t EntryPoint); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.ExecuteUbergraph_UI_BP_MenuTextButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.MenuTextButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.MenuTextButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_MenuTextButton.UI_BP_MenuTextButton_C.MenuTextButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

