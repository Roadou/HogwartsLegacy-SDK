// WidgetBlueprintGeneratedClass UI_BP_LegendItem.UI_BP_LegendItem_C
// Size: 0x448 (Inherited: 0x380)
struct UUI_BP_LegendItem_C : ULegendItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UImage* ButtonBG; // 0x388(0x08)
	struct UPhoenixRichTextBlock* ButtonText; // 0x390(0x08)
	struct UImage* ProgressBG; // 0x398(0x08)
	struct UImage* ProgressFill; // 0x3a0(0x08)
	struct UPhoenixRichTextBlock* TextString; // 0x3a8(0x08)
	struct FRuntimeFloatCurve ProgressCurve; // 0x3b0(0x88)
	int32_t ButtonFontSize; // 0x438(0x04)
	float baseButtonPadding; // 0x43c(0x04)
	float ImageSizeMin; // 0x440(0x04)
	float ImageSizeMax; // 0x444(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetDynamicPadding(); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.SetDynamicPadding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwapFillMaterials(enum class EInputDeviceUsed Selection); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.SwapFillMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LegendItemDataChanged(struct FString ButtonString, struct FString TextString, bool TextStringIsLocalized); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.LegendItemDataChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ProgressUsedChanged(bool ProgressUsed); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.ProgressUsedChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ProgressChanged(float Progress); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.ProgressChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisabledStateChanged(bool Disabled); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.DisabledStateChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTextColor(struct FSlateColor InColor); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.SetTextColor // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateFillMeterStyle(enum class EInputDeviceUsed UsedInputDevice); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.UpdateFillMeterStyle // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LegendItem(int32_t EntryPoint); // Function UI_BP_LegendItem.UI_BP_LegendItem_C.ExecuteUbergraph_UI_BP_LegendItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

