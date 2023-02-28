// WidgetBlueprintGeneratedClass UI_BP_MapToolTip.UI_BP_MapToolTip_C
// Size: 0x4b0 (Inherited: 0x328)
struct UUI_BP_MapToolTip_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* TooltipLeft; // 0x330(0x08)
	struct UWidgetAnimation* TooltipRight; // 0x338(0x08)
	struct UPhoenixTextBlock* availableMissionsText; // 0x340(0x08)
	struct UVerticalBox* ContextActionBox; // 0x348(0x08)
	struct UHorizontalBox* ExtraQuestBox; // 0x350(0x08)
	struct UPhoenixTextBlock* ExtraQuestsPlus; // 0x358(0x08)
	struct UPhoenixTextBlock* ExtraQuestsText; // 0x360(0x08)
	struct UCanvasPanel* ItemDivider; // 0x368(0x08)
	struct UVerticalBox* ItemList; // 0x370(0x08)
	struct UVerticalBox* ItemsContainer; // 0x378(0x08)
	struct UCanvasPanel* LevelReqPanel; // 0x380(0x08)
	struct UPhoenixTextBlock* LevelText; // 0x388(0x08)
	struct UImage* MapIcon; // 0x390(0x08)
	struct UImage* MapIcon_2; // 0x398(0x08)
	struct UVerticalBox* MissionAvailable; // 0x3a0(0x08)
	struct UVerticalBox* missionList; // 0x3a8(0x08)
	struct UVerticalBox* MissionRewards; // 0x3b0(0x08)
	struct UPhoenixTextBlock* noSpellReqText; // 0x3b8(0x08)
	struct UPhoenixTextBlock* QuestNumber; // 0x3c0(0x08)
	struct UPhoenixTextBlock* RequiredLevel; // 0x3c8(0x08)
	struct UVerticalBox* requirementList; // 0x3d0(0x08)
	struct UPhoenixTextBlock* requirementTitle; // 0x3d8(0x08)
	struct UUI_BP_QuestReward_C* reward1; // 0x3e0(0x08)
	struct UUI_BP_QuestReward_C* reward2; // 0x3e8(0x08)
	struct UUI_BP_QuestReward_C* reward3; // 0x3f0(0x08)
	struct UPhoenixTextBlock* RewardsTitle; // 0x3f8(0x08)
	struct UUI_BP_QuestSpellRequirement_C* Spell1; // 0x400(0x08)
	struct UUI_BP_QuestSpellRequirement_C* Spell2; // 0x408(0x08)
	struct UVerticalBox* taskList; // 0x410(0x08)
	struct UScaleBox* titleDividerBox; // 0x418(0x08)
	struct UPhoenixRichTextBlock* tooltipDesc; // 0x420(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* TooltipLegend; // 0x428(0x08)
	struct UOverlay* ToolTipLimits; // 0x430(0x08)
	struct UPhoenixTextBlock* tooltipTitle; // 0x438(0x08)
	struct UUI_BP_AvailableMissionNote_C* UI_BP_AvailableMissionNote; // 0x440(0x08)
	struct UUI_BP_RegionInfoItem_C* UI_BP_RegionInfoItem; // 0x448(0x08)
	struct ULegendItem* legendItemMap; // 0x450(0x08)
	struct ULegendItem* legendItemTravel; // 0x458(0x08)
	struct ULegendItem* legendItemExtra; // 0x460(0x08)
	struct ULegendItem* legendItemPath; // 0x468(0x08)
	struct TArray<struct UUI_BP_QuestReward_C*> RewardArray; // 0x470(0x10)
	struct TArray<struct UUI_BP_RegionInfoItem_C*> ItemArray; // 0x480(0x10)
	struct TArray<struct UUI_BP_AvailableMissionNote_C*> MIssionNoteArray; // 0x490(0x10)
	struct TArray<struct UUI_BP_QuestObjective_C*> CachedQuestObjectives; // 0x4a0(0x10)

	void SetMissionTasks(struct TArray<struct FTaskData>& MissionData); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionTasks // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetItemData(struct TArray<struct FRegionPopuplData>& ItemData); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMissionLockedState(struct FString Prereq1, struct FString Prereq2, int32_t CurrentMissionLevel, bool& MeetsLockRequirements); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.GetMissionLockedState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMissionIcon(bool MeetsLockedReq, bool IsMain, bool IsAssignment, bool IsRelationship, struct FString& IconName); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.GetMissionIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTooltip(); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.ResetTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMissionRewards(struct TArray<struct FMissionRewardData>& MissionRewards); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMissionTitleAndDescription(struct FString MissionIcon, struct FString NewTitle, struct FString NewDescription, struct FString AlternateDesc, bool IsTrackedMission); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionTitleAndDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckPrerequisiteString(struct FString Prereq, bool& IsBroomOrSpell); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.CheckPrerequisiteString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMissionPrereqs(struct FString PrereqID1, struct FString PrereqID2, bool& NoSpellReqs); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionPrereqs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Available Missions Data(bool ShowAvailableMissions, struct FString NewTitle, struct TArray<struct FString>& AvailableMissionNames, struct TArray<struct FString>& AvailableMissionIcons, struct TArray<struct FLinearColor>& AvailableMissionColors); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.Set Available Missions Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipTitleAndDescription(struct FString NewTitle, struct FString NewDesc, bool isVendor); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipTitleAndDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetQuestLevel(int32_t RequiredLevel, int32_t SuggestedLevel, bool& NoLevelRequirement); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetQuestLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipDataFromTipData(struct FMapToolTipData TipData); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipDataFromTipData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipLegend(struct TArray<struct FString>& LegendArray); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipData(struct FString NewTitle, struct FString NewDescription, struct FText NewLegend, int32_t LevelRequirement, bool ShowAvailableMissions, struct TArray<struct FString>& AvailableMissionNames, struct TArray<struct FString>& AvailableMissionIcons); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FlipMapTooltipRight(struct UObject* Caller); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.FlipMapTooltipRight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlipMapTooltipLeft(struct UObject* Caller); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.FlipMapTooltipLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MapToolTip(int32_t EntryPoint); // Function UI_BP_MapToolTip.UI_BP_MapToolTip_C.ExecuteUbergraph_UI_BP_MapToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

