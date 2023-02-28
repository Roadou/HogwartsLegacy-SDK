// WidgetBlueprintGeneratedClass UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C
// Size: 0x349 (Inherited: 0x328)
struct UUI_BP_InputHeader_Row_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* HeaderText; // 0x330(0x08)
	struct FString Header; // 0x338(0x10)
	bool Large; // 0x348(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InputHeader_Row(int32_t EntryPoint); // Function UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C.ExecuteUbergraph_UI_BP_InputHeader_Row // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

