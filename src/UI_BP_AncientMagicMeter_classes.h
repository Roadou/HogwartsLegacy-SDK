// WidgetBlueprintGeneratedClass UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C
// Size: 0x280 (Inherited: 0x268)
struct UUI_BP_AncientMagicMeter_C : UUserWidget {
	struct UProgressBar* AncientMagicProgressBar; // 0x268(0x08)
	float DeltaPct; // 0x270(0x04)
	float TargetFillPct; // 0x274(0x04)
	struct FTimerHandle FillTimerHandle; // 0x278(0x08)

	void SetPctDelta(); // Function UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C.SetPctDelta // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMagicPct(float NewPct); // Function UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C.SetMagicPct // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

