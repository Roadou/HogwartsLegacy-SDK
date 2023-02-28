// WidgetBlueprintGeneratedClass UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C
// Size: 0x428 (Inherited: 0x3c0)
struct UUI_BP_GenericPopupScreen_C : UPopupScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UWidgetAnimation* Modal_Intro; // 0x3c8(0x08)
	struct UWidgetAnimation* Modal_Outro; // 0x3d0(0x08)
	struct UHorizontalBox* PleaseWaitSection; // 0x3d8(0x08)
	struct UCanvasPanel* Popup; // 0x3e0(0x08)
	struct UPhoenixRichTextBlock* popupBody; // 0x3e8(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3f0(0x08)
	struct UPhoenixTextBlock* PopupTitle; // 0x3f8(0x08)
	struct UVerticalBox* TooltipContentContainer; // 0x400(0x08)
	struct TArray<struct FInputActionHoldInfo> CompletionActions; // 0x408(0x10)
	struct TArray<struct ULegendItem*> CachedLegendItems; // 0x418(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupTitle(struct FString TitleString); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupTitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupDescription(struct FString DescriptionString, bool isTranslated); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupDescription // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupLegendItems(struct TArray<struct FLegendItemData>& LegendItems); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupLegendItems // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetPopupCompletionActions(struct TArray<struct FInputActionHoldInfo>& CompletionActions); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupCompletionActions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetPopupUsesWaitIndicator(bool bUsesWaitIndicator); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupUsesWaitIndicator // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupContentWidget(struct UUserWidget* ContentWidget); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupContentWidget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CompletionButtonReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.CompletionButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GenericPopupScreen(int32_t EntryPoint); // Function UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.ExecuteUbergraph_UI_BP_GenericPopupScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

