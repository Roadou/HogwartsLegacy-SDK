// WidgetBlueprintGeneratedClass UI_BP_FastTravelButton.UI_BP_FastTravelButton_C
// Size: 0x3d1 (Inherited: 0x328)
struct UUI_BP_FastTravelButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnTextButtonDeselected; // 0x330(0x08)
	struct UWidgetAnimation* OnTextButtonSelected; // 0x338(0x08)
	struct UWidgetAnimation* OnTextButtonHovered; // 0x340(0x08)
	struct UPhoenixImage* fastTravelIcon; // 0x348(0x08)
	struct UBorder* textBorder; // 0x350(0x08)
	struct UButton* TheButton; // 0x358(0x08)
	struct UPhoenixTextBlock* TheText; // 0x360(0x08)
	struct FMulticastInlineDelegate FastTravelButtonClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate FastTravelButtonHovered; // 0x378(0x10)
	struct FMulticastInlineDelegate FastTravelButtonUnhovered; // 0x388(0x10)
	struct FString ButtonText; // 0x398(0x10)
	bool IsButtonSelected; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FMulticastInlineDelegate ExpandComplete; // 0x3b0(0x10)
	struct FMulticastInlineDelegate CollapseComplete; // 0x3c0(0x10)
	bool IsLocked; // 0x3d0(0x01)

	void Set Unlocked(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Set Unlocked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HandleUnhovered(struct UUI_BP_FastTravelButton_C* Button, bool JustChangeHighjlight); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.HandleUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleHovered(struct UUI_BP_FastTravelButton_C* Button, bool JustChangeHighlight); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.HandleHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(bool IsSelected); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hovered(bool CurrentlyHovered); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExpandAnimationComplete(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExpandAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollapseAnimationComplete(); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.CollapseAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FastTravelButton(int32_t EntryPoint); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExecuteUbergraph_UI_BP_FastTravelButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void CollapseComplete__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.CollapseComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExpandComplete__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExpandComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelButtonUnhovered__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelButtonHovered__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelButtonClicked__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

