// WidgetBlueprintGeneratedClass UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C
// Size: 0x358 (Inherited: 0x268)
struct UUI_BP_FG_ChallengeButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* tutorialAnimation; // 0x270(0x08)
	struct UWidgetAnimation* ClaimRewardAnimation; // 0x278(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x280(0x08)
	struct UImage* challengeBack; // 0x288(0x08)
	struct UButton* challengeButton; // 0x290(0x08)
	struct UImage* challengeIcon; // 0x298(0x08)
	struct UImage* highlight; // 0x2a0(0x08)
	struct UPhoenixTextBlock* LevelText; // 0x2a8(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x2b0(0x08)
	struct UPhoenixImage* Outline; // 0x2b8(0x08)
	struct UPhoenixImage* rewardGlint; // 0x2c0(0x08)
	struct UPhoenixImage* tierComplete; // 0x2c8(0x08)
	struct UPhoenixImage* tutorialGlow; // 0x2d0(0x08)
	struct FName ChallengeID; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnChallengeButtonHovered; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnChallengeButtonUnhovered; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnChallengeButtonClicked; // 0x300(0x10)
	struct FName CategoryID; // 0x310(0x08)
	struct TArray<struct FName> ChallengeTiers; // 0x318(0x10)
	bool IsAvailable; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	int32_t CompletedTiers; // 0x32c(0x04)
	int32_t NumTiers; // 0x330(0x04)
	bool IsComplete; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FLinearColor OutlineColor; // 0x338(0x10)
	struct FLinearColor HoveredColor; // 0x348(0x10)

	void HideTutorialAnimation(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.HideTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTutorialAnimation(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.ShowTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasUnclaimedRewards(struct FName ThisCategory, bool& HasUnclaimed); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.HasUnclaimedRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetNewItemVisibility(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.SetNewItemVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetChallengeDetails(struct FAchievementChallenge ChallengeStructure, struct FName Category); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.SetChallengeDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ChallengeImageLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.ChallengeImageLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_ChallengeButton(int32_t EntryPoint); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.ExecuteUbergraph_UI_BP_FG_ChallengeButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnChallengeButtonClicked__DelegateSignature(struct UUI_BP_FG_ChallengeButton_C* Button); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.OnChallengeButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeButtonUnhovered__DelegateSignature(); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.OnChallengeButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeButtonHovered__DelegateSignature(struct UUI_BP_FG_ChallengeButton_C* Button); // Function UI_BP_FG_ChallengeButton.UI_BP_FG_ChallengeButton_C.OnChallengeButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

