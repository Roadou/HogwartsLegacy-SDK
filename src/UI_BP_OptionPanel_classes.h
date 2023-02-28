// WidgetBlueprintGeneratedClass UI_BP_OptionPanel.UI_BP_OptionPanel_C
// Size: 0x494 (Inherited: 0x370)
struct UUI_BP_OptionPanel_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* BeginConversation; // 0x378(0x08)
	struct UWidgetAnimation* maximizeConversation; // 0x380(0x08)
	struct UWidgetAnimation* minimizeConversation; // 0x388(0x08)
	struct UVerticalBox* conversationBox; // 0x390(0x08)
	struct UUI_BP_LegendItem_C* JustTheLegend; // 0x398(0x08)
	struct UPhoenixRichTextBlock* lastLine; // 0x3a0(0x08)
	struct UBorder* lastLineBorder; // 0x3a8(0x08)
	struct UBorder* optionsBorder; // 0x3b0(0x08)
	struct UHorizontalBox* optionsBox; // 0x3b8(0x08)
	struct UVerticalBox* OptionsPanel; // 0x3c0(0x08)
	struct FMulticastInlineDelegate AbortInteraction; // 0x3c8(0x10)
	struct FMulticastInlineDelegate Cleanup; // 0x3d8(0x10)
	struct FMulticastInlineDelegate AbortConversation; // 0x3e8(0x10)
	struct FMulticastInlineDelegate SelectionMade; // 0x3f8(0x10)
	enum class UI_BP_UIPlacementEnum UI_Placement; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UUI_BP_BasicToolTipPopout_C* BasicToolTip; // 0x410(0x08)
	int32_t CurrentIndex; // 0x418(0x04)
	int32_t maxOptionIndex; // 0x41c(0x04)
	struct TArray<struct UUI_BP_InteractButton_C*> OptionsArray; // 0x420(0x10)
	bool Minimized; // 0x430(0x01)
	bool ButtonDown; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct USceneRigPlayer* SceneRigPlayer; // 0x438(0x08)
	bool BCancelAllowed; // 0x440(0x01)
	bool PreventMoreSelections; // 0x441(0x01)
	bool SkipDelay; // 0x442(0x01)
	char pad_443[0x1]; // 0x443(0x01)
	struct FVector2D ButtonSize; // 0x444(0x08)
	float SubtitlePadding; // 0x44c(0x04)
	bool SubtitlesEnabled; // 0x450(0x01)
	bool ShowDialogueLine; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	struct FName TargetActorName; // 0x454(0x08)
	bool EmptyActions; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct TArray<struct FConversationOption> CachedConversationOptions; // 0x460(0x10)
	struct FHermesBPDelegateHandle RefreshButtonCalloutsHandle; // 0x470(0x10)
	struct FString LastSpeakerID; // 0x480(0x10)
	float AnimationPlaybackSpeed; // 0x490(0x04)

	void OnOptionButtonClicked(struct UUI_BP_InteractButton_C* OptionButton); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnOptionButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustConversationForViewportWidth(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.AdjustConversationForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetLastLineTextWithSpeaker(struct FString LastLineTextID); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.SetLastLineTextWithSpeaker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateStartingCursorPos(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.CalculateStartingCursorPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentActiveOption(int32_t NewCurrentIndex, bool& OptionChanged); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.SetCurrentActiveOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCurrentActiveOption(struct UUI_BP_InteractButton_C*& SelectedOption); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.GetCurrentActiveOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GatherMastermindExtraScreenStrings(struct TArray<struct FString>& outExtraScreenStrings); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.GatherMastermindExtraScreenStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTargetName(struct FName Character); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.SetTargetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLine(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.ShowLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TranslateSubtitleText(struct FAudioDialogueLineData SubtitleData); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.TranslateSubtitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Translate_Cleanup(struct FString Button, struct FString& TranslatedButton); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Translate_Cleanup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeButtonLegend(struct FString Button, struct FString Text); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.InitializeButtonLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DialogueMode(bool DialogueMode); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.DialogueMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Maximize(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Maximize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Minimize(bool NoAnim); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Minimize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOptionHovered(struct UUI_BP_InteractButton_C* Button); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnOptionHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OptionSelected(int32_t SelectedIndex); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.OptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreviousOption(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.PreviousOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NextOption(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.NextOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildOptions(struct TArray<struct FConversationOption>& OPTIONS, struct TArray<struct UUI_BP_InteractButton_C*>& Button Array); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.BuildOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActionHandler(struct FName Action); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnActionHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OptionsAnimationsFinished(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.OptionsAnimationsFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DelaySkipping(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.DelaySkipping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioDialogueLineStartedData(struct UObject* Caller, struct FAudioDialogueLineData& AudioDialogueLineData); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.AudioDialogueLineStartedData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EmptyActionsEvent(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.EmptyActionsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MinimizeAnimationFinished(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.MinimizeAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_OptionPanel(int32_t EntryPoint); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.ExecuteUbergraph_UI_BP_OptionPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SelectionMade__DelegateSignature(int32_t OptionIndex); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.SelectionMade__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortConversation__DelegateSignature(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.AbortConversation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cleanup__DelegateSignature(int32_t Selection, struct AActor* Actor Reference); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.Cleanup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortInteraction__DelegateSignature(); // Function UI_BP_OptionPanel.UI_BP_OptionPanel_C.AbortInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

