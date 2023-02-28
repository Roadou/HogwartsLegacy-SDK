// WidgetBlueprintGeneratedClass UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C
// Size: 0x5e0 (Inherited: 0x4e0)
struct UUI_BP_HogsmeadeMapScreen_C : UHogsmeadeMapScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* HideMapTooltipRight; // 0x4e8(0x08)
	struct UWidgetAnimation* ShowMapTooltipRight; // 0x4f0(0x08)
	struct UWidgetAnimation* HideMapTooltipLeft; // 0x4f8(0x08)
	struct UWidgetAnimation* ShowMapTooltipLeft; // 0x500(0x08)
	struct UCanvasPanel* blurPanel; // 0x508(0x08)
	struct UImage* Cover; // 0x510(0x08)
	struct UUI_BP_MapsButton_C* HogwartsButton; // 0x518(0x08)
	struct URetainerBox* IconRetainer; // 0x520(0x08)
	struct UUI_BP_MapToolTip_C* mapToolTip; // 0x528(0x08)
	struct UUI_BP_MapsButton_C* OverlandButton; // 0x530(0x08)
	struct TArray<struct FString> LegendArray; // 0x538(0x10)
	enum class EMapToolTipTypes ToolTipType; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct FMulticastInlineDelegate UpdateMapLegend; // 0x550(0x10)
	struct UObject* MapIconHover; // 0x560(0x08)
	struct FMulticastInlineDelegate OnMapInput; // 0x568(0x10)
	int32_t CurrentMenuIndex; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FMulticastInlineDelegate OnMenuItemChanged; // 0x580(0x10)
	float ZoomTimer; // 0x590(0x04)
	float ZoomVal; // 0x594(0x04)
	bool areDungeonReqsShowing; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct ULegendItem* Travel; // 0x5a0(0x08)
	struct ULegendItem* Map; // 0x5a8(0x08)
	struct ULegendItem* Extra; // 0x5b0(0x08)
	struct UObject* MapIconModel; // 0x5b8(0x08)
	struct UWidgetAnimation* TooltipIntroAnimation; // 0x5c0(0x08)
	struct UWidgetAnimation* TooltipOutroAnimation; // 0x5c8(0x08)
	struct FHermesBPDelegateHandle HogwartsButtonHighlightHandle; // 0x5d0(0x10)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuReadLegend(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MenuReadLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTooltipAnimations(float CursorX); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetTooltipAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonPrompt(struct TArray<struct FLegendItemData>& NewParam); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetButtonPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapStart_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapStart_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MapStop_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapStop_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibility_Event(bool Enable); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetCoverVisibility_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnUnhovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLegend(struct TArray<struct FLegendItemData>& LegendStrings); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetLegend // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TierChanged_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.TierChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetCoverVisibilityAlpha_Event(float Alpha); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetCoverVisibilityAlpha_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetTipLegend_Event(struct FText& NewLegend); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetTipLegend_Event // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnHovered_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnHovered_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MapChanged_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapChanged_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitMapScreen_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ExitMapScreen_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHogwartsMissionsAvailable(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ShowHogwartsMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowOverlandMissionsAvailable(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ShowOverlandMissionsAvailable // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapMove_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapMove_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInPressed_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomInPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomInReleased_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomInReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutPressed_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomOutPressed_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ZoomOutReleased_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomOutReleased_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableOverlandButton(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.DisableOverlandButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableHogwartsButton(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.DisableHogwartsButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUpdateToolTip_Event(struct FMapToolTipData ToolTipData); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnUpdateToolTip_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WayPointSet_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.WayPointSet_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WayPointUnset_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.WayPointUnset_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void RegionInfoUpdated_Event(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.RegionInfoUpdated_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysStopHighlightHogwarts(struct UObject* Caller); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.TutorialSaysStopHighlightHogwarts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupFastTravelTutorial(); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetupFastTravelTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HogsmeadeMapScreen(int32_t EntryPoint); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ExecuteUbergraph_UI_BP_HogsmeadeMapScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnMenuItemChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMapInput__DelegateSignature(struct FKey Key); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnMapInput__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMapLegend__DelegateSignature(struct TArray<struct FString>& NewParam); // Function UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.UpdateMapLegend__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

