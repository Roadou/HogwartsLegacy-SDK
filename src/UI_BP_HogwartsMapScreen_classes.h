// WidgetBlueprintGeneratedClass UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C
// Size: 0x7c9 (Inherited: 0x560)
struct UUI_BP_HogwartsMapScreen_C : UHogwartsMapScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UWidgetAnimation* HideMapTooltipRight; // 0x568(0x08)
	struct UWidgetAnimation* ShowMapTooltipRight; // 0x570(0x08)
	struct UWidgetAnimation* HideMapTooltipLeft; // 0x578(0x08)
	struct UWidgetAnimation* ShowMapTooltipLeft; // 0x580(0x08)
	struct UCanvasPanel* blurPanel; // 0x588(0x08)
	struct UImage* Cover; // 0x590(0x08)
	struct UUI_BP_MapsButton_C* HogsmeadeButton; // 0x598(0x08)
	struct URetainerBox* IconRetainer; // 0x5a0(0x08)
	struct UUI_BP_MapToolTip_C* mapToolTip; // 0x5a8(0x08)
	struct UUI_BP_MapsButton_C* OverlandButton; // 0x5b0(0x08)
	struct UOverlay* ratioOverlay; // 0x5b8(0x08)
	struct FMulticastInlineDelegate OnMenuItemChanged; // 0x5c0(0x10)
	struct UObject* Response; // 0x5d0(0x08)
	enum class EMapToolTipTypes ToolTipType; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct UObject* MapIconModel; // 0x5e0(0x08)
	bool MapMissionTrackingTutorialActive; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	struct FMapToolTipData ToolTipData; // 0x5f0(0x1b8)
	struct UWidgetAnimation* TooltipIntroAnimation; // 0x7a8(0x08)
	struct UWidgetAnimation* TooltipOutroAnimation; // 0x7b0(0x08)
	struct FHermesBPDelegateHandle OverlandButtonHighlightHandle; // 0x7b8(0x10)
	bool IsIconHovered; // 0x7c8(0x01)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseMapAndGuide(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.CloseMapAndGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuReadLegend(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MenuReadLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipAnimations(float CursorX); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetTooltipAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonPrompt(struct TArray<struct FLegendItemData>& Legends); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetButtonPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMapClicked(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnMapClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibility_Event(bool Enable); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetCoverVisibility_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnUnhovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLegend(struct TArray<struct FLegendItemData>& LegendStrings); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetLegend // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibilityAlpha_Event(float Alpha); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetCoverVisibilityAlpha_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HogwartsSelect_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsSelect_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HogwartsBack_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsBack_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HogwartsFastTravel_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsFastTravel_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HogwartsSetPath_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsSetPath_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHovered_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnHovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTipLegend_Event(struct FText& NewLegend); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetTipLegend_Event // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void MapChanged_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitMapScreen_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ExitMapScreen_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowOverlandMissionsAvailable(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowOverlandMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHogsmeadeMissionsAvailable(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowHogsmeadeMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysStopHighlightOverland(struct UObject* Caller); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.TutorialSaysStopHighlightOverland // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupOverlandTutorial(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetupOverlandTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHogsmeadeButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowHogsmeadeButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideHogsmeadeButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HideHogsmeadeButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowOverlandButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowOverlandButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideOverlandButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HideOverlandButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MapMove_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapMove_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInPressed_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomInPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInReleased_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomInReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutPressed_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomOutPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutReleased_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomOutReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableHogsmeadeButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.DisableHogsmeadeButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableOverlandButton(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.DisableOverlandButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUpdateToolTip_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnUpdateToolTip_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WayPointSet_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.WayPointSet_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WayPointUnset_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.WayPointUnset_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MapStart_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapStart_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void TierChanged_Event(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.TierChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HogwartsMapScreen(int32_t EntryPoint); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ExecuteUbergraph_UI_BP_HogwartsMapScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex); // Function UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnMenuItemChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

