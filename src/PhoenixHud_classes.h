// BlueprintGeneratedClass PhoenixHud.PhoenixHud_C
// Size: 0x638 (Inherited: 0x610)
struct APhoenixHud_C : APhoenixHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x618(0x08)
	struct UUserWidget* Subtitle_HUD; // 0x620(0x08)
	bool HideHUD_Override; // 0x628(0x01)
	bool LockVisibility; // 0x629(0x01)
	char pad_62A[0x6]; // 0x62a(0x06)
	struct UBP_HUD_Audio_C* AudioHUD; // 0x630(0x08)

	void GetSubtitleHUD(struct UUserWidget*& SubtitleHUD); // Function PhoenixHud.PhoenixHud_C.GetSubtitleHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MakeHudWidget(); // Function PhoenixHud.PhoenixHud_C.MakeHudWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function PhoenixHud.PhoenixHud_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetHudWidgetVisibility(enum class ESlateVisibility Visibility); // Function PhoenixHud.PhoenixHud_C.I_SetHudWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetHudElementVisibility(struct FString HUDElementName, enum class ESlateVisibility Visibility, struct FString Context, struct UObject* Provider); // Function PhoenixHud.PhoenixHud_C.I_SetHudElementVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function PhoenixHud.PhoenixHud_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ToggleHUD(bool Show, bool AllowSelectiveTicking, bool AllowAnimation); // Function PhoenixHud.PhoenixHud_C.ToggleHUD // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PhoenixHud.PhoenixHud_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_PhoenixHud(int32_t EntryPoint); // Function PhoenixHud.PhoenixHud_C.ExecuteUbergraph_PhoenixHud // (Final|UbergraphFunction) // @ game+0x38a7480
};

