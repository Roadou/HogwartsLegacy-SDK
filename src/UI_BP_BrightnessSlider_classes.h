// WidgetBlueprintGeneratedClass UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C
// Size: 0x3e5 (Inherited: 0x328)
struct UUI_BP_BrightnessSlider_C : USettingsSliderButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UPhoenixImage* BackGorund; // 0x338(0x08)
	struct UImage* Border; // 0x340(0x08)
	struct UImage* BorderMotiveL; // 0x348(0x08)
	struct UImage* BorderMotiveR; // 0x350(0x08)
	struct USlider* optionSlider; // 0x358(0x08)
	struct UProgressBar* sliderFill; // 0x360(0x08)
	struct UButton* TheButton; // 0x368(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x370(0x08)
	struct FMulticastInlineDelegate SettingsSliderHovered; // 0x378(0x10)
	struct FMulticastInlineDelegate SettingsSliderUnhovered; // 0x388(0x10)
	struct FString SliderTitle; // 0x398(0x10)
	struct FMulticastInlineDelegate SettingsSliderChanged; // 0x3a8(0x10)
	bool changed; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float LastValue; // 0x3bc(0x04)
	bool ShowSelectionText; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float sliderStepSize; // 0x3c4(0x04)
	struct FMulticastInlineDelegate SettingsSliderFinished; // 0x3c8(0x10)
	bool HaveNumberSpace; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float NumberSpaceSizeX; // 0x3dc(0x04)
	float DividerLeftPadding; // 0x3e0(0x04)
	bool MouseUsesStep; // 0x3e4(0x01)

	void StepUp(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.StepUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StepDown(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.StepDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSliderChanged(float NewVal); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.OnSliderChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SliderValToPercent(float SliderVal, float& Percent); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SliderValToPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SetSliderVals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSliderSteps(float NumSteps); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SetSliderSteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateSliderOptions(float SliderValue); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.PopulateSliderOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature(); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrightnessSlider(int32_t EntryPoint); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.ExecuteUbergraph_UI_BP_BrightnessSlider // (Final|UbergraphFunction) // @ game+0x38a7480
	void SettingsSliderFinished__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton, float EndValue); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SettingsSliderFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderChanged__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton, float NewValue); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SettingsSliderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderUnhovered__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SettingsSliderUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderHovered__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton); // Function UI_BP_BrightnessSlider.UI_BP_BrightnessSlider_C.SettingsSliderHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

