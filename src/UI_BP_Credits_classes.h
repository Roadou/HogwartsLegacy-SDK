// WidgetBlueprintGeneratedClass UI_BP_Credits.UI_BP_Credits_C
// Size: 0x440 (Inherited: 0x3e0)
struct UUI_BP_Credits_C : UPhoenixCreditsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* HideSkipPromptAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* ShowSkipPromptAnim; // 0x3f0(0x08)
	struct UWidgetAnimation* Intro; // 0x3f8(0x08)
	struct UImage* BackgroundVideo; // 0x400(0x08)
	struct UUI_BP_LegendItem_C* SkipLegendItem; // 0x408(0x08)
	struct UCanvasPanel* TopCanvasPanel; // 0x410(0x08)
	bool IsEndGame; // 0x418(0x01)
	bool SkipPromptVisible; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct FMulticastInlineDelegate CreditsEnded; // 0x420(0x10)
	struct UBinkMediaPlayer* MediaPlayer; // 0x430(0x08)
	struct UFileMediaSource* MediaSource; // 0x438(0x08)

	struct UPhoenixCreditEntryWidget* CreateCreditEntry(struct FCreditEntry CreditEntry); // Function UI_BP_Credits.UI_BP_Credits_C.CreateCreditEntry // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopBackgroundBink(); // Function UI_BP_Credits.UI_BP_Credits_C.StopBackgroundBink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBackgroundBink(); // Function UI_BP_Credits.UI_BP_Credits_C.PlayBackgroundBink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenBackgroundBink(); // Function UI_BP_Credits.UI_BP_Credits_C.OpenBackgroundBink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Credits.UI_BP_Credits_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Credits.UI_BP_Credits_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_64AC697A4153810645293EB464E62412(); // Function UI_BP_Credits.UI_BP_Credits_C.Complete_64AC697A4153810645293EB464E62412 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_831EC33243A07371A780879EE1AAC9C0(); // Function UI_BP_Credits.UI_BP_Credits_C.CurtainRaised_831EC33243A07371A780879EE1AAC9C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_Credits.UI_BP_Credits_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Credits.UI_BP_Credits_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Credits.UI_BP_Credits_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_Credits.UI_BP_Credits_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowSkipPrompt(); // Function UI_BP_Credits.UI_BP_Credits_C.ShowSkipPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Credits.UI_BP_Credits_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Credits.UI_BP_Credits_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CreditsMovieEnded(); // Function UI_BP_Credits.UI_BP_Credits_C.CreditsMovieEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SkipReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_Credits.UI_BP_Credits_C.SkipReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMediaOpened(struct FString OpenedUrl); // Function UI_BP_Credits.UI_BP_Credits_C.OnMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Credits(int32_t EntryPoint); // Function UI_BP_Credits.UI_BP_Credits_C.ExecuteUbergraph_UI_BP_Credits // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void CreditsEnded__DelegateSignature(); // Function UI_BP_Credits.UI_BP_Credits_C.CreditsEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

