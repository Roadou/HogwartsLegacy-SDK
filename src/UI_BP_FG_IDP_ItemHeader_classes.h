// WidgetBlueprintGeneratedClass UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C
// Size: 0x341 (Inherited: 0x328)
struct UUI_BP_FG_IDP_ItemHeader_C : UPhoenixUserWidget {
	struct UImage* AlbinoIcon; // 0x328(0x08)
	struct UImage* GenderIcon; // 0x330(0x08)
	struct UPhoenixTextBlock* itemTitle; // 0x338(0x08)
	bool CachedIsMale; // 0x340(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCreatureIcons(bool IsAlbino, bool useGenderIcon, bool IsMale); // Function UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C.SetCreatureIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHeaderData(struct FString headerTitle, bool TranslateTitle); // Function UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C.SetHeaderData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

