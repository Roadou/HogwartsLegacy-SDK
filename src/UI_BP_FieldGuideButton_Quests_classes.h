// WidgetBlueprintGeneratedClass UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C
// Size: 0x55c (Inherited: 0x4b0)
struct UUI_BP_FieldGuideButton_Quests_C : UFieldGuideButton_Quests {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* LoopingAnimation; // 0x4b8(0x08)
	struct UWidgetAnimation* HideHighlight; // 0x4c0(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4c8(0x08)
	struct UWidgetAnimation* ShowHighlight; // 0x4d0(0x08)
	struct UPhoenixTextBlock* AvailableAssignments; // 0x4d8(0x08)
	struct UImage* ButtonBackground; // 0x4e0(0x08)
	struct UImage* card1; // 0x4e8(0x08)
	struct UImage* card2; // 0x4f0(0x08)
	struct UImage* card3; // 0x4f8(0x08)
	struct UPhoenixTextBlock* CategoryLabel; // 0x500(0x08)
	struct UBorder* iconBorder; // 0x508(0x08)
	struct UCanvasPanel* LabelPanel; // 0x510(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x518(0x08)
	struct UHorizontalBox* Root; // 0x520(0x08)
	struct UBorder* TutorialHighlight; // 0x528(0x08)
	struct FString CategoryLabelText; // 0x530(0x10)
	enum class UI_E_FieldGuideLabelPositions LabelPosition; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FString buttonIcon; // 0x548(0x10)
	float GearAnimationFrame; // 0x558(0x04)

	void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Quests_2(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Quests_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Quests_1(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Quests_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetAvailableAssignments(struct FString AssignmentText); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.SetAvailableAssignments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseButtonLoopAnimation(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.PauseButtonLoopAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play Button Loop Animation(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.Play Button Loop Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnSetItemIndicatorVisibility(enum class ESlateVisibility InVisibility); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.OnSetItemIndicatorVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLockedState(bool IsLocked); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.SetLockedState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FieldGuideButton_Quests(int32_t EntryPoint); // Function UI_BP_FieldGuideButton_Quests.UI_BP_FieldGuideButton_Quests_C.ExecuteUbergraph_UI_BP_FieldGuideButton_Quests // (Final|UbergraphFunction) // @ game+0x38a7480
};

