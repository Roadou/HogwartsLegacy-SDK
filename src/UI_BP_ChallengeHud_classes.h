// WidgetBlueprintGeneratedClass UI_BP_ChallengeHud.UI_BP_ChallengeHud_C
// Size: 0x358 (Inherited: 0x2e8)
struct UUI_BP_ChallengeHud_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ReadyWaveNumberOn; // 0x2f0(0x08)
	struct UWidgetAnimation* TimerWarningPulse; // 0x2f8(0x08)
	struct UWidgetAnimation* CounterUpdate; // 0x300(0x08)
	struct UWidgetAnimation* ChallengeHUDOn; // 0x308(0x08)
	struct UBorder* Border_2; // 0x310(0x08)
	struct UBorder* Border_3; // 0x318(0x08)
	struct UImage* ChallengeTrim; // 0x320(0x08)
	struct UImage* CounterBG; // 0x328(0x08)
	struct UImage* EnemyIcon; // 0x330(0x08)
	struct UPhoenixTextBlock* PhoenixTextBlock_1; // 0x338(0x08)
	struct UPhoenixTextBlock* PhoenixTextBlock_2; // 0x340(0x08)
	struct UPhoenixTextBlock* PhoenixTextBlock_3; // 0x348(0x08)
	struct UPhoenixTextBlock* WaveLabel; // 0x350(0x08)

	void SetWaveText(int32_t WaveNumber); // Function UI_BP_ChallengeHud.UI_BP_ChallengeHud_C.SetWaveText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ChallengeHud.UI_BP_ChallengeHud_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengeHud(int32_t EntryPoint); // Function UI_BP_ChallengeHud.UI_BP_ChallengeHud_C.ExecuteUbergraph_UI_BP_ChallengeHud // (Final|UbergraphFunction) // @ game+0x38a7480
};

