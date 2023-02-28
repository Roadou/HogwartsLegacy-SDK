// WidgetBlueprintGeneratedClass UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C
// Size: 0x4c0 (Inherited: 0x328)
struct UUI_BP_InputAxisAlt_Row_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnInputAxisSelected; // 0x330(0x08)
	struct UWidgetAnimation* OnInputAxisHovered; // 0x338(0x08)
	struct UPhoenixTextBlock* ActionNameBox; // 0x340(0x08)
	struct UUI_BP_InputAxis_C* AlternativeInput; // 0x348(0x08)
	struct UPhoenixImage* NoBindingIcon; // 0x350(0x08)
	struct UUI_BP_InputAxis_C* PrimaryInput; // 0x358(0x08)
	struct FInputAxisKeyMapping Primary; // 0x360(0x38)
	struct FInputAxisKeyMapping FakeLockedPrimary; // 0x398(0x38)
	struct FInputAxisKeyMapping Alternative; // 0x3d0(0x38)
	struct FName AxisName; // 0x408(0x08)
	bool IsBiDirectionalAxis; // 0x410(0x01)
	bool IsPositiveAxis; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct FMulticastInlineDelegate InputClicked; // 0x418(0x10)
	struct FName GroupName; // 0x428(0x08)
	struct TArray<struct FKey> ForbiddenKeys; // 0x430(0x10)
	struct FString TitleTextKey; // 0x440(0x10)
	struct FSlateColor DefaultTitleColor; // 0x450(0x28)
	struct FSlateColor NoBindingTitleColor; // 0x478(0x28)
	struct FMulticastInlineDelegate InputHovered; // 0x4a0(0x10)
	struct FMulticastInlineDelegate InputUnhovered; // 0x4b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateConflictState(); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.UpdateConflictState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Rebuild Row(); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.Rebuild Row // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTelemetry(bool IsPrimary); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.UpdateTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleUnhovered(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleHovered(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleClicked(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRebindingFlair(bool IsRebinding); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.SetRebindingFlair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InputAxisAlt_Row(int32_t EntryPoint); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.ExecuteUbergraph_UI_BP_InputAxisAlt_Row // (Final|UbergraphFunction) // @ game+0x38a7480
	void InputUnhovered__DelegateSignature(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InputHovered__DelegateSignature(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InputClicked__DelegateSignature(struct UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary); // Function UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

