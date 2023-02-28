// WidgetBlueprintGeneratedClass UI_BP_HealthIncrease.UI_BP_HealthIncrease_C
// Size: 0x290 (Inherited: 0x268)
struct UUI_BP_HealthIncrease_C : UUserWidget {
	struct UWidgetAnimation* ShowText; // 0x268(0x08)
	struct UWidgetAnimation* PlusUp; // 0x270(0x08)
	struct UBorder* gainTextBorder; // 0x278(0x08)
	struct UPhoenixTextBlock* HealthGain; // 0x280(0x08)
	struct UHorizontalBox* HealthGainBox; // 0x288(0x08)

	void HealthUpNoAnim(int32_t Health); // Function UI_BP_HealthIncrease.UI_BP_HealthIncrease_C.HealthUpNoAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthUp(int32_t Health); // Function UI_BP_HealthIncrease.UI_BP_HealthIncrease_C.HealthUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

