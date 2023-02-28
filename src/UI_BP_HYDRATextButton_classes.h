// WidgetBlueprintGeneratedClass UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C
// Size: 0x398 (Inherited: 0x328)
struct UUI_BP_HYDRATextButton_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UPhoenixImage* BackGorund; // 0x338(0x08)
	struct UImage* FlareBack; // 0x340(0x08)
	struct UButton* TheButton; // 0x348(0x08)
	struct UPhoenixRichTextBlock* TheText; // 0x350(0x08)
	struct FMulticastInlineDelegate HYDRATextButtonClicked; // 0x358(0x10)
	struct FMulticastInlineDelegate HYDRATextButtonHovered; // 0x368(0x10)
	struct FMulticastInlineDelegate HYDRATextButtonUnhovered; // 0x378(0x10)
	struct FString ButtonText; // 0x388(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Hovered(bool CurrentlyHovered); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HYDRATextButton(int32_t EntryPoint); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.ExecuteUbergraph_UI_BP_HYDRATextButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void HYDRATextButtonUnhovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HYDRATextButtonHovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HYDRATextButtonClicked__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

