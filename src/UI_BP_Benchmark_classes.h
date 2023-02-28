// WidgetBlueprintGeneratedClass UI_BP_Benchmark.UI_BP_Benchmark_C
// Size: 0x398 (Inherited: 0x328)
struct UUI_BP_Benchmark_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* BenchmarkTitle; // 0x330(0x08)
	struct UPhoenixRichTextBlock* DescText; // 0x338(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x340(0x08)
	struct UOverlay* Overlay_1; // 0x348(0x08)
	struct UUI_BP_SystemMenu_C* settingsMenu; // 0x350(0x08)
	struct FMulticastInlineDelegate BenchmarkAccepted; // 0x358(0x10)
	struct TArray<struct FLegendItemData> DefaultLegendData; // 0x368(0x10)
	struct FMulticastInlineDelegate OnHDRScreenToggled; // 0x378(0x10)
	struct FMulticastInlineDelegate DesiredCursorStateChanged; // 0x388(0x10)

	void AdjustForViewportWidth(); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetMenuLegend(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.SetMenuLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDescText(struct FString Text); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.SetDescText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleSettingsVisibility(bool Visible); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.ToggleSettingsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnLegendItemHoldComplete(struct ULegendItem* LegendItem, bool HoldCompleted); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.OnLegendItemHoldComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature(); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature(struct TArray<struct FLegendItemData>& NewLegend); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature(bool IsShown); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Benchmark(int32_t EntryPoint); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.ExecuteUbergraph_UI_BP_Benchmark // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DesiredCursorStateChanged__DelegateSignature(bool WantsCursor); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.DesiredCursorStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHDRScreenToggled__DelegateSignature(bool IsShown); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.OnHDRScreenToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BenchmarkAccepted__DelegateSignature(); // Function UI_BP_Benchmark.UI_BP_Benchmark_C.BenchmarkAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

