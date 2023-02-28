// WidgetBlueprintGeneratedClass UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C
// Size: 0x360 (Inherited: 0x268)
struct UUI_BP_ItemScrollBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UGridBackground* GridBackground_1; // 0x270(0x08)
	struct UOverlay* GridOverlayContainer; // 0x278(0x08)
	struct UUniformGridPanel* IconGrid; // 0x280(0x08)
	struct UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x288(0x08)
	int32_t Stride; // 0x290(0x04)
	int32_t NumRowsDisplayed; // 0x294(0x04)
	int32_t IconCount; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UIconButtonWidget*> Buttons; // 0x2a0(0x10)
	struct UIconButtonWidget* IconClass; // 0x2b0(0x08)
	struct UUserWidget* ParentWidget; // 0x2b8(0x08)
	struct FVector2D IconSize; // 0x2c0(0x08)
	bool IsInitialized; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float ScrollbarThickness; // 0x2cc(0x04)
	struct FVector2D Size; // 0x2d0(0x08)
	struct FMargin SlotPadding; // 0x2d8(0x10)
	struct FMargin GridPadding; // 0x2e8(0x10)
	bool ShowBackgroundGrid; // 0x2f8(0x01)
	bool Container or Inventory; // 0x2f9(0x01)
	bool CanCache; // 0x2fa(0x01)
	char pad_2FB[0x5]; // 0x2fb(0x05)
	struct FMulticastInlineDelegate ScrollBoxEntered; // 0x300(0x10)
	struct FMulticastInlineDelegate ScrollBoxExited; // 0x310(0x10)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x340(0x10)
	int32_t LastHoveredIndex; // 0x350(0x04)
	float IconGrid Padding Top; // 0x354(0x04)
	enum class EOrientation Orientation; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float BottomScrollOverlap; // 0x35c(0x04)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FakeButtonHoveredEvent(int32_t HoveredButtonIndex); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.FakeButtonHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonUnhovered(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonHovered(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonClicked(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCaching(bool ShouldCache); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ToggleCaching // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCursorPos(bool Container - Inventory); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetCursorPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCursorPos(bool& Container or Inventory); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetCursorPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindHoveredSlot(int32_t& HoveredIndex); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.FindHoveredSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockScrollBoxToVisibleIcons(int32_t NumIcons, int32_t ColumnCount); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.LockScrollBoxToVisibleIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitValues(struct UUserWidget* Parent, int32_t Rows, int32_t Columns, struct UIconButtonWidget* IconClass, struct FVector2D IconSize, int32_t IconCount); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.InitValues // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconClass(struct UIconButtonWidget* NewClass); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetIconClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ManageButtons(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ManageButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeSize(struct FVector2D& Size); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ComputeSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconPosition(struct UObject* GridSlot, int32_t CurrentCount); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetIconPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshGrid(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.RefreshGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGrid(struct UObject*& UniformGrid); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetGrid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStride(int32_t NewStride); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetStride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Repopulate(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.Repopulate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonClass(struct UIconButtonWidget* ButtonClass); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetButtonClass // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetUpScrollbox(struct UUserWidget* Parent, int32_t Rows, int32_t Columns, struct UIconButtonWidget* IconClass, struct FVector2D IconSize, int32_t IconCount); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetUpScrollbox // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void I_SetButtonClass(struct UWidget* Widget Class); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.I_SetButtonClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetCursorPos(bool Container - Inventory); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.I_SetCursorPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ItemScrollBox(int32_t EntryPoint); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ExecuteUbergraph_UI_BP_ItemScrollBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnButtonUnhovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonHovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonClicked__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollBoxExited__DelegateSignature(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ScrollBoxExited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollBoxEntered__DelegateSignature(); // Function UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ScrollBoxEntered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

