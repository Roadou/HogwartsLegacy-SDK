// WidgetBlueprintGeneratedClass UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C
// Size: 0x3a8 (Inherited: 0x388)
struct UUI_BP_Legend_Horizontal_Tooltip_C : ULegend {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UHorizontalBox* ParentLegendPanel; // 0x390(0x08)
	struct TArray<struct ULegendItem*> CachedLegendItems; // 0x398(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddLegendItem(struct ULegendItem* NewLegendItem); // Function UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.AddLegendItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RemoveAllLegendItems(int32_t StartFromIndex); // Function UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.RemoveAllLegendItems // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip(int32_t EntryPoint); // Function UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

