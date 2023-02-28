// WidgetBlueprintGeneratedClass UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C
// Size: 0x304 (Inherited: 0x268)
struct UUI_BP_FinisherMeterSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* CooldownGlint; // 0x270(0x08)
	struct UWidgetAnimation* CooldownFlourish; // 0x278(0x08)
	struct UWidgetAnimation* FocusGainedAnim; // 0x280(0x08)
	struct UWidgetAnimation* MeterFullAnim; // 0x288(0x08)
	struct UImage* BarFillGlint; // 0x290(0x08)
	struct UBorder* flameBorder; // 0x298(0x08)
	struct UBorder* flameBorder_2; // 0x2a0(0x08)
	struct UProgressBar* Meter; // 0x2a8(0x08)
	struct UPhoenixImage* meterFresnel; // 0x2b0(0x08)
	struct UImage* meterOutlineLeft; // 0x2b8(0x08)
	struct UImage* meterOutlineMiddle; // 0x2c0(0x08)
	struct UImage* meterOutlineRight; // 0x2c8(0x08)
	struct UImage* sparkles; // 0x2d0(0x08)
	bool canShowGlow; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FMulticastInlineDelegate MeterIsFull; // 0x2e0(0x10)
	struct FMulticastInlineDelegate MeterIsNotFull; // 0x2f0(0x10)
	int32_t meterPositionIndex; // 0x300(0x04)

	void Set Meter Glint(); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.Set Meter Glint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterPosition(int32_t Index); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.SetMeterPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterPercent(float NewPercent); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.SetMeterPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FinisherMeterSection(int32_t EntryPoint); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.ExecuteUbergraph_UI_BP_FinisherMeterSection // (Final|UbergraphFunction) // @ game+0x38a7480
	void MeterIsNotFull__DelegateSignature(); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.MeterIsNotFull__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MeterIsFull__DelegateSignature(); // Function UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.MeterIsFull__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

