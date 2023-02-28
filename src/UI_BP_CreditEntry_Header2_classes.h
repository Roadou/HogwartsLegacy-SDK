// WidgetBlueprintGeneratedClass UI_BP_CreditEntry_Header2.UI_BP_CreditEntry_Header2_C
// Size: 0x340 (Inherited: 0x328)
struct UUI_BP_CreditEntry_Header2_C : UPhoenixCreditEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UHorizontalBox* EntryBox; // 0x330(0x08)
	struct UPhoenixTextBlock* LineText; // 0x338(0x08)

	void SetCreditEntryInfo(struct FCreditEntry CreditEntry); // Function UI_BP_CreditEntry_Header2.UI_BP_CreditEntry_Header2_C.SetCreditEntryInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCreditEntryAnimProgress(float Progress); // Function UI_BP_CreditEntry_Header2.UI_BP_CreditEntry_Header2_C.SetCreditEntryAnimProgress // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreditEntry_Header2(int32_t EntryPoint); // Function UI_BP_CreditEntry_Header2.UI_BP_CreditEntry_Header2_C.ExecuteUbergraph_UI_BP_CreditEntry_Header2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

