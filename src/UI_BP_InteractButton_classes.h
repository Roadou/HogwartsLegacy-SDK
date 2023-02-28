// WidgetBlueprintGeneratedClass UI_BP_InteractButton.UI_BP_InteractButton_C
// Size: 0x5d5 (Inherited: 0x3e8)
struct UUI_BP_InteractButton_C : UTextButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* onHovered_Right; // 0x3f0(0x08)
	struct UWidgetAnimation* OnSelected; // 0x3f8(0x08)
	struct UWidgetAnimation* onUnselected; // 0x400(0x08)
	struct UWidgetAnimation* OnHovered; // 0x408(0x08)
	struct UScaleBox* bottomBracket; // 0x410(0x08)
	struct UPhoenixImage* bottomBracketImage; // 0x418(0x08)
	struct UImage* buttonShadow; // 0x420(0x08)
	struct UPhoenixTextBlock* disabledText; // 0x428(0x08)
	struct UPhoenixRichTextBlock* DisplayText; // 0x430(0x08)
	struct UScaleBox* gradientBack; // 0x438(0x08)
	struct UBorder* textBorder; // 0x440(0x08)
	struct UHorizontalBox* TextHorizontalBox; // 0x448(0x08)
	struct UScaleBox* topBracket; // 0x450(0x08)
	struct UPhoenixImage* topBracketImage; // 0x458(0x08)
	struct UImage* typeIcon; // 0x460(0x08)
	struct FText Key_1; // 0x468(0x18)
	struct FString Namespace_1; // 0x480(0x10)
	int32_t FontSize; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FSlateColor TextButtonHoveredTextColor; // 0x498(0x28)
	struct FSlateColor TextButtonUnhoveredTextColor; // 0x4c0(0x28)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x4e8(0x10)
	float TextWidth; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct FMulticastInlineDelegate OnButtonHoverDispatcher; // 0x500(0x10)
	struct FMulticastInlineDelegate OnButtonUnhoverDispatcher; // 0x510(0x10)
	struct TMap<enum class UI_BP_InteractTypeEnum, struct FString> interactTypeMap; // 0x520(0x50)
	struct TMap<enum class EAvaAudioDialogueMenuItemType, struct FString> ConversationTypeMap; // 0x570(0x50)
	bool isOptionAvailable; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	struct FLinearColor OptionColor; // 0x5c4(0x10)
	bool currentlyActive; // 0x5d4(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetDisabledText(struct FString Reason); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.SetDisabledText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleActive(bool IsActive); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.ToggleActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOptionState(enum class UI_BP_OptionStateEnum NewState); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.SetOptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTypeIcon(struct FString Type); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.SetTypeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScaleButton(bool IsHoveredOver); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.ScaleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InteractButton(int32_t EntryPoint); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.ExecuteUbergraph_UI_BP_InteractButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnButtonUnhoverDispatcher__DelegateSignature(struct UUI_BP_InteractButton_C* TextButton); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.OnButtonUnhoverDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonHoverDispatcher__DelegateSignature(struct UUI_BP_InteractButton_C* TextButton); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.OnButtonHoverDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClickEventDispatcher__DelegateSignature(struct UUI_BP_InteractButton_C* TextButton); // Function UI_BP_InteractButton.UI_BP_InteractButton_C.OnClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

