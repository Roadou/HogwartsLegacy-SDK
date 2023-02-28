// WidgetBlueprintGeneratedClass UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C
// Size: 0x7a1 (Inherited: 0x4e0)
struct UUI_BP_OverlandMapScreen_C : UOverlandMapScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowRegionInfo; // 0x4e8(0x08)
	struct UWidgetAnimation* HideMapTooltipRight; // 0x4f0(0x08)
	struct UWidgetAnimation* ShowMapTooltipRight; // 0x4f8(0x08)
	struct UWidgetAnimation* HideMapTooltipLeft; // 0x500(0x08)
	struct UWidgetAnimation* ShowMapTooltipLeft; // 0x508(0x08)
	struct UCanvasPanel* blurPanel; // 0x510(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x518(0x08)
	struct UImage* Cover; // 0x520(0x08)
	struct UUI_BP_MapsButton_C* HogsmeadeButton; // 0x528(0x08)
	struct UUI_BP_MapsButton_C* HogwartsButton; // 0x530(0x08)
	struct URetainerBox* IconRetainer; // 0x538(0x08)
	struct UUI_BP_MapToolTip_C* mapToolTip; // 0x540(0x08)
	struct UOverlay* tooltipOverlay; // 0x548(0x08)
	struct TArray<struct FString> LegendArray; // 0x550(0x10)
	bool areDungeonReqsShowing; // 0x560(0x01)
	enum class EMapToolTipTypes ToolTipType; // 0x561(0x01)
	char pad_562[0x6]; // 0x562(0x06)
	struct FMulticastInlineDelegate UpdateMapLegend; // 0x568(0x10)
	struct UObject* MapIconHover; // 0x578(0x08)
	struct FMulticastInlineDelegate OnMapInput; // 0x580(0x10)
	int32_t CurrentMenuIndex; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct TArray<struct FString> LocationNames; // 0x598(0x10)
	struct FMulticastInlineDelegate OnMenuItemChanged; // 0x5a8(0x10)
	bool isNavBarAnimating; // 0x5b8(0x01)
	bool DownLastFrame_LeftStick; // 0x5b9(0x01)
	bool IsOverlandMode; // 0x5ba(0x01)
	bool IsFilterShowing; // 0x5bb(0x01)
	float ZoomTimer; // 0x5bc(0x04)
	float ZoomVal; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UObject* MapIconModel; // 0x5c8(0x08)
	struct FMapToolTipData ToolTipData; // 0x5d0(0x1b8)
	bool isPopupShowing; // 0x788(0x01)
	char pad_789[0x7]; // 0x789(0x07)
	struct UWidgetAnimation* TooltipIntroAnimation; // 0x790(0x08)
	struct UWidgetAnimation* TooltipOutroAnimation; // 0x798(0x08)
	bool isRegionInfoShowing; // 0x7a0(0x01)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustTooltipForViewportWidth(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.AdjustTooltipForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuReadLegend(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MenuReadLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipAnimations(float CursorX); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetTooltipAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Map Legend(struct FText NewLegendText); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Set Map Legend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activate Map Based On Hover(bool& Activated); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Activate Map Based On Hover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFieldGuideLegend(struct TArray<struct FLegendItemData>& LegendItems); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetFieldGuideLegend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TierHide(struct AUI_BP_MapRegion_C* Region, bool Visible); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.TierHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLegend(struct TArray<struct FLegendItemData>& LegendStrings); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetLegend // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibilityAlpha_Event(float Alpha); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetCoverVisibilityAlpha_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHovered_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnHovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTipLegend_Event(struct FText& NewLegend); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetTipLegend_Event // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void MapChanged_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitMapScreen_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ExitMapScreen_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowHogwartsMissionsAvailable(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ShowHogwartsMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowHogsmeadeMissionsAvailable(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ShowHogsmeadeMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RegionHovered_Event(enum class ERegionType MapRegion, int32_t RegionIndex, struct UUserWidget* IconWidget); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionHovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MapMove_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapMove_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInPressed_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomInPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInReleased_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomInReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutPressed_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomOutPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutReleased_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomOutReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableHogwartsButton(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.DisableHogwartsButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableHogsmeadeButton(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.DisableHogsmeadeButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUpdateToolTip_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnUpdateToolTip_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WayPointSet_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.WayPointSet_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WayPointUnset_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.WayPointUnset_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RegionInfoUpdated_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionInfoUpdated_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLevelName_Event(struct FString LevelName); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetLevelName_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnUnhovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibility_Event(bool Enable); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetCoverVisibility_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TierChanged_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.TierChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegionChange_Event(struct APhoenixMapRegion* regionActor, struct APhoenixMapRegion* subregionActor, bool noString); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionChange_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapStop_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapStop_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MapStart_Event(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapStart_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_OverlandMapScreen(int32_t EntryPoint); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ExecuteUbergraph_UI_BP_OverlandMapScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnMenuItemChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMapInput__DelegateSignature(struct FKey Key); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnMapInput__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMapLegend__DelegateSignature(struct TArray<struct FString>& LegendArray); // Function UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.UpdateMapLegend__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

