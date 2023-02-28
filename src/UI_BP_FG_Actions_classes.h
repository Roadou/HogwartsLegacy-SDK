// WidgetBlueprintGeneratedClass UI_BP_FG_Actions.UI_BP_FG_Actions_C
// Size: 0x4d0 (Inherited: 0x3c8)
struct UUI_BP_FG_Actions_C : UTabPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* OutroDetails; // 0x3d0(0x08)
	struct UWidgetAnimation* showRewardToast; // 0x3d8(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x3e0(0x08)
	struct UWidgetAnimation* OutroAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* ShowDescription; // 0x3f0(0x08)
	struct UWidgetAnimation* showDetails; // 0x3f8(0x08)
	struct UUI_BP_FG_ActionsDetails_C* actionsDetails; // 0x400(0x08)
	struct UUI_BP_CHAL_Button_Combat_C* button_Combat; // 0x408(0x08)
	struct UUI_BP_CHAL_Button_WorldExploration_C* button_Exploration; // 0x410(0x08)
	struct UUI_BP_CHAL_Button_LostPages_C* button_LostPages; // 0x418(0x08)
	struct UUI_BP_CHAL_Button_Quests_C* button_Quests; // 0x420(0x08)
	struct UUI_BP_CHAL_Button_Sanctuary_C* button_Sanctuary; // 0x428(0x08)
	struct UPhoenixTextBlock* categoryDescription; // 0x430(0x08)
	struct UImage* overallProgressMeter; // 0x438(0x08)
	struct UPhoenixTextBlock* overallProgressText; // 0x440(0x08)
	struct UPhoenixTextBlock* PercentText; // 0x448(0x08)
	struct UPhoenixTextBlock* ProgressLabel; // 0x450(0x08)
	struct UUI_BP_CHAL_RewardToast_C* rewardToast; // 0x458(0x08)
	struct UPhoenixImage* ripple; // 0x460(0x08)
	struct UUI_BP_Sparkels_C* Sparkles1; // 0x468(0x08)
	struct UUI_BP_Sparkels_C* Sparkles2; // 0x470(0x08)
	struct UUI_BP_Sparkels_C* sparkles3; // 0x478(0x08)
	struct TArray<struct UUI_BP_FG_ChallengeButton_C*> ButtonArray; // 0x480(0x10)
	bool isDetailsShowing; // 0x490(0x01)
	bool NewVar_1; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct UWidgetAnimation* TransitionAnimation; // 0x498(0x08)
	struct UUI_BP_FG_ChallengeButton_C* SelectedButton; // 0x4a0(0x08)
	struct UUserWidget* ScreenParent; // 0x4a8(0x08)
	struct TArray<struct UWidgetAnimation*> TransitionAnimationArray; // 0x4b0(0x10)
	bool CurrentTierHasClaimableRewards; // 0x4c0(0x01)
	bool ShowTierDpadCallout; // 0x4c1(0x01)
	bool RewardsShowing; // 0x4c2(0x01)
	char pad_4C3[0x5]; // 0x4c3(0x05)
	struct UFieldGuideButton_Challenges* HoveredCategoryButton; // 0x4c8(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_4(struct UUI_BP_Sparkels_C* sparkles3); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_3(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_2(struct UUI_BP_Sparkels_C* Sparkles2); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_1(struct UUI_BP_Sparkels_C* Sparkles1); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Actions_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategoryHasUnlockedChallenges(struct FName Category, bool& HasUnlockedChallenges); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.CategoryHasUnlockedChallenges // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CardGlowOut(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.CardGlowOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CardGlowIn(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.CardGlowIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateLegend(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.UpdateLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitLegend(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.InitLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCategoryButtons(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.InitCategoryButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show Category Description(struct FString descriptionText); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.Show Category Description // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCategoryLevels(struct FName CategoryID, struct FText& CategoryPercent); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SetCategoryLevels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionToMainPage(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.TransitionToMainPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionToDetails(struct FName CategoryID, struct FString categoryTitle, struct FText CategoryPercentage); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.TransitionToDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginSparkles3(struct UUI_BP_Sparkels_C* sparkles3); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BeginSparkles3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_0_OnShowTierRewardToast__DelegateSignature(struct FString NewRewardID, struct FString NewRewardType); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_0_OnShowTierRewardToast__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ChallengeButtonClicked(struct UUI_BP_FG_ChallengeButton_C* Button); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.ChallengeButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowDetails_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.WidgetAnimationEvt_ShowDetails_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnRewardsToastComplete(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.OnRewardsToastComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_0_ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_0_ChallengeCategoryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_1_ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_1_ChallengeCategoryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_2_ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_2_ChallengeCategoryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_3_ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_3_ChallengeCategoryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_4_ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_4_ChallengeCategoryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_5_ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_5_ChallengeCategoryHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_6_ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Combat_K2Node_ComponentBoundEvent_6_ChallengeCategoryUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_7_ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_7_ChallengeCategoryHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_8_ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Exploration_K2Node_ComponentBoundEvent_8_ChallengeCategoryUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_9_ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_9_ChallengeCategoryHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_10_ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_LostPages_K2Node_ComponentBoundEvent_10_ChallengeCategoryUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_11_ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_11_ChallengeCategoryHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_12_ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Quests_K2Node_ComponentBoundEvent_12_ChallengeCategoryUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_13_ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_13_ChallengeCategoryHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_14_ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_button_Sanctuary_K2Node_ComponentBoundEvent_14_ChallengeCategoryUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BeginSparkles2(struct UUI_BP_Sparkels_C* Sparkles2); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BeginSparkles2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BeginSparkles1(struct UUI_BP_Sparkels_C* Sparkles1); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BeginSparkles1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupChallengesTutorialDetails(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.SetupChallengesTutorialDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_17_UpdateHoverLegend__DelegateSignature(bool CanClaimRewards, bool CanToggleTiers); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_17_UpdateHoverLegend__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_15_ChallengeSelected__DelegateSignature(bool HasClaimableRewards); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.BndEvt__UI_BP_FG_Actions_actionsDetails_K2Node_ComponentBoundEvent_15_ChallengeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_Actions(int32_t EntryPoint); // Function UI_BP_FG_Actions.UI_BP_FG_Actions_C.ExecuteUbergraph_UI_BP_FG_Actions // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

