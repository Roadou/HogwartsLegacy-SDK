// WidgetBlueprintGeneratedClass UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C
// Size: 0x42c (Inherited: 0x300)
struct UUI_BP_QuickHealthActions_C : UQuickHealthActions {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* LowHealthIntro; // 0x308(0x08)
	struct UWidgetAnimation* PotionAlert; // 0x310(0x08)
	struct UWidgetAnimation* LowHealthEnd; // 0x318(0x08)
	struct UWidgetAnimation* LowHealth; // 0x320(0x08)
	struct UWidgetAnimation* FullHealth; // 0x328(0x08)
	struct UWidgetAnimation* HighlightMeter; // 0x330(0x08)
	struct UWidgetAnimation* LevelUpArrows; // 0x338(0x08)
	struct UWidgetAnimation* HealthItemFullyRecharged; // 0x340(0x08)
	struct UImage* Glow; // 0x348(0x08)
	struct UImage* HealthAlertGlow; // 0x350(0x08)
	struct UProgressBar* HealthAlertPulse; // 0x358(0x08)
	struct UUI_BP_HealthIncrease_C* HealthIncreaseTag; // 0x360(0x08)
	struct USizeBox* healthMeterBack; // 0x368(0x08)
	struct UImage* Image_99; // 0x370(0x08)
	struct UCanvasPanel* LowHealthAlert; // 0x378(0x08)
	struct UProgressBar* newHealthBar; // 0x380(0x08)
	struct UImage* PotionFresnal; // 0x388(0x08)
	struct UCanvasPanel* PotionHighlight; // 0x390(0x08)
	struct UPhoenixTextBlock* quickActionCount; // 0x398(0x08)
	struct FSlateColor Color_None; // 0x3a0(0x28)
	struct FSlateColor Color_Positive; // 0x3c8(0x28)
	struct FTimerHandle HealthCooldownTimer; // 0x3f0(0x08)
	struct UCurveFloat* CriticalHealth; // 0x3f8(0x08)
	float HealthMax; // 0x400(0x04)
	float HealthPercent; // 0x404(0x04)
	bool IsLowHealth; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t PotionCount; // 0x40c(0x04)
	bool WasCritical; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FLinearColor HealthBarColor; // 0x414(0x10)
	bool HasPotion; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	float LowHealthPlayAnimationThreshold; // 0x428(0x04)

	void CheckCriticalHealth(); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.CheckCriticalHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLowHealthWarning(float HealthMax, float HealthPercent); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.SetLowHealthWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLevelUpAnimation(int32_t NewHealthDelta); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.ShowLevelUpAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSetMaxHealth(float NewHealthSize); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnSetMaxHealth // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateHealthBar(float NewPct); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.UpdateHealthBar // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysStopHealthHighlight(struct UObject* Caller); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.TutorialSaysStopHealthHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysStartHealthHighlight(struct UObject* Caller); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.TutorialSaysStartHealthHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LowHealthLoop(); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.LowHealthLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnLowHealth(); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnLowHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayItemCount(int32_t Count); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.DisplayItemCount // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_QuickHealthActions(int32_t EntryPoint); // Function UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.ExecuteUbergraph_UI_BP_QuickHealthActions // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

