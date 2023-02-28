// WidgetBlueprintGeneratedClass UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_FirstPlayCalibration_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x330(0x08)
	struct UWidgetSwitcher* MainSwitcher; // 0x338(0x08)
	struct UUI_BP_Settings_Calibration_C* UI_BP_Settings_Calibration; // 0x340(0x08)
	struct UUI_BP_Settings_HDRCalibration_C* UI_BP_Settings_HDRCalibration; // 0x348(0x08)
	struct FMulticastInlineDelegate BrightnessAccepted; // 0x350(0x10)
	bool IsHDRCalibration; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FMulticastInlineDelegate HDRBrightnessAccepted; // 0x368(0x10)
	struct ULegendItem* CachedResetLegendItem; // 0x378(0x08)
	struct ULegendItem* CachedAdjustLegendItem; // 0x380(0x08)

	void AdjustForViewportWidth(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CallBrightnessAccepted(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.CallBrightnessAccepted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCalibrationActor(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.ShowCalibrationActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideCalibrationActor(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.HideCalibrationActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCalibration(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.InitCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnResetHoldReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.OnResetHoldReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FirstPlayCalibration(int32_t EntryPoint); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.ExecuteUbergraph_UI_BP_FirstPlayCalibration // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void HDRBrightnessAccepted__DelegateSignature(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.HDRBrightnessAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BrightnessAccepted__DelegateSignature(); // Function UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BrightnessAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

