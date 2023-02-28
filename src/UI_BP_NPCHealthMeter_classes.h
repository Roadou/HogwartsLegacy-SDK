// WidgetBlueprintGeneratedClass UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C
// Size: 0x40b (Inherited: 0x2e8)
struct UUI_BP_NPCHealthMeter_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2f0(0x08)
	struct UWidgetAnimation* DeathFadeOut; // 0x2f8(0x08)
	struct UWidgetAnimation* OffsetHealthbarReset; // 0x300(0x08)
	struct UWidgetAnimation* OffsetHealthbar; // 0x308(0x08)
	struct UWidgetAnimation* FadeIn; // 0x310(0x08)
	struct UImage* Albino; // 0x318(0x08)
	struct UPhoenixImage* Bg; // 0x320(0x08)
	struct UImage* CreatureGender; // 0x328(0x08)
	struct UUI_BP_CreatureStatusSummary_C* CreatureStatus; // 0x330(0x08)
	struct UProgressBar* DamageBar; // 0x338(0x08)
	struct UInvalidationBox* InvalidationBoxNPCHealthMeter; // 0x340(0x08)
	struct UPhoenixTextBlock* Level; // 0x348(0x08)
	struct UImage* LevelBox; // 0x350(0x08)
	struct UPhoenixImage* Poof1; // 0x358(0x08)
	struct UPhoenixImage* Poof2; // 0x360(0x08)
	struct UPhoenixImage* Poof3; // 0x368(0x08)
	struct UPhoenixImage* Poof4; // 0x370(0x08)
	struct UPhoenixImage* Poof5; // 0x378(0x08)
	struct UPhoenixImage* Poof6; // 0x380(0x08)
	struct UPhoenixImage* Poof7; // 0x388(0x08)
	struct UPhoenixImage* Poof8; // 0x390(0x08)
	struct UPhoenixImage* Poof9; // 0x398(0x08)
	struct UPhoenixImage* Spacer; // 0x3a0(0x08)
	struct UImage* Swirls; // 0x3a8(0x08)
	struct UImage* Swirls2; // 0x3b0(0x08)
	struct UBorder* TargetCallout; // 0x3b8(0x08)
	struct UVerticalBox* TargetCalloutVerticalBox; // 0x3c0(0x08)
	struct UCanvasPanel* targetHealth; // 0x3c8(0x08)
	struct UProgressBar* targetHealthBar; // 0x3d0(0x08)
	struct UCanvasPanel* TargetLevel; // 0x3d8(0x08)
	struct UPhoenixTextBlock* TargetName; // 0x3e0(0x08)
	struct AActor* CurrentTargetActor; // 0x3e8(0x08)
	bool PlayingDeathFadeOut; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float FadeOutDelay; // 0x3f4(0x04)
	bool ShouldShowHealth; // 0x3f8(0x01)
	bool ShouldShowName; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct AActor* LastTargetActor; // 0x400(0x08)
	bool DesiredFadeState; // 0x408(0x01)
	bool CurrentFadeState; // 0x409(0x01)
	bool FadeOutRequested; // 0x40a(0x01)

	void CheckForNewTarget(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CheckForNewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayFadeAnimation(bool FadeIn); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.PlayFadeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLevelTextColor(float Level); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetLevelTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveStealthDamageIndication(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.RemoveStealthDamageIndication // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateStealthKillStatus(bool InStealthRange); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.UpdateStealthKillStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHealthBarColor(enum class EUIHealthBarType HealthBarType); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetHealthBarColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentTargetActor(struct AActor* TargetActor, bool ShowName, bool ShowHealth); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetCurrentTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthChanged(struct AActor* Target, float Health, bool Not sure); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.HealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureInfo(struct AActor* InCreature); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CreatureInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWildCreature(struct UCreature_NurtureComponent* NurtureComponent); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetupWildCreature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupTamedCreature(struct UCreatureState* CreatureState); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetupTamedCreature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTarget(struct AActor* Target, bool ShowName, bool ShowHealthBar); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.UpdateTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetDummyHealthBarColor(struct UObject* Caller); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetDummyHealthBarColor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestoreEnemyHealthBarColor(struct UObject* Caller); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.RestoreEnemyHealthBarColor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetAcquired(struct AActor* Target); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.TargetAcquired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetLost(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.TargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CanStealthKill(struct UObject* Caller, int32_t int); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CanStealthKill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void SetColorBlindMode(struct UObject* Caller, int32_t int); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetColorBlindMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On FadeOut Complete(); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.On FadeOut Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NPCHealthMeter(int32_t EntryPoint); // Function UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.ExecuteUbergraph_UI_BP_NPCHealthMeter // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

