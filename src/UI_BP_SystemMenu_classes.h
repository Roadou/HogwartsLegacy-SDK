// WidgetBlueprintGeneratedClass UI_BP_SystemMenu.UI_BP_SystemMenu_C
// Size: 0x554 (Inherited: 0x3d0)
struct UUI_BP_SystemMenu_C : USystemMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* ToggleHDRCalibrationScreen; // 0x3d8(0x08)
	struct UWidgetAnimation* ToggleCalibrationScreen; // 0x3e0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncAccessibility; // 0x3e8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncAudio; // 0x3f0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncConsoleDisplay; // 0x3f8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncDisplay; // 0x400(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGamepadControls; // 0x408(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGameplay; // 0x410(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGraphics; // 0x418(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncKeyboardControls; // 0x420(0x08)
	struct UAsyncWidgetSwitcher* AsyncMenuSwitcher; // 0x428(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncUI; // 0x430(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* confirmBack; // 0x438(0x08)
	struct UCanvasPanel* ConfirmGraphicsChangesPopup; // 0x440(0x08)
	struct UButton* ConfirmPopupClickable; // 0x448(0x08)
	struct UImage* ConfirmScreenFade; // 0x450(0x08)
	struct UPhoenixTextBlock* GraphicsAcceptCountdownText; // 0x458(0x08)
	struct UUI_BP_FG_CategoryNavBar_C* navBar; // 0x460(0x08)
	struct UUI_BP_Settings_Calibration_C* page_Calibration; // 0x468(0x08)
	struct UUI_BP_Settings_HDRCalibration_C* Page_HDRCalibration; // 0x470(0x08)
	struct UPhoenixTextBlock* popupBody; // 0x478(0x08)
	struct UUI_BP_LegendItem_C* popupLegendItem_Accept; // 0x480(0x08)
	struct UUI_BP_LegendItem_C* popupLegendItem_Cancel; // 0x488(0x08)
	struct UPhoenixTextBlock* PopupTitle; // 0x490(0x08)
	struct UBorder* settingsBorder; // 0x498(0x08)
	struct UImage* SettingsPageIcon; // 0x4a0(0x08)
	struct UPhoenixTextBlock* settingsTitle; // 0x4a8(0x08)
	struct UUserWidget* MainMenu; // 0x4b0(0x08)
	int32_t PageIndex; // 0x4b8(0x04)
	bool isInCalibration; // 0x4bc(0x01)
	bool IsInHDRCalibration; // 0x4bd(0x01)
	bool InAcceptGraphicsChangeMode; // 0x4be(0x01)
	char pad_4BF[0x1]; // 0x4bf(0x01)
	float AcceptTimeRemaining; // 0x4c0(0x04)
	bool RequiresConfirm; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	float MinFOVOffset_Console; // 0x4c8(0x04)
	float MaxFOVOffset_Console; // 0x4cc(0x04)
	float MinFOVOffset_PC; // 0x4d0(0x04)
	float MaxFOVOffset_PC; // 0x4d4(0x04)
	struct TArray<float> DynamicRanges; // 0x4d8(0x10)
	struct FString CurrentPlatform; // 0x4e8(0x10)
	bool InPageTransition; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct TArray<struct FString> MenuTitles; // 0x500(0x10)
	struct TArray<struct FText> Categories; // 0x510(0x10)
	struct FMulticastInlineDelegate BackOutPromptConfirmed; // 0x520(0x10)
	int32_t CategoryIndexToGoAfterConfirm; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct FMulticastInlineDelegate HDRScreenToggled; // 0x538(0x10)
	struct ULegend* ParentLegend; // 0x548(0x08)
	int32_t HoveredNavBarIndex; // 0x550(0x04)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool SettingsNeedExitConfirmed(struct FString& OutConfirmTitle, struct FString& OutConfirmDesc); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.SettingsNeedExitConfirmed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FilterTabsByPlatform(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.FilterTabsByPlatform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestExitFromTab(struct FString PopupTitle, struct FString PopupDesc); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.RequestExitFromTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOnKeyMappingTab(bool& IsOnKeyMappingTab, bool& HasUnboundActions); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.IsOnKeyMappingTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ChangeKeyboardControlTab(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ChangeKeyboardControlTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Change Control Tab(int32_t Direction, bool& Handled); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.Change Control Tab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DismissConfirmationDialog(bool Accepted); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.DismissConfirmationDialog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMenuTitle(int32_t PageIndex); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetMenuTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentLegend(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetCurrentLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOnPc(bool& IsOnPc); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.IsOnPc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Toggle Accept Graphics Change Mode(bool NewAcceptMode, float Duration); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.Toggle Accept Graphics Change Mode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategoryPage(int32_t NewPageIndex); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.GoToCategoryPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategorySwitch(int32_t NewIndex); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.CategorySwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplaySaveGames(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.DisplaySaveGames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnShowConfirmDialog(float Duration); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowConfirmDialog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowCalibration(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnShowCalibration_Console(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowCalibration_Console // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowHDRCalibration(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowHDRCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowHDRCalibration_Console(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowHDRCalibration_Console // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnLegendItemHoldEnd(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnLegendItemHoldEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmPageUp(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmPageUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmPageDown(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmPageDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmBackOut(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmBackOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitPopupDismissed(struct UPopupScreen* Popup, int32_t ResultIndex); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ExitPopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeaveFromPage(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.LeaveFromPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ActiveWidgetDisplayable(struct UUserWidget* ActiveWidget); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ActiveWidgetDisplayable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NewLegendRequested(struct TArray<struct FLegendItemData>& NewLegend); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.NewLegendRequested // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SystemMenu(int32_t EntryPoint); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.ExecuteUbergraph_UI_BP_SystemMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void HDRScreenToggled__DelegateSignature(bool IsShown); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.HDRScreenToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BackOutPromptConfirmed__DelegateSignature(); // Function UI_BP_SystemMenu.UI_BP_SystemMenu_C.BackOutPromptConfirmed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

