// WidgetBlueprintGeneratedClass UI_BP_BrewingComplete.UI_BP_BrewingComplete_C
// Size: 0x3b8 (Inherited: 0x328)
struct UUI_BP_BrewingComplete_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x330(0x08)
	struct UPhoenixRichTextBlock* ButtonText; // 0x338(0x08)
	struct UPhoenixTextBlock* FactSheetText; // 0x340(0x08)
	struct UPhoenixTextBlock* Label; // 0x348(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x350(0x08)
	struct UPhoenixTextBlock* RecipeTitleText; // 0x358(0x08)
	struct UPhoenixTextBlock* YieldAmountAsBottles; // 0x360(0x08)
	struct UPhoenixTextBlock* YieldText; // 0x368(0x08)
	struct FBrewingRecipe PreviewRecipe; // 0x370(0x40)
	struct UBrewingSiteState* BrewingSiteState; // 0x3b0(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RefreshYield(); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.RefreshYield // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Init(struct ABrewingSite* Brewing Site); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingComplete(int32_t EntryPoint); // Function UI_BP_BrewingComplete.UI_BP_BrewingComplete_C.ExecuteUbergraph_UI_BP_BrewingComplete // (Final|UbergraphFunction) // @ game+0x38a7480
};

