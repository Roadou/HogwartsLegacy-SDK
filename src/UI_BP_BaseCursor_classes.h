// WidgetBlueprintGeneratedClass UI_BP_BaseCursor.UI_BP_BaseCursor_C
// Size: 0x310 (Inherited: 0x278)
struct UUI_BP_BaseCursor_C : UMenuCursorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* FadeAnim; // 0x280(0x08)
	struct UWidgetAnimation* SelectGlow; // 0x288(0x08)
	struct UWidgetAnimation* scaleOut; // 0x290(0x08)
	struct UWidgetAnimation* ScaleIn; // 0x298(0x08)
	struct UImage* BackLightOrbs; // 0x2a0(0x08)
	struct UCanvasPanel* Container; // 0x2a8(0x08)
	struct UCanvasPanel* CursorPanel; // 0x2b0(0x08)
	struct UImage* innerCircleSpellMinigame; // 0x2b8(0x08)
	struct UImage* innerPattern; // 0x2c0(0x08)
	struct UEditableTextBox* ItemCount; // 0x2c8(0x08)
	struct UImage* MouseCursorRings_2; // 0x2d0(0x08)
	struct UImage* overlaySelectGlow; // 0x2d8(0x08)
	struct UImage* overlaySpellMinigame; // 0x2e0(0x08)
	struct UImage* overlayStarGlow; // 0x2e8(0x08)
	struct UUI_BP_ExpandableToolTip_C* ToolTip; // 0x2f0(0x08)
	float AnimTime; // 0x2f8(0x04)
	bool TooltipShown; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct FVector2D TooltipOffset; // 0x300(0x08)
	float RelativeSize; // 0x308(0x04)
	float Playback Speed; // 0x30c(0x04)

	void I_GetTooltipLegendItem(int32_t LegendItemIndex, struct ULegendItem*& LegendItem); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_GetTooltipLegendItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_IsTooltipShowing(bool& IsShowing); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_IsTooltipShowing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_1(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOut(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeIn(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FromSpellMinigameCursor(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.FromSpellMinigameCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToSpellMinigameCursor(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.ToSpellMinigameCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCursor(bool ShouldShow); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.ShowCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepositionTooltip(struct FGeometry MyGeo); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.RepositionTooltip // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTooltip(bool ShouldShow); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.ShowTooltip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Scale(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.Scale // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipInfo(struct FString Title, bool TitleTranslatable, struct FString Description, bool DescriptionTranslatable, struct FString Quality, struct FText Legend, struct UUserWidget* ContentWidget, struct UUserWidget* NonExpandContent, struct FName RarityTier, bool UsesGenderIcon, bool IsMale, bool UsesLegendError, struct FText LegendErrorMessage, bool UseAlbinoIcon); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_setTooltipTitle(struct FString NewTitle, bool Translatable); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_setTooltipTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowTooltipProgressBar(bool ShouldShow); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowTooltipProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipProgressPercent(float Percent); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipProgressPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipLegend(struct FText NewLegend); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddNonExpandableContent(struct UUserWidget* NewContent, bool ClearExistingContent); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_AddNonExpandableContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipItemName(struct FString Title); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipItemName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ToggleRTInfoCallout(bool ShowCallout); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ToggleRTInfoCallout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTooltipLegendData(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipLegendData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnScaleCursor(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.OnScaleCursor // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CursorScaleUp(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorScaleUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CursorScaleDown(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorScaleDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CursorHide(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorHide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CursorShow(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorShow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ViewportSizeChange(struct UObject* Caller, int32_t Int1, int32_t Int2); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.ViewportSizeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipExpandState(bool IsExpanded, bool ShouldAnimate); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SetTooltipExpandState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpellMiniGameStart(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SpellMiniGameStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpellComplete(struct UObject* Caller, int32_t int); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SpellComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_HideTooltip(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_HideTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowTooltip(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_HideCursor(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_HideCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowCursor(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GlowEnd Event(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.GlowEnd Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectAnim(struct UObject* Caller); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cursor_FadeIn(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.Cursor_FadeIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cursor_FadeOut(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.Cursor_FadeOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void SelectGlowFinished_ScaleUp(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectGlowFinished_ScaleUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectGlowFinished_ScaleDown(); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectGlowFinished_ScaleDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BaseCursor(int32_t EntryPoint); // Function UI_BP_BaseCursor.UI_BP_BaseCursor_C.ExecuteUbergraph_UI_BP_BaseCursor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

