// WidgetBlueprintGeneratedClass UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C
// Size: 0x450 (Inherited: 0x328)
struct UUI_BP_SettingsSliderButton_Snapping_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UButton* LeftArrowButton; // 0x338(0x08)
	struct UImage* leftArrowImage; // 0x340(0x08)
	struct USlider* optionSlider; // 0x348(0x08)
	struct UButton* RightArrowButton; // 0x350(0x08)
	struct UImage* rightArrowImage; // 0x358(0x08)
	struct UPhoenixTextBlock* selectionText; // 0x360(0x08)
	struct UProgressBar* sliderFill; // 0x368(0x08)
	struct UHorizontalBox* sliderOutline; // 0x370(0x08)
	struct UButton* TheButton; // 0x378(0x08)
	struct UPhoenixTextBlock* titleSeparator; // 0x380(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x388(0x08)
	struct FMulticastInlineDelegate SettingsSliderHovered; // 0x390(0x10)
	struct FMulticastInlineDelegate SettingsSliderUnhovered; // 0x3a0(0x10)
	struct FString SliderTitle; // 0x3b0(0x10)
	struct FMulticastInlineDelegate SettingsSliderChanged; // 0x3c0(0x10)
	bool changed; // 0x3d0(0x01)
	bool Visualise Steps; // 0x3d1(0x01)
	bool ShowSelectionText; // 0x3d2(0x01)
	char pad_3D3[0x1]; // 0x3d3(0x01)
	float LastValue; // 0x3d4(0x04)
	float sliderStepSize; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UWidget* SliderPoint; // 0x3e0(0x08)
	struct FMulticastInlineDelegate SettingsSliderFinished; // 0x3e8(0x10)
	bool ShowFill; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FSlateColor ArrowHoverTint; // 0x400(0x28)
	struct FSlateColor ArrowNormalTint; // 0x428(0x28)

	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StepUp(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.StepUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StepDown(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.StepDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSliderValue(float NewVal); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.UpdateSliderValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VisualiseSliderSteps(int32_t StepsNumber, bool VisualiseSteps); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.VisualiseSliderSteps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SliderValToPercent(float SliderVal, float& Percent); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SliderValToPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SetSliderVals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSliderSteps(float NumSteps); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SetSliderSteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSelectedText(struct FText newText); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SetSelectedText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateSliderOptions(float SliderValue); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.PopulateSliderOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping(int32_t EntryPoint); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping // (Final|UbergraphFunction) // @ game+0x38a7480
	void SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float EndValue); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float NewValue); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderUnhovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_Snapping_C* SliderButton); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_Snapping_C* SliderButton); // Function UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

