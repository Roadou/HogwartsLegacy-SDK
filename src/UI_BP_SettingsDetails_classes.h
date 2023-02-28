// WidgetBlueprintGeneratedClass UI_BP_SettingsDetails.UI_BP_SettingsDetails_C
// Size: 0x35c (Inherited: 0x328)
struct UUI_BP_SettingsDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Appear; // 0x330(0x08)
	struct UPhoenixTextBlock* Description; // 0x338(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* detailsBack; // 0x340(0x08)
	struct FMulticastInlineDelegate SettingsDetailCollapseDispatch; // 0x348(0x10)
	float appearTime; // 0x358(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetupTooltipDescription(struct FString NewDescription); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.SetupTooltipDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySettingsDetailsCollapseAnim(); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.PlaySettingsDetailsCollapseAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySettingsDetailsAppearAnim(); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.PlaySettingsDetailsAppearAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SettingsDetails(int32_t EntryPoint); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.ExecuteUbergraph_UI_BP_SettingsDetails // (Final|UbergraphFunction) // @ game+0x38a7480
	void SettingsDetailCollapseDispatch__DelegateSignature(); // Function UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.SettingsDetailCollapseDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

