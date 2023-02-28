// WidgetBlueprintGeneratedClass UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C
// Size: 0x358 (Inherited: 0x329)
struct UUI_BP_RP_JournalNoHeader_C : UUI_BP_RichPaperType_Base_C {
	char pad_329[0x7]; // 0x329(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPhoenixTextBlock* BodyText; // 0x338(0x08)
	struct UPhoenixTextBlock* footerText; // 0x340(0x08)
	struct USizeBox* SizeBox_1; // 0x348(0x08)
	struct UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x350(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void MenuReadRichPaper(); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.MenuReadRichPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFooterData(struct FString FooterIcon, struct FString footerText); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.SetFooterData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBodyData(struct FString BodyIcon, struct FString BodyText); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.SetBodyData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetRichPaperData(struct FString HeaderIcon, struct FString HeaderText, struct FString BodyIcon, struct FString BodyText, struct FString FooterIcon, struct FString footerText); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.SetRichPaperData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RP_JournalNoHeader(int32_t EntryPoint); // Function UI_BP_RP_JournalNoHeader.UI_BP_RP_JournalNoHeader_C.ExecuteUbergraph_UI_BP_RP_JournalNoHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

