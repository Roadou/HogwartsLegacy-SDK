// WidgetBlueprintGeneratedClass UI_BP_HUDHint.UI_BP_HUDHint_C
// Size: 0x311 (Inherited: 0x2e8)
struct UUI_BP_HUDHint_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Hint_Intro; // 0x2f0(0x08)
	struct UWidgetAnimation* Hint_Outro; // 0x2f8(0x08)
	struct UPhoenixRichTextBlock* HintText; // 0x300(0x08)
	struct UOverlay* TopOverlay; // 0x308(0x08)
	bool HintShown; // 0x310(0x01)

	void ClearHint(); // Function UI_BP_HUDHint.UI_BP_HUDHint_C.ClearHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAndShowHint(struct FString HintKey, float MaxDuration); // Function UI_BP_HUDHint.UI_BP_HUDHint_C.SetAndShowHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_HUDHint.UI_BP_HUDHint_C.WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ResetAutoHideTimer(float MaxDuration); // Function UI_BP_HUDHint.UI_BP_HUDHint_C.ResetAutoHideTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HUDHint(int32_t EntryPoint); // Function UI_BP_HUDHint.UI_BP_HUDHint_C.ExecuteUbergraph_UI_BP_HUDHint // (Final|UbergraphFunction) // @ game+0x38a7480
};

