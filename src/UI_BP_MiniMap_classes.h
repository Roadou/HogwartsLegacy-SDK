// WidgetBlueprintGeneratedClass UI_BP_MiniMap.UI_BP_MiniMap_C
// Size: 0x8c1 (Inherited: 0x7b0)
struct UUI_BP_MiniMap_C : UMinimapManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UWidgetAnimation* FadeIcons; // 0x7b8(0x08)
	struct UWidgetAnimation* FadeFelixFelicis; // 0x7c0(0x08)
	struct UWidgetAnimation* Minimap_Intro_Quick; // 0x7c8(0x08)
	struct UWidgetAnimation* Minimap_Outro_Instant; // 0x7d0(0x08)
	struct UWidgetAnimation* Minimap_Intro_Instant; // 0x7d8(0x08)
	struct UWidgetAnimation* FadeCloud; // 0x7e0(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x7e8(0x08)
	struct UWidgetAnimation* POI_Ring_Pulse; // 0x7f0(0x08)
	struct UWidgetAnimation* Minimap_Intro; // 0x7f8(0x08)
	struct UImage* CloudyMap; // 0x800(0x08)
	struct URetainerBox* DissolvingRetainer; // 0x808(0x08)
	struct UUI_BP_MinimapDungeon_C* Dungeon; // 0x810(0x08)
	struct UImage* FelixFelicisEffect; // 0x818(0x08)
	struct URetainerBox* FelixFelicisRetainer; // 0x820(0x08)
	struct UImage* Frame; // 0x828(0x08)
	struct UUI_BP_MinimapHogsmeade_C* Hogsmeade; // 0x830(0x08)
	struct UUI_BP_MinimapHogwarts_C* Hogwarts; // 0x838(0x08)
	struct UImage* IntrusionAlert; // 0x840(0x08)
	struct UBorder* mapHolder; // 0x848(0x08)
	struct URetainerBox* minimapRetainer; // 0x850(0x08)
	struct UUI_BP_MinimapOverland_C* Overland; // 0x858(0x08)
	struct UImage* Player; // 0x860(0x08)
	struct UCanvasPanel* POI_Rings; // 0x868(0x08)
	struct UMinimapRetentionBox* RetentionBox; // 0x870(0x08)
	struct UCanvasPanel* Root; // 0x878(0x08)
	struct UUI_BP_MinimapSanctuary_C* Sanctuary; // 0x880(0x08)
	struct UUI_BP_MinimapTents_C* Tents; // 0x888(0x08)
	struct UUI_BP_MinimapTutorial_C* Tutorial; // 0x890(0x08)
	struct UOverlay* TutorialHighlight; // 0x898(0x08)
	bool UsingHoverDrone; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	float POIRePulseTime; // 0x8a4(0x04)
	bool POICollected; // 0x8a8(0x01)
	bool InstantFadeIn; // 0x8a9(0x01)
	bool InstantFadeOut; // 0x8aa(0x01)
	bool isCloudy; // 0x8ab(0x01)
	char pad_8AC[0x4]; // 0x8ac(0x04)
	struct FMulticastInlineDelegate OnMinimapScaleChanged; // 0x8b0(0x10)
	bool isFelixFelicisOn; // 0x8c0(0x01)

	void TogglePOIFlash(bool TurnOn); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.TogglePOIFlash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimationOutroDone(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.AnimationOutroDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimationIntroDone(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.AnimationIntroDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play Mini Map Outro(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.Play Mini Map Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayMiniMapIntro(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.PlayMiniMapIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMiniMapEvent(bool Enable); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.ShowMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RevealMiniMapEvent(bool InstantIntro); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.RevealMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UnrevealMiniMapEvent(bool InstantIntro); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.UnrevealMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowPathLayerEvent(bool Enable); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.ShowPathLayerEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIntrusionAlertOnBP(bool Enable); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.SetIntrusionAlertOnBP // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InPOIRange(struct UObject* Caller, int32_t int); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.InPOIRange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DistanceToPOI(struct UObject* Caller, float float); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.DistanceToPOI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void Repulse(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.Repulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void POICollectedNotification(struct UObject* Caller); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.POICollectedNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartMinimapTutorial(struct UObject* Caller); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.StartMinimapTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MinimapTutorialComplete(struct UObject* Caller); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.MinimapTutorialComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOnCloudyMiniMapEvent(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOnCloudyMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TurnOffCloudyMiniMapEvent(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOffCloudyMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetVisibleOpacityMiniMapEvent(bool Visible, float Opacity); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.SetVisibleOpacityMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetOpacityMiniMapEvent(float Opacity); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.SetOpacityMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void fadeInSimple(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.fadeInSimple // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void fadeOutSimple(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.fadeOutSimple // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOpacityQucikMiniMapEvent(float Opacity, float MapOpacity); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.SetOpacityQucikMiniMapEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MinimapScaleChanged(enum class EMiniMapSizeOption MiniMapSize); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.MinimapScaleChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TurnOnCloudyMiniMapDarkEvent(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOnCloudyMiniMapDarkEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EventTurnOnFelixFelicisMap(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.EventTurnOnFelixFelicisMap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EventTurnOffFelixFelicisMap(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.EventTurnOffFelixFelicisMap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FelixFelicisPotionStart(struct UObject* Caller); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.FelixFelicisPotionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FelixFelicisPotionStop(struct UObject* Caller); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.FelixFelicisPotionStop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoMapTransitionStart(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.DoMapTransitionStart // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DoMapTransitionEnd(); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.DoMapTransitionEnd // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MiniMap(int32_t EntryPoint); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.ExecuteUbergraph_UI_BP_MiniMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnMinimapScaleChanged__DelegateSignature(enum class EMiniMapSizeOption NewMapSize); // Function UI_BP_MiniMap.UI_BP_MiniMap_C.OnMinimapScaleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

