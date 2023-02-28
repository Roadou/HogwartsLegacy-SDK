// WidgetBlueprintGeneratedClass UI_BP_LegendBox.UI_BP_LegendBox_C
// Size: 0x288 (Inherited: 0x268)
struct UUI_BP_LegendBox_C : ULegendBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* NewLegendContainer; // 0x270(0x08)
	struct TArray<struct FString> LegendStrings; // 0x278(0x10)

	void PopulateCallouts(); // Function UI_BP_LegendBox.UI_BP_LegendBox_C.PopulateCallouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_LegendBox.UI_BP_LegendBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_LegendBox.UI_BP_LegendBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LegendBox(int32_t EntryPoint); // Function UI_BP_LegendBox.UI_BP_LegendBox_C.ExecuteUbergraph_UI_BP_LegendBox // (Final|UbergraphFunction) // @ game+0x38a7480
};

