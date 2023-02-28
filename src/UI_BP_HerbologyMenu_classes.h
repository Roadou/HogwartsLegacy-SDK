// WidgetBlueprintGeneratedClass UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C
// Size: 0x500 (Inherited: 0x370)
struct UUI_BP_HerbologyMenu_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* ShowInventoryFullMessage; // 0x378(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x380(0x08)
	struct UWidgetAnimation* ShowErrorMessage; // 0x388(0x08)
	struct UUI_BP_HerbologyApplyItems_C* ApplyItemsWidget; // 0x390(0x08)
	struct UUI_BP_BackgroundSmoke_C* backgroundSmoke; // 0x398(0x08)
	struct UWidgetSwitcher* ContentWidgetSwitcher; // 0x3a0(0x08)
	struct UImage* ErrorIcon; // 0x3a8(0x08)
	struct UPhoenixTextBlock* ErrorMessageText; // 0x3b0(0x08)
	struct UPhoenixTextBlock* ErrorMessageText_2; // 0x3b8(0x08)
	struct UUI_BP_HerbologyGrown_C* GrownWidget; // 0x3c0(0x08)
	struct URetainerBox* headerTitleRetainer; // 0x3c8(0x08)
	struct UOverlay* LeftButtonOverlay; // 0x3d0(0x08)
	struct UButton* NavLeftButton; // 0x3d8(0x08)
	struct UButton* NavRightButton; // 0x3e0(0x08)
	struct UPhoenixTextBlock* PlotContentsText; // 0x3e8(0x08)
	struct UPhoenixTextBlock* PlotNameText; // 0x3f0(0x08)
	struct UOverlay* RightButtonOverlay; // 0x3f8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x400(0x08)
	struct UUI_BP_HerbologySeedSelection_C* SeedSelectionWidget; // 0x408(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x410(0x08)
	struct AHerbPlot* HerbPlot; // 0x418(0x08)
	bool InputLocked; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float Current Input Timeout Length; // 0x424(0x04)
	struct AHerbPlot* PreviousHerbPlot; // 0x428(0x08)
	struct UObject* ActiveLightRig; // 0x430(0x08)
	struct ULegendItem* LegendItemPickup; // 0x438(0x08)
	struct ULegendItem* LegendItemDestroy; // 0x440(0x08)
	bool IsPanelTransitionInProgress; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct TMap<struct FTimerHandle, struct AHerbPlot*> EnableFadingTimerHerbPlot; // 0x450(0x50)
	struct TMap<struct FTimerHandle, bool> EnableFadingTimerIncludesParent; // 0x4a0(0x50)
	struct ULegendItem* LegendItemFactSheet; // 0x4f0(0x08)
	struct ULegendItem* LegendItemSelect; // 0x4f8(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetFadingEnabledForPlot(struct AHerbPlot* HerbPlot, bool FadingEnabled, bool AlsoForParentAcotr); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.SetFadingEnabledForPlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerPanelChangeWithAnimation(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.TriggerPanelChangeWithAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToRightPlot(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.SwitchToRightPlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToLeftPlot(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.SwitchToLeftPlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonLegend(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RefreshButtonLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshForHerbPlot(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RefreshForHerbPlot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFertilizerSelected(struct FName FertilizerID); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnFertilizerSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BeginInputTimeout(float TimeoutTime); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BeginInputTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableFadingForHerbPlot(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.DisableFadingForHerbPlot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveNoFadeTag(struct AActor* Actor); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RemoveNoFadeTag // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlantSelected(struct FName PlantID); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnPlantSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyItemsWidgetRequiresLegendUpdate(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.ApplyItemsWidgetRequiresLegendUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature(struct UUI_BP_HerbologyFertilizerButton_C* FertilizerButton); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologyMenu(int32_t EntryPoint); // Function UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.ExecuteUbergraph_UI_BP_HerbologyMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

