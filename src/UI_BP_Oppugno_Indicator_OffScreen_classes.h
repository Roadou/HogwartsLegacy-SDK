// WidgetBlueprintGeneratedClass UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C
// Size: 0x308 (Inherited: 0x2e8)
struct UUI_BP_Oppugno_Indicator_OffScreen_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UOverlay* ArrowOverlay; // 0x2f0(0x08)
	struct UPhoenixRichTextBlock* ButtonPrompt; // 0x2f8(0x08)
	struct UImage* TargetArrow; // 0x300(0x08)

	void Construct(); // Function UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RotateIndicator(struct UObject* Caller, struct FVector& Vector); // Function UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C.RotateIndicator // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Oppugno_Indicator_OffScreen(int32_t EntryPoint); // Function UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C.ExecuteUbergraph_UI_BP_Oppugno_Indicator_OffScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

