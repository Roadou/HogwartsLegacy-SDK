// WidgetBlueprintGeneratedClass UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C
// Size: 0x3d4 (Inherited: 0x328)
struct UUI_BP_Settings_HDRCalibration_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* outro; // 0x330(0x08)
	struct UPhoenixTextBlock* ScreenTitle; // 0x338(0x08)
	struct UUI_BP_SettingsSliderButton_C* Slider_MaxBrightness; // 0x340(0x08)
	struct UUI_BP_SettingsSliderButton_C* Slider_MidPoint; // 0x348(0x08)
	struct UUI_BP_SettingsSliderButton_C* Slider_MinBrightness; // 0x350(0x08)
	struct UUI_BP_SettingsSliderButton_C* Slider_UIBrightness; // 0x358(0x08)
	struct UPhoenixTextBlock* Text_Tip1; // 0x360(0x08)
	struct UPhoenixTextBlock* Text_Tip2; // 0x368(0x08)
	struct UPhoenixTextBlock* Text_Tip3; // 0x370(0x08)
	struct UPhoenixTextBlock* Text_Tip4; // 0x378(0x08)
	struct FFloatRange BlackPointRange; // 0x380(0x10)
	struct FFloatRange WhitePointRange; // 0x390(0x10)
	struct FFloatRange MidPointRange; // 0x3a0(0x10)
	struct FFloatRange UIBrightnessRange; // 0x3b0(0x10)
	float SliderExponent; // 0x3c0(0x04)
	float CurrentMaxBrightness; // 0x3c4(0x04)
	float CurrentMinBrightness; // 0x3c8(0x04)
	float CurrentUIBrightness; // 0x3cc(0x04)
	float CurrentMidBrightness; // 0x3d0(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetPostProcessVolume(bool bEnabled); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.SetPostProcessVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateUI(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.UpdateUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateGameSettings(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.UpdateGameSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Resolve Slider Value(float InValue, struct FFloatRange Range, float Exponent, bool [Min, Max] -> [0, 1], float& Out); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Resolve Slider Value // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Get Normalized Slider Value(float InValue, struct FFloatRange Range, float Exponent, float& Out); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Get Normalized Slider Value // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetGetCVAR(struct FString Name, float NewValue, bool Set, float& OutValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.SetGetCVAR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowHDRCalibrationScreen(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ShowHDRCalibrationScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHDRCalibrationScreen(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.HideHDRCalibrationScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature(struct UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OutroHDRAnimEvent(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.OutroHDRAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetCalibration(); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ResetCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Settings_HDRCalibration(int32_t EntryPoint); // Function UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ExecuteUbergraph_UI_BP_Settings_HDRCalibration // (Final|UbergraphFunction) // @ game+0x38a7480
};

