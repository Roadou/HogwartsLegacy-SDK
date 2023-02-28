// WidgetBlueprintGeneratedClass UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C
// Size: 0x2f4 (Inherited: 0x268)
struct UUI_BP_BroomBoostMeter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* CloseToGroundOn; // 0x270(0x08)
	struct UWidgetAnimation* BoostOn; // 0x278(0x08)
	struct UWidgetAnimation* ComboFlamesFade; // 0x280(0x08)
	struct UImage* BroomRaceIcon; // 0x288(0x08)
	struct UUI_BP_BroomBoostSection_C* section1; // 0x290(0x08)
	struct UImage* selectedFlameRight; // 0x298(0x08)
	struct UImage* selectedFlameTop; // 0x2a0(0x08)
	struct UImage* TurboMeter; // 0x2a8(0x08)
	struct TArray<struct UUI_BP_BroomBoostSection_C*> MeterSegments; // 0x2b0(0x10)
	struct UTexture2D* MeterIcon; // 0x2c0(0x08)
	struct FVector2D MeterIconSize; // 0x2c8(0x08)
	bool CloseToGroundState; // 0x2d0(0x01)
	bool BoostHeld; // 0x2d1(0x01)
	bool TurboState; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	struct FLinearColor TurboColor; // 0x2d4(0x10)
	struct FLinearColor BoostColor; // 0x2e4(0x10)

	void BoostInputChanged(bool BoostHeld); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.BoostInputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleBoostingEffect(bool ShouldShow); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ToggleBoostingEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCloseToGroundEffect(bool ShouldShow); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ToggleCloseToGroundEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMeter(float BoostPercent, bool IsInTurbo); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.UpdateMeter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetVisibleSegments(int32_t Upgrades); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.SetVisibleSegments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetNumUpgrades(int32_t& Upgrades); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.GetNumUpgrades // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SyncUpgradeSegments(); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.SyncUpgradeSegments // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomBoostMeter(int32_t EntryPoint); // Function UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ExecuteUbergraph_UI_BP_BroomBoostMeter // (Final|UbergraphFunction) // @ game+0x38a7480
};

