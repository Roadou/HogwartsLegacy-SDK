// WidgetBlueprintGeneratedClass UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C
// Size: 0x284 (Inherited: 0x268)
struct UUI_BP_Subtitle_HUD_C : USubtitle_HUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UUI_BP_Subtitle_C* UI_BP_Subtitle; // 0x278(0x08)
	float DefaultSubtitleHeight; // 0x280(0x04)

	void GetRichText(struct URichTextBlock*& NewParam); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.GetRichText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRichText(struct FString InputString); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SetRichText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SubtitlesCleanup(); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitlesCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustHeight(float PixelsUP); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.AdjustHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetHeight(); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.ResetHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SubtitleHUD_Show(struct UObject* Caller); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitleHUD_Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SubtitleHUD_Hide(struct UObject* Caller); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitleHUD_Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Subtitle_HUD(int32_t EntryPoint); // Function UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.ExecuteUbergraph_UI_BP_Subtitle_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

