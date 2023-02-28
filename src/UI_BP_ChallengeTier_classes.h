// WidgetBlueprintGeneratedClass UI_BP_ChallengeTier.UI_BP_ChallengeTier_C
// Size: 0x460 (Inherited: 0x328)
struct UUI_BP_ChallengeTier_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ClaimRewardAnimation; // 0x330(0x08)
	struct UWidgetAnimation* HighlightReward; // 0x338(0x08)
	struct UUI_BP_SparkleBurst_C* claimBurst1; // 0x340(0x08)
	struct UUI_BP_SparkleBurst_C* claimBurst2; // 0x348(0x08)
	struct UHorizontalBox* Complete; // 0x350(0x08)
	struct UPhoenixTextBlock* CompletedText; // 0x358(0x08)
	struct UOverlay* costume; // 0x360(0x08)
	struct UImage* costumeBack; // 0x368(0x08)
	struct UImage* costumeIcon; // 0x370(0x08)
	struct UOverlay* costumeSelected; // 0x378(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x380(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* detailsBack; // 0x388(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegend; // 0x390(0x08)
	struct UOverlay* Legend; // 0x398(0x08)
	struct UPhoenixTextBlock* MaxCount; // 0x3a0(0x08)
	struct UPhoenixImage* PhoenixImage_279; // 0x3a8(0x08)
	struct UHorizontalBox* ProgressCount; // 0x3b0(0x08)
	struct UOverlay* reward; // 0x3b8(0x08)
	struct UImage* rewardBack; // 0x3c0(0x08)
	struct UPhoenixImage* rewardClaimedIcon; // 0x3c8(0x08)
	struct UImage* rewardImage; // 0x3d0(0x08)
	struct UOverlay* rewardSelected; // 0x3d8(0x08)
	struct UPhoenixTextBlock* RewardText; // 0x3e0(0x08)
	struct UPhoenixTextBlock* rewardTitle; // 0x3e8(0x08)
	struct UPhoenixTextBlock* Slash; // 0x3f0(0x08)
	struct UPhoenixImage* tierCompleteIcon; // 0x3f8(0x08)
	struct UPhoenixTextBlock* tierTitle; // 0x400(0x08)
	struct UPhoenixTextBlock* Current Count; // 0x408(0x08)
	bool HasClaimableRewards; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastInlineDelegate OnTierHovered; // 0x418(0x10)
	struct FMulticastInlineDelegate OnTierUnhovered; // 0x428(0x10)
	bool isTierAvailable; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FMulticastInlineDelegate OnTierRewardClaimed; // 0x440(0x10)
	bool IsTierComplete; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UOverlay* selectedOverlay; // 0x458(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_ChallengeTier_1(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeTier_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClaimedStatus(bool IsTierComplete, bool CanClaimRewards); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetClaimedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierLegend(bool CanClaimRewards); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetTierLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRewardVisibility(bool IsAvailable); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetRewardVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRewardsGlint(bool showRewardsGlint); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.ToggleRewardsGlint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopHighlightReward(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.StopHighlightReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayHighlightReward(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.PlayHighlightReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierState(bool IsActive); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetTierState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierRewards(struct FAchievementReward Rewards, int32_t TierMaxCount); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetTierRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTierDetails(struct FKnowledgeAchievementResult TierData, bool UnclaimedRewards); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.SetTierDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateRewardClaimedGraphics(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.UpdateRewardClaimedGraphics // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierRewardIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.OnTierRewardIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowRewardCollectedAnimation(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.ShowRewardCollectedAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengeTier(int32_t EntryPoint); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.ExecuteUbergraph_UI_BP_ChallengeTier // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnTierRewardClaimed__DelegateSignature(struct FString RewardID, struct FString RewardType); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.OnTierRewardClaimed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierUnhovered__DelegateSignature(); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.OnTierUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTierHovered__DelegateSignature(struct FString HoveredTierID); // Function UI_BP_ChallengeTier.UI_BP_ChallengeTier_C.OnTierHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

