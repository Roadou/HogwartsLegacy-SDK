// WidgetBlueprintGeneratedClass UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C
// Size: 0x3e0 (Inherited: 0x390)
struct UUI_BP_MenuReaderTester_C : UMenuReaderTestScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UPhoenixTextBlock* DummyText; // 0x398(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x3a0(0x08)
	struct UPhoenixTextBlock* NonRichText; // 0x3a8(0x08)
	struct UPhoenixTextBlock* NumStrings; // 0x3b0(0x08)
	struct UPhoenixTextBlock* PronunciationText; // 0x3b8(0x08)
	struct UPhoenixRichTextBlock* RichText; // 0x3c0(0x08)
	int32_t CurrentIndex; // 0x3c8(0x04)
	bool HasDummyText; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct FString DummyString; // 0x3d0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RefreshLegend(); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.RefreshLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshDisplay(); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.RefreshDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeCurrentString(int32_t Delta); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.ChangeCurrentString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MenuReaderTester(int32_t EntryPoint); // Function UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.ExecuteUbergraph_UI_BP_MenuReaderTester // (Final|UbergraphFunction) // @ game+0x38a7480
};

