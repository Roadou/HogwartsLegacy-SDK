// WidgetBlueprintGeneratedClass UI_BP_CompassIcon.UI_BP_CompassIcon_C
// Size: 0x2c9 (Inherited: 0x270)
struct UUI_BP_CompassIcon_C : UHUDCompassIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeDistanceText; // 0x278(0x08)
	struct UHorizontalBox* DistancePanel; // 0x280(0x08)
	struct UPhoenixTextBlock* DistanceText; // 0x288(0x08)
	struct UImage* ElevationArrow; // 0x290(0x08)
	struct UVerticalBox* IconContainer; // 0x298(0x08)
	struct UImage* iconImage; // 0x2a0(0x08)
	struct UBorder* IndicatorArrow; // 0x2a8(0x08)
	struct UImage* LockBadge; // 0x2b0(0x08)
	struct UImage* Pulse; // 0x2b8(0x08)
	struct UImage* TrackBorder; // 0x2c0(0x08)
	bool DistanceNumbersShown; // 0x2c8(0x01)

	void SetIconTexture(struct UTexture2D* Texture); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconTexture // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCompassIconVisibility(enum class ESlateVisibility NewVisibility); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetCompassIconVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCompassIconColorAndOpacity(struct FLinearColor NewColor); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetCompassIconColorAndOpacity // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIconTextureByName(struct FString IconName, bool ShowPulse); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconTextureByName // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetElevationVisibility(enum class ESlateVisibility NewVisibility); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetElevationVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIconScale(float Scale); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconScale // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetDistanceValue(int32_t Distance); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetDistanceValue // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIconOpacity(float Opacity); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconOpacity // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowDistance(bool ShouldShow); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.ShowDistance // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowIndicatorArrow(bool ShouldShow); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.ShowIndicatorArrow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIndicatorArrowRotation(float DegreeRot); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIndicatorArrowRotation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIconSize(struct FVector2D NewSize); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconSize // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetPulse(bool Enable); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetPulse // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetRotation(float Angle); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetRotation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TogglePathingBorder(bool ShowBorder, struct FString OutlineIconName); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.TogglePathingBorder // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TrackBorderLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.TrackBorderLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetElevationDistance(int32_t Distance); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetElevationDistance // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ToggleLockBadge(bool ShowLock); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.ToggleLockBadge // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CompassIcon(int32_t EntryPoint); // Function UI_BP_CompassIcon.UI_BP_CompassIcon_C.ExecuteUbergraph_UI_BP_CompassIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

