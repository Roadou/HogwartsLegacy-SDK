// WidgetBlueprintGeneratedClass UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_Settings_Calibration_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* outro; // 0x330(0x08)
	struct UUI_BP_BrightnessSlider_C* brightnessSlider; // 0x338(0x08)
	struct UPhoenixTextBlock* calibrationText; // 0x340(0x08)
	struct FMulticastInlineDelegate GammaValueChanged; // 0x348(0x10)
	float CalibrationMin; // 0x358(0x04)
	float CalibrationMax; // 0x35c(0x04)
	bool changed; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float finalValue; // 0x364(0x04)
	struct FMulticastInlineDelegate SliderHovered; // 0x368(0x10)
	struct FMulticastInlineDelegate SliderUnhovered; // 0x378(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCalibration(float CalibrationPercent); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SetCalibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void outroBrightnessAnimEvent(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.outroBrightnessAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetCalibration(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.ResetCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeAllSettings(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.InitializeAllSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton, float NewValue); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature(struct UUI_BP_BrightnessSlider_C* SliderButton, float EndValue); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Settings_Calibration(int32_t EntryPoint); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.ExecuteUbergraph_UI_BP_Settings_Calibration // (Final|UbergraphFunction) // @ game+0x38a7480
	void SliderUnhovered__DelegateSignature(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SliderUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SliderHovered__DelegateSignature(); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SliderHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GammaValueChanged__DelegateSignature(float NewGamma); // Function UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.GammaValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

