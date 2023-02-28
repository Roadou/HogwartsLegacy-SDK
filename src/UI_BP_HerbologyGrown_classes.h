// WidgetBlueprintGeneratedClass UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C
// Size: 0x378 (Inherited: 0x328)
struct UUI_BP_HerbologyGrown_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x330(0x08)
	struct UPhoenixRichTextBlock* ButtonText; // 0x338(0x08)
	struct UPhoenixTextBlock* FactSheetText; // 0x340(0x08)
	struct UPhoenixTextBlock* PlantNameText; // 0x348(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x350(0x08)
	struct UPhoenixTextBlock* YieldAmount; // 0x358(0x08)
	struct UPhoenixTextBlock* YieldText_2; // 0x360(0x08)
	struct FName PreviewPlantID; // 0x368(0x08)
	struct UHerbPlotState* HerbPlotState; // 0x370(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetPlantDetails(struct FName PlantID); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.SetPlantDetails // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshWidget(struct AHerbPlot* Plot); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.RefreshWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologyGrown(int32_t EntryPoint); // Function UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.ExecuteUbergraph_UI_BP_HerbologyGrown // (Final|UbergraphFunction) // @ game+0x38a7480
};

