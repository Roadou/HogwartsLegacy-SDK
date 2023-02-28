// WidgetBlueprintGeneratedClass UI_BP_NoFlyHud.UI_BP_NoFlyHud_C
// Size: 0x301 (Inherited: 0x2e8)
struct UUI_BP_NoFlyHud_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UPhoenixTextBlock* ErrorMessage; // 0x2f0(0x08)
	struct URichTextBlock* timeText; // 0x2f8(0x08)
	bool NewVar_1; // 0x300(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Show(struct FName& Error Key); // Function UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Show // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NoFlyHud(int32_t EntryPoint); // Function UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.ExecuteUbergraph_UI_BP_NoFlyHud // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

