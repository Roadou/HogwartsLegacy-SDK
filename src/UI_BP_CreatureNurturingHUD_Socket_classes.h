// WidgetBlueprintGeneratedClass UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C
// Size: 0x318 (Inherited: 0x2e8)
struct UUI_BP_CreatureNurturingHUD_Socket_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* SlideOut; // 0x2f0(0x08)
	struct UWidgetAnimation* SlideIn; // 0x2f8(0x08)
	struct UCanvasPanel* beastManagement; // 0x300(0x08)
	struct UPhoenixRichTextBlock* ButtonCallout; // 0x308(0x08)
	struct UPhoenixTextBlock* manageText; // 0x310(0x08)

	void ForceHide(bool Hide); // Function UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.ForceHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket(int32_t EntryPoint); // Function UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket // (Final|UbergraphFunction) // @ game+0x38a7480
};

