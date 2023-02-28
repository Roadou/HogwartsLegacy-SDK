// WidgetBlueprintGeneratedClass UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C
// Size: 0x508 (Inherited: 0x458)
struct UUI_BP_ActionSelection_MKB_C : UActionSelectionScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* ShowActionSelection; // 0x460(0x08)
	struct UUI_BP_CommonActions_PC_C* commonActionsPC; // 0x468(0x08)
	struct UUI_BP_FG_ActionSelectionDetails_C* Details; // 0x470(0x08)
	struct UUI_BP_UnslottableSpells_C* essentialSpells; // 0x478(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x480(0x08)
	struct UPhoenixTextBlock* PopoutTitle; // 0x488(0x08)
	struct UUI_BP_LegendItem_C* PopupLegend; // 0x490(0x08)
	struct UBackgroundBlur* slotBur; // 0x498(0x08)
	struct UUI_BP_ItemScrollBox_C* SpellScrollBox; // 0x4a0(0x08)
	struct UUI_BP_MediaWidget_C* videoPlayer; // 0x4a8(0x08)
	struct UBorder* VideoPopup; // 0x4b0(0x08)
	struct TArray<struct FString> TutorialHighlightedButtons; // 0x4b8(0x10)
	int32_t ToolCount; // 0x4c8(0x04)
	bool DoingTheDrag; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct UUI_BP_EssentialSpellItem_C* HoveredItem; // 0x4d0(0x08)
	bool isItemHovering; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float CurrentHoverTime; // 0x4dc(0x04)
	bool isDetailsShowing; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float HoverTimeGoal; // 0x4e4(0x04)
	bool isSpellHovering; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UIconButtonWidget* HoveredSpell; // 0x4f0(0x08)
	struct FMulticastInlineDelegate PC_ExitRequested; // 0x4f8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HoverTimeMet(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.HoverTimeMet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Item Hovered(struct UUI_BP_EssentialSpellItem_C* Button); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.On Item Hovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffHighlight(struct FString SpellName); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.TurnOffHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearTooltipInfo(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.ClearTooltipInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellDragStarted(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnSpellDragStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeToolButton(struct FString ItemName, struct FName DataField, bool IsBlacklisted); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.InitializeToolButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellButtonHovered(struct UIconButtonWidget* Button); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnSpellButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonLegend(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.SetButtonLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialSpells(struct TArray<struct FString>& TutorialSpellArray); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.SetTutorialSpells // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeSpellGrid(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.InitializeSpellGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighlightTutorialItemsInGrid(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.HighlightTutorialItemsInGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighlightCurrentItemInGrid(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.HighlightCurrentItemInGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeChild(struct UUI_BP_AsyncLoadWrapper_C* ChildWrapper); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.InitializeChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnChildLoaded(struct UAsyncLoadWrapper* AsyncWrapper); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnChildLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialActionType(char InitialType); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.SetInitialActionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_3_OnButtonUnhovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_SpellScrollBox_K2Node_ComponentBoundEvent_3_OnButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnSpellSelectedBP(struct UObject* SpellObject); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnSpellSelectedBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellHoveredBP(struct UObject* SpellObject); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnSpellHoveredBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowActionSelection_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.WidgetAnimationEvt_ShowActionSelection_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnExitRequested(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnExitRequested // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_commonActionsPC_K2Node_ComponentBoundEvent_0_DragDropCompleted__DelegateSignature(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_PC_commonActionsPC_K2Node_ComponentBoundEvent_0_DragDropCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRequestedSpellSlotted(struct FString SpellName); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.OnRequestedSpellSlotted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_essentialSpells_K2Node_ComponentBoundEvent_5_OnItemHovered__DelegateSignature(struct UUI_BP_EssentialSpellItem_C* essentialItem); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_PC_essentialSpells_K2Node_ComponentBoundEvent_5_OnItemHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_essentialSpells_K2Node_ComponentBoundEvent_6_OnItemUnhovered__DelegateSignature(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_PC_essentialSpells_K2Node_ComponentBoundEvent_6_OnItemUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_details_K2Node_ComponentBoundEvent_7_OnHideDetailsComplete__DelegateSignature(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.BndEvt__UI_BP_ActionSelection_PC_details_K2Node_ComponentBoundEvent_7_OnHideDetailsComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionSelection_MKB(int32_t EntryPoint); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.ExecuteUbergraph_UI_BP_ActionSelection_MKB // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PC_ExitRequested__DelegateSignature(); // Function UI_BP_ActionSelection_MKB.UI_BP_ActionSelection_MKB_C.PC_ExitRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

