// WidgetBlueprintGeneratedClass UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C
// Size: 0x478 (Inherited: 0x328)
struct UUI_BP_InputActionAlt_Row_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnInputActionSelected; // 0x330(0x08)
	struct UWidgetAnimation* OnInputActionHovered; // 0x338(0x08)
	struct UPhoenixTextBlock* ActionNameBox; // 0x340(0x08)
	struct UUI_BP_InputAction_C* AlternativeInput; // 0x348(0x08)
	struct UPhoenixImage* NoBindingIcon; // 0x350(0x08)
	struct UUI_BP_InputAction_C* PrimaryInput; // 0x358(0x08)
	struct FName GroupName; // 0x360(0x08)
	struct FName ActionName; // 0x368(0x08)
	struct FInputActionKeyMapping Primary; // 0x370(0x38)
	struct FInputActionKeyMapping Alternative; // 0x3a8(0x38)
	struct FMulticastInlineDelegate InputClicked; // 0x3e0(0x10)
	struct TArray<struct FKey> ForbiddenKeys; // 0x3f0(0x10)
	struct FSlateColor DefaultTitleColor; // 0x400(0x28)
	struct FSlateColor NoBindingTitleColor; // 0x428(0x28)
	struct FMulticastInlineDelegate InputHovered; // 0x450(0x10)
	struct FMulticastInlineDelegate InputUnhovered; // 0x460(0x10)
	struct UUI_BP_InputAction_C* LastHoveredInputAction; // 0x470(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateConflictState(); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.UpdateConflictState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTelemetry(bool IsPrimary); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.UpdateTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleUnhovered(bool IsPrimary, struct UUI_BP_InputAction_C* InputAction); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.HandleUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleHovered(bool IsPrimary, struct UUI_BP_InputAction_C* InputAction); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.HandleHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleClicked(bool IsPrimary, struct UUI_BP_InputAction_C* InputAction); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.HandleClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionNameDefault(); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.SetActionNameDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionNameHighlight(); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.SetActionNameHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRebindingFlair(bool IsRebinding); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.SetRebindingFlair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InputActionAlt_Row(int32_t EntryPoint); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.ExecuteUbergraph_UI_BP_InputActionAlt_Row // (Final|UbergraphFunction) // @ game+0x38a7480
	void InputUnhovered__DelegateSignature(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.InputUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InputHovered__DelegateSignature(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.InputHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InputClicked__DelegateSignature(struct UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputActionAlt_Row.UI_BP_InputActionAlt_Row_C.InputClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

