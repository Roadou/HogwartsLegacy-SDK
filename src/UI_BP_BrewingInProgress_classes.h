// WidgetBlueprintGeneratedClass UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C
// Size: 0x391 (Inherited: 0x328)
struct UUI_BP_BrewingInProgress_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x330(0x08)
	struct UHorizontalBox* brewDetails; // 0x338(0x08)
	struct UPhoenixTextBlock* brewLabel; // 0x340(0x08)
	struct UPhoenixTextBlock* FactSheetText; // 0x348(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x350(0x08)
	struct UPhoenixTextBlock* RecipeTitleText; // 0x358(0x08)
	struct UPhoenixTextBlock* Time; // 0x360(0x08)
	struct UPhoenixTextBlock* Yield; // 0x368(0x08)
	struct UPhoenixTextBlock* yieldLabel; // 0x370(0x08)
	struct UBrewingSiteState* BrewingSiteState; // 0x378(0x08)
	float Input Buffer; // 0x380(0x04)
	bool BrewingSiteSet; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct ABrewingSite* BrewingSite; // 0x388(0x08)
	bool AudioIsPlaying; // 0x390(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RefreshYield(); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.RefreshYield // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStopLoop(); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.AudioStopLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioPlayLoop(); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.AudioPlayLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBrewingProgressRation(float& BrewingProgress); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.GetBrewingProgressRation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBrewingSite(struct ABrewingSite* NewBrewingSite); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.SetBrewingSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Init(struct ABrewingSite* Brewing Site); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingInProgress(int32_t EntryPoint); // Function UI_BP_BrewingInProgress.UI_BP_BrewingInProgress_C.ExecuteUbergraph_UI_BP_BrewingInProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

