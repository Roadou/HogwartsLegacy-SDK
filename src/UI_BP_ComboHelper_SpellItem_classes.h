// WidgetBlueprintGeneratedClass UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C
// Size: 0x300 (Inherited: 0x268)
struct UUI_BP_ComboHelper_SpellItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Ready; // 0x270(0x08)
	struct UWidgetAnimation* Fail; // 0x278(0x08)
	struct UWidgetAnimation* Success; // 0x280(0x08)
	struct UPhoenixImage* colorPulse; // 0x288(0x08)
	struct UCanvasPanel* contentHolder; // 0x290(0x08)
	struct UPhoenixImage* itemBack; // 0x298(0x08)
	struct UScaleBox* Outline; // 0x2a0(0x08)
	struct UImage* SpellIcon; // 0x2a8(0x08)
	struct UPhoenixImage* stateBack; // 0x2b0(0x08)
	struct UPhoenixImage* stateFlame; // 0x2b8(0x08)
	struct UCanvasPanel* stateIcon; // 0x2c0(0x08)
	struct UPhoenixImage* successMark; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnSuccessAnimationComplete; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnFailureAnimationComplete; // 0x2e0(0x10)
	struct FString SpellName; // 0x2f0(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_2(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowStatusSuccess(bool ShowStatus); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.ShowStatusSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Spell Category Color(enum class ESpellCategory SpellCategory); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.Set Spell Category Color // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SuccessAnimationFinished(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SuccessAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FailureAnimationFinished(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.FailureAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellName(struct FString SpellName); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SetSpellName // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySuccess(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlaySuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayFail(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlayFail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetState(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.ResetState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayReady(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlayReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ComboHelper_SpellItem(int32_t EntryPoint); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.ExecuteUbergraph_UI_BP_ComboHelper_SpellItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnFailureAnimationComplete__DelegateSignature(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.OnFailureAnimationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSuccessAnimationComplete__DelegateSignature(); // Function UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.OnSuccessAnimationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

