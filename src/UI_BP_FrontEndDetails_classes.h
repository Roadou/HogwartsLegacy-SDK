// WidgetBlueprintGeneratedClass UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C
// Size: 0x380 (Inherited: 0x328)
struct UUI_BP_FrontEndDetails_C : UPhoenixUserWidget {
	struct UVerticalBox* characterContent; // 0x328(0x08)
	struct UHorizontalBox* characterTimeData; // 0x330(0x08)
	struct UPhoenixTextBlock* Description; // 0x338(0x08)
	struct UOverlay* detailsLegend; // 0x340(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x348(0x08)
	struct UPhoenixTextBlock* detailsLocation; // 0x350(0x08)
	struct UPhoenixTextBlock* detailsTitle; // 0x358(0x08)
	struct UVerticalBox* Header; // 0x360(0x08)
	struct UImage* headerDivider; // 0x368(0x08)
	struct UPhoenixTextBlock* PlayTime; // 0x370(0x08)
	struct UPhoenixTextBlock* SaveTime; // 0x378(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetButtonDetails(struct FString ButtonDescription); // Function UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.SetButtonDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDetailsLegend(struct TArray<struct FLegendItemData>& LegendArray); // Function UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.SetDetailsLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCharacterDetails(bool IsNewGame, struct FString CharacterName, struct FString Description, struct FSaveGameInfo LatestSave); // Function UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.SetCharacterDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

