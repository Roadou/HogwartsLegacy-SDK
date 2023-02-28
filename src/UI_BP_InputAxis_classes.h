// WidgetBlueprintGeneratedClass UI_BP_InputAxis.UI_BP_InputAxis_C
// Size: 0x410 (Inherited: 0x328)
struct UUI_BP_InputAxis_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnInputAxisSelected; // 0x330(0x08)
	struct UWidgetAnimation* OnInputAxisHovered; // 0x338(0x08)
	struct UImage* buttonBack; // 0x340(0x08)
	struct UImage* goldleafBorder; // 0x348(0x08)
	struct UImage* highlight; // 0x350(0x08)
	struct UPhoenixRichTextBlock* KBTextBlock; // 0x358(0x08)
	struct UButton* KeyboardButton; // 0x360(0x08)
	struct UImage* LockedIcon; // 0x368(0x08)
	struct FString DisplayActionName; // 0x370(0x10)
	struct FInputAxisKeyMapping KeyboardKey; // 0x380(0x38)
	struct FMulticastInlineDelegate KeyboardButtonClicked; // 0x3b8(0x10)
	struct FString RealActionName; // 0x3c8(0x10)
	struct FName AxisName; // 0x3d8(0x08)
	bool IsPrimary; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FName GroupName; // 0x3e4(0x08)
	bool IsLocked; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct FMulticastInlineDelegate KeyboardButtonHovered; // 0x3f0(0x10)
	struct FMulticastInlineDelegate KeyboardButtonUnhovered; // 0x400(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRebindingFlair(bool IsRebinding); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.SetRebindingFlair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetKeyboardKey(struct FInputAxisKeyMapping Key, bool IsPrimary, bool IsLocked); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.SetKeyboardKey // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InputAxis(int32_t EntryPoint); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.ExecuteUbergraph_UI_BP_InputAxis // (Final|UbergraphFunction) // @ game+0x38a7480
	void KeyboardButtonUnhovered__DelegateSignature(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KeyboardButtonHovered__DelegateSignature(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KeyboardButtonClicked__DelegateSignature(bool IsPrimary, struct UUI_BP_InputAxis_C* InputAxis); // Function UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

