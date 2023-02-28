// WidgetBlueprintGeneratedClass UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C
// Size: 0x3b9 (Inherited: 0x388)
struct UUI_BP_Legend_Horizontal_Screen_C : ULegend {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* FadeLegend; // 0x390(0x08)
	struct UOverlay* Main; // 0x398(0x08)
	struct UHorizontalBox* ParentLegendPanel; // 0x3a0(0x08)
	struct TArray<struct ULegendItem*> CachedLegendItems; // 0x3a8(0x10)
	bool useViewportAdjustment; // 0x3b8(0x01)

	void AdjustForViewportWidth(); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddLegendItem(struct ULegendItem* NewLegendItem); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.AddLegendItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RemoveAllLegendItems(int32_t StartFromIndex); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.RemoveAllLegendItems // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FadeLegendOut(struct UObject* Caller); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.FadeLegendOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeLegendIn(struct UObject* Caller); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.FadeLegendIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Legend_Horizontal_Screen(int32_t EntryPoint); // Function UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.ExecuteUbergraph_UI_BP_Legend_Horizontal_Screen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

