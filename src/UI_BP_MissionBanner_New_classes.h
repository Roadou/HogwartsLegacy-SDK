// WidgetBlueprintGeneratedClass UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C
// Size: 0x6a0 (Inherited: 0x530)
struct UUI_BP_MissionBanner_New_C : UMissionBannerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetAnimation* CollapseStepsDesc; // 0x538(0x08)
	struct UWidgetAnimation* ExpandStepsDesc; // 0x540(0x08)
	struct UWidgetAnimation* HideMissionAvailable; // 0x548(0x08)
	struct UWidgetAnimation* ShowMissionAvailable; // 0x550(0x08)
	struct UWidgetAnimation* HIdeFullBanner; // 0x558(0x08)
	struct UWidgetAnimation* showFullBanner; // 0x560(0x08)
	struct UWidgetAnimation* hideStepBanner; // 0x568(0x08)
	struct UWidgetAnimation* showStepBanner; // 0x570(0x08)
	struct UBorder* availableBanner; // 0x578(0x08)
	struct UScaleBox* bottomDividerBox; // 0x580(0x08)
	struct UImage* currentMissionIcon; // 0x588(0x08)
	struct UScaleBox* dpadBracket; // 0x590(0x08)
	struct UExpandableArea* ExpandableDesc; // 0x598(0x08)
	struct UUI_BP_LegendItem_C* ExpandLegend; // 0x5a0(0x08)
	struct UBorder* fullBanner; // 0x5a8(0x08)
	struct UInvalidationBox* InvalidationBox_FullBanner; // 0x5b0(0x08)
	struct UInvalidationBox* InvalidationBox_MissionCompleteBanner; // 0x5b8(0x08)
	struct UScaleBox* kbmBracket; // 0x5c0(0x08)
	struct UVerticalBox* mainVerticalBox; // 0x5c8(0x08)
	struct UUI_BP_MissionBannerCheckbox_C* missionBannerCheckbox; // 0x5d0(0x08)
	struct UPhoenixTextBlock* MissionBannerHeaderText; // 0x5d8(0x08)
	struct UUI_BP_MissionCompleteBanner_C* MissionCompleteBanner; // 0x5e0(0x08)
	struct UPhoenixRichTextBlock* MissionDesc_Text; // 0x5e8(0x08)
	struct UImage* MissionIcon; // 0x5f0(0x08)
	struct UPhoenixTextBlock* MissionTitleText; // 0x5f8(0x08)
	struct UVerticalBox* ObjectiveList; // 0x600(0x08)
	struct UBorder* stepBanner; // 0x608(0x08)
	struct UPhoenixTextBlock* StepTitleText; // 0x610(0x08)
	struct UScaleBox* topDividerBox; // 0x618(0x08)
	struct UHorizontalBox* TQPrompt; // 0x620(0x08)
	float StepBannerDuration; // 0x628(0x04)
	float FullBannerDuration; // 0x62c(0x04)
	struct TArray<struct UWidgetAnimation*> BannerAnimationQueue; // 0x630(0x10)
	struct TArray<float> BannerDelayQueue; // 0x640(0x10)
	bool IsBannerAnimationPlaying; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	float QueueCompleteDelay; // 0x654(0x04)
	float FullBannerPreDelay; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct TArray<struct UUserWidget*> OwnerQueue; // 0x660(0x10)
	float MissionAvailableDuration; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct TArray<struct FString> LastStepObjectives; // 0x678(0x10)
	bool DescExpanded; // 0x688(0x01)
	char pad_689[0x3]; // 0x689(0x03)
	float ExpandDelayDuration; // 0x68c(0x04)
	float PositionY; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct UUI_BP_MissionBannerCheckbox_C* CheckboxWidget; // 0x698(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_2(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleButtonBracket(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ToggleButtonBracket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleStepBannerExpand(bool Expand); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ToggleStepBannerExpand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMissionIconName(struct FName MissionID, struct FString& IconName); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.GetMissionIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsSameStepAsLast(struct TArray<struct FString>& objectiveText, bool& Same); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.IsSameStepAsLast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ProgressStepAnimQueue(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ProgressStepAnimQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QueueStepAnimation(struct UWidgetAnimation* NewAnimation, float PreAnimationDelay, struct UUserWidget* AnimationOwner); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.QueueStepAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBPMissionBanner(enum class BannerUpdateType updateType, struct FName updateTitle, struct FName bannerText, struct FName bannerText2, bool bShowTrackMission, struct TArray<struct FString>& objectiveText, struct TArray<bool>& objectiveChecked, struct TArray<bool>& objectiveCheckChanged, struct TArray<int32_t>& objectiveRuntimeValue1, struct TArray<int32_t>& objectiveRuntimeValue2); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPMissionBanner // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ShowBPStepBanner(enum class BannerUpdateType updateType, struct FName updateTitle, struct FName bannerText, struct FName bannerText2, bool bShowTrackMission, struct TArray<struct FString>& objectiveText, struct TArray<bool>& objectiveChecked, struct TArray<bool>& objectiveCheckChanged, struct TArray<int32_t>& objectiveRuntimeValue1, struct TArray<int32_t>& objectiveRuntimeValue2, struct FString MissionDescription, struct FString MissionTypeIcon, struct FString MissionObjectiveIcon, struct FLinearColor ObjectiveTintColor); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPStepBanner // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_5(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_6(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void ShowBPCelebrationBanner(enum class BannerUpdateType updateType, struct FName updateTitle, struct FName bannerText, struct FName bannerText2, bool bShowTrackMission, struct TArray<struct FString>& objectiveText, struct TArray<bool>& objectiveChecked, struct TArray<bool>& objectiveCheckChanged, struct TArray<int32_t>& objectiveRuntimeValue1, struct TArray<int32_t>& objectiveRuntimeValue2); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPCelebrationBanner // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ProcessNextBannerAnimation(struct UWidgetAnimation* NextAnimation, float Delay, struct UUserWidget* Owner); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ProcessNextBannerAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleStepBannerQueueComplete(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.HandleStepBannerQueueComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadMissionSteps(struct TArray<struct FString>& NewStepArray, struct TArray<bool>& IsCheckedArray, struct TArray<bool>& StateChangedArray, struct TArray<int32_t>& RuntimeValueArray1, struct TArray<int32_t>& RuntimeValueArray2, struct FString ObjectiveIcon, struct FLinearColor IconTint); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.LoadMissionSteps // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckboxAnimComplete(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.CheckboxAnimComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateExistingStepBanner(struct TArray<struct FString>& objectiveText, struct TArray<bool>& objectiveChecked, struct TArray<bool>& objectiveCheckChanged, struct TArray<int32_t>& objectiveRuntimeValue1, struct TArray<int32_t>& objectiveRuntimeValue2); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.UpdateExistingStepBanner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowMissionCompleteEvent(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowMissionCompleteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMissionCompleteEvent(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.HideMissionCompleteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_4(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_7(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_8(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_12(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void ExpandSteps(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ExpandSteps // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_9(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartExpandHold(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.StartExpandHold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelExpandHold(); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.CancelExpandHold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepositionAfterMinimapScaleAdjust(enum class EMiniMapSizeOption MiniMapSize); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.RepositionAfterMinimapScaleAdjust // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EventAdjustMinimapSize(struct UObject* Caller, float float); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.EventAdjustMinimapSize // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateColorBlindColors(struct FLinearColor ObjectiveTintColor); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.UpdateColorBlindColors // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MissionCardLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.MissionCardLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MissionBanner_New(int32_t EntryPoint); // Function UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ExecuteUbergraph_UI_BP_MissionBanner_New // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

