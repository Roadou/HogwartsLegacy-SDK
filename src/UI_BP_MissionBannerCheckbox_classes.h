// WidgetBlueprintGeneratedClass UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C
// Size: 0x358 (Inherited: 0x328)
struct UUI_BP_MissionBannerCheckbox_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowStepComplete; // 0x330(0x08)
	struct UPhoenixRichTextBlock* CheckboxText; // 0x338(0x08)
	struct UHorizontalBox* CollapsableContents; // 0x340(0x08)
	struct USizeBox* CollapsingSizeBox; // 0x348(0x08)
	struct UImage* waypointIcon; // 0x350(0x08)

	void UpdateIconColor(struct FLinearColor NewColor); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.UpdateIconColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPaper(bool ShowPaper); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.ShowPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCheckmarkData(struct FText StepText, bool IsCompleted, struct FString ObjectiveIcon, struct FLinearColor IconTint); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.SetCheckmarkData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDynamicSizeBoxHeight(); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.SetDynamicSizeBoxHeight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MissionBannerCheckbox(int32_t EntryPoint); // Function UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.ExecuteUbergraph_UI_BP_MissionBannerCheckbox // (Final|UbergraphFunction) // @ game+0x38a7480
};

