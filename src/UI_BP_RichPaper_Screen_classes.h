// WidgetBlueprintGeneratedClass UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C
// Size: 0x398 (Inherited: 0x370)
struct UUI_BP_RichPaper_Screen_C : URichPaperScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* HideRichPaper; // 0x378(0x08)
	struct UWidgetAnimation* ShowRichPaper; // 0x380(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x388(0x08)
	struct UUI_BP_RichPaper_C* RichPaper; // 0x390(0x08)

	void SetRichPaperID(struct FString RichPaperID); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.SetRichPaperID // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RichPaper_Screen(int32_t EntryPoint); // Function UI_BP_RichPaper_Screen.UI_BP_RichPaper_Screen_C.ExecuteUbergraph_UI_BP_RichPaper_Screen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

