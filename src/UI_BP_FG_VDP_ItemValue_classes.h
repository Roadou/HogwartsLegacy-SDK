// WidgetBlueprintGeneratedClass UI_BP_FG_VDP_ItemValue.UI_BP_FG_VDP_ItemValue_C
// Size: 0x348 (Inherited: 0x328)
struct UUI_BP_FG_VDP_ItemValue_C : UPhoenixUserWidget {
	struct UHorizontalBox* countBox; // 0x328(0x08)
	struct UVerticalBox* gearHeader; // 0x330(0x08)
	struct UUI_BP_MoneyBar_C* moneyBar; // 0x338(0x08)
	struct UTextBlock* Quantity; // 0x340(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_VDP_ItemValue.UI_BP_FG_VDP_ItemValue_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateCost(int32_t PlayerMoney, int32_t Cost, int32_t SellBuyQuantity, bool IsBuying); // Function UI_BP_FG_VDP_ItemValue.UI_BP_FG_VDP_ItemValue_C.UpdateCost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

