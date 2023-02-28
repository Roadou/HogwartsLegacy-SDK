// WidgetBlueprintGeneratedClass UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C
// Size: 0x479 (Inherited: 0x318)
struct UUI_BP_ActionDiamondRing_C : UActionDiamondRing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hideFocusFX; // 0x320(0x08)
	struct UWidgetAnimation* showFocusFX; // 0x328(0x08)
	struct UWidgetAnimation* MiniDiamondLeft; // 0x330(0x08)
	struct UWidgetAnimation* MiniDiamondBottom; // 0x338(0x08)
	struct UWidgetAnimation* MiniDiamondRight; // 0x340(0x08)
	struct UWidgetAnimation* MiniDiamondTop; // 0x348(0x08)
	struct UWidgetAnimation* SwapGroup; // 0x350(0x08)
	struct UWidgetAnimation* ShowSpellCallouts; // 0x358(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_Bottom; // 0x360(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_Left; // 0x368(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_Right; // 0x370(0x08)
	struct UUI_BP_ActionRingItem_C* actionItem_Top; // 0x378(0x08)
	struct UBorder* ActionRing; // 0x380(0x08)
	struct UCanvasPanel* BottomButton; // 0x388(0x08)
	struct UPhoenixRichTextBlock* bottomButtonGraphic; // 0x390(0x08)
	struct UPhoenixRichTextBlock* CalloutButton; // 0x398(0x08)
	struct UPhoenixRichTextBlock* dpadCallout; // 0x3a0(0x08)
	struct UPhoenixRichTextBlock* dpadCallout_Both; // 0x3a8(0x08)
	struct UCanvasPanel* LeftButton; // 0x3b0(0x08)
	struct UPhoenixRichTextBlock* leftButtonGraphic; // 0x3b8(0x08)
	struct UHorizontalBox* leftHanded; // 0x3c0(0x08)
	struct UPhoenixRichTextBlock* leftHandedRevelio; // 0x3c8(0x08)
	struct UPhoenixRichTextBlock* leftHandedSpellSelection; // 0x3d0(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* mini1; // 0x3d8(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* mini2; // 0x3e0(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* mini3; // 0x3e8(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* mini4; // 0x3f0(0x08)
	struct UBorder* miniDiamond; // 0x3f8(0x08)
	struct UCanvasPanel* MiniDiamondElements; // 0x400(0x08)
	struct UBorder* miniDpad; // 0x408(0x08)
	struct UHorizontalBox* miniFaceButtons; // 0x410(0x08)
	struct UImage* RevelioIcon; // 0x418(0x08)
	struct UCanvasPanel* RightButton; // 0x420(0x08)
	struct UPhoenixRichTextBlock* rightButtonGraphic; // 0x428(0x08)
	struct UHorizontalBox* rightHanded; // 0x430(0x08)
	struct UImage* spellSelectIcon; // 0x438(0x08)
	struct UCanvasPanel* TopButton; // 0x440(0x08)
	struct UPhoenixRichTextBlock* topButtonGraphic; // 0x448(0x08)
	struct UImage* ActiveMiniBack; // 0x450(0x08)
	struct UImage* ActiveMiniFill; // 0x458(0x08)
	bool isFocusFXShowing; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct TArray<struct UUI_BP_MiniSelectionDiamond_C*> MiniDiamondArray; // 0x468(0x10)
	bool isRevelioAvailable; // 0x478(0x01)

	void AdjustButtonGraphicsForSwitch(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.AdjustButtonGraphicsForSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRevelioSpellSelectionPrompts(bool InSouthpaw); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ToggleRevelioSpellSelectionPrompts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMiniDiamondElementsVisibility(int32_t GroupIndex); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetMiniDiamondElementsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionRingVisibility(bool IgnoreLocks); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetActionRingVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellSelectionVisibility(bool IgnoreLocks); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetSpellSelectionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleMiniDiamondPrompts(bool InSouthpaw); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ToggleMiniDiamondPrompts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideDiamondFX(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.HideDiamondFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowDiamondFX(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowDiamondFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonVisibility(struct UWidget* Button, bool Show); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRevelioVisibility(bool IgnoreLocks); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetRevelioVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBackAndFill(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.UpdateBackAndFill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMiniDiamond(int32_t GroupIndex); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.UpdateMiniDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowButtonCallouts(bool Show); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowButtonCallouts // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NewDiamondSelected(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.NewDiamondSelected // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PassiveSpellLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.PassiveSpellLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMiniDiamond(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowMiniDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnShowButtonsChanged(bool Show); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnShowButtonsChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Settings_SouthpawToggled(struct UObject* Caller, int32_t int); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.Settings_SouthpawToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHideHUDElement(enum class ESlateVisibility HiddenState); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnHideHUDElement // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowHUDElement(bool IgnoreLocks); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnShowHUDElement // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnableAllSpellsChanged(struct UObject* Caller, int32_t int); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.EnableAllSpellsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuSpellSelectionLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.MenuSpellSelectionLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockedDiamondSelected(struct UObject* Caller, int32_t int); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.LockedDiamondSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginChannelingWingardiumLeviosa(struct UObject* Caller); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BeginChannelingWingardiumLeviosa // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndChannelingWidgardiumLeviosa(struct UObject* Caller); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.EndChannelingWidgardiumLeviosa // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionDiamondRing(int32_t EntryPoint); // Function UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ExecuteUbergraph_UI_BP_ActionDiamondRing // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

