// WidgetBlueprintGeneratedClass UI_BP_FinisherMeter.UI_BP_FinisherMeter_C
// Size: 0x408 (Inherited: 0x2e8)
struct UUI_BP_FinisherMeter_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ComboX10; // 0x2f0(0x08)
	struct UWidgetAnimation* CooldownPickupFlourish; // 0x2f8(0x08)
	struct UWidgetAnimation* ComboCountFadeOut; // 0x300(0x08)
	struct UWidgetAnimation* ComboFlamesFade; // 0x308(0x08)
	struct UWidgetAnimation* ComboCountIncreased; // 0x310(0x08)
	struct UPhoenixTextBlock* ComboCount; // 0x318(0x08)
	struct UPhoenixTextBlock* ComboText; // 0x320(0x08)
	struct UHorizontalBox* meterBox; // 0x328(0x08)
	struct UUI_BP_FinisherMeterSection_C* section1; // 0x330(0x08)
	struct UUI_BP_FinisherMeterSection_C* section2; // 0x338(0x08)
	struct UUI_BP_FinisherMeterSection_C* section3; // 0x340(0x08)
	struct UUI_BP_FinisherMeterSection_C* section4; // 0x348(0x08)
	struct UUI_BP_FinisherMeterSection_C* section5; // 0x350(0x08)
	struct UImage* selectedFlameRight; // 0x358(0x08)
	struct UImage* selectedFlameRight_2; // 0x360(0x08)
	struct UImage* selectedFlameRight_3; // 0x368(0x08)
	struct UImage* selectedFlameTop; // 0x370(0x08)
	struct UImage* selectedFlameTop_2; // 0x378(0x08)
	struct UImage* selectedFlameTop_3; // 0x380(0x08)
	int32_t CurComboCount; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TMap<int32_t, struct FLinearColor> ComboColorMap; // 0x390(0x50)
	struct FIntPoint ComboFlamesCountRange; // 0x3e0(0x08)
	struct FLinearColor ComboFlamesColorLow; // 0x3e8(0x10)
	struct FLinearColor ComboFlamesColorHigh; // 0x3f8(0x10)

	void SetComboCountVisibleWithAnim(int32_t InComboCount); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetComboCountVisibleWithAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComboOver(); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.ComboOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCombo(); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.UpdateCombo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerFocusChanged(struct AActor* Target, float InFocusChange); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.PlayerFocusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNumMeters(int32_t NumMeters); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetNumMeters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterData(float MeterPercent); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetMeterData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateAncientMagicBarCount(struct UObject* Caller, int32_t int); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.UpdateAncientMagicBarCount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateComboCount(struct UObject* Caller, int32_t int); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.UpdateComboCount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpellUnlocked(struct UObject* Caller, struct FString String); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SpellUnlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CooldownPickupCollected(struct UObject* Caller); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.CooldownPickupCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FinisherMeter(int32_t EntryPoint); // Function UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.ExecuteUbergraph_UI_BP_FinisherMeter // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

