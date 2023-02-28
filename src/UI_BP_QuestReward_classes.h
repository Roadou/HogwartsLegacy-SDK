// WidgetBlueprintGeneratedClass UI_BP_QuestReward.UI_BP_QuestReward_C
// Size: 0x338 (Inherited: 0x328)
struct UUI_BP_QuestReward_C : UPhoenixUserWidget {
	struct UPhoenixImage* rewardIcon; // 0x328(0x08)
	struct UPhoenixRichTextBlock* RewardText; // 0x330(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_QuestReward.UI_BP_QuestReward_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRewardData(struct FString TypeID, struct FString RewardID); // Function UI_BP_QuestReward.UI_BP_QuestReward_C.SetRewardData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

