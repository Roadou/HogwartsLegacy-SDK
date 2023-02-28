// WidgetBlueprintGeneratedClass UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C
// Size: 0x534 (Inherited: 0x4c0)
struct UUI_BP_FG_ActionsButton_C : UFieldGuideButton_Actions {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UWidgetAnimation* HippogriffLoop; // 0x4c8(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x4d0(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4d8(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x4e0(0x08)
	struct UImage* actionMeter; // 0x4e8(0x08)
	struct UPhoenixTextBlock* ActionsLabel; // 0x4f0(0x08)
	struct UBorder* iconBorder; // 0x4f8(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x500(0x08)
	struct UPhoenixTextBlock* PercentText; // 0x508(0x08)
	struct UImage* StartImage; // 0x510(0x08)
	struct UBorder* TutorialHighlight; // 0x518(0x08)
	struct FString HouseFillID; // 0x520(0x10)
	float currentHippogriffFrame; // 0x530(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetHouseAssets(); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetHouseAssets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterPercent(float Percentage); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetMeterPercent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnHouseMeterFillLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.OnHouseMeterFillLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSetItemIndicatorVisibility(enum class ESlateVisibility InVisibility); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.OnSetItemIndicatorVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLockedState(bool IsLocked); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetLockedState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_ActionsButton(int32_t EntryPoint); // Function UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.ExecuteUbergraph_UI_BP_FG_ActionsButton // (Final|UbergraphFunction) // @ game+0x38a7480
};

