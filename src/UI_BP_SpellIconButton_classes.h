// WidgetBlueprintGeneratedClass UI_BP_SpellIconButton.UI_BP_SpellIconButton_C
// Size: 0x589 (Inherited: 0x4a8)
struct UUI_BP_SpellIconButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnHovered; // 0x4b0(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4b8(0x08)
	struct UWidgetAnimation* OnSelectedAnimation; // 0x4c0(0x08)
	struct UPhoenixImage* categoryBack; // 0x4c8(0x08)
	struct UCanvasPanel* contentHolder; // 0x4d0(0x08)
	struct UImage* highlight; // 0x4d8(0x08)
	struct UOverlay* lockOverlay; // 0x4e0(0x08)
	struct UUI_BP_SelectedBox_C* selectedBox; // 0x4e8(0x08)
	struct UImage* spellLock; // 0x4f0(0x08)
	struct USizeBox* spellSizeBox; // 0x4f8(0x08)
	struct UBorder* TutorialHighlight; // 0x500(0x08)
	struct FMulticastInlineDelegate OnSpellIconHovered; // 0x508(0x10)
	struct FMulticastInlineDelegate OnSpellIconUnhovered; // 0x518(0x10)
	struct FMulticastInlineDelegate OnSpellIconClicked; // 0x528(0x10)
	struct UUserWidget* ParentWidget; // 0x538(0x08)
	struct UUserWidget* NewButtonHighlight; // 0x540(0x08)
	enum class ESlateVisibility HighlightVisibility; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct FString SpellCategory; // 0x550(0x10)
	struct FLinearColor CategoryColor; // 0x560(0x10)
	bool IsButtonSelected; // 0x570(0x01)
	bool spellIsUnlocked; // 0x571(0x01)
	enum class ESpellCategory SpellType; // 0x572(0x01)
	char pad_573[0x5]; // 0x573(0x05)
	struct FMulticastInlineDelegate OnDragInitiated; // 0x578(0x10)
	bool IsDraggable; // 0x588(0x01)

	void SetDraggable(bool CanDrag); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetDraggable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellType(enum class ESpellCategory SpellType, bool IsSpellBlacklisted); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetSpellType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLockedState(bool IsUnlocked); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetLockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySelectedAnimation(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.PlaySelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsCurrentSelection(bool IsCurrent); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetIsCurrentSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool IsSelected); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellIcon(struct FString newIcon, bool IsBlacklisted); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetSpellIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetButtonIcons(struct FString BackgroundImage); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetButtonIcons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleNonExistent(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.HandleNonExistent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleDisabled(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.HandleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleEnabled(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.HandleEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetButtonSize(struct FVector2D NewSize); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetButtonSize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SpellIconButton(int32_t EntryPoint); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.ExecuteUbergraph_UI_BP_SpellIconButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnDragInitiated__DelegateSignature(); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnDragInitiated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIconClicked__DelegateSignature(struct UUI_BP_SpellIconButton_C* IconButton); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnSpellIconClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIconUnhovered__DelegateSignature(struct UUI_BP_SpellIconButton_C* IconButton); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnSpellIconUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIconHovered__DelegateSignature(struct UUI_BP_SpellIconButton_C* IconButton); // Function UI_BP_SpellIconButton.UI_BP_SpellIconButton_C.OnSpellIconHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

