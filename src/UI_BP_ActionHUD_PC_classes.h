// WidgetBlueprintGeneratedClass UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C
// Size: 0x3c1 (Inherited: 0x318)
struct UUI_BP_ActionHUD_PC_C : UActionDiamondRing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hideFocusFX; // 0x320(0x08)
	struct UWidgetAnimation* showFocusFX; // 0x328(0x08)
	struct UWidgetAnimation* SwapGroupDown; // 0x330(0x08)
	struct UWidgetAnimation* SwapGroupUp; // 0x338(0x08)
	struct UBorder* actionHUD; // 0x340(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_2; // 0x348(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_3; // 0x350(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_4; // 0x358(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_5; // 0x360(0x08)
	struct UPhoenixRichTextBlock* buttonGraphic_2; // 0x368(0x08)
	struct UPhoenixRichTextBlock* buttonGraphic_3; // 0x370(0x08)
	struct UPhoenixRichTextBlock* buttonGraphic_4; // 0x378(0x08)
	struct UPhoenixRichTextBlock* buttonGraphic_5; // 0x380(0x08)
	struct UUI_BP_ActionHUD_PC_MiniHUD_C* groupNotification; // 0x388(0x08)
	struct UPhoenixRichTextBlock* PhoenixRichTextBlock; // 0x390(0x08)
	struct UPhoenixRichTextBlock* PhoenixRichTextBlock_69; // 0x398(0x08)
	struct UHorizontalBox* revelioCallout; // 0x3a0(0x08)
	struct UHorizontalBox* SpellSelectHorizontalBox; // 0x3a8(0x08)
	struct UImage* ActiveMiniBack; // 0x3b0(0x08)
	struct UImage* ActiveMiniFill; // 0x3b8(0x08)
	bool isFocusFXShowing; // 0x3c0(0x01)

	void SetGroupNotificationVisibility(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetGroupNotificationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellSelectionVisibility(bool IgnoreLocks); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetSpellSelectionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionBarVisibility(bool IgnoreLocks); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetActionBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideDiamondFX(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.HideDiamondFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowDiamondFX(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.ShowDiamondFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonVisibility(struct UPhoenixRichTextBlock* Button, bool Show); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRevelioVisibility(bool IgnoreLocks); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetRevelioVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateMiniDiamond(int32_t GroupIndex); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.UpdateMiniDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NewDiamondSelected(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.NewDiamondSelected // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PassiveSpellLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.PassiveSpellLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMiniDiamond(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.ShowMiniDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnShowButtonsChanged(bool Show); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnShowButtonsChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowHUDElement(bool IgnoreLocks); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnShowHUDElement // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHideHUDElement(enum class ESlateVisibility HiddenState); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnHideHUDElement // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnableAllSpellsChanged(struct UObject* Caller, int32_t int); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.EnableAllSpellsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuSpellSelectionLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.MenuSpellSelectionLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionHUD_PC(int32_t EntryPoint); // Function UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.ExecuteUbergraph_UI_BP_ActionHUD_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

