// WidgetBlueprintGeneratedClass UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C
// Size: 0x490 (Inherited: 0x328)
struct UUI_BP_FirstFlowAccessibility_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UOverlay* Content; // 0x330(0x08)
	struct UPhoenixRichTextBlock* HiddenMenuReaderText; // 0x338(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x340(0x08)
	struct UPhoenixTextBlock* ProfileName; // 0x348(0x08)
	struct UPhoenixTextBlock* settingsTitle; // 0x350(0x08)
	struct UUI_BP_Settings_Accessibility_C* UI_BP_Settings_Accessibility; // 0x358(0x08)
	struct FMulticastInlineDelegate ChangesComplete; // 0x360(0x10)
	struct FLegendItemData MenuReaderOffLegendData; // 0x370(0x30)
	struct FLegendItemData MenuReaderOnLegendData; // 0x3a0(0x30)
	struct FLegendItemData ContinueLegendData; // 0x3d0(0x30)
	struct FLegendItemData SelectLegendData; // 0x400(0x30)
	struct FLegendItemData ResetLegendData; // 0x430(0x30)
	bool EverEnteredSpecialMenuReaderMode; // 0x460(0x01)
	bool IsInSpecialMenuReaderMode; // 0x461(0x01)
	bool CurrentMenuReaderSetting; // 0x462(0x01)
	bool WantsToShowCursor; // 0x463(0x01)
	bool WaitingForMenuReaderIdle; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FMulticastInlineDelegate CursorChangeRequested; // 0x468(0x10)
	bool IsFirstFullRead; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct ULegendItem* selectLegend; // 0x480(0x08)
	struct ULegendItem* CachedResetLegendItem; // 0x488(0x08)

	void OnResetHoldReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.OnResetHoldReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitSpecialMode(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ExitSpecialMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleMenuReader(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ToggleMenuReader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshLegend(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.RefreshLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartSpecialMenuReaderFlow(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.StartSpecialMenuReaderFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserProfileChange(struct UObject* Caller, struct FString String); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.UserProfileChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FirstFlowAccessibility(int32_t EntryPoint); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ExecuteUbergraph_UI_BP_FirstFlowAccessibility // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void CursorChangeRequested__DelegateSignature(bool WantsToShowCursor); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.CursorChangeRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangesComplete__DelegateSignature(); // Function UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ChangesComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

