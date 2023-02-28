// WidgetBlueprintGeneratedClass UI_BP_RewardNotification.UI_BP_RewardNotification_C
// Size: 0x3f0 (Inherited: 0x328)
struct UUI_BP_RewardNotification_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* HidePopup; // 0x330(0x08)
	struct UWidgetAnimation* ShowPopup; // 0x338(0x08)
	struct UWidgetAnimation* Claim; // 0x340(0x08)
	struct UWidgetAnimation* ShowCopyText; // 0x348(0x08)
	struct UImage* bonusImage; // 0x350(0x08)
	struct UUI_BP_MenuTextButton_C* ClaimRewardButton; // 0x358(0x08)
	struct UVerticalBox* ClaimRewardPanel; // 0x360(0x08)
	struct UPhoenixTextBlock* OnlineRewardName; // 0x368(0x08)
	struct UPhoenixTextBlock* OnlineRewardText; // 0x370(0x08)
	struct UPhoenixTextBlock* RewardEarnedText; // 0x378(0x08)
	struct UPhoenixImage* SparklesParticles; // 0x380(0x08)
	struct UPhoenixImage* tutorialBackImage; // 0x388(0x08)
	struct FMulticastInlineDelegate WBSignInContinue; // 0x390(0x10)
	struct FString SigninUrl; // 0x3a0(0x10)
	struct FString SigninShortcode; // 0x3b0(0x10)
	struct UPopupScreen* ExpirationPopup; // 0x3c0(0x08)
	bool bDeviceFlow; // 0x3c8(0x01)
	bool bInSettingsMenu; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)
	struct FMulticastInlineDelegate CloseRewardNotification; // 0x3d0(0x10)
	struct FString RewardID; // 0x3e0(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_1(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRewardName(struct FString RewardName); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.SetRewardName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HidePopupComplete(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.HidePopupComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RewardNotification(int32_t EntryPoint); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.ExecuteUbergraph_UI_BP_RewardNotification // (Final|UbergraphFunction) // @ game+0x38a7480
	void CloseRewardNotification__DelegateSignature(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.CloseRewardNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WBSignInContinue__DelegateSignature(); // Function UI_BP_RewardNotification.UI_BP_RewardNotification_C.WBSignInContinue__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

