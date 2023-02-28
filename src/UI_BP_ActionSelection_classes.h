// WidgetBlueprintGeneratedClass UI_BP_ActionSelection.UI_BP_ActionSelection_C
// Size: 0x550 (Inherited: 0x478)
struct UUI_BP_ActionSelection_C : UActionSelectionScreenBase_Controller {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* ShowActionSelection; // 0x480(0x08)
	struct UUI_BP_CommonActions_C* CommonActions; // 0x488(0x08)
	struct UUI_BP_FG_ActionSelectionDetails_C* Details; // 0x490(0x08)
	struct UUI_BP_UnslottableSpells_C* essentialSpells; // 0x498(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x4a0(0x08)
	struct UPhoenixTextBlock* PopoutTitle; // 0x4a8(0x08)
	struct UUI_BP_LegendItem_C* PopupLegend; // 0x4b0(0x08)
	struct UBackgroundBlur* slotBur; // 0x4b8(0x08)
	struct UUI_BP_ItemScrollBox_C* SpellScrollBox; // 0x4c0(0x08)
	struct UUI_BP_MediaWidget_C* videoPlayer; // 0x4c8(0x08)
	struct UBorder* VideoPopup; // 0x4d0(0x08)
	struct TArray<struct FString> TutorialHighlightedButtons; // 0x4d8(0x10)
	int32_t ToolCount; // 0x4e8(0x04)
	float HoverCountGoal; // 0x4ec(0x04)
	float CurrentHoverTime; // 0x4f0(0x04)
	bool isSpellHovering; // 0x4f4(0x01)
	bool isDetailsShowing; // 0x4f5(0x01)
	bool isItemHovering; // 0x4f6(0x01)
	char pad_4F7[0x1]; // 0x4f7(0x01)
	struct UIconButtonWidget* HoveredSpell; // 0x4f8(0x08)
	struct UUI_BP_EssentialSpellItem_C* HoveredItem; // 0x500(0x08)
	struct FMulticastInlineDelegate PC_ExitRequested; // 0x508(0x10)
	bool IsRTHeld; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct TArray<struct FLegendItemData> SpellSlottingLegend; // 0x520(0x10)
	struct TArray<struct FLegendItemData> SlottingPromptLegend; // 0x530(0x10)
	struct TArray<struct FLegendItemData> BasicLegend; // 0x540(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HoverTimeMet(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.HoverTimeMet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemHovered(struct UUI_BP_EssentialSpellItem_C* Item, bool ItemIsUnslottable); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffHighlight(struct FString SpellName); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.TurnOffHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeToolButton(struct FString SpellName, struct FName DataField, bool IsBlacklisted); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.InitializeToolButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellButtonHovered(struct UIconButtonWidget* Button, bool ItemIsUnslottable); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnSpellButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonLegend(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.SetButtonLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialSpells(struct TArray<struct FString>& TutorialSpellArray); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.SetTutorialSpells // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeSpellGrid(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.InitializeSpellGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighlightTutorialItemsInGrid(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.HighlightTutorialItemsInGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeChild(struct UUI_BP_AsyncLoadWrapper_C* ChildWrapper); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.InitializeChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChildLoaded(struct UAsyncLoadWrapper* AsyncWrapper); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnChildLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialActionType(char InitialType); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.SetInitialActionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_3_OnButtonUnhovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_3_OnButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowActionSelection_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.WidgetAnimationEvt_ShowActionSelection_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnHandleDirectionalButtonInput(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnHandleDirectionalButtonInput // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitRequested(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnExitRequested // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHandleRightTriggerPress(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnHandleRightTriggerPress // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHandleRightTriggerRelease(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnHandleRightTriggerRelease // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetSlottedSpells(struct TArray<struct FString>& SlottedSpells); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnSetSlottedSpells // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellHoveredBP(struct UObject* SpellObject); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnSpellHoveredBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellSelectedBP(struct UObject* SpellObject); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnSpellSelectedBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRequestedSpellSlotted(struct FString SpellName); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.OnRequestedSpellSlotted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_essentialSpells_K2Node_ComponentBoundEvent_4_OnItemHovered__DelegateSignature(struct UUI_BP_EssentialSpellItem_C* essentialItem); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BndEvt__UI_BP_ActionSelection_essentialSpells_K2Node_ComponentBoundEvent_4_OnItemHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_essentialSpells_K2Node_ComponentBoundEvent_5_OnItemUnhovered__DelegateSignature(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BndEvt__UI_BP_ActionSelection_essentialSpells_K2Node_ComponentBoundEvent_5_OnItemUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_details_K2Node_ComponentBoundEvent_6_OnHideDetailsComplete__DelegateSignature(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.BndEvt__UI_BP_ActionSelection_details_K2Node_ComponentBoundEvent_6_OnHideDetailsComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionSelection(int32_t EntryPoint); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.ExecuteUbergraph_UI_BP_ActionSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PC_ExitRequested__DelegateSignature(); // Function UI_BP_ActionSelection.UI_BP_ActionSelection_C.PC_ExitRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

