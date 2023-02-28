// WidgetBlueprintGeneratedClass UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C
// Size: 0x60c (Inherited: 0x380)
struct UUI_BP_FrontEnd_Menu_C : UFrontEnd_MenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* DeleteCharacterFade; // 0x388(0x08)
	struct UWidgetAnimation* showMainDetails; // 0x390(0x08)
	struct UWidgetAnimation* MOTDSlide; // 0x398(0x08)
	struct UWidgetAnimation* Outro_SubMenu; // 0x3a0(0x08)
	struct UWidgetAnimation* Outro_Normal; // 0x3a8(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot1; // 0x3b0(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot2; // 0x3b8(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot3; // 0x3c0(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot4; // 0x3c8(0x08)
	struct UUI_BP_MenuTextButton_C* CinematicBinkLauncherButton; // 0x3d0(0x08)
	struct UUI_BP_CinematicPicker_C* CinematicPicker; // 0x3d8(0x08)
	struct UUI_BP_MenuTextButton_C* crossGenSaveData; // 0x3e0(0x08)
	struct UUI_BP_MenuTextButton_C* DebugCreditsButton; // 0x3e8(0x08)
	struct UUI_BP_MenuTextButton_C* DebugLoadingScreenButton; // 0x3f0(0x08)
	struct UPhoenixTextBlock* DeletingStr; // 0x3f8(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* detailsBack; // 0x400(0x08)
	struct UPhoenixTextBlock* developerLevelTitle; // 0x408(0x08)
	struct UVerticalBox* DevLevelsList; // 0x410(0x08)
	struct UCanvasPanel* DevMenu; // 0x418(0x08)
	struct UUI_BP_MenuTextButton_C* exitButton; // 0x420(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* FrontendLegend; // 0x428(0x08)
	struct UPhoenixTextBlock* gamerTagTitle; // 0x430(0x08)
	struct UUI_BP_SettingsDropDownButton_C* GenderDropdown; // 0x438(0x08)
	struct UVerticalBox* Header; // 0x440(0x08)
	struct UUI_BP_SettingsDropDownButton_C* HouseDropdown; // 0x448(0x08)
	struct UUI_BP_FrontEndDetails_C* mainDetailsPanel; // 0x450(0x08)
	struct UCanvasPanel* MainOverlay; // 0x458(0x08)
	struct UBorder* menuBorder; // 0x460(0x08)
	struct UUI_BP_MenuTextButton_C* MissionCustom; // 0x468(0x08)
	struct UUI_BP_SettingsDropDownButton_C* MissionDropDown; // 0x470(0x08)
	struct UUI_BP_PhxComboBox_C* MissionSkipOptions; // 0x478(0x08)
	struct USizeBox* MOTD; // 0x480(0x08)
	struct UImage* MOTD_Image; // 0x488(0x08)
	struct UPhoenixTextBlock* OptionsTitle; // 0x490(0x08)
	struct UUI_BP_MenuTextButton_C* OverlandCustom; // 0x498(0x08)
	struct UUI_BP_SettingsDropDownButton_C* OverlandStartDropDown; // 0x4a0(0x08)
	struct UBorder* ProfileDeletePopup; // 0x4a8(0x08)
	struct UUI_BP_MenuTextButton_C* SanctuaryCustom; // 0x4b0(0x08)
	struct UUI_BP_SettingsDropDownButton_C* SanctuaryIdentityDropDown; // 0x4b8(0x08)
	struct UUI_BP_ScrollingTextBlock_C* scrollingMOTDText; // 0x4c0(0x08)
	struct UUI_BP_SystemMenu_C* settingsMenu; // 0x4c8(0x08)
	struct UUI_BP_MenuTextButton_C* storeButton; // 0x4d0(0x08)
	struct UBorder* subMenuBorder; // 0x4d8(0x08)
	struct UWidgetSwitcher* subMenuSwitcher; // 0x4e0(0x08)
	struct UUI_BP_InstallManagerProgressBar_C* UI_BP_InstallManagerProgressBar; // 0x4e8(0x08)
	struct UUI_BP_LoadMenu_C* UI_BP_LoadMenu; // 0x4f0(0x08)
	struct TArray<struct FName> ListItems; // 0x4f8(0x10)
	struct AActor* CharacterActor; // 0x508(0x08)
	struct UUserWidget* TooltipPopout; // 0x510(0x08)
	struct UUI_BP_StartPage_C* StartPage; // 0x518(0x08)
	bool isSubMenu; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UUserWidget* LevelButtonClass; // 0x528(0x08)
	bool isSettingsMenu; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TArray<struct FString> DEV_OverlandStartPoints; // 0x538(0x10)
	struct TArray<struct FName> CurrentAvatarPresetIDs; // 0x548(0x10)
	struct TArray<struct FName> CurrentGearAppearanceIDs; // 0x558(0x10)
	struct TSet<struct UObject*> ObjectCache; // 0x568(0x50)
	struct UPopupScreen* DummyPopup; // 0x5b8(0x08)
	bool ShowMOTD; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	struct FVector2D MOTDSize; // 0x5c4(0x08)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct TArray<struct FMOTD> MOTDs; // 0x5d0(0x10)
	struct TArray<struct FString> SkipOptionStrings; // 0x5e0(0x10)
	int32_t HoveredCharacterID; // 0x5f0(0x04)
	bool MOTDisLoaded; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FString CurrentGearTags; // 0x5f8(0x10)
	int32_t MOTDNum; // 0x608(0x04)

	void DisplayNextRewardNotification(bool FirstCall); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DisplayNextRewardNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportResolution(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AdjustForViewportResolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeleteCharacterTooltipDismissed(struct UPopupScreen* Popup, int32_t Response); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DeleteCharacterTooltipDismissed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowDeleteCharacterPopup(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowDeleteCharacterPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void OnCharacterDeletedAsync(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnCharacterDeletedAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString GetCurrentlySelectedSkipOption(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetCurrentlySelectedSkipOption // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetSkipOptionDisplayStrings(struct TArray<struct FString>& SkipOptions, struct TArray<struct FString>& OutDisplayStrings); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetSkipOptionDisplayStrings // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LegendHoldComplete(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.LegendHoldComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLegend(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Default Legend Data(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Set Default Legend Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayingFromFrontendBasedOnOverlandSelection(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetPlayingFromFrontendBasedOnOverlandSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDefaultCharSlotTooltipLegend(bool IsEmptySlot); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetDefaultCharSlotTooltipLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMenuButtonHovered(struct UUI_BP_MenuTextButton_C* hoveredButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnMenuButtonHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Character Loaded(struct AActor* Actor); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.On Character Loaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLoadOptions(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowLoadOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDefaultHouseAndGender(int32_t CharacterID, struct FString& House, struct FString& Gender); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetDefaultHouseAndGender // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddDefaultInventory(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AddDefaultInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowSettings(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Equip Announce Gear(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Equip Announce Gear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHoveredCharacterButton(struct UUI_BP_CharacterSelectButton_C*& hoveredButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetHoveredCharacterButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddDungeonLevels(struct TArray<struct FName>& Levels); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AddDungeonLevels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCharacterModel(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.InitCharacterModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCharacterModel(int32_t CharacterID); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.UpdateCharacterModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterButtonHovered(struct UUI_BP_CharacterSelectButton_C* hoveredButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnCharacterButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHoveredCharacterButtonID(int32_t& CharacterID); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetHoveredCharacterButtonID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipLegend(struct TArray<struct FLegendItemData>& Legends); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetTooltipLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeleteCharacterProfileAsync(int32_t CharacterID); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DeleteCharacterProfileAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeleteCharacterProfile(int32_t CharacterID); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DeleteCharacterProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Back(bool& BackedOut); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCharacterSlotButtons(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.InitCharacterSlotButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCharacterToolTip(struct UUI_BP_CharacterSelectButton_C* Character); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowCharacterToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharacterButtonSelected(struct UUI_BP_CharacterSelectButton_C* SelectedButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.CharacterButtonSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoverListItem(struct UUI_BP_TempFEButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.HoverListItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowActors(struct TArray<struct AActor*>& Array); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitMainMenu(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.InitMainMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Select List Item(struct UUI_BP_MenuTextButton_C* SelectedButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Select List Item // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitList(bool InDeveloperMode); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.InitList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFail_86D2838448573BC41D7DE4A2119C5C12(struct UTexture2DDynamic* Texture); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnFail_86D2838448573BC41D7DE4A2119C5C12 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSuccess_86D2838448573BC41D7DE4A2119C5C12(struct UTexture2DDynamic* Texture); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnSuccess_86D2838448573BC41D7DE4A2119C5C12 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetMenuLegend(struct TArray<struct FLegendItemData>& LegendArray); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetMenuLegend // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DevMenuButton(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DevMenuButton // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MOTDLoaded(struct UObject* Caller, int32_t int); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.MOTDLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void AsyncMOTDImage(struct FString Image URL); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AsyncMOTDImage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AsyncMOTDImageLoaded(struct FSlateBrush Texture); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AsyncMOTDImageLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature(struct FString Filename, int32_t CharacterID); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SelectListItemButtonSFX(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SelectListItemButtonSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterClicked(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnCharacterClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFullGameNotInstalledPopupClosed_Event(bool continueToGame); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnFullGameNotInstalledPopupClosed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowLoadOptions(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnShowLoadOptions // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(bool continueToGame); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnExitRequested(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnExitRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsRequestedNewLegend(struct TArray<struct FLegendItemData>& NewLegend); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SettingsRequestedNewLegend // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NetworkChange(struct UObject* Caller, int32_t int); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.NetworkChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnMissionSelectionChanged(int32_t NewOptionIndex, struct UUI_BP_SettingsDropDownButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnMissionSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void QuitGamePopupDismissed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.QuitGamePopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRewardNotificationClosed(); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnRewardNotificationClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoadLookFromArraysComplete(struct AActor* Actor, bool Success); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnLoadLookFromArraysComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FrontEnd_Menu(int32_t EntryPoint); // Function UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ExecuteUbergraph_UI_BP_FrontEnd_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

