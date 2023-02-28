// WidgetBlueprintGeneratedClass UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C
// Size: 0x40d (Inherited: 0x328)
struct UUI_BP_SettingsSliderButton_C : USettingsSliderButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UPhoenixImage* BackGorund; // 0x338(0x08)
	struct UImage* Border; // 0x340(0x08)
	struct UImage* BorderMotiveL; // 0x348(0x08)
	struct UImage* BorderMotiveR; // 0x350(0x08)
	struct UImage* Image_Divider; // 0x358(0x08)
	struct USlider* optionSlider; // 0x360(0x08)
	struct UPhoenixTextBlock* PhoenixTextBlock_SliderNumber; // 0x368(0x08)
	struct UPhoenixTextBlock* selectionText; // 0x370(0x08)
	struct UProgressBar* sliderFill; // 0x378(0x08)
	struct USpacer* Spacer_number; // 0x380(0x08)
	struct UButton* TheButton; // 0x388(0x08)
	struct UPhoenixTextBlock* titleSeparator; // 0x390(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x398(0x08)
	struct FMulticastInlineDelegate SettingsSliderHovered; // 0x3a0(0x10)
	struct FMulticastInlineDelegate SettingsSliderUnhovered; // 0x3b0(0x10)
	struct FString SliderTitle; // 0x3c0(0x10)
	struct FMulticastInlineDelegate SettingsSliderChanged; // 0x3d0(0x10)
	bool changed; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float LastValue; // 0x3e4(0x04)
	bool ShowSelectionText; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float sliderStepSize; // 0x3ec(0x04)
	struct FMulticastInlineDelegate SettingsSliderFinished; // 0x3f0(0x10)
	bool HaveNumberSpace; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float NumberSpaceSizeX; // 0x404(0x04)
	float DividerLeftPadding; // 0x408(0x04)
	bool MouseUsesStep; // 0x40c(0x01)

	void StepUp(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.StepUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StepDown(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.StepDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSliderChanged(float NewVal); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.OnSliderChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNumberText(struct FText NumberInput); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetNumberText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SliderValToPercent(float SliderVal, float& Percent); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SliderValToPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetSliderVals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSliderSteps(float NumSteps); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetSliderSteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSelectedText(struct FText newText); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetSelectedText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateSliderOptions(float SliderValue); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.PopulateSliderOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SettingsSliderButton(int32_t EntryPoint); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.ExecuteUbergraph_UI_BP_SettingsSliderButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderUnhovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

