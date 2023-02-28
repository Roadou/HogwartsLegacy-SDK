// WidgetBlueprintGeneratedClass UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C
// Size: 0x350 (Inherited: 0x328)
struct UUI_BP_AudioLegendTooltipContent_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UImage* Icon_2; // 0x330(0x08)
	struct UPhoenixTextBlock* ItemtypeText; // 0x338(0x08)
	struct FString IconName; // 0x340(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetIconInfo(struct FString IconName); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.SetIconInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AudioLegendTooltipContent(int32_t EntryPoint); // Function UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.ExecuteUbergraph_UI_BP_AudioLegendTooltipContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

