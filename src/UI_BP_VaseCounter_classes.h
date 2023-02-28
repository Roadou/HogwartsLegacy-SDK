// WidgetBlueprintGeneratedClass UI_BP_VaseCounter.UI_BP_VaseCounter_C
// Size: 0x318 (Inherited: 0x2e8)
struct UUI_BP_VaseCounter_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Intro; // 0x2f0(0x08)
	struct UBorder* Border_3; // 0x2f8(0x08)
	struct UImage* CounterBG; // 0x300(0x08)
	struct UPhoenixTextBlock* CounterText; // 0x308(0x08)
	struct UImage* EnemyIcon; // 0x310(0x08)

	void Construct(); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void VaseBroken(struct UObject* Caller, int32_t Int1, int32_t Int2); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.VaseBroken // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowVaseCounter(struct UObject* Caller); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.ShowVaseCounter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideVaseCounter(struct UObject* Caller); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.HideVaseCounter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowVaseCounterNoIcon(struct UObject* Caller); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.ShowVaseCounterNoIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_VaseCounter(int32_t EntryPoint); // Function UI_BP_VaseCounter.UI_BP_VaseCounter_C.ExecuteUbergraph_UI_BP_VaseCounter // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

