// WidgetBlueprintGeneratedClass UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C
// Size: 0xa94 (Inherited: 0x328)
struct UUI_BP_SimpleScrollBox_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UInvalidationBox* ContentInvalidationBox; // 0x330(0x08)
	struct UItemScrollBox* InternalScrollBox; // 0x338(0x08)
	struct UNamedSlot* ScrollContent; // 0x340(0x08)
	bool ComboBoxOpened; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float InputBuffer; // 0x34c(0x04)
	struct FMulticastInlineDelegate ScrollFocusLost; // 0x350(0x10)
	struct FVector2D WindowSize; // 0x360(0x08)
	float StickScrollStepSize; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FScrollBoxStyle Style; // 0x370(0x228)
	struct FScrollBarStyle BarStyle; // 0x598(0x4d0)
	enum class EOrientation Orientation; // 0xa68(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0xa69(0x01)
	char pad_A6A[0x2]; // 0xa6a(0x02)
	struct FVector2D ScrollbarThickness; // 0xa6c(0x08)
	struct FMargin ScrollbarPadding; // 0xa74(0x10)
	bool AlwaysShowScrollbar; // 0xa84(0x01)
	bool AlwaysShowScrollbarTrack; // 0xa85(0x01)
	bool AllowOverscroll; // 0xa86(0x01)
	bool AnimateWheelScrolling; // 0xa87(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0xa88(0x01)
	char pad_A89[0x3]; // 0xa89(0x03)
	float NavigationScrollPadding; // 0xa8c(0x04)
	float WheelScrollMultiplier; // 0xa90(0x04)

	void SetCanCache(bool CanCache); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.SetCanCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Scrollbar Thickness(struct FVector2D Thickness); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.Set Scrollbar Thickness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintConsolidatedUMGInputAxis(struct FUMGConsolidatedAxisInputData& AxisInputData); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BlueprintConsolidatedUMGInputAxis // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusLost(); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BlueprintFocusLost // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SimpleScrollBox(int32_t EntryPoint); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.ExecuteUbergraph_UI_BP_SimpleScrollBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ScrollFocusLost__DelegateSignature(); // Function UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.ScrollFocusLost__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

