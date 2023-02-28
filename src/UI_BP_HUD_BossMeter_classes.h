// WidgetBlueprintGeneratedClass UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C
// Size: 0x351 (Inherited: 0x2e8)
struct UUI_BP_HUD_BossMeter_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ShowBossHealthMeter; // 0x2f0(0x08)
	struct UImage* CreatureGender; // 0x2f8(0x08)
	struct UCanvasPanel* HealthThresholds; // 0x300(0x08)
	struct UImage* Image_195; // 0x308(0x08)
	struct UInvalidationBox* InvalidationBoxBossMeter; // 0x310(0x08)
	struct UPhoenixTextBlock* Level; // 0x318(0x08)
	struct UCanvasPanel* targetHealth; // 0x320(0x08)
	struct UProgressBar* targetHealthBar; // 0x328(0x08)
	struct UCanvasPanel* TargetLevel; // 0x330(0x08)
	struct UPhoenixTextBlock* TargetName; // 0x338(0x08)
	bool HasBossTarget; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct AActor* TargetActor; // 0x348(0x08)
	bool IsGendered; // 0x350(0x01)

	void UpdateCreatureInfo(struct AActor* InCreature); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.UpdateCreatureInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthChanged(struct AActor* Target, float Health, bool Not sure); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.HealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentTargetActor(struct AActor* TargetActor, bool ShowName, bool ShowHealth); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.SetCurrentTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBossTarget(struct AActor* BossTarget, bool ShowBossName, bool ShowBossHealthBar); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.UpdateBossTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BossHealthChanged(struct AActor* BossTarget); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.BossHealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetAcquired(struct AActor* Target); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.TargetAcquired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetLost(); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.TargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HUD_BossMeter(int32_t EntryPoint); // Function UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.ExecuteUbergraph_UI_BP_HUD_BossMeter // (Final|UbergraphFunction) // @ game+0x38a7480
};

