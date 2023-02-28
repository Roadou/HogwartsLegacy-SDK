// WidgetBlueprintGeneratedClass UI_BP_CombatBreakout.UI_BP_CombatBreakout_C
// Size: 0x34b (Inherited: 0x2e8)
struct UUI_BP_CombatBreakout_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* BreakoutNotify; // 0x2f0(0x08)
	struct UWidgetAnimation* BreakoutRingSuccess; // 0x2f8(0x08)
	struct UWidgetAnimation* BreakoutRingFail; // 0x300(0x08)
	struct UWidgetAnimation* SwapBreakoutButton; // 0x308(0x08)
	struct UPhoenixRichTextBlock* BreakoutButton; // 0x310(0x08)
	struct UImage* BreakoutButtonFrame; // 0x318(0x08)
	struct UImage* BreakoutColorMask; // 0x320(0x08)
	struct UImage* BreakoutGlow; // 0x328(0x08)
	struct UCanvasPanel* BreakoutGroup; // 0x330(0x08)
	struct UImage* BreakoutRing; // 0x338(0x08)
	struct UPhoenixImage* ButtonFlame; // 0x340(0x08)
	bool RandomBreakout; // 0x348(0x01)
	bool BreakoutComplete; // 0x349(0x01)
	bool BreakoutInputPressed; // 0x34a(0x01)

	void BreakoutTimeout(struct UObject* Caller); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.BreakoutTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BreakoutIconRamdomizer(struct FString Button, bool IsRandom); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.BreakoutIconRamdomizer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Breakout State Change(bool changed, struct FString ButtonStr); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout State Change // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Breakout_Success(struct UObject* Caller); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout_Success // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Breakout_Failure(struct UObject* Caller); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout_Failure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimationComplete(); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.AnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CombatBreakout(int32_t EntryPoint); // Function UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.ExecuteUbergraph_UI_BP_CombatBreakout // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

