// WidgetBlueprintGeneratedClass UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C
// Size: 0x530 (Inherited: 0x310)
struct UUI_BP_PhoenixHUDWidget_C : UPhoenixHUDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UWidgetAnimation* FadeHUD; // 0x318(0x08)
	struct UWidgetAnimation* BreakoutRingSuccess; // 0x320(0x08)
	struct UWidgetAnimation* BreakoutRingFail; // 0x328(0x08)
	struct UWidgetAnimation* SwapBreakoutButton; // 0x330(0x08)
	struct UUI_BP_ActionDiamondRing_C* ActionRing; // 0x338(0x08)
	struct UUI_BP_AncientMagicCollectionHUD_C* AncientMagicHud; // 0x340(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncCompanionLevelNotification; // 0x348(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncFastTravelUnlockedNotification; // 0x350(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncNotificationPanel; // 0x358(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncReticule; // 0x360(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncSpecialItemNotification; // 0x368(0x08)
	struct UUI_BP_BeaconHUDPanel_C* BeaconHUDPanel; // 0x370(0x08)
	struct UUI_BP_HUD_BossMeter_C* BossHealthMeter; // 0x378(0x08)
	struct UUI_BP_ChallengeComplete_C* ChallengeCompleteNotification; // 0x380(0x08)
	struct UUI_BP_ChallengeHud_C* ChallengeHud; // 0x388(0x08)
	struct UUI_BP_CombatBreakout_C* CombatBreakout; // 0x390(0x08)
	struct UUI_BP_CombatParry_C* CombatParry; // 0x398(0x08)
	struct UUI_BP_ComboHUD_C* ComboHud; // 0x3a0(0x08)
	struct UUI_BP_CreatureNurturingHUD_Socket_C* CreatureNurturingHUDSocket; // 0x3a8(0x08)
	struct UUI_BP_DamageIndicators_C* DamageIndicators; // 0x3b0(0x08)
	struct UUI_BP_DuelTechniques_C* DuelTechniquesHUD; // 0x3b8(0x08)
	struct UUI_BP_FinisherMeter_C* FinisherMeter; // 0x3c0(0x08)
	struct UWidgetSwitcher* HealthBarSwitcher; // 0x3c8(0x08)
	struct UUI_BP_HUDHint_C* HintHud; // 0x3d0(0x08)
	struct UUI_BP_LookAtWidget_C* LookAtWidget; // 0x3d8(0x08)
	struct UCanvasPanel* MapSettingsElements; // 0x3e0(0x08)
	struct UCanvasPanel* MeterSettingsElements; // 0x3e8(0x08)
	struct UInvalidationBox* MeterSettingsInvalidationBox; // 0x3f0(0x08)
	struct UUI_BP_MiniMap_C* Minimap; // 0x3f8(0x08)
	struct UUI_BP_MountHUD_C* MountHud; // 0x400(0x08)
	struct UUI_BP_NoDismount_C* NoDismountAllowedIcon; // 0x408(0x08)
	struct UCanvasPanel* NoTickWhenHidden; // 0x410(0x08)
	struct UUI_BP_NPCHealthMeter_C* NPCHealthMeter; // 0x418(0x08)
	struct UUI_BP_OutOfAreaNotification_C* OutOfArea; // 0x420(0x08)
	struct UUI_BP_OwlMailNotification_C* OwlMailNotification; // 0x428(0x08)
	struct UUI_BP_ActionHUD_PC_C* PCActionRing; // 0x430(0x08)
	struct UWidgetSwitcher* QuickActionsSwitcher; // 0x438(0x08)
	struct UUI_BP_QuickHealthActions_C* QuickHealthActions; // 0x440(0x08)
	struct UCanvasPanel* Root; // 0x448(0x08)
	struct UUI_BP_SpecialChallengeNotification_C* SpecialChallengeNotification; // 0x450(0x08)
	struct UCanvasPanel* SpellSettingsElements; // 0x458(0x08)
	struct UInvalidationBox* SpellSettingsInvalidationBox; // 0x460(0x08)
	struct UCanvasPanel* TargetSettingsElements; // 0x468(0x08)
	struct UUI_BP_TextNotificationPanel_C* TextNotificationPanel; // 0x470(0x08)
	struct UCanvasPanel* TickWhenHidden; // 0x478(0x08)
	struct UUI_BP_BroomHUD_C* UI_BP_BroomHUD; // 0x480(0x08)
	struct UUI_BP_BroomRaceHUD_C* UI_BP_BroomRaceHUD; // 0x488(0x08)
	struct UUI_BP_ErrorMessage_C* UI_BP_ErrorMessage; // 0x490(0x08)
	struct UUI_BP_MissionBanner_New_C* UI_BP_MissionBanner_New; // 0x498(0x08)
	struct UUI_BP_NoFlyHud_C* UI_BP_NoFlyHud; // 0x4a0(0x08)
	struct UUI_BP_QuickItemHUD_C* UI_BP_QuickItemHUD; // 0x4a8(0x08)
	struct UUI_BP_SavingIcon_C* UI_BP_SavingIcon; // 0x4b0(0x08)
	struct UUI_BP_UnreadMailIcon_C* UI_BP_UnreadMailIcon; // 0x4b8(0x08)
	struct UUI_BP_VaseCounter_C* UI_BP_VaseCounter; // 0x4c0(0x08)
	struct UUI_BP_Wanted_C* wanted; // 0x4c8(0x08)
	struct UUI_BP_XPMeter_C* XpMeter; // 0x4d0(0x08)
	struct AActor* TargetActor; // 0x4d8(0x08)
	bool HasTarget; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	int32_t Count; // 0x4e4(0x04)
	struct FString Breakout_ButtonString; // 0x4e8(0x10)
	int32_t Breakout_String_randomINT; // 0x4f8(0x04)
	bool BreakoutComplete; // 0x4fc(0x01)
	bool RandomBreakout; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	struct TArray<struct FHermesBPDelegateHandle> HermesBindings; // 0x500(0x10)
	struct FString ConjurationCategory; // 0x510(0x10)
	enum class EUIHealthBarType HealthBarType; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UUI_BP_BroomRaceHUD_C* UI BP Broom Race HUD; // 0x528(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GameDifficultyChanged(enum class EDifficulty NewDifficulty); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameDifficultyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TranslateBreakout(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.TranslateBreakout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddBeaconToHUD(struct UHUDCompassIcon* Beacon, struct UCanvasPanelSlot*& BeaconSlot); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AddBeaconToHUD // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMissionBannerWidget* GetMissionBanner(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GetMissionBanner // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateQuickActionsHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.UpdateQuickActionsHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasUnreadMailNotification(bool& bUnreadMail); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HasUnreadMailNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetVisibilityPerWidget(bool ShouldShow); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetVisibilityPerWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustHUDDisplayForDemoBuilds(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AdjustHUDDisplayForDemoBuilds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleSetElementVisibility(struct FString ElementName, enum class ESlateVisibility Visibility, struct UObject* Provider); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HandleSetElementVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UHUDCompassIcon* MakeBeaconIcon(struct FString IconName); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.MakeBeaconIcon // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LayoutLoaded(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.LayoutLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayAutoSave(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.DisplayAutoSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_4(bool CachedResult); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_3(bool CachedResult); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_2(bool CachedResult); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69(struct UObject* Loaded); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGameToBeSaved(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnGameToBeSaved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowEnemyInfo(bool Show); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnShowEnemyInfo // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetEnemyData(struct FName& Name, float pct); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnSetEnemyData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExperienceChangedBP(struct FExperienceChange ExperienceChangedData); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ExperienceChangedBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetHUDVisibility(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnSetHUDVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddTextTickerNotification(struct FString NotificationText); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddTextTickerNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowConjurationUI(bool Show, int32_t IntroType); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowConjurationUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTransformationUI(bool Show, int32_t IntroType); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowTransformationUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowCreatureNurturingHUD(bool Show); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowCreatureNurturingHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddSpecialItemNotification(struct FString Name, struct FString IconName, int32_t Count, struct FString UnlockMessage); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddSpecialItemNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AncMag_Pickup(struct UObject* Caller, float float); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AncMag_Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NurturingHUDSlideOutComplete(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.NurturingHUDSlideOutComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHudElementVisibility(struct FString ElementName, enum class ESlateVisibility NewVisibility, struct UObject* Provider); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetHudElementVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureFirstTimeCapture(struct UObject* Caller, int32_t int); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.CreatureFirstTimeCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAddCompanionLevelUpNotification(struct FString CompanionName); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCompanionLevelUpNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideMountHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideMountHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowMountHUD(struct UCreature_MountComponent* MountComponent, bool bIncludeCharge); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowMountHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentTargetActor(struct AActor* Target, bool ShowName, bool ShowHealth); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetCurrentTargetActor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideChallengeHUD(struct UObject* Caller); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideChallengeHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccessedTalentsPage(struct UObject* Caller); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AccessedTalentsPage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAndShowHintMessage(struct FString HintKey, struct FTutorialLayoutData HintPositionData, bool bIgnoreShowTutorialElementsFlag, float MaxDuration); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetAndShowHintMessage // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClearHintMessage(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ClearHintMessage // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ConjurationScreenLoaded(struct UScreen* LoadedScreen); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ConjurationScreenLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TogglePersistentStepBanner(bool IsPersistent); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.TogglePersistentStepBanner // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowBroomHUD(struct AFlyingBroom* BroomActor); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowBroomHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideBroomHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideBroomHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetConjurationCategory(struct UObject* Caller, struct FString String); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetConjurationCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNoFlyHUD(struct FName& ErrorMessageKey); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowNoFlyHUD // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void HideNoFlyHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideNoFlyHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetGlobalHudVisibility(bool ShouldShow, bool AllowTicking, bool ShouldAnimate); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetGlobalHudVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimateTrackingInfoWidget(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AnimateTrackingInfoWidget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SyncSettingsVisibilities(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SyncSettingsVisibilities // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowChallengeHUD(struct UObject* Caller); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowChallengeHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMailRecieved(struct FMailEntry Entry, int32_t DisplayPriority); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnMailRecieved // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLookAtCallout(struct UObject* Caller, int32_t int); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowLookAtCallout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadActiveOwlMail(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ReadActiveOwlMail // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBroomRaceHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowBroomRaceHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideBroomRaceHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideBroomRaceHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowOutOfAreaAlert(struct FName Message, float InitialTime); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowOutOfAreaAlert // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideOutOfAreaAlert(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideOutOfAreaAlert // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateOutOfAreaAlertTimer(float Time); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.UpdateOutOfAreaAlertTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAddChallengeCompleteNotification(struct FName ChallengeID, struct FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeCompleteNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddCollectionKnownNotification(struct FName CollectionItemID, struct FName CollectionCategory); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCollectionKnownNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddCollectionObtainedNotification(struct FName CollectionItemID, struct FName CollectionCategory); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCollectionObtainedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddPickupNotification(struct FString Name, struct FString IconName, int32_t Count, bool bSpecial, struct FName Variation); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddPickupNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAddChallengeUpdatedNotification(struct FName ChallengeID, struct FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeUpdatedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAddChallengeUnlockedNotification(struct FName ChallengeID, struct FName ChallengeCategory, int32_t TotalRequired); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeUnlockedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FadeOutNoTick(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.FadeOutNoTick // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOutAllowTick(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.FadeOutAllowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleMissionDetailsHold(bool IsHeld); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ToggleMissionDetailsHold // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowNotificationsHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowNotificationsHUD // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNotificationsHUD(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideNotificationsHUD // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAddFastTravelUnlockedNotification(struct FString Name, struct FString IconName); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddFastTravelUnlockedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RemoveBeaconFromHUD(struct UHUDCompassIcon* Beacon); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.RemoveBeaconFromHUD // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature(); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PhoenixHUDWidget(int32_t EntryPoint); // Function UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ExecuteUbergraph_UI_BP_PhoenixHUDWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

