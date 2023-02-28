// WidgetBlueprintGeneratedClass UI_BP_PottingDetails.UI_BP_PottingDetails_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_PottingDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* detailsDescription; // 0x330(0x08)
	struct UPhoenixTextBlock* detailsTitle; // 0x338(0x08)
	struct UHorizontalBox* ErrorText; // 0x340(0x08)
	struct UPhoenixTextBlock* ErrorTextMain; // 0x348(0x08)
	struct UPhoenixTextBlock* GrowthTimeHeader; // 0x350(0x08)
	struct UPhoenixTextBlock* GrowthTimeText; // 0x358(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* NewTooltipLegend; // 0x360(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x368(0x08)
	struct UPhoenixTextBlock* PlotSizeHeader; // 0x370(0x08)
	struct UPhoenixTextBlock* PlotSizeText; // 0x378(0x08)
	struct UVerticalBox* plottingDetails; // 0x380(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Set Up Plotting Legend(struct FName LockId, bool IsUnlocked, bool CanPlantInPlot); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.Set Up Plotting Legend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUpPlottingDetails(bool IsUnlocked, int32_t NewGrowthTime, struct FName PlantSize); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.SetUpPlottingDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitPlottingData(struct FSeedInfo SeedInfo, bool CanPlantInPlot); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.InitPlottingData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PottingDetails(int32_t EntryPoint); // Function UI_BP_PottingDetails.UI_BP_PottingDetails_C.ExecuteUbergraph_UI_BP_PottingDetails // (Final|UbergraphFunction) // @ game+0x38a7480
};

