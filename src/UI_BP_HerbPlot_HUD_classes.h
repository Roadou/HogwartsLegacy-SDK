// WidgetBlueprintGeneratedClass UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C
// Size: 0x369 (Inherited: 0x2e8)
struct UUI_BP_HerbPlot_HUD_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UUI_BP_Item_Ready_C* CompletedIconButton; // 0x2f0(0x08)
	struct UWidgetSwitcher* CompleteSwitcher; // 0x2f8(0x08)
	struct UPhoenixTextBlock* ItemName; // 0x300(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x308(0x08)
	struct UCanvasPanel* RootPanel; // 0x310(0x08)
	struct UPhoenixTextBlock* TimeRemaining; // 0x318(0x08)
	struct AHerbPlot* HerbPlot; // 0x320(0x08)
	struct FName CurrentFertilizerID; // 0x328(0x08)
	struct FName CurrentPotionID; // 0x330(0x08)
	bool WidgetCanBeHidden; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FLinearColor GrowingProgressColor; // 0x33c(0x10)
	struct FLinearColor StalledProgressColor; // 0x34c(0x10)
	bool HerbPlotIsSet; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct UHerbPlotState* HerbPlotState; // 0x360(0x08)
	bool AudioIsPlaying; // 0x368(0x01)

	void AudioPlayLoop(); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.AudioPlayLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStopLoop(); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.AudioStopLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Herb Plot(struct AHerbPlot* InHerbPlot); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.Set Herb Plot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetVisibleifGrowing(enum class ESlateVisibility& Visibility); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.GetVisibleifGrowing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	enum class ESlateVisibility GetWidgetVisibility(); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.GetWidgetVisibility // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float GetGrowthProgressRatio(); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.GetGrowthProgressRatio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbPlot_HUD(int32_t EntryPoint); // Function UI_BP_HerbPlot_HUD.UI_BP_HerbPlot_HUD_C.ExecuteUbergraph_UI_BP_HerbPlot_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

