// WidgetBlueprintGeneratedClass UI_BP_InputButton.UI_BP_InputButton_C
// Size: 0x3c9 (Inherited: 0x328)
struct UUI_BP_InputButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnInputButtonHovered; // 0x330(0x08)
	struct UImage* FlareBack; // 0x338(0x08)
	struct UImage* Frame; // 0x340(0x08)
	struct UButton* inputButton; // 0x348(0x08)
	struct UEditableTextBox* InputText; // 0x350(0x08)
	struct FText HintText; // 0x358(0x18)
	struct FMulticastInlineDelegate OnInputHovered; // 0x370(0x10)
	struct FMulticastInlineDelegate OnInputUnhovered; // 0x380(0x10)
	int32_t MaxCharacters; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FMulticastInlineDelegate OnTextChanged; // 0x398(0x10)
	bool IsPassword; // 0x3a8(0x01)
	bool TempDisableClick; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)
	struct FText CurrentText; // 0x3b0(0x18)
	bool InitialTextChanged; // 0x3c8(0x01)

	void Pre Filter Input(struct FText InputText, bool TrimWhitespace, struct FText& OutputText); // Function UI_BP_InputButton.UI_BP_InputButton_C.Pre Filter Input // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InputButton.UI_BP_InputButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetInitialText(struct FText InitialText); // Function UI_BP_InputButton.UI_BP_InputButton_C.SetInitialText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInputText(struct FText& InputText); // Function UI_BP_InputButton.UI_BP_InputButton_C.GetInputText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInputHint(struct FText NewHint); // Function UI_BP_InputButton.UI_BP_InputButton_C.SetInputHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_InputButton.UI_BP_InputButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__inputText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__inputText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void FloatingKeyboardClosed(enum class EGamepadTextInputResult InputResult); // Function UI_BP_InputButton.UI_BP_InputButton_C.FloatingKeyboardClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InputButton(int32_t EntryPoint); // Function UI_BP_InputButton.UI_BP_InputButton_C.ExecuteUbergraph_UI_BP_InputButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnTextChanged__DelegateSignature(struct FString newText); // Function UI_BP_InputButton.UI_BP_InputButton_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInputUnhovered__DelegateSignature(struct UUI_BP_InputButton_C* Button); // Function UI_BP_InputButton.UI_BP_InputButton_C.OnInputUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInputHovered__DelegateSignature(struct UUI_BP_InputButton_C* Button); // Function UI_BP_InputButton.UI_BP_InputButton_C.OnInputHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

