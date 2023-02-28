// WidgetBlueprintGeneratedClass UI_BP_RichPaper.UI_BP_RichPaper_C
// Size: 0x2db (Inherited: 0x268)
struct UUI_BP_RichPaper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* journalNoHeaderPanel; // 0x270(0x08)
	struct UCanvasPanel* journalPanel; // 0x278(0x08)
	struct UCanvasPanel* letterPanel; // 0x280(0x08)
	struct UCanvasPanel* MapPanel; // 0x288(0x08)
	struct UCanvasPanel* newspaperPanel; // 0x290(0x08)
	struct UCanvasPanel* notePanel; // 0x298(0x08)
	struct UCanvasPanel* PinkLetterPanel; // 0x2a0(0x08)
	struct UCanvasPanel* plaquePanel; // 0x2a8(0x08)
	struct UUI_BP_RP_TornLetter_C* TornLetter; // 0x2b0(0x08)
	struct UCanvasPanel* tornletterPanel; // 0x2b8(0x08)
	struct UWidgetSwitcher* typeSwitcher; // 0x2c0(0x08)
	struct UCanvasPanel* wantedPanel; // 0x2c8(0x08)
	struct UCanvasPanel* worntornPanel; // 0x2d0(0x08)
	bool Forward; // 0x2d8(0x01)
	bool IsPoster; // 0x2d9(0x01)
	bool IsScrollbarVisible; // 0x2da(0x01)

	void CheckForScrollBar(struct UPanelWidget* Widget); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.CheckForScrollBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessLetter(struct FString LetterType, struct FString Header, struct FString Body, struct FString footer); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.ProcessLetter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectRichPaperWidget(struct UPanelWidget* Widget, struct FString HeaderKey, struct FString BodyKey, struct FString FooterKey); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.SelectRichPaperWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessRichPaperID(struct FString RichPaperID, struct FString sender); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.ProcessRichPaperID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetBackgroundImage(struct FString NewBackground); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.SetBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRichPaper(struct FString RichPaperID, struct FString sender); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.SetRichPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuReadRichPaper(); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.MenuReadRichPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RichPaper(int32_t EntryPoint); // Function UI_BP_RichPaper.UI_BP_RichPaper_C.ExecuteUbergraph_UI_BP_RichPaper // (Final|UbergraphFunction) // @ game+0x38a7480
};

