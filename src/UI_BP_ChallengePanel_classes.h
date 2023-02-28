// WidgetBlueprintGeneratedClass UI_BP_ChallengePanel.UI_BP_ChallengePanel_C
// Size: 0x465 (Inherited: 0x328)
struct UUI_BP_ChallengePanel_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ClaimRewardAnimation; // 0x330(0x08)
	struct UWidgetAnimation* HighlightReward; // 0x338(0x08)
	struct UPhoenixImage* challengeIcon; // 0x340(0x08)
	struct UPhoenixImage* challengeOutline; // 0x348(0x08)
	struct UHorizontalBox* Complete; // 0x350(0x08)
	struct UPhoenixTextBlock* CompletedText; // 0x358(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x360(0x08)
	struct UPhoenixTextBlock* MaxCount; // 0x368(0x08)
	struct UHorizontalBox* ProgressCount; // 0x370(0x08)
	struct UPhoenixTextBlock* Slash; // 0x378(0x08)
	struct UUI_BP_FG_ChallengeRewardButton_C* Tier1; // 0x380(0x08)
	struct UUI_BP_FG_ChallengeRewardButton_C* Tier2; // 0x388(0x08)
	struct UUI_BP_FG_ChallengeRewardButton_C* Tier3; // 0x390(0x08)
	struct UUI_BP_FG_ChallengeRewardButton_C* Tier4; // 0x398(0x08)
	struct UUI_BP_FG_ChallengeRewardButton_C* Tier5; // 0x3a0(0x08)
	struct UPhoenixTextBlock* tierTitle; // 0x3a8(0x08)
	struct UPhoenixTextBlock* Current Count; // 0x3b0(0x08)
	bool HasClaimableRewards; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FMulticastInlineDelegate OnTierHovered; // 0x3c0(0x10)
	struct FString CurrentTierID; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnTierUnhovered; // 0x3e0(0x10)
	bool isTierAvailable; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastInlineDelegate OnTierRewardClaimed; // 0x3f8(0x10)
	struct FString RewardItem; // 0x408(0x10)
	struct FString RewardCategory; // 0x418(0x10)
	struct FName ChallengeID; // 0x428(0x08)
	int32_t NumTiers; // 0x430(0x04)
	int32_t CompletedTiers; // 0x434(0x04)
	struct TArray<struct FName> ChallengeTiers; // 0x438(0x10)
	struct TArray<struct UUI_BP_FG_ChallengeRewardButton_C*> TierArray; // 0x448(0x10)
	bool IsChallengeComplete; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	struct FName CategoryID; // 0x45c(0x08)
	bool isChallengeAvailable; // 0x464(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_ChallengePanel_1(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengePanel_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideTutorialAnimation(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.HideTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTutorialAnimation(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.ShowTutorialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitTiers(int32_t numAvailable, int32_t Completed); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.InitTiers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetChallengeData(struct FAchievementChallenge Challenge, struct FName Category); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.SetChallengeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRewardVisibility(bool IsAvailable); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.SetRewardVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRewardsGlint(bool showRewardsGlint); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.ToggleRewardsGlint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopHighlightReward(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.StopHighlightReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayHighlightReward(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.PlayHighlightReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierState(bool IsActive); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.SetTierState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierRewards(bool ShouldShowRewards, struct TArray<struct FAchievementReward>& Rewards); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.SetTierRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Challenge Tiers(struct TArray<struct FName>& ChallengeArray); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.Set Challenge Tiers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClaimRewardAnimationFinished(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnClaimRewardAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ChallengeIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.ChallengeIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierButtonClicked(struct UUI_BP_FG_ChallengeRewardButton_C* Button); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierButtonHovered(struct UUI_BP_FG_ChallengeRewardButton_C* Button, bool CanClaimRewards); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierButtonUnhovered(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengePanel(int32_t EntryPoint); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.ExecuteUbergraph_UI_BP_ChallengePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnTierRewardClaimed__DelegateSignature(struct UUI_BP_FG_ChallengeRewardButton_C* TierButtonSelected); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierRewardClaimed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierUnhovered__DelegateSignature(); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierHovered__DelegateSignature(struct UUI_BP_FG_ChallengeRewardButton_C* HoveredTier, bool CanClaimRewards); // Function UI_BP_ChallengePanel.UI_BP_ChallengePanel_C.OnTierHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

