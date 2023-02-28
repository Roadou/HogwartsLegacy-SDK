// WidgetBlueprintGeneratedClass UI_BP_IconButton.UI_BP_IconButton_C
// Size: 0x549 (Inherited: 0x4a8)
struct UUI_BP_IconButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4b0(0x08)
	struct UWidgetAnimation* OnButtonHovered; // 0x4b8(0x08)
	struct UCanvasPanel* buttonContent; // 0x4c0(0x08)
	struct UNamedSlot* ContentSlot; // 0x4c8(0x08)
	struct USizeBox* iconSizeBox; // 0x4d0(0x08)
	struct UBorder* lockedOverlay; // 0x4d8(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x4e0(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x4e8(0x08)
	struct UImage* selected; // 0x4f0(0x08)
	struct UImage* selectedRipple; // 0x4f8(0x08)
	struct UBorder* TutorialHighlight; // 0x500(0x08)
	struct FMulticastInlineDelegate OnHoveredEventDispatcher; // 0x508(0x10)
	struct FMulticastInlineDelegate OnUnhoveredEventDispatcher; // 0x518(0x10)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x528(0x10)
	bool IsSelected; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct UUserWidget* CursorClass; // 0x540(0x08)
	bool IsLocked; // 0x548(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_IconButton.UI_BP_IconButton_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonSize(struct FVector2D NewSize); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetButtonSize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsLocked(bool IsLocked); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsCurrentSelection(bool IsCurrent); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetIsCurrentSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetButtonIcons(struct FString BackgroundImage); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetButtonIcons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UWidget* GetExtraContent(); // Function UI_BP_IconButton.UI_BP_IconButton_C.GetExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleNonExistent(); // Function UI_BP_IconButton.UI_BP_IconButton_C.HandleNonExistent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_IconButton.UI_BP_IconButton_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleDisabled(); // Function UI_BP_IconButton.UI_BP_IconButton_C.HandleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleEnabled(); // Function UI_BP_IconButton.UI_BP_IconButton_C.HandleEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool RemoveExtraContent(); // Function UI_BP_IconButton.UI_BP_IconButton_C.RemoveExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AddExtraContent(struct UWidget* NewContent); // Function UI_BP_IconButton.UI_BP_IconButton_C.AddExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetState(bool IsActive); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInteractable(); // Function UI_BP_IconButton.UI_BP_IconButton_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_IconButton.UI_BP_IconButton_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_IconButton.UI_BP_IconButton_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_IconButton.UI_BP_IconButton_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_IconButton.UI_BP_IconButton_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_IconButton.UI_BP_IconButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_IconButton.UI_BP_IconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_IconButton.UI_BP_IconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_IconButton.UI_BP_IconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_IconButton.UI_BP_IconButton_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(enum class EIconButtonState NewState); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetButtonState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsNew(bool bIsNew); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetIsNew // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_IconButton.UI_BP_IconButton_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_IconButton(int32_t EntryPoint); // Function UI_BP_IconButton.UI_BP_IconButton_C.ExecuteUbergraph_UI_BP_IconButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClickEventDispatcher__DelegateSignature(struct UUI_BP_IconButton_C* IconButton); // Function UI_BP_IconButton.UI_BP_IconButton_C.OnClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhoveredEventDispatcher__DelegateSignature(struct UUI_BP_IconButton_C* IconButton); // Function UI_BP_IconButton.UI_BP_IconButton_C.OnUnhoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_IconButton_C* IconButton); // Function UI_BP_IconButton.UI_BP_IconButton_C.OnHoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

