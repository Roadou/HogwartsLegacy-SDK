// WidgetBlueprintGeneratedClass UI_BP_RP_TreasureMap.UI_BP_RP_TreasureMap_C
// Size: 0x340 (Inherited: 0x329)
struct UUI_BP_RP_TreasureMap_C : UUI_BP_RichPaperType_Base_C {
	char pad_329[0x7]; // 0x329(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Background; // 0x338(0x08)

	void SetRichPaperData(struct FString HeaderIcon, struct FString HeaderText, struct FString BodyIcon, struct FString BodyText, struct FString FooterIcon, struct FString footerText); // Function UI_BP_RP_TreasureMap.UI_BP_RP_TreasureMap_C.SetRichPaperData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RP_TreasureMap(int32_t EntryPoint); // Function UI_BP_RP_TreasureMap.UI_BP_RP_TreasureMap_C.ExecuteUbergraph_UI_BP_RP_TreasureMap // (Final|UbergraphFunction) // @ game+0x38a7480
};

