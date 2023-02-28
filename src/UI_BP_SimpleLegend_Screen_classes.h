// WidgetBlueprintGeneratedClass UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C
// Size: 0x388 (Inherited: 0x370)
struct UUI_BP_SimpleLegend_Screen_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* Intro; // 0x378(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x380(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SimpleLegend_Screen(int32_t EntryPoint); // Function UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.ExecuteUbergraph_UI_BP_SimpleLegend_Screen // (Final|UbergraphFunction) // @ game+0x38a7480
};

