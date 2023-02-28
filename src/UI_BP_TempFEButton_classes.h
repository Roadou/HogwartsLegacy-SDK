// WidgetBlueprintGeneratedClass UI_BP_TempFEButton.UI_BP_TempFEButton_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUI_BP_TempFEButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixTextBlock* ButtonText; // 0x270(0x08)
	struct UButton* tempButton; // 0x278(0x08)
	struct FMulticastInlineDelegate OnTempFEButtonClicked; // 0x280(0x10)
	int32_t listIndex; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnTempFEButtonHover; // 0x298(0x10)

	void SetButtonIndex(int32_t CurrentIndex); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.SetButtonIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FName ButtonText); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_TempFEButton(int32_t EntryPoint); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.ExecuteUbergraph_UI_BP_TempFEButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnTempFEButtonHover__DelegateSignature(struct UUI_BP_TempFEButton_C* Button); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.OnTempFEButtonHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTempFEButtonClicked__DelegateSignature(struct UUI_BP_TempFEButton_C* Button); // Function UI_BP_TempFEButton.UI_BP_TempFEButton_C.OnTempFEButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

