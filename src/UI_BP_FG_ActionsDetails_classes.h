// WidgetBlueprintGeneratedClass UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C
// Size: 0x4a0 (Inherited: 0x328)
struct UUI_BP_FG_ActionsDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* showTierDetails; // 0x330(0x08)
	struct UPhoenixTextBlock* CategoryPercentage; // 0x338(0x08)
	struct UPhoenixTextBlock* categoryTitle; // 0x340(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_11; // 0x348(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_12; // 0x350(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_13; // 0x358(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_01; // 0x360(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_02; // 0x368(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_03; // 0x370(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_04; // 0x378(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_05; // 0x380(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_06; // 0x388(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_07; // 0x390(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_08; // 0x398(0x08)
	struct UUI_BP_ChallengePanel_C* CHALL_09; // 0x3a0(0x08)
	struct UUI_BP_SimpleScrollBox_C* challengeScrollBox; // 0x3a8(0x08)
	struct UPhoenixTextBlock* Percentage; // 0x3b0(0x08)
	struct UUI_BP_ChallengeTier_C* tierDetails; // 0x3b8(0x08)
	struct TArray<struct UUI_BP_FG_ChallengeButton_C*> ActionItemArray; // 0x3c0(0x10)
	struct UUI_BP_FG_ChallengeButton_C* HoveredChallenge; // 0x3d0(0x08)
	int32_t tierIndex; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct TArray<struct UUI_BP_ChallengePanel_C*> ChallengeArray; // 0x3e0(0x10)
	int32_t maxTiers; // 0x3f0(0x04)
	float CurrentHoverTime; // 0x3f4(0x04)
	float RequiredHoverTime; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UUI_BP_FG_ChallengeButton_C* DisplayedChallenge; // 0x400(0x08)
	struct FHermesBPDelegateHandle HighlightHogwartsPagesHandle; // 0x408(0x10)
	struct FHermesBPDelegateHandle StopHighlightTiersHandle; // 0x418(0x10)
	struct FString HoveredTierID; // 0x428(0x10)
	bool CanToggleTiers; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FMulticastInlineDelegate ToggleDpadControls; // 0x440(0x10)
	bool isRewardToastShowing; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FMulticastInlineDelegate OnShowTierRewardToast; // 0x458(0x10)
	bool IsItemHovered; // 0x468(0x01)
	bool HoverStateChanged; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
	struct UUI_BP_FG_Actions_C* ParentActionsScreen; // 0x470(0x08)
	bool CanClaimRewards; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FMulticastInlineDelegate UpdateHoverLegend; // 0x480(0x10)
	struct FMulticastInlineDelegate ChallengeSelected; // 0x490(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void TierHasUnclaimedRewards(struct FKnowledgeAchievementResult ChallengeTier, struct TArray<struct FKnowledgeAchievementResult>& UnclaimedRewards, bool& HasUnclaimed); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.TierHasUnclaimedRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ClaimReward(struct UUI_BP_FG_ChallengeRewardButton_C* TierButton); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ClaimReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysStopHighlightTiers(struct UObject* Caller); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.TutorialSaysStopHighlightTiers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysHighlightTiers(struct UObject* Caller); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.TutorialSaysHighlightTiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupChallengesTutorial(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.SetupChallengesTutorial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTiers(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ResetTiers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTiers(struct FString ChallengeID, struct TArray<struct FName>& ChallengeTierArray, bool IsAvailable, int32_t CurrentTier); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.SetTiers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeButtonUnhovered(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.OnChallengeButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChallengeButtonHovered(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.OnChallengeButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetActionItemMeters(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ResetActionItemMeters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionDetails(struct FString categoryTitle, struct FName CategoryID, struct FText CategoryPercentage); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.SetActionDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRewardToastComplete(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.OnRewardToastComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChallengeTierRewardClaimed(struct UUI_BP_FG_ChallengeRewardButton_C* TierButtonSelected); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ChallengeTierRewardClaimed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChallengeTierRewardHovered(struct UUI_BP_FG_ChallengeRewardButton_C* HoveredTier, bool CanClaimRewards); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ChallengeTierRewardHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChallengeTierRewardUnhovered(); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ChallengeTierRewardUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_ActionsDetails(int32_t EntryPoint); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ExecuteUbergraph_UI_BP_FG_ActionsDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ChallengeSelected__DelegateSignature(bool HasClaimableRewards); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ChallengeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateHoverLegend__DelegateSignature(bool CanClaimRewards, bool CanToggleTiers); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.UpdateHoverLegend__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnShowTierRewardToast__DelegateSignature(struct FString NewRewardID, struct FString NewRewardType); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.OnShowTierRewardToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleDpadControls__DelegateSignature(bool ShowDpadCallouts); // Function UI_BP_FG_ActionsDetails.UI_BP_FG_ActionsDetails_C.ToggleDpadControls__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

