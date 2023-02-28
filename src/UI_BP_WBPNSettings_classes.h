// WidgetBlueprintGeneratedClass UI_BP_WBPNSettings.UI_BP_WBPNSettings_C
// Size: 0x388 (Inherited: 0x370)
struct UUI_BP_WBPNSettings_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* UI_BP_Legend_Horizontal_Screen; // 0x378(0x08)
	struct UUI_BP_WbGamesSignin_C* UI_BP_WbGamesSignin; // 0x380(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_WBPNSettings.UI_BP_WBPNSettings_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Construct(); // Function UI_BP_WBPNSettings.UI_BP_WBPNSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableBackout(); // Function UI_BP_WBPNSettings.UI_BP_WBPNSettings_C.DisableBackout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableBackout(); // Function UI_BP_WBPNSettings.UI_BP_WBPNSettings_C.EnableBackout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_WBPNSettings(int32_t EntryPoint); // Function UI_BP_WBPNSettings.UI_BP_WBPNSettings_C.ExecuteUbergraph_UI_BP_WBPNSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

