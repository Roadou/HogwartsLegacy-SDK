// WidgetBlueprintGeneratedClass UI_BP_KeyMapping.UI_BP_KeyMapping_C
// Size: 0x4c1 (Inherited: 0x3f0)
struct UUI_BP_KeyMapping_C : USettingsTabWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* hideBindingPopup; // 0x3f8(0x08)
	struct UWidgetAnimation* showBindingPopup; // 0x400(0x08)
	struct UPhoenixTextBlock* ActionNameBox; // 0x408(0x08)
	struct UUI_BP_SimpleScrollBox_C* ActionScroll; // 0x410(0x08)
	struct UVerticalBox* ActionScrollContent; // 0x418(0x08)
	struct UUI_BP_InputHeader_Row_C* BindingConflictTitle; // 0x420(0x08)
	struct UVerticalBox* ConflictList; // 0x428(0x08)
	struct UPhoenixImage* NoBindingIcon; // 0x430(0x08)
	struct UUI_BP_InputHeader_Row_C* ShowAlternativePrompts; // 0x438(0x08)
	struct UUI_BP_SettingsCheckboxButton_C* ShowAlternatives; // 0x440(0x08)
	struct UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x448(0x08)
	struct UVerticalBox* UnassignedMessaging; // 0x450(0x08)
	struct UUI_BP_InputActionAlt_Row_C* CurrentActionRow; // 0x458(0x08)
	struct UUI_BP_InputAxisAlt_Row_C* CurrentAxisRow; // 0x460(0x08)
	struct TArray<struct FKey> ForbiddenKeys; // 0x468(0x10)
	struct TArray<struct FName> OneDirectionalAxes; // 0x478(0x10)
	bool HeaderUseTopPadding; // 0x488(0x01)
	bool RebindIsAxis; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct UUI_BP_MKBInput_C* InputKey_Presentation; // 0x490(0x08)
	struct FName NameFromLoop; // 0x498(0x08)
	bool HoveredBindingIsPrimary; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TArray<struct UPhoenixUserWidget*> CachedConflictItems; // 0x4a8(0x10)
	struct ULegend* ParentLegend; // 0x4b8(0x08)
	bool UnbindPromptVisible; // 0x4c0(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateLegend(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.UpdateLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAxisRow(struct FName AxisName, bool PositiveAxis, struct UUI_BP_InputAxisAlt_Row_C*& AxisRow); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.GetAxisRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHasAnyUnboundActions(bool& HasAnyUnbound); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.GetHasAnyUnboundActions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsAxisRowUnassigned(struct UUI_BP_InputAxisAlt_Row_C* Row, bool& isUnassigned); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.IsAxisRowUnassigned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsActionRowUnassigned(struct UUI_BP_InputActionAlt_Row_C* Row, bool& isUnassigned); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.IsActionRowUnassigned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UpdateConflictMessage(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.UpdateConflictMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldCancelRowCreation(struct FInputAxisKeyMapping Primary, struct FInputAxisKeyMapping Alternative, bool& Ignore); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.ShouldCancelRowCreation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuldHeaderRow(struct FString Header, bool Large); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuldHeaderRow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRebindingMode(bool Rebinding, bool RebindingIsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.ToggleRebindingMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleRebuildAllRows(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleRebuildAllRows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleResetToDefaults(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleResetToDefaults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputAxisUnhovered(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputAxisHovered(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputAxisClicked(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputActionUnhovered(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputActionHovered(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleInputActionClicked(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildAxisRow(struct FName AxisName, struct FInputAxisKeyMapping Primary, struct FInputAxisKeyMapping FakeLockedPrimary, struct FInputAxisKeyMapping Alternative, bool IsBiDirectionalAxis, bool IsPositiveAxis, struct FName GroupName); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuildAxisRow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build Action Row(struct FInputActionKeyMapping Primary, struct FInputActionKeyMapping Alternative, struct FName ActionName, struct FName GroupName); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.Build Action Row // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildRowsForGroup(struct FName GroupName, struct TArray<struct FName>& Actions); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuildRowsForGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildAllRows(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuildAllRows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, struct UUI_BP_SettingsCheckboxButton_C* Button); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void KeyLayoutChanged(enum class EKeyLayout OldLayout, enum class EKeyLayout NewLayout); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.KeyLayoutChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature(struct UUI_BP_SettingsCheckboxButton_C* Button); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnLegendItemHoldEnd(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.OnLegendItemHoldEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_KeyMapping(int32_t EntryPoint); // Function UI_BP_KeyMapping.UI_BP_KeyMapping_C.ExecuteUbergraph_UI_BP_KeyMapping // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

