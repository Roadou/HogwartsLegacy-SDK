// WidgetBlueprintGeneratedClass UI_BP_FG_IDP_GearHeader.UI_BP_FG_IDP_GearHeader_C
// Size: 0x368 (Inherited: 0x328)
struct UUI_BP_FG_IDP_GearHeader_C : UPhoenixUserWidget {
	struct UPhoenixImage* gearHeaderBackLeft; // 0x328(0x08)
	struct UPhoenixImage* gearHeaderBackMiddle; // 0x330(0x08)
	struct UPhoenixImage* gearHeaderBackRight; // 0x338(0x08)
	struct UBorder* GearRarityFlame; // 0x340(0x08)
	struct UPhoenixTextBlock* gearRarityTitle; // 0x348(0x08)
	struct UPhoenixTextBlock* gearTitle; // 0x350(0x08)
	struct UPhoenixImage* rarityHeaderBack; // 0x358(0x08)
	struct UBorder* rarityHeaderBackBorder; // 0x360(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_IDP_GearHeader.UI_BP_FG_IDP_GearHeader_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetHeaderData(struct FString headerTitle, struct FString headerQualtiy, struct FName Rarity, bool& ShowRarityGraphics); // Function UI_BP_FG_IDP_GearHeader.UI_BP_FG_IDP_GearHeader_C.SetHeaderData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

