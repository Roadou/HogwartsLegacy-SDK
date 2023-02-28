// WidgetBlueprintGeneratedClass UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C
// Size: 0x2f1 (Inherited: 0x2c8)
struct UUI_BP_Subtitle_Element_C : USubtitleElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBorder* Shadow; // 0x2d0(0x08)
	struct UPhoenixRichTextBlock* Text_Element; // 0x2d8(0x08)
	struct UUI_BP_Subtitle_C* Parent; // 0x2e0(0x08)
	struct FTimerHandle Timer; // 0x2e8(0x08)
	bool bAudioDurationOverriden; // 0x2f0(0x01)

	void GetRichText(struct URichTextBlock*& NewParam); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.GetRichText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UI_Subtitles_Cleanup(struct UObject* Caller); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.UI_Subtitles_Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseSubtitles(struct UObject* Caller); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.PauseSubtitles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResumeSubtitles(struct UObject* Caller); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.ResumeSubtitles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SubtitlesCleanup(); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SubtitlesCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTimer(struct FTimerHandle Timer); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRichText(struct FString InputString); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SetRichText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AdjustHeight(float PixelsUP); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.AdjustHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetHeight(); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.ResetHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Subtitle_Element(int32_t EntryPoint); // Function UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.ExecuteUbergraph_UI_BP_Subtitle_Element // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

