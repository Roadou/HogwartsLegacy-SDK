// WidgetBlueprintGeneratedClass UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C
// Size: 0x2ea (Inherited: 0x268)
struct UUI_BP_BroomBoostSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowBoosting; // 0x270(0x08)
	struct UWidgetAnimation* meterPulse; // 0x278(0x08)
	struct UWidgetAnimation* HideBoostAnim; // 0x280(0x08)
	struct UWidgetAnimation* CloseToGroundAnim; // 0x288(0x08)
	struct UWidgetAnimation* BoostingAnim; // 0x290(0x08)
	struct UImage* BarFillGlint; // 0x298(0x08)
	struct UProgressBar* Meter; // 0x2a0(0x08)
	struct UImage* pulseFresnel; // 0x2a8(0x08)
	struct UImage* sparkles; // 0x2b0(0x08)
	bool IsMeterFull; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FMulticastInlineDelegate MeterIsFull; // 0x2c0(0x10)
	struct FMulticastInlineDelegate MeterIsNotFull; // 0x2d0(0x10)
	int32_t meterPositionIndex; // 0x2e0(0x04)
	int32_t maxPositionIndex; // 0x2e4(0x04)
	bool BoostEffectActive; // 0x2e8(0x01)
	bool CloseToGroundEffectActive; // 0x2e9(0x01)

	void ToggleBoostingEffect(bool ShouldShow); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ToggleBoostingEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCloseToGroundEffect(bool ShouldShow); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ToggleCloseToGroundEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterFillColor(struct FLinearColor NewColor); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterFillColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterPosition(int32_t Index, int32_t MaxIndex); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterPercent(float NewPercent); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomBoostSection(int32_t EntryPoint); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ExecuteUbergraph_UI_BP_BroomBoostSection // (Final|UbergraphFunction) // @ game+0x38a7480
	void MeterIsNotFull__DelegateSignature(); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.MeterIsNotFull__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MeterIsFull__DelegateSignature(); // Function UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.MeterIsFull__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

