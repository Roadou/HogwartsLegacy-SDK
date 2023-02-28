// WidgetBlueprintGeneratedClass UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C
// Size: 0x3c0 (Inherited: 0x328)
struct UUI_BP_SettingsCheckboxButton_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ToggleOn; // 0x330(0x08)
	struct UWidgetAnimation* OnHover; // 0x338(0x08)
	struct UPhoenixImage* BackGorund; // 0x340(0x08)
	struct UImage* goldleafBorder; // 0x348(0x08)
	struct UImage* goldleafLeft; // 0x350(0x08)
	struct UImage* goldleafRigth; // 0x358(0x08)
	struct UPhoenixTextBlock* onOffText; // 0x360(0x08)
	struct UButton* TheButton; // 0x368(0x08)
	struct UPhoenixTextBlock* TheText; // 0x370(0x08)
	struct FString ButtonText; // 0x378(0x10)
	bool isCheckmarkChecked; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FMulticastInlineDelegate SettingsCheckmarkPressed; // 0x390(0x10)
	struct FMulticastInlineDelegate ToggleHovered; // 0x3a0(0x10)
	struct FMulticastInlineDelegate ToggleUnhovered; // 0x3b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCheckmarkState(bool IsChecked); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SetCheckmarkState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCheckmark(bool& IsChecked); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleCheckmark // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SettingsCheckboxButton(int32_t EntryPoint); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ExecuteUbergraph_UI_BP_SettingsCheckboxButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void ToggleUnhovered__DelegateSignature(struct UUI_BP_SettingsCheckboxButton_C* Button); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleHovered__DelegateSignature(struct UUI_BP_SettingsCheckboxButton_C* Button); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, struct UUI_BP_SettingsCheckboxButton_C* Button); // Function UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SettingsCheckmarkPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

