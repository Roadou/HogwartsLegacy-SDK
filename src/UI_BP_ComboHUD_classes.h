// WidgetBlueprintGeneratedClass UI_BP_ComboHUD.UI_BP_ComboHUD_C
// Size: 0x30c (Inherited: 0x2e8)
struct UUI_BP_ComboHUD_C : UComboHUD_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* AddPoints; // 0x2f0(0x08)
	struct UPhoenixTextBlock* FocusText; // 0x2f8(0x08)
	struct UPhoenixTextBlock* NewPoints; // 0x300(0x08)
	float ComboTimeLeft; // 0x308(0x04)

	void OnFocusChanged(struct AActor* Target, float InFocusChange); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.OnFocusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFocusMultiplier(); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.UpdateFocusMultiplier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VisibilityChanged(enum class ESlateVisibility NewVisibility); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.VisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateComboCount(struct UObject* Caller, int32_t int); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.UpdateComboCount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ComboHUD(int32_t EntryPoint); // Function UI_BP_ComboHUD.UI_BP_ComboHUD_C.ExecuteUbergraph_UI_BP_ComboHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

