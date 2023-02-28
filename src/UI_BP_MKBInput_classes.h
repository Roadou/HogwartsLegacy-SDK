// WidgetBlueprintGeneratedClass UI_BP_MKBInput.UI_BP_MKBInput_C
// Size: 0x4b8 (Inherited: 0x328)
struct UUI_BP_MKBInput_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixRichTextBlock* CancelCallout; // 0x330(0x08)
	struct UPhoenixRichTextBlock* CancelCallout_MenuLMB; // 0x338(0x08)
	struct UPhoenixRichTextBlock* CancelRebindCallout; // 0x340(0x08)
	struct UPhoenixTextBlock* CancelRebindText; // 0x348(0x08)
	struct UPhoenixTextBlock* CancelText; // 0x350(0x08)
	struct UPhoenixTextBlock* CancelText_MenuLMB; // 0x358(0x08)
	struct UPhoenixRichTextBlock* ConfirmCallout; // 0x360(0x08)
	struct UPhoenixTextBlock* ConfirmText; // 0x368(0x08)
	struct UVerticalBox* ConflictList; // 0x370(0x08)
	struct UPhoenixRichTextBlock* ConflictsText_MenuLMB; // 0x378(0x08)
	struct UPhoenixRichTextBlock* ConflictsText_Multiple; // 0x380(0x08)
	struct UPhoenixTextBlock* ConflictTitle; // 0x388(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x390(0x08)
	struct UCanvasPanel* InputBlockerPanel; // 0x398(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3a0(0x08)
	struct UPhoenixTextBlock* RebindTitle; // 0x3a8(0x08)
	struct UPhoenixRichTextBlock* RetryCallout; // 0x3b0(0x08)
	struct UPhoenixRichTextBlock* RetryCallout_MenuLMB; // 0x3b8(0x08)
	struct UPhoenixTextBlock* RetryText; // 0x3c0(0x08)
	struct UPhoenixTextBlock* RetryText_MenuLMB; // 0x3c8(0x08)
	struct TArray<struct FKey> ForbiddenKeys; // 0x3d0(0x10)
	struct TArray<struct FName> OneDirectionalAxes; // 0x3e0(0x10)
	struct UUI_BP_KeyMapping_C* Parent; // 0x3f0(0x08)
	struct UUI_BP_InputActionAlt_Row_C* CurrentActionRow; // 0x3f8(0x08)
	struct UUI_BP_InputAxisAlt_Row_C* CurrentAxisRow; // 0x400(0x08)
	bool RebindIsPrimary; // 0x408(0x01)
	bool IsWaitingForInputForRebind; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct TArray<struct FInputActionKeyMapping> CachedConflictingActions; // 0x410(0x10)
	struct TArray<struct FInputAxisKeyMapping> CachedConflictingAxes; // 0x420(0x10)
	struct FInputActionKeyMapping CachedQueuedActionMapping; // 0x430(0x38)
	struct FInputAxisKeyMapping CachedQueuedAxisMapping; // 0x468(0x38)
	bool CachedQueuedMappingIsAxis; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TArray<struct UPhoenixUserWidget*> CachedConflictItems; // 0x4a8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	int32_t GetAxisStaticVariables(struct FName InAxisName, struct FName& GroupName); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.GetAxisStaticVariables // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	int32_t GetActionStaticVariables(struct FName InActionName, struct FName& GroupName); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.GetActionStaticVariables // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ConfirmCachedConflicts(); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.ConfirmCachedConflicts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Key for Action(struct FKey Key, struct FName ActionName, bool& RetVal); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.Is Key for Action // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ShowConflictUI(struct FKey Key, struct TArray<struct FInputActionKeyMapping>& ConflictingActions, struct TArray<struct FInputAxisKeyMapping>& ConflictingAxes); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.ShowConflictUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleRebind(struct FKey Input); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.HandleRebind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCurrentAxisRowAxis Scale(float& Scale); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.GetCurrentAxisRowAxis Scale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateAxisMapping(struct FInputAxisKeyMapping NewAxis, bool& Success, struct TArray<struct FInputActionKeyMapping>& ConflictingInputActions, struct TArray<struct FInputAxisKeyMapping>& ConflictingInputAxes); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.UpdateAxisMapping // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateActionMapping(struct FInputActionKeyMapping NewAction, bool& Success, struct TArray<struct FInputActionKeyMapping>& ConflictingActions, struct TArray<struct FInputAxisKeyMapping>& ConflictingAxes); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.UpdateActionMapping // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ValidateInput(struct FKey InputKey, bool& IsValid); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.ValidateInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MKBInput(int32_t EntryPoint); // Function UI_BP_MKBInput.UI_BP_MKBInput_C.ExecuteUbergraph_UI_BP_MKBInput // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

