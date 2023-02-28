// WidgetBlueprintGeneratedClass UI_BP_LegendBar.UI_BP_LegendBar_C
// Size: 0x280 (Inherited: 0x268)
struct UUI_BP_LegendBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* LegendBar; // 0x270(0x08)
	struct UUI_BP_LegendBox_C* LegendBox; // 0x278(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHouseColors(); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.SetHouseColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonLegend(struct TArray<struct FString>& LegendArray); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.SetButtonLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetButtonLegend(struct TArray<struct FString>& NewParam); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.I_SetButtonLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LegendBar(int32_t EntryPoint); // Function UI_BP_LegendBar.UI_BP_LegendBar_C.ExecuteUbergraph_UI_BP_LegendBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

