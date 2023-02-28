// WidgetBlueprintGeneratedClass UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C
// Size: 0x3d1 (Inherited: 0x328)
struct UUI_BP_HerbologySeedSelection_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowPlotDetails; // 0x330(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x338(0x08)
	struct UPhoenixTextBlock* NoSeedsText; // 0x340(0x08)
	struct UUI_BP_PottingDetails_C* plotDetails; // 0x348(0x08)
	struct UUniformGridPanel* SeedList; // 0x350(0x08)
	struct FMulticastInlineDelegate OnPlantSelected; // 0x358(0x10)
	struct UUI_BP_HerbologySeedTooltip_C* SeedTooltip; // 0x368(0x08)
	int32_t NumPreviewListCopies; // 0x370(0x04)
	int32_t GridWidth; // 0x374(0x04)
	struct TArray<bool> CanPlantInPlotArray; // 0x378(0x10)
	int32_t MouseCursorAdjustmentLoops; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct FSeedInfo> SeedInfoList; // 0x390(0x10)
	struct UIconButtonWidget* HoveredSeedButton; // 0x3a0(0x08)
	struct UUI_BP_HerbologySeedTooltip_C* HerbSeedContent; // 0x3a8(0x08)
	struct TArray<struct FName> TutorialHiglights; // 0x3b0(0x10)
	struct TArray<struct FSeedInfo> PreviewSeedList; // 0x3c0(0x10)
	bool IsFirstHover; // 0x3d0(0x01)

	void GridIndexToRowColumn(int32_t GridIndex, int32_t GridWidth, int32_t& OutRow, int32_t& OutColumn); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GridIndexToRowColumn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSeedTooltip(); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.UpdateSeedTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCurrentlyHoveredPlantID(struct FName& PlantID); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GetCurrentlyHoveredPlantID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSeedInfoFromButton(struct UIconButtonWidget* Button, struct FSeedInfo& SeedInfo, bool& CanPlantInPlot); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GetSeedInfoFromButton // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulatePreviewSeedList(); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.PopulatePreviewSeedList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshSeedList(struct AHerbPlot* Herb Plot); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.RefreshSeedList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateSeedList(struct TArray<struct FSeedInfo>& Seeds, struct AHerbPlot* Herb Plot); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.PopulateSeedList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSeedButtonHovered(struct UIconButtonWidget* Seed Button); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSeedButtonUnhovered(struct UIconButtonWidget* Seed Button); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSeedButtonClicked(struct UIconButtonWidget* Seed Button); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoverFirstSeed(); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.HoverFirstSeed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologySeedSelection(int32_t EntryPoint); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.ExecuteUbergraph_UI_BP_HerbologySeedSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnPlantSelected__DelegateSignature(struct FName PlantID); // Function UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnPlantSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

