// WidgetBlueprintGeneratedClass UI_BP_QuestObjective.UI_BP_QuestObjective_C
// Size: 0x3d9 (Inherited: 0x328)
struct UUI_BP_QuestObjective_C : UPhoenixUserWidget {
	struct UImage* iconImage; // 0x328(0x08)
	struct UPhoenixRichTextBlock* objectiveText; // 0x330(0x08)
	struct UImage* TrackBorder; // 0x338(0x08)
	struct UOverlay* TrackedIconOverlay; // 0x340(0x08)
	struct UImage* untrackedCarrot; // 0x348(0x08)
	struct FSlateBrush StrikeThroughBrush; // 0x350(0x88)
	bool TaskIsComplete; // 0x3d8(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_QuestObjective.UI_BP_QuestObjective_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GlintTextureLoaded(struct UTexture2D* GlintTexture, struct UObject* ObjectParam); // Function UI_BP_QuestObjective.UI_BP_QuestObjective_C.GlintTextureLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitObjectiveData(struct FString objectiveText, int32_t RuntimeParam1, int32_t RuntimeParam2, bool IsComplete, bool IsTracked, struct FString Icon, struct FString Glint, struct FLinearColor IconColor); // Function UI_BP_QuestObjective.UI_BP_QuestObjective_C.InitObjectiveData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

