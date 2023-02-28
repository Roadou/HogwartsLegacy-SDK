// WidgetBlueprintGeneratedClass UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C
// Size: 0x4a8 (Inherited: 0x3c0)
struct UUI_BP_AudioLegendPopup_C : UPopupScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UWidgetAnimation* Modal_Intro; // 0x3c8(0x08)
	struct UWidgetAnimation* Modal_Outro; // 0x3d0(0x08)
	struct UButton* LegendBackButton; // 0x3d8(0x08)
	struct UHorizontalBox* PleaseWaitSection; // 0x3e0(0x08)
	struct UCanvasPanel* Popup; // 0x3e8(0x08)
	struct UPhoenixRichTextBlock* popupBody; // 0x3f0(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3f8(0x08)
	struct UPhoenixTextBlock* PopupTitle; // 0x400(0x08)
	struct UVerticalBox* TooltipContentContainer; // 0x408(0x08)
	struct UVerticalBox* TooltipContentContainer_2; // 0x410(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_2; // 0x418(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_3; // 0x420(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_4; // 0x428(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_5; // 0x430(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_6; // 0x438(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_7; // 0x440(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_8; // 0x448(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_9; // 0x450(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_10; // 0x458(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_11; // 0x460(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_12; // 0x468(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_13; // 0x470(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_14; // 0x478(0x08)
	struct UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_15; // 0x480(0x08)
	struct TArray<struct FInputActionHoldInfo> CompletionActions; // 0x488(0x10)
	struct TArray<struct ULegendItem*> CachedLegendItems; // 0x498(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_1(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HidePopup(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.HidePopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPopup(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.ShowPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupContentWidget(struct UUserWidget* ContentWidget); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupContentWidget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupUsesWaitIndicator(bool bUsesWaitIndicator); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupUsesWaitIndicator // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupCompletionActions(struct TArray<struct FInputActionHoldInfo>& CompletionActions); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupCompletionActions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetPopupLegendItems(struct TArray<struct FLegendItemData>& LegendItems); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupLegendItems // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CompletionButtonReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.CompletionButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPopupDescription(struct FString DescriptionString, bool isTranslated); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupDescription // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPopupTitle(struct FString TitleString); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupTitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CollapseAudioLegend(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.CollapseAudioLegend // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AudioLegendPopup(int32_t EntryPoint); // Function UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.ExecuteUbergraph_UI_BP_AudioLegendPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

