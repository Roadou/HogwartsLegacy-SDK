// WidgetBlueprintGeneratedClass UI_BP_FieldGuide.UI_BP_FieldGuide_C
// Size: 0x600 (Inherited: 0x378)
struct UUI_BP_FieldGuide_C : UFieldGuideMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UWidgetAnimation* fadeScrim; // 0x380(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Actions; // 0x388(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Collections; // 0x390(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Gear; // 0x398(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Inventory; // 0x3a0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Map; // 0x3a8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_OwlMail; // 0x3b0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Quests; // 0x3b8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Settings; // 0x3c0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* Async_FG_Talents; // 0x3c8(0x08)
	struct UImage* backgroundDim; // 0x3d0(0x08)
	struct UImage* backgroundHide; // 0x3d8(0x08)
	struct UUI_BP_NavBarButton_C* btn_Actions; // 0x3e0(0x08)
	struct UUI_BP_NavBarButton_C* btn_Character; // 0x3e8(0x08)
	struct UUI_BP_NavBarButton_C* btn_Collections; // 0x3f0(0x08)
	struct UUI_BP_NavBarButton_C* btn_Inventory; // 0x3f8(0x08)
	struct UUI_BP_NavBarButton_C* btn_Mail; // 0x400(0x08)
	struct UUI_BP_NavBarButton_C* btn_Map; // 0x408(0x08)
	struct UUI_BP_NavBarButton_C* btn_Missions; // 0x410(0x08)
	struct UUI_BP_NavBarButton_C* btn_Settings; // 0x418(0x08)
	struct UUI_BP_NavBarButton_C* btn_Talents; // 0x420(0x08)
	struct UUI_BP_FG_Index_C* FG_IndexPage; // 0x428(0x08)
	struct UButton* HiddenButtonForHoverEvents; // 0x430(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x438(0x08)
	struct UAsyncWidgetSwitcher* MenuWidgetSwitcher; // 0x440(0x08)
	struct UCanvasPanel* navBar; // 0x448(0x08)
	struct UHorizontalBox* NavBarContainer; // 0x450(0x08)
	struct UButton* NavBarLeftButton; // 0x458(0x08)
	struct UButton* NavBarRightButton; // 0x460(0x08)
	bool HiddenButtonHovered; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TMap<struct UUI_BP_NavBarButton_C*, struct UUI_BP_AsyncLoadWrapper_C*> NavBarToMenuMap; // 0x470(0x50)
	struct UUI_BP_NavBarButton_C* SelectedNavBarButton; // 0x4c0(0x08)
	float DisplayPageDelay; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TMap<struct FString, struct UUI_BP_AsyncLoadWrapper_C*> PageNameToMenuMap; // 0x4d0(0x50)
	bool LockedToPage; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TArray<struct FString> DestPagePath; // 0x528(0x10)
	struct TMap<struct UUI_BP_AsyncLoadWrapper_C*, struct FString> MenuToPageNameMap; // 0x538(0x50)
	struct UUI_BP_AsyncLoadWrapper_C* NewPage; // 0x588(0x08)
	bool isScrimShowing; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct TMap<struct UUI_BP_AsyncLoadWrapper_C*, enum class EPauseMenuPage> MenuToEnumMap; // 0x598(0x50)
	bool InMenuTransition; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	int32_t CurrentTabIndex; // 0x5ec(0x04)
	struct TArray<enum class ENotificationCategory> NotificationCategories; // 0x5f0(0x10)

	void TerminateLingeringTutorials(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.TerminateLingeringTutorials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoesTutorialPreventExitingPauseMenu(bool& Prevented); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.DoesTutorialPreventExitingPauseMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoesTutorialPreventBackingOut(bool& Prevented); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.DoesTutorialPreventBackingOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetPageIndex(struct UWidget* PageWidget, int32_t& Index); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.GetPageIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsInspectableShown(bool& IsShown); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.IsInspectableShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void HandleNavigateNavBarRight(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavigateNavBarRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleNavigateNavBarLeft(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavigateNavBarLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsGraphicsChangeConfirmPopupShown(bool& IsShown); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.IsGraphicsChangeConfirmPopupShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void HandleHotkeyPressedForNavButton(struct UUI_BP_NavBarButton_C* NavBarButton); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleHotkeyPressedForNavButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionallyHandleSettingsConfirm(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent, bool& Handled); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ConditionallyHandleSettingsConfirm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldSkipPage(struct UUI_BP_AsyncLoadWrapper_C* MenuPage, bool& ShouldSkip); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShouldSkipPage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void HandleDisabledTabs(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleDisabledTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleNewTabRequested(enum class EPauseMenuPage NewPage, struct TArray<struct FString>& DestPath); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNewTabRequested // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideBackgroundScrim(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HideBackgroundScrim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBackgroundScrim(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowBackgroundScrim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Close Field Guide Requested(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.Close Field Guide Requested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitMenuRequestedDelegate(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ExitMenuRequestedDelegate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartNewPage(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.StartNewPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PageOutroFinished(struct UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.PageOutroFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OutroFinishedWhenLockedToPage(struct UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.OutroFinishedWhenLockedToPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CanExit(bool& CanExit); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.CanExit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleBackup(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleBackup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitPauseMenu(bool SkipFade, enum class EFieldGuideExitReasons ExitReason); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ExitPauseMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLockedToPage(bool Locked); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.SetLockedToPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenerateNavLookupMaps(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.GenerateNavLookupMaps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FieldGuide_StartOnPage(struct FString PageName); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.FieldGuide_StartOnPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindNavButtonFromMenu(struct UAsyncLoadWrapper* Menu, struct UUI_BP_NavBarButton_C*& Button); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.FindNavButtonFromMenu // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateNavBar(struct UUI_BP_NavBarButton_C* Button); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.UpdateNavBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NextPage(int32_t CurrentIndex); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.NextPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PrevPage(int32_t CurrentIndex); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.PrevPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleNavBarClicked(struct UUI_BP_NavBarButton_C* NavBarButton, bool& Handled); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavBarClicked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeActivePage(struct UUI_BP_AsyncLoadWrapper_C* NewPage); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ChangeActivePage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartStopLegendFill(int32_t LegendIndex, bool ShouldStart); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.StartStopLegendFill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LegendHoldComplete(struct ULegendItem* LegendItem, bool HoldCompleted); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.LegendHoldComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNewLegendRequested(struct TArray<struct FLegendItemData>& NewLegend); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.OnNewLegendRequested // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BindTabPageWidgetDelegates(struct UAsyncLoadWrapper* AsyncWrapper); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BindTabPageWidgetDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLegend(struct TArray<struct FLegendItemData>& NewLegendData); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.SetLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature(struct UUserWidget* ActiveWidget); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DelayShowingIndex(struct UObject* Caller); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayShowingIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DelayLeavingMapDir(struct UObject* Caller, int32_t int); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayLeavingMapDir // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClosePauseMenu(struct UObject* Caller, int32_t int); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ClosePauseMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DelayLeavingFieldGuide(struct UObject* Caller); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayLeavingFieldGuide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMenuLegend(struct TArray<struct FLegendItemData>& NewData); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.UpdateMenuLegend // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowHDRActor(struct UObject* Caller); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowHDRActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHDRActor(struct UObject* Caller); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.HideHDRActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature(struct TArray<struct FLegendItemData>& NewLegend); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MenuReadLegend(); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.MenuReadLegend // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeMenuPage(enum class EUMGInputAction MenuPage); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ChangeMenuPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowFieldGuideBackground(struct UObject* Caller); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowFieldGuideBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FieldGuide(int32_t EntryPoint); // Function UI_BP_FieldGuide.UI_BP_FieldGuide_C.ExecuteUbergraph_UI_BP_FieldGuide // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

