// WidgetBlueprintGeneratedClass UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C
// Size: 0x3c0 (Inherited: 0x328)
struct UUI_BP_SettingsDropDownButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UUI_BP_PhxComboBox_C* ComboBox; // 0x338(0x08)
	struct UOverlay* DropdownOverlay; // 0x340(0x08)
	struct FMulticastInlineDelegate DropDownOptionChanged; // 0x348(0x10)
	struct FString DropDownTitle; // 0x358(0x10)
	float DropdownWidth; // 0x368(0x04)
	bool TranslateContents; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct FMulticastInlineDelegate DropdownHovered; // 0x370(0x10)
	struct FMulticastInlineDelegate DropdownUnhovered; // 0x380(0x10)
	bool Scalefonts; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMulticastInlineDelegate DropdownOpened; // 0x398(0x10)
	bool TranslateTitle; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FMulticastInlineDelegate DropDownOptionHovered; // 0x3b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetDropDownSize(float DesiredHeight); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.SetDropDownSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSelectedIndex(int32_t& SelectedIndex); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GetSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetSelectedOption(struct FString& SelectedOption); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GetSelectedOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetDropDownIndex(int32_t NewIndex); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.SetDropDownIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateDropDownOptions(struct TArray<struct FString>& OptionsArray, int32_t OptionIndex); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.PopulateDropDownOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(struct FString NewSelection); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature(struct FString ItemHovered); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature(struct FString ItemClicked); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SettingsDropDownButton(int32_t EntryPoint); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.ExecuteUbergraph_UI_BP_SettingsDropDownButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void DropDownOptionHovered__DelegateSignature(struct UUI_BP_SettingsDropDownButton_C* Button, struct FString HoveredItemString); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropDownOptionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropdownOpened__DelegateSignature(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropdownUnhovered__DelegateSignature(); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropdownHovered__DelegateSignature(struct UUI_BP_SettingsDropDownButton_C* Button); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, struct UUI_BP_SettingsDropDownButton_C* Button); // Function UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropDownOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

