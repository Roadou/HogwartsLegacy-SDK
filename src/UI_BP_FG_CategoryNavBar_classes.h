// WidgetBlueprintGeneratedClass UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C
// Size: 0x2fb (Inherited: 0x288)
struct UUI_BP_FG_CategoryNavBar_C : UCategoryNavBarWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UVerticalBox* CategoryList; // 0x290(0x08)
	struct UPhoenixRichTextBlock* DownDpad; // 0x298(0x08)
	struct UButton* NavBarDownButton; // 0x2a0(0x08)
	struct UButton* NavBarUpButton; // 0x2a8(0x08)
	struct TArray<struct UUI_BP_FG_CategoryBarButton_C*> CategoryButtons; // 0x2b0(0x10)
	struct FMulticastInlineDelegate HoveredCategory; // 0x2c0(0x10)
	struct UUserWidget* Owner; // 0x2d0(0x08)
	struct FMulticastInlineDelegate UnhoveredCategory; // 0x2d8(0x10)
	struct FMulticastInlineDelegate ChangedCategory; // 0x2e8(0x10)
	bool ShowCategoryNames; // 0x2f8(0x01)
	bool ShowCategoryCount; // 0x2f9(0x01)
	bool UsesCategoryNewIndicators; // 0x2fa(0x01)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCategoryNewIndicator(bool IsNew, int32_t CategoryIndex); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetCategoryNewIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButton(int32_t ButtonIndex, struct UIconButtonWidget*& Button); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UIconButtonWidget* GetButtonByIndex(int32_t Index); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetButtonByIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	int32_t GetIndexOfButton(struct UIconButtonWidget* Button); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetIndexOfButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPrevCategory(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToPrevCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToNextCategory(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToNextCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCategoryButtons(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.InitCategoryButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategory(int32_t NewCategoryIndex, bool& CategoryChanged); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetCategoryNames(struct TArray<struct FText>& Categories); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.I_SetCategoryNames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategoryNext(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategoryNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToCategoryPrev(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategoryPrev // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurCategoryIndex(int32_t Index); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetCurCategoryIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavBar_InitCategoryButtons(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.NavBar_InitCategoryButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOwner(struct UUserWidget* NewOwner); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PopulateCategoryButtons(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.PopulateCategoryButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHover(struct UIconButtonWidget* hoveredButton); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnHover // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnhover(struct UIconButtonWidget* hoveredButton); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnUnhover // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnClick(int32_t SelectedCategory); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnClick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void RefreshCategoryNewCounts(); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.RefreshCategoryNewCounts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_CategoryNavBar(int32_t EntryPoint); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.ExecuteUbergraph_UI_BP_FG_CategoryNavBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.ChangedCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnhoveredCategory__DelegateSignature(int32_t Index, struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.UnhoveredCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.HoveredCategory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

