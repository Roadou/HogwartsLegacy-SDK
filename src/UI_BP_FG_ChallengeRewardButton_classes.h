// WidgetBlueprintGeneratedClass UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C
// Size: 0x420 (Inherited: 0x268)
struct UUI_BP_FG_ChallengeRewardButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* tutorialAnimation; // 0x270(0x08)
	struct UWidgetAnimation* ClaimRewardAnimation; // 0x278(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x280(0x08)
	struct UOverlay* ActiveButton; // 0x288(0x08)
	struct UPhoenixImage* activeCostume; // 0x290(0x08)
	struct UPhoenixImage* activeReward; // 0x298(0x08)
	struct UOverlay* costume; // 0x2a0(0x08)
	struct UImage* costumeBack; // 0x2a8(0x08)
	struct UPhoenixImage* costumeGlint; // 0x2b0(0x08)
	struct UImage* costumeHighlight; // 0x2b8(0x08)
	struct UImage* costumeIcon; // 0x2c0(0x08)
	struct UPhoenixImage* costumeOutline; // 0x2c8(0x08)
	struct UOverlay* costumeSelected; // 0x2d0(0x08)
	struct UOverlay* lockedButton; // 0x2d8(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x2e0(0x08)
	struct UBorder* outlineBorder; // 0x2e8(0x08)
	struct UPhoenixImage* PhoenixImage_279; // 0x2f0(0x08)
	struct UPhoenixImage* progressGlitter; // 0x2f8(0x08)
	struct UPhoenixImage* progressGold; // 0x300(0x08)
	struct UOverlay* reward; // 0x308(0x08)
	struct UImage* rewardBack; // 0x310(0x08)
	struct UButton* rewardButton; // 0x318(0x08)
	struct UPhoenixImage* rewardGlint; // 0x320(0x08)
	struct UImage* rewardHighlight; // 0x328(0x08)
	struct UImage* rewardIcon; // 0x330(0x08)
	struct UPhoenixImage* rewardOutline; // 0x338(0x08)
	struct UOverlay* rewardSelected; // 0x340(0x08)
	struct UPhoenixImage* tierComplete; // 0x348(0x08)
	struct UPhoenixImage* tutorialGlow; // 0x350(0x08)
	struct FMulticastInlineDelegate OnChallengeRewardHovered; // 0x358(0x10)
	struct FMulticastInlineDelegate OnChallengeRewardUnhovered; // 0x368(0x10)
	struct FMulticastInlineDelegate OnChallengeRewardClicked; // 0x378(0x10)
	bool IsComplete; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FString rewardTitle; // 0x390(0x10)
	struct UPhoenixImage* ChallengeRewardGlint; // 0x3a0(0x08)
	struct FKnowledgeAchievementResult TierData; // 0x3a8(0x40)
	struct FAchievementReward tierReward; // 0x3e8(0x20)
	bool CanClaimRewards; // 0x408(0x01)
	bool isCostumeReward; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UOverlay* selectedOverlay; // 0x410(0x08)
	struct UPhoenixImage* activeBorder; // 0x418(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_FG_ChallengeRewardButton_1(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.SequenceEvent__ENTRYPOINTUI_BP_FG_ChallengeRewardButton_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClaimedRewardStatus(bool HasUnclaimedRewards); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.SetClaimedRewardStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForUnclaimedRewards(struct FKnowledgeAchievementResult ChallengeTier, struct TArray<struct FKnowledgeAchievementResult>& UnclaimedRewards, bool& HasUnclaimed); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.CheckForUnclaimedRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Set Reward(struct FKnowledgeAchievementResult RewardStructure, struct TArray<struct FKnowledgeAchievementResult>& DelayedRewards); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.Set Reward // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideTutorialAnimation(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.HideTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTutorialAnimation(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.ShowTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasUnclaimedRewards(struct FName ThisCategory, bool& HasUnclaimed); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.HasUnclaimedRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetNewItemVisibility(bool IsNewItem); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.SetNewItemVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTierCompleteCheckmark(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.ShowTierCompleteCheckmark // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.BndEvt__UI_BP_FG_ChallengeButton_challengeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRewardCostumeIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.OnRewardCostumeIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_ChallengeRewardButton(int32_t EntryPoint); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.ExecuteUbergraph_UI_BP_FG_ChallengeRewardButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnChallengeRewardClicked__DelegateSignature(struct UUI_BP_FG_ChallengeRewardButton_C* Button); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.OnChallengeRewardClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeRewardUnhovered__DelegateSignature(); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.OnChallengeRewardUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeRewardHovered__DelegateSignature(struct UUI_BP_FG_ChallengeRewardButton_C* Button, bool CanClaimRewards); // Function UI_BP_FG_ChallengeRewardButton.UI_BP_FG_ChallengeRewardButton_C.OnChallengeRewardHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

