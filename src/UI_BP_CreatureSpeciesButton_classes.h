// WidgetBlueprintGeneratedClass UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C
// Size: 0x2fc (Inherited: 0x268)
struct UUI_BP_CreatureSpeciesButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x270(0x08)
	struct UWidgetAnimation* SpeciesSelected; // 0x278(0x08)
	struct UWidgetAnimation* OnSpeciesButtonHover; // 0x280(0x08)
	struct UCanvasPanel* buttonContent; // 0x288(0x08)
	struct UButton* ClickButton; // 0x290(0x08)
	struct UImage* CreatureImage; // 0x298(0x08)
	struct UPhoenixImage* emptyIcon; // 0x2a0(0x08)
	struct UPhoenixImage* selectedBorder; // 0x2a8(0x08)
	struct UPhoenixImage* selectedGlow; // 0x2b0(0x08)
	struct UImage* TutorialHighlight; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2e0(0x10)
	struct FName TypeID; // 0x2f0(0x08)
	bool Highlighted; // 0x2f8(0x01)
	bool Enabled; // 0x2f9(0x01)
	bool IsEmpty; // 0x2fa(0x01)
	bool IsSelected; // 0x2fb(0x01)

	void SetEmptyButton(bool IsEmpty); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetEmptyButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetEnabled(bool Enabled); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHighlighted(bool NewHighlighted); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSpeciesID(struct FName& TypeID); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.GetSpeciesID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitSpeciesButton(struct FName TypeID, int32_t Count); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.InitSpeciesButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(bool bIsTutorialHighlighted); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureSpeciesButton(int32_t EntryPoint); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.ExecuteUbergraph_UI_BP_CreatureSpeciesButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClicked__DelegateSignature(struct UUI_BP_CreatureSpeciesButton_C* Button); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered__DelegateSignature(struct UUI_BP_CreatureSpeciesButton_C* Button); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHovered__DelegateSignature(struct UUI_BP_CreatureSpeciesButton_C* Button); // Function UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

