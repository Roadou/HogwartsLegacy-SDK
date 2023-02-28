// WidgetBlueprintGeneratedClass UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C
// Size: 0x4c1 (Inherited: 0x328)
struct UUI_BP_WbGamesSignin_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowPopup; // 0x330(0x08)
	struct UWidgetAnimation* FrameSparkles; // 0x338(0x08)
	struct UWidgetAnimation* ShowCopyText; // 0x340(0x08)
	struct UVerticalBox* AccountsPanel; // 0x348(0x08)
	struct UPhoenixImage* bg_tonedown; // 0x350(0x08)
	struct UUI_BP_MenuTextButton_C* ContinueButton; // 0x358(0x08)
	struct UImage* divider; // 0x360(0x08)
	struct UImage* Divider2; // 0x368(0x08)
	struct UPhoenixTextBlock* HouseNameText; // 0x370(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x378(0x08)
	struct UUI_BP_MenuTextButton_C* LinkAccountsButton; // 0x380(0x08)
	struct UUI_BP_PopUpLinkingAcounts_C* LinkAcctPopup; // 0x388(0x08)
	struct UPhoenixTextBlock* LocalProfileText; // 0x390(0x08)
	struct UScaleBox* mainContent; // 0x398(0x08)
	struct UHorizontalBox* MainContentsPanel; // 0x3a0(0x08)
	struct UVerticalBox* NetworkConnectionErrorPanel; // 0x3a8(0x08)
	struct UPhoenixTextBlock* NetworkConnectionErrorText; // 0x3b0(0x08)
	struct UPhoenixTextBlock* OnlineSignInHeader; // 0x3b8(0x08)
	struct UUI_BP_MenuTextButton_C* RetryConnectionButton; // 0x3c0(0x08)
	struct UUI_BP_LoadDoor_C* RetryConnectionSpinner; // 0x3c8(0x08)
	struct UWidgetSwitcher* RightHandSwitcher; // 0x3d0(0x08)
	struct UPhoenixTextBlock* SignInBonusText; // 0x3d8(0x08)
	struct UUI_BP_MenuTextButton_C* skipSignInButton; // 0x3e0(0x08)
	struct UPhoenixImage* SparklesParticles; // 0x3e8(0x08)
	struct UPhoenixImage* SparklesParticles_2; // 0x3f0(0x08)
	struct UPhoenixTextBlock* TextCopiedMsg; // 0x3f8(0x08)
	struct UUI_BP_MenuTextButton_C* UnlinkButton; // 0x400(0x08)
	struct UPhoenixTextBlock* WandDescriptionText; // 0x408(0x08)
	struct UPhoenixImage* WBandWWLogos; // 0x410(0x08)
	struct FMulticastInlineDelegate WBSignInContinue; // 0x418(0x10)
	struct FString SigninUrl; // 0x428(0x10)
	struct FString SigninShortcode; // 0x438(0x10)
	struct UPopupScreen* ExpirationPopup; // 0x448(0x08)
	bool bInSettingsMenu; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FMulticastInlineDelegate ShowingRewards; // 0x458(0x10)
	struct FMulticastInlineDelegate WBUnlinkFlow; // 0x468(0x10)
	bool bUnlinking; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FLegendItemData PrimaryLegend; // 0x480(0x30)
	bool LinkingComplete; // 0x4b0(0x01)
	bool bDisconnectPopupShowing; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct UPopupScreen* NetworkDisconnectedPopup; // 0x4b8(0x08)
	bool bInLinkingFlow; // 0x4c0(0x01)

	void AdjustForViewportWidth(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateWWData(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.PopulateWWData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleLinkingPopup(bool ShowPopup); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ToggleLinkingPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void DisplayNextRewardNotification(bool FirstCall); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.DisplayNextRewardNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateForSettingsMenu(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.UpdateForSettingsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugLogWBSigninResponse(int32_t ResponseVal); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.DebugLogWBSigninResponse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshSignInCodes(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.RefreshSignInCodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopupDismissed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.PopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WBPNDeviceCodeExpired(struct UObject* Caller, int32_t Response); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNDeviceCodeExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RetryConnectionFailed(struct UObject* Caller); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.RetryConnectionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRewardNotificationClosed(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.OnRewardNotificationClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WBPNLinkStatusChanged(struct UObject* Caller, int32_t Response); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNLinkStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WBPNDeviceFlowResponse(struct UObject* Caller, int32_t Response); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNDeviceFlowResponse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PopupClosed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.PopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_WbGamesSignin(int32_t EntryPoint); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ExecuteUbergraph_UI_BP_WbGamesSignin // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void WBUnlinkFlow__DelegateSignature(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBUnlinkFlow__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowingRewards__DelegateSignature(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ShowingRewards__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WBSignInContinue__DelegateSignature(); // Function UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBSignInContinue__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

