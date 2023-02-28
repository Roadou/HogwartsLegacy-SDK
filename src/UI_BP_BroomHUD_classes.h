// WidgetBlueprintGeneratedClass UI_BP_BroomHUD.UI_BP_BroomHUD_C
// Size: 0x3e3 (Inherited: 0x2e8)
struct UUI_BP_BroomHUD_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideBroomControls; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowBroomControls; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowAndHideBroomControls; // 0x300(0x08)
	struct UWidgetAnimation* HideBroomHUD; // 0x308(0x08)
	struct UWidgetAnimation* ShowBroomHUD; // 0x310(0x08)
	struct UUI_BP_LegendItem_C* AscendDescendCallout; // 0x318(0x08)
	struct UUI_BP_LegendItem_C* BoostCallout; // 0x320(0x08)
	struct UUI_BP_BroomBoostMeter_C* BroomBoostMeter; // 0x328(0x08)
	struct UBorder* broomCalloutBorder; // 0x330(0x08)
	struct UVerticalBox* CalloutsBox; // 0x338(0x08)
	struct UBorder* collapsedCallout; // 0x340(0x08)
	struct UUI_BP_LegendItem_C* DismountCallout; // 0x348(0x08)
	struct UExpandableArea* expandableBroomCallouts; // 0x350(0x08)
	struct UVerticalBox* FlightCallouts; // 0x358(0x08)
	struct USizeBox* healthMeterProgress; // 0x360(0x08)
	struct UCanvasPanel* healthPanel; // 0x368(0x08)
	struct UProgressBar* healthProgressBar; // 0x370(0x08)
	struct UUI_BP_LegendItem_C* HoldFlyCallout; // 0x378(0x08)
	struct UInvalidationBox* InvalidationBoxBroomHUD; // 0x380(0x08)
	struct UUI_BP_LegendItem_C* KeyboardFlyCallout; // 0x388(0x08)
	struct UUI_BP_LegendItem_C* ToggleFlyCallout; // 0x390(0x08)
	struct AFlyingBroom* FlyingBroom; // 0x398(0x08)
	struct FHermesBPDelegateHandle ShowControlsHandle; // 0x3a0(0x10)
	struct FHermesBPDelegateHandle ShowControlsHoldHandle; // 0x3b0(0x10)
	struct FHermesBPDelegateHandle HideControlsHandle; // 0x3c0(0x10)
	struct FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x3d0(0x10)
	bool IsShown; // 0x3e0(0x01)
	bool showHealthMeter; // 0x3e1(0x01)
	bool ControlsHeld; // 0x3e2(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_5(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHealthBarVisibility(bool ShowHealthBar); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetHealthBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToggleText(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetToggleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionallyShowKeyboardControls(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.ConditionallyShowKeyboardControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideControls(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.HideControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowControls(bool Hold); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.ShowControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHealthChanged(struct AActor* Target, float InHealthChange, bool bIndicateHUD); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnHealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBroomCallouts(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetBroomCallouts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(struct AFlyingBroom* FlyingBroom); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBroomBoostAllowed(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomBoostAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomBoostDisallowed(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomBoostDisallowed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomForceHoverEnabled(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomForceHoverEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomForceHoverDisabled(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomForceHoverDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomDismountAllowed(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomDismountAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomDismountDisallowed(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomDismountDisallowed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomInputEnabled(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomInputEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomInputDisabled(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomInputDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomSaysShowControls(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysShowControls // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighBoostGainStart(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.HighBoostGainStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighBoostGainEnd(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.HighBoostGainEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExpandCallouts(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.ExpandCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollapseCallouts(); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.CollapseCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomSaysShowControlsHold(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysShowControlsHold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomSaysHideControls(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysHideControls // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomBoost(struct UObject* Caller, struct AActor* Actor); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomBoost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomBoostEnd(struct UObject* Caller, struct AActor* Actor); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomBoostEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomHUD(int32_t EntryPoint); // Function UI_BP_BroomHUD.UI_BP_BroomHUD_C.ExecuteUbergraph_UI_BP_BroomHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

