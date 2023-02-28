// WidgetBlueprintGeneratedClass UI_BP_AutosaveDisclaimer.UI_BP_AutosaveDisclaimer_C
// Size: 0x34c (Inherited: 0x328)
struct UUI_BP_AutosaveDisclaimer_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* Disclaimer1; // 0x330(0x08)
	struct UPhoenixTextBlock* Disclaimer2; // 0x338(0x08)
	struct UUI_BP_SavingIcon_C* UI_BP_SavingIcon; // 0x340(0x08)
	float ScreenDuration; // 0x348(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_AutosaveDisclaimer.UI_BP_AutosaveDisclaimer_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_AutosaveDisclaimer.UI_BP_AutosaveDisclaimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AutosaveDisclaimer.UI_BP_AutosaveDisclaimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AutosaveDisclaimer(int32_t EntryPoint); // Function UI_BP_AutosaveDisclaimer.UI_BP_AutosaveDisclaimer_C.ExecuteUbergraph_UI_BP_AutosaveDisclaimer // (Final|UbergraphFunction) // @ game+0x38a7480
};

