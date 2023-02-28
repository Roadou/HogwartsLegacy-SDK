// WidgetBlueprintGeneratedClass UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C
// Size: 0x2c9 (Inherited: 0x280)
struct UUI_BP_SpellSelectionDiamond_C : USpellSelectionDiamondBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* showCallouts; // 0x288(0x08)
	struct UWidgetAnimation* hideRT; // 0x290(0x08)
	struct UPhoenixRichTextBlock* bottomButtonGraphic; // 0x298(0x08)
	struct UPhoenixRichTextBlock* CalloutButton; // 0x2a0(0x08)
	struct UCanvasPanel* Items; // 0x2a8(0x08)
	struct UPhoenixRichTextBlock* leftButtonGraphic; // 0x2b0(0x08)
	struct UPhoenixRichTextBlock* rightButtonGraphic; // 0x2b8(0x08)
	struct UPhoenixRichTextBlock* topButtonGraphic; // 0x2c0(0x08)
	bool UseSwitchGraphics; // 0x2c8(0x01)

	void Construct(); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowButtonCallouts(); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.ShowButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideButtonCallouts(); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.HideButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowRTCallout(); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.ShowRTCallout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideRTCallout(); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.HideRTCallout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SpellSelectionDiamond(int32_t EntryPoint); // Function UI_BP_SpellSelectionDiamond.UI_BP_SpellSelectionDiamond_C.ExecuteUbergraph_UI_BP_SpellSelectionDiamond // (Final|UbergraphFunction) // @ game+0x38a7480
};

