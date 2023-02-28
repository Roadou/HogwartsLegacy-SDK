// WidgetBlueprintGeneratedClass UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C
// Size: 0x3a1 (Inherited: 0x328)
struct UUI_BP_CompanionSelectionButton_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowHighlight; // 0x330(0x08)
	struct UButton* compButton; // 0x338(0x08)
	struct UPhoenixTextBlock* CompName; // 0x340(0x08)
	struct UImage* houseIcon; // 0x348(0x08)
	struct UVerticalBox* InfoVerticalBox; // 0x350(0x08)
	struct UImage* UnavailableIcon; // 0x358(0x08)
	struct FName Companion; // 0x360(0x08)
	bool IsLocked; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FMulticastInlineDelegate OnCompanionHovered; // 0x370(0x10)
	struct FMulticastInlineDelegate OnCompanionUnhovered; // 0x380(0x10)
	struct FMulticastInlineDelegate OnCompanionSelected; // 0x390(0x10)
	bool isClickable; // 0x3a0(0x01)

	void SetIsSelected(bool IsSelected); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCompanionData(struct FName CompName, bool companionLocked, bool companionDisabled); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.SetCompanionData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CompanionSelectionButton(int32_t EntryPoint); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.ExecuteUbergraph_UI_BP_CompanionSelectionButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnCompanionSelected__DelegateSignature(struct UUI_BP_CompanionSelectionButton_C* Companion); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompanionUnhovered__DelegateSignature(struct UUI_BP_CompanionSelectionButton_C* Companion); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompanionHovered__DelegateSignature(struct UUI_BP_CompanionSelectionButton_C* Companion); // Function UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

