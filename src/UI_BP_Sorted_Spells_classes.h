// WidgetBlueprintGeneratedClass UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C
// Size: 0x350 (Inherited: 0x268)
struct UUI_BP_Sorted_Spells_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HidePopoutOut; // 0x270(0x08)
	struct UWidgetAnimation* ShowPopoutOut; // 0x278(0x08)
	struct UUI_BP_ItemScrollBox_C* SpellScrollBox; // 0x280(0x08)
	struct UUserWidget* Parent; // 0x288(0x08)
	int32_t SpellCount; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UUI_BP_SpellIconButton_C* SelectedSpell; // 0x298(0x08)
	struct TArray<struct FInventoryResult> MagicTools; // 0x2a0(0x10)
	struct FInventoryResult ActiveBroom; // 0x2b0(0x88)
	struct ULegendItem* HoveredToolTipLegend; // 0x338(0x08)
	bool isSpellHovered; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UUI_BP_SpellIconButton_C* CurrentHighlightedButton; // 0x348(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTooltipLegend(struct TArray<struct FLegendItemData>& NewLegendItemArray); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.UpdateTooltipLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideUnusedButtons(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.HideUnusedButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeSpellButton(struct FString SpellName, struct FName DataField); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.InitializeSpellButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTooltipContent(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.UpdateTooltipContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentHighlightedSpell(struct FString NewItemName); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.SetCurrentHighlightedSpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectSpellsOnActionBar(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.SelectSpellsOnActionBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void hideDetails(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.hideDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellUnhovered(struct UUI_BP_SpellIconButton_C* Button); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.OnSpellUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellClicked(struct UUI_BP_SpellIconButton_C* Button); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.OnSpellClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateToolTip(struct UUI_BP_SpellIconButton_C* Button); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.UpdateToolTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BindEvents(struct UUI_BP_SpellIconButton_C* SpellButton); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowPopoutOut_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.WidgetAnimationEvt_ShowPopoutOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HidePopoutOut_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.WidgetAnimationEvt_HidePopoutOut_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Set Tutorial Highlighted Items(struct TArray<struct FString>& Items); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.Set Tutorial Highlighted Items // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Sorted_Spells(int32_t EntryPoint); // Function UI_BP_Sorted_Spells.UI_BP_Sorted_Spells_C.ExecuteUbergraph_UI_BP_Sorted_Spells // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

