// WidgetBlueprintGeneratedClass UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C
// Size: 0x33c (Inherited: 0x288)
struct UUI_BP_FG_CategoryNavBarHorizontal_C : UCategoryNavBarWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* CategoryListH; // 0x290(0x08)
	struct UOverlay* LeftButtonOverlay; // 0x298(0x08)
	struct UPhoenixRichTextBlock* leftDpad; // 0x2a0(0x08)
	struct UButton* NavBarLeftButton; // 0x2a8(0x08)
	struct UButton* NavBarRightButton; // 0x2b0(0x08)
	struct UOverlay* RightButtonOverlay; // 0x2b8(0x08)
	struct UPhoenixRichTextBlock* rightDpad; // 0x2c0(0x08)
	struct TArray<struct UUI_BP_FG_CategoryBarButton_C*> CategoryButtons; // 0x2c8(0x10)
	struct FMulticastInlineDelegate HoveredCategory; // 0x2d8(0x10)
	struct UUserWidget* Owner; // 0x2e8(0x08)
	struct FMulticastInlineDelegate UnhoveredCategory; // 0x2f0(0x10)
	struct FMulticastInlineDelegate ChangedCategory; // 0x300(0x10)
	bool ShowCategoryNames; // 0x310(0x01)
	bool ShowCategoryCount; // 0x311(0x01)
	bool UseAlternateButtons; // 0x312(0x01)
	char pad_313[0x5]; // 0x313(0x05)
	struct FString AlternatePreviousButton; // 0x318(0x10)
	struct FString AlternateNextButton; // 0x328(0x10)
	int32_t dpadFontSize; // 0x338(0x04)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButton(int32_t ButtonIndex, struct UIconButtonWidget*& Button); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GetButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UIconButtonWidget* GetButtonByIndex(int32_t Index); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GetButtonByIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	int32_t GetIndexOfButton(struct UIconButtonWidget* Button); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GetIndexOfButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPrevCategory(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GoToPrevCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToNextCategory(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GoToNextCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCategoryButtons(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.InitCategoryButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategory(int32_t NewCategoryIndex, bool& CategoryChanged); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GoToCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshCategoryNewCounts(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.RefreshCategoryNewCounts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetCategoryNames(struct TArray<struct FText>& Categories); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.I_SetCategoryNames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategoryNext(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GoToCategoryNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategoryPrev(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.GoToCategoryPrev // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurCategoryIndex(int32_t Index); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.SetCurCategoryIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavBar_InitCategoryButtons(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.NavBar_InitCategoryButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOwner(struct UUserWidget* NewOwner); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.SetOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PopulateCategoryButtons(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.PopulateCategoryButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHover(struct UIconButtonWidget* hoveredButton); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.OnHover // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnhover(struct UIconButtonWidget* hoveredButton); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.OnUnhover // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnClick(int32_t SelectedCategory); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.OnClick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetNavButtonsVisible(bool Visible); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.SetNavButtonsVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_CategoryNavBarHorizontal(int32_t EntryPoint); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.ExecuteUbergraph_UI_BP_FG_CategoryNavBarHorizontal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.ChangedCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnhoveredCategory__DelegateSignature(int32_t Index, struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.UnhoveredCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_CategoryNavBarHorizontal.UI_BP_FG_CategoryNavBarHorizontal_C.HoveredCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

