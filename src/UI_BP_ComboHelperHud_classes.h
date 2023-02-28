// WidgetBlueprintGeneratedClass UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C
// Size: 0x3bc (Inherited: 0x308)
struct UUI_BP_ComboHelperHud_C : UComboHelperHud {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* ScrollToPreviousSpell; // 0x310(0x08)
	struct UWidgetAnimation* ScrollToNextSpell; // 0x318(0x08)
	struct UWidgetAnimation* SuccessAnim; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* ActiveSpell; // 0x330(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_L1; // 0x338(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_L2; // 0x340(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_L3; // 0x348(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_L4; // 0x350(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_L5; // 0x358(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_R1; // 0x360(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_R2; // 0x368(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_R3; // 0x370(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_R4; // 0x378(0x08)
	struct UUI_BP_ComboHelper_SpellItem_C* spell_R5; // 0x380(0x08)
	struct TArray<struct UUI_BP_ComboHelper_SpellItem_C*> SpellItems; // 0x388(0x10)
	struct TArray<struct FString> Spell Names; // 0x398(0x10)
	int32_t Num Spells; // 0x3a8(0x04)
	int32_t currentSpellIndex; // 0x3ac(0x04)
	float RewindPlaybackSpeed; // 0x3b0(0x04)
	bool ComboCompleted; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	int32_t NumAttempts; // 0x3b8(0x04)

	void SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_2(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RewindSpellCombo(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.RewindSpellCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetSpells to Standard Position(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ResetSpells to Standard Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Spell From Array(int32_t SpellIndex, struct UUI_BP_ComboHelper_SpellItem_C* Spell); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Set Spell From Array // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSpellSuccess(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.UpdateSpellSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSpellCarousel(int32_t CurrentIndex); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.UpdateSpellCarousel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollAnimationComplete(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ScrollAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreviousScrollAnimationComplete(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.PreviousScrollAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowComboHelperChanged(bool bShow); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnShowComboHelperChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRequiredSpellsChanged(struct TArray<struct FString>& SpellNames, int32_t NumSpells); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnRequiredSpellsChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellSucceeded(int32_t NumSucceeded); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnSpellSucceeded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellFailed(int32_t NumSucceeded); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnSpellFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnComboCompleted(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnComboCompleted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnComboReset(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnComboReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature(); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnAutoWinRequested(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnAutoWinRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ComboHelperHud(int32_t EntryPoint); // Function UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ExecuteUbergraph_UI_BP_ComboHelperHud // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

