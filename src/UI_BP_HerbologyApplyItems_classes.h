// WidgetBlueprintGeneratedClass UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C
// Size: 0x470 (Inherited: 0x328)
struct UUI_BP_HerbologyApplyItems_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x330(0x08)
	struct UPhoenixTextBlock* FactSheetText; // 0x338(0x08)
	struct UVerticalBox* FertilizerList_2; // 0x340(0x08)
	struct UPhoenixTextBlock* GrowthTimeHeader; // 0x348(0x08)
	struct UPhoenixTextBlock* GrowthTimeText; // 0x350(0x08)
	struct UImage* Image_199; // 0x358(0x08)
	struct UHorizontalBox* NoFertilizersText; // 0x360(0x08)
	struct UPhoenixTextBlock* PlantNameText; // 0x368(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x370(0x08)
	struct UPhoenixTextBlock* Yield; // 0x378(0x08)
	struct UPhoenixTextBlock* yieldValue; // 0x380(0x08)
	struct FMulticastInlineDelegate OnFertilizerSelected; // 0x388(0x10)
	struct TArray<struct FInventoryResult> PreviewFertilizers; // 0x398(0x10)
	struct TMap<struct FString, struct FString> ErrorStringMap; // 0x3a8(0x50)
	struct FName PreviewPlantID; // 0x3f8(0x08)
	struct UUI_BP_ItemTooltipEffectDescription_C* FertilizerTooltip; // 0x400(0x08)
	struct FMargin ItemMargin; // 0x408(0x10)
	struct UHerbPlotState* HerbPlotState; // 0x418(0x08)
	struct AHerbPlot* HerbPlot; // 0x420(0x08)
	struct UIconButtonWidget* HoveredFertilizerButton; // 0x428(0x08)
	bool PlantButtonIsHovered; // 0x430(0x01)
	bool FertilizerButtonHovered; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct FMulticastInlineDelegate OnRequiresLegendUpdate; // 0x438(0x10)
	bool HerbPlotIsSet; // 0x448(0x01)
	bool AudioIsPlaying; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FMulticastInlineDelegate OnFertilizerHovered; // 0x450(0x10)
	struct TArray<struct UUI_BP_HerbologyFertilizerButton_C*> FertilizerButtonArray; // 0x460(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetHerbPlot(struct AHerbPlot* NewHerbPlot); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.SetHerbPlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStopLoop(); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.AudioStopLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioPlayLoop(); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.AudioPlayLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGrowthProgressRation(float& Progress); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.GetGrowthProgressRation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshPlantTooltip(); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.RefreshPlantTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshFertilizerTooltip(struct FName FertilizerID); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.RefreshFertilizerTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetIsGrowing(bool& Growing); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.GetIsGrowing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateToolTip(struct FString ItemName); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.UpdateToolTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateFertilizers(struct TArray<struct FInventoryResult>& Fertilizers); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.PopulateFertilizers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Plant Details(struct FName PlantID); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Set Plant Details // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshWidget(struct AHerbPlot* Plot); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.RefreshWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFertilizerButtonHovered(struct FName FertilizerID, struct UUI_BP_HerbologyFertilizerButton_C* FertilizerButton); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFertilizerButtonUnhovered(struct FName FertilizerID); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFertilizerButtonClicked(struct FName FertilizerID); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologyApplyItems(int32_t EntryPoint); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.ExecuteUbergraph_UI_BP_HerbologyApplyItems // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnFertilizerHovered__DelegateSignature(struct UUI_BP_HerbologyFertilizerButton_C* FertilizerButton); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRequiresLegendUpdate__DelegateSignature(); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnRequiresLegendUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFertilizerSelected__DelegateSignature(struct FName FertilizerID); // Function UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

