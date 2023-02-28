// WidgetBlueprintGeneratedClass UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C
// Size: 0x58c (Inherited: 0x3d0)
struct UUI_BP_FG_SettingsScreen_C : USystemMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* ToggleHDRCalibrationScreen; // 0x3d8(0x08)
	struct UWidgetAnimation* ToggleSaveList; // 0x3e0(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* ToggleCalibrationScreen; // 0x3f0(0x08)
	struct UWidgetAnimation* ToggleLoadList; // 0x3f8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncAccessibility; // 0x400(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncAudio; // 0x408(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncConsoleDisplay; // 0x410(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncDisplay; // 0x418(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGamepadControls; // 0x420(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGameplay; // 0x428(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncGraphics; // 0x430(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncKeyboardControls; // 0x438(0x08)
	struct UAsyncWidgetSwitcher* AsyncMenuSwitcher; // 0x440(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncSaveLoad; // 0x448(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncUI; // 0x450(0x08)
	struct UUI_BP_FG_CategoryNavBar_C* categoryNavBar; // 0x458(0x08)
	struct UCanvasPanel* ConfirmGraphicsChangesPopup; // 0x460(0x08)
	struct UButton* ConfirmPopupClickable; // 0x468(0x08)
	struct UImage* ConfirmScreenFade; // 0x470(0x08)
	struct UPhoenixTextBlock* GraphicsAcceptCountdownText; // 0x478(0x08)
	struct UBorder* LoadSaveResultPopup; // 0x480(0x08)
	struct UPhoenixTextBlock* LoadSaveResultStr; // 0x488(0x08)
	struct UUI_BP_Settings_Calibration_C* page_Calibration; // 0x490(0x08)
	struct UUI_BP_Settings_HDRCalibration_C* Page_HDRCalibration; // 0x498(0x08)
	struct UUI_BP_LoadMenu_C* page_LoadGame; // 0x4a0(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x4a8(0x08)
	struct UPhoenixTextBlock* popupBody; // 0x4b0(0x08)
	struct UUI_BP_LegendItem_C* popupLegendItem_Accept; // 0x4b8(0x08)
	struct UUI_BP_LegendItem_C* popupLegendItem_Cancel; // 0x4c0(0x08)
	struct UPhoenixTextBlock* PopupTitle; // 0x4c8(0x08)
	struct UBorder* settingsBorder; // 0x4d0(0x08)
	struct UImage* SettingsPageIcon; // 0x4d8(0x08)
	struct UPhoenixTextBlock* settingsTitle; // 0x4e0(0x08)
	struct UUI_BP_SaveMenu_C* UI_BP_SaveMenu; // 0x4e8(0x08)
	bool IsInLoadMenu; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UUserWidget* MainMenu; // 0x4f8(0x08)
	bool isInCalibration; // 0x500(0x01)
	bool IsInHDRCalibration; // 0x501(0x01)
	bool InAcceptGraphicsChangeMode; // 0x502(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	float AcceptTimeRemaining; // 0x504(0x04)
	bool RequiresConfirm; // 0x508(0x01)
	bool HideSaveLoadPage; // 0x509(0x01)
	char pad_50A[0x2]; // 0x50a(0x02)
	float MinFOVOffset_Console; // 0x50c(0x04)
	float MaxFOVOffset_Console; // 0x510(0x04)
	float MinFOVOffset_PC; // 0x514(0x04)
	float MaxFOVOffset_PC; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<float> DynamicRanges; // 0x520(0x10)
	struct FString CurrentPlatform; // 0x530(0x10)
	bool InPageTransition; // 0x540(0x01)
	bool IsLoadingSaveGame; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct TArray<struct FString> MenuTitles; // 0x548(0x10)
	struct TArray<struct FText> Categories; // 0x558(0x10)
	bool IsInSaveMenu; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FDateTime LastSaveStartTime; // 0x570(0x08)
	float MinActiveSaveBannerDuration; // 0x578(0x04)
	int32_t CategoryIndexToGoAfterConfirm; // 0x57c(0x04)
	struct ULegend* ParentLegend; // 0x580(0x08)
	int32_t HoveredNavBarIndex; // 0x588(0x04)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParentLegend(struct ULegend* Legend); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.SetParentLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool SettingsNeedExitConfirmed(struct FString& OutConfirmTitle, struct FString& OutConfirmDesc); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.SettingsNeedExitConfirmed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RequestExitFromTab(struct FString PopupTitle, struct FString PopupDesc); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.RequestExitFromTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOnKeyMappingTab(bool& IsOnKeyMappingTab, bool& HasUnboundActions); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.IsOnKeyMappingTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void InitLegend(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.InitLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeKeyboardControlTab(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ChangeKeyboardControlTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Change Control Tab(int32_t Direction, bool& Handled); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.Change Control Tab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DismissConfirmationDialog(bool Accepted); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.DismissConfirmationDialog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMenuTitle(int32_t PageIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.SetMenuTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentLegend(struct TArray<struct FLegendItemData>& CurrentPage); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.SetCurrentLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOnPc(bool& IsOnPc); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.IsOnPc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ToggleSaveLoadPage(bool HideSaveLoad); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ToggleSaveLoadPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleAcceptGraphicsChangeMode(bool NewAcceptMode, float Duration); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ToggleAcceptGraphicsChangeMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategorySwitch(int32_t NewIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.CategorySwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplaySaveGames(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.DisplaySaveGames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowCalibration(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowLoadList(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowLoadList // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AsyncSaveLoad_K2Node_ComponentBoundEvent_3_AsyncWrapperEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__AsyncSaveLoad_K2Node_ComponentBoundEvent_3_AsyncWrapperEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSaveButtonClicked(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnSaveButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_8_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_8_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnShowCalibration_Console(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowCalibration_Console // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowHDRCalibration(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowHDRCalibration // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowHDRCalibration_Console(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowHDRCalibration_Console // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_AsyncAudio_K2Node_ComponentBoundEvent_10_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_AsyncAudio_K2Node_ComponentBoundEvent_10_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRestartFromLastSaveFail(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnRestartFromLastSaveFail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowLoadSaveResultPopup(struct FString ResultMessage, float Duration); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ShowLoadSaveResultPopup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__page_LoadGame_K2Node_ComponentBoundEvent_2_OnLoadSave__DelegateSignature(struct FString Filename, int32_t CharacterID); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__page_LoadGame_K2Node_ComponentBoundEvent_2_OnLoadSave__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowConfirmDialog(float Duration); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnShowConfirmDialog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnLegendItemHoldEnd(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnLegendItemHoldEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_6_StartStopDelete__DelegateSignature(bool Start, int32_t LegendIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_6_StartStopDelete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_1_StartStopOverwrite__DelegateSignature(bool Start, int32_t LegendIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_1_StartStopOverwrite__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_0_OnGameSaved__DelegateSignature(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_0_OnGameSaved__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_4_OnSaveStarted__DelegateSignature(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_4_OnSaveStarted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_5_OnSaveFailed__DelegateSignature(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_5_OnSaveFailed__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature(struct UUserWidget* ChildObject); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ConfirmPageUp(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ConfirmPageUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmPageDown(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ConfirmPageDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmBackOut(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ConfirmBackOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitPopupDismissed(struct UPopupScreen* Popup, int32_t ResultIndex); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ExitPopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeaveFromPage(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.LeaveFromPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActiveWidgetDisplayable(struct UUserWidget* ActiveWidget); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ActiveWidgetDisplayable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void LoadSaveGameFailed(struct UObject* Caller); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.LoadSaveGameFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_SettingsScreen(int32_t EntryPoint); // Function UI_BP_FG_SettingsScreen.UI_BP_FG_SettingsScreen_C.ExecuteUbergraph_UI_BP_FG_SettingsScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

