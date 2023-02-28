// WidgetBlueprintGeneratedClass UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C
// Size: 0x362 (Inherited: 0x2e8)
struct UUI_BP_BrewingSite_HUD_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UUI_BP_Item_Ready_C* CompletedIconButton; // 0x2f0(0x08)
	struct UWidgetSwitcher* CompleteSwitcher; // 0x2f8(0x08)
	struct USizeBox* ItemComplete; // 0x300(0x08)
	struct UPhoenixTextBlock* ItemName; // 0x308(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x310(0x08)
	struct UCanvasPanel* RootPanel; // 0x318(0x08)
	struct UPhoenixTextBlock* TimeRemaining; // 0x320(0x08)
	struct ABrewingSite* BrewingSite; // 0x328(0x08)
	bool WidgetCanBeHidden; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FLinearColor BrewingProgressColor; // 0x334(0x10)
	struct FLinearColor StalledProgressColor; // 0x344(0x10)
	char pad_354[0x4]; // 0x354(0x04)
	struct UBrewingSiteState* BrewingSiteState; // 0x358(0x08)
	bool BrewingSiteStateWasValid; // 0x360(0x01)
	bool BrewingSiteIsSet; // 0x361(0x01)

	void SetBrewingSite(struct ABrewingSite* InBrewingSite); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.SetBrewingSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	enum class ESlateVisibility GetWidgetVisibility(); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.GetWidgetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float GetBrewingProgressRatio(); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.GetBrewingProgressRatio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	enum class ESlateVisibility GetVisibleIfBrewing(); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.GetVisibleIfBrewing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingSite_HUD(int32_t EntryPoint); // Function UI_BP_BrewingSite_HUD.UI_BP_BrewingSite_HUD_C.ExecuteUbergraph_UI_BP_BrewingSite_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

