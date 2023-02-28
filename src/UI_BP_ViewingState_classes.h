// BlueprintGeneratedClass UI_BP_ViewingState.UI_BP_ViewingState_C
// Size: 0x51 (Inherited: 0x30)
struct UUI_BP_ViewingState_C : UInventoryState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	bool Inspecting; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UUserWidget* SelectedCreaturedButton; // 0x40(0x08)
	struct UUI_BP_CreatureAbandonWidget_C* CreatureAbandonWidget; // 0x48(0x08)
	bool AbandonWidgetInitDone; // 0x50(0x01)

	bool IsInAbandonConfirmation(); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.IsInAbandonConfirmation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct TArray<struct UUserWidget*> GetNonExpandableTooltipContent(struct UUserWidget* hoveredButton); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GetNonExpandableTooltipContent // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent, struct UUserWidget* InventoryButton); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.HandleUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleClicked(struct UUserWidget* InventoryButton); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.HandleClicked // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTooltipLegendData(struct FInventoryResult InventoryItem, struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GetTooltipLegendData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSelectedCreatureState(struct UObject* self2, struct UCreatureState*& OutputPin); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GetSelectedCreatureState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UUserWidget* GetTooltipContent(struct UUserWidget* hoveredButton); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GetTooltipContent // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetIconName(struct UUserWidget* PressedButton, struct FString& NewIconName); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GetIconName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReleaseCreature(struct UUserWidget* SelectedButton); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.ReleaseCreature // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToFactsheet(struct FString IconName); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.GoToFactsheet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropItem(struct UUserWidget* SelectedButton, int32_t Count); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.DropItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConsumeItem(struct UUserWidget* Button, struct FName ItemId, bool& Consumed); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.ConsumeItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureAbandonWidgetLoaded(struct UUserWidget* UserWidget); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.CreatureAbandonWidgetLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureAbandon_OnClosed(struct UObject* Caller); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.CreatureAbandon_OnClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureAbandon_OnConfirm(struct UObject* Caller); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.CreatureAbandon_OnConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateAbandonWidget(); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.CreateAbandonWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ViewingState(int32_t EntryPoint); // Function UI_BP_ViewingState.UI_BP_ViewingState_C.ExecuteUbergraph_UI_BP_ViewingState // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

