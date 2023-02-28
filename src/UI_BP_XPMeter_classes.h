// WidgetBlueprintGeneratedClass UI_BP_XPMeter.UI_BP_XPMeter_C
// Size: 0x3ee (Inherited: 0x310)
struct UUI_BP_XPMeter_C : UXPMeterBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UWidgetAnimation* hideTextBackgroundAnim; // 0x318(0x08)
	struct UWidgetAnimation* HideLevelUpText; // 0x320(0x08)
	struct UWidgetAnimation* showTextBackgroundAnim; // 0x328(0x08)
	struct UWidgetAnimation* highlight; // 0x330(0x08)
	struct UWidgetAnimation* showXPCrest; // 0x338(0x08)
	struct UWidgetAnimation* FadeOut; // 0x340(0x08)
	struct UWidgetAnimation* HideXPText; // 0x348(0x08)
	struct UWidgetAnimation* ShowXPText; // 0x350(0x08)
	struct UWidgetAnimation* showLevelUpText; // 0x358(0x08)
	struct UWidgetAnimation* showLevelUpBanner; // 0x360(0x08)
	struct UUI_BP_HealthIncrease_C* HealthIncreaseTag; // 0x368(0x08)
	struct UImage* HouseCrest; // 0x370(0x08)
	struct UInvalidationBox* InvalidationBox_XPMeter; // 0x378(0x08)
	struct UCanvasPanel* levelUpRoot; // 0x380(0x08)
	struct UPhoenixTextBlock* LevelUpText; // 0x388(0x08)
	struct UPhoenixTextBlock* PlayerLevel; // 0x390(0x08)
	struct UBorder* textBorder; // 0x398(0x08)
	struct UImage* XPFill_Image; // 0x3a0(0x08)
	struct UHorizontalBox* XPHorizontalBox; // 0x3a8(0x08)
	struct UPhoenixTextBlock* XPtext; // 0x3b0(0x08)
	struct FHermesBPDelegateHandle TutorialCloseXPMeterEventHandle; // 0x3b8(0x10)
	struct FHermesBPDelegateHandle TutorialHighlightXPMeterEventHandle; // 0x3c8(0x10)
	struct FTimerHandle NotificationTimerHandle; // 0x3d8(0x08)
	float NotifcationDelay; // 0x3e0(0x04)
	bool Active Notification Stackable; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	float FillDuration; // 0x3e8(0x04)
	bool LevelUpAnimComplete; // 0x3ec(0x01)
	bool PostFillDelayCompleted; // 0x3ed(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_XPMeter_1(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.SequenceEvent__ENTRYPOINTUI_BP_XPMeter_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayerLevelText(int32_t Level); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.SetPlayerLevelText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideTextBackground(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.HideTextBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTextBackground(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.ShowTextBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ContinueCleanUp(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.ContinueCleanUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TryIncrementActiveNotification(struct FExperienceChange XPChangeData, bool& Success); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.TryIncrementActiveNotification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanUpLevelUpNotification(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.CleanUpLevelUpNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHouseAssets(struct FString& CrestID, struct FLinearColor& EffectColor); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.GetHouseAssets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QueueXPGainedNotification(struct FExperienceChange Data); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.QueueXPGainedNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show Level Up Text(bool AwardTalentPoint); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.Show Level Up Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowXPGain(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.ShowXPGain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExpNotificationApproved(struct UObject* Caller); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.OnExpNotificationApproved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_5(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysCloseXPMeter(struct UObject* Caller); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.TutorialSaysCloseXPMeter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysHighlightXPMeter(struct UObject* Caller); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.TutorialSaysHighlightXPMeter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnXPAdded(float FillPct); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.OnXPAdded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnXPFillWrap(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.OnXPFillWrap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFinishAddingXP(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.OnFinishAddingXP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void PostFillDelayComplete(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.PostFillDelayComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_XPMeter(int32_t EntryPoint); // Function UI_BP_XPMeter.UI_BP_XPMeter_C.ExecuteUbergraph_UI_BP_XPMeter // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

