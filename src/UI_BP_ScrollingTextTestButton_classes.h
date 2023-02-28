// WidgetBlueprintGeneratedClass UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C
// Size: 0x2f2 (Inherited: 0x268)
struct UUI_BP_ScrollingTextTestButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* OnTextButtonDeselected; // 0x270(0x08)
	struct UWidgetAnimation* OnTextButtonSelected; // 0x278(0x08)
	struct UWidgetAnimation* OnTextButtonUnhovered; // 0x280(0x08)
	struct UWidgetAnimation* OnTextButtonHovered; // 0x288(0x08)
	struct UImage* goldleafBorder; // 0x290(0x08)
	struct UUI_BP_ScrollingTextBlock_C* scrollingText; // 0x298(0x08)
	struct UImage* selected; // 0x2a0(0x08)
	struct UButton* TheButton; // 0x2a8(0x08)
	struct FMulticastInlineDelegate ScrollingTextButtonClicked; // 0x2b0(0x10)
	struct FMulticastInlineDelegate ScrollingTextButtonHovered; // 0x2c0(0x10)
	struct FMulticastInlineDelegate ScrollingTextButtonUnhovered; // 0x2d0(0x10)
	struct FString ButtonText; // 0x2e0(0x10)
	enum class ETextJustify ButtonTextJustification; // 0x2f0(0x01)
	bool IsButtonSelected; // 0x2f1(0x01)

	void HandleUnhovered(struct UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.HandleUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleHovered(struct UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.HandleHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(bool IsSelected); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hovered(bool CurrentlyHovered); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ScrollingTextTestButton(int32_t EntryPoint); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ExecuteUbergraph_UI_BP_ScrollingTextTestButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void ScrollingTextButtonUnhovered__DelegateSignature(struct UUI_BP_ScrollingTextTestButton_C* Button); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollingTextButtonHovered__DelegateSignature(struct UUI_BP_ScrollingTextTestButton_C* Button); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollingTextButtonClicked__DelegateSignature(struct UUI_BP_ScrollingTextTestButton_C* Button); // Function UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

