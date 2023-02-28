// WidgetBlueprintGeneratedClass UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C
// Size: 0x469 (Inherited: 0x3d8)
struct UUI_BP_Tutorial_Modal_C : UTutorialScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Modal_Intro_NoBlur; // 0x3e0(0x08)
	struct UWidgetAnimation* Modal_Intro; // 0x3e8(0x08)
	struct UWidgetAnimation* Modal_Outro; // 0x3f0(0x08)
	struct UInvalidationBox* InvalidationBox_Tutorial_Modal; // 0x3f8(0x08)
	struct UPhoenixRichTextBlock* modalBody; // 0x400(0x08)
	struct UCanvasPanel* modalFooter; // 0x408(0x08)
	struct UCanvasPanel* modalImagePanel; // 0x410(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* modalLegend; // 0x418(0x08)
	struct UImage* modalTexture; // 0x420(0x08)
	struct UCanvasPanel* Popup; // 0x428(0x08)
	struct UUI_BP_TutorialCard_C* tutorialBack; // 0x430(0x08)
	struct UCanvasPanel* videoPanel; // 0x438(0x08)
	struct UUI_BP_MediaWidget_C* videoPlayer; // 0x440(0x08)
	enum class EUMGInputAction CompletionInputAction; // 0x448(0x01)
	bool MustHoldForCompletion; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct TArray<struct FLegendItemData> CachedLegendItems; // 0x450(0x10)
	struct ULegendItem* LegendItem0; // 0x460(0x08)
	bool IsVideoPlaying; // 0x468(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_Tutorial_Modal_2(); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SequenceEvent__ENTRYPOINTUI_BP_Tutorial_Modal_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Tutorial_Modal_1(); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SequenceEvent__ENTRYPOINTUI_BP_Tutorial_Modal_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Expand Tutorial(); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.Expand Tutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialTitle(struct FString TitleString, bool IsTranslatable); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialTitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialBody(struct FString BodyString, bool IsTranslatable); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialBody // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialImageName(struct FString ImageString); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialImageName // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialLegendItems(struct TArray<struct FLegendItemData>& LegendItems); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialLegendItems // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CompletionButtonReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.CompletionButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialVideoIsLoading(bool IsLoading); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialVideoIsLoading // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialVideoReady(struct UMediaSource* MediaSource); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.SetTutorialVideoReady // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTutorialPosition(struct FVector2D Position, struct FVector2D Alignment); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.OnSetTutorialPosition // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Tutorial_Modal(int32_t EntryPoint); // Function UI_BP_Tutorial_Modal.UI_BP_Tutorial_Modal_C.ExecuteUbergraph_UI_BP_Tutorial_Modal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

