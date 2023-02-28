// BlueprintGeneratedClass UI_BPI_Cursor.UI_BPI_Cursor_C
// Size: 0x28 (Inherited: 0x28)
struct UUI_BPI_Cursor_C : UInterface {

	void I_GetTooltipLegendItem(int32_t LegendItemIndex, struct ULegendItem*& LegendItem); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_GetTooltipLegendItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipLegendData(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipLegendData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ToggleRTInfoCallout(bool ShowCallout); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_ToggleRTInfoCallout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipItemName(struct FString Title); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipItemName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddNonExpandableContent(struct UUserWidget* NewContent, bool ClearExistingContent); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_AddNonExpandableContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_IsTooltipShowing(bool& IsShowing); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_IsTooltipShowing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipLegend(struct FText NewLegend); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipProgressPercent(float Percent); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipProgressPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowTooltipProgressBar(bool ShouldShow); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowTooltipProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_setTooltipTitle(struct FString NewTitle, bool Translatable); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_setTooltipTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_HideCursor(); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_HideCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowCursor(); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipInfo(struct FString Title, bool TitleTranslatable, struct FString Description, bool DescriptionTranslatable, struct FString Quality, struct FText Legend, struct UUserWidget* ContentWidget, struct UUserWidget* NonExpandContent, struct FName RarityTier, bool UsesGenderIcon, bool IsMale, bool UsesLegendError, struct FText LegendErrorMessage, bool UseAlbinoIcon); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_HideTooltip(); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_HideTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowTooltip(); // Function UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

