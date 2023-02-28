// WidgetBlueprintGeneratedClass UI_BP_BrewingMenu.UI_BP_BrewingMenu_C
// Size: 0x480 (Inherited: 0x370)
struct UUI_BP_BrewingMenu_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* ShowInventoryFullMessage; // 0x378(0x08)
	struct UWidgetAnimation* SwapContentIn; // 0x380(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x388(0x08)
	struct UUI_BP_BackgroundSmoke_C* backgroundSmoke; // 0x390(0x08)
	struct UUI_BP_BrewingComplete_C* BrewingComplete; // 0x398(0x08)
	struct UWidgetSwitcher* ContentWidgetSwitcher; // 0x3a0(0x08)
	struct UPhoenixTextBlock* ErrorMessageText; // 0x3a8(0x08)
	struct URetainerBox* headerTitleRetainer; // 0x3b0(0x08)
	struct UUI_BP_BrewingInProgress_C* InProgressDisplay; // 0x3b8(0x08)
	struct UOverlay* LeftButtonOverlay; // 0x3c0(0x08)
	struct UButton* NavLeftButton; // 0x3c8(0x08)
	struct UButton* NavRightButton; // 0x3d0(0x08)
	struct UPhoenixTextBlock* PlotNameText; // 0x3d8(0x08)
	struct UUI_BP_BrewingRecipeSelection_C* RecipeSelection; // 0x3e0(0x08)
	struct UOverlay* RightButtonOverlay; // 0x3e8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x3f0(0x08)
	struct UPhoenixTextBlock* SiteContentsText; // 0x3f8(0x08)
	struct UPhoenixTextBlock* TitleText; // 0x400(0x08)
	struct ABrewingSite* BrewingSite; // 0x408(0x08)
	struct ABrewingSite* PrevBrewingSite; // 0x410(0x08)
	struct TArray<struct FBrewingRecipe> PreviewAvailableRecipes; // 0x418(0x10)
	struct TArray<struct FBrewingRecipe> PreviewLockedKnownRecipes; // 0x428(0x10)
	struct TArray<struct FBrewingRecipe> PreviewUnknownRecipes; // 0x438(0x10)
	struct TArray<struct FName> PreviewCategoryNames; // 0x448(0x10)
	bool bIsInputLocked; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct ULegendItem* LegendItemPickup; // 0x460(0x08)
	struct ULegendItem* LegendItemDestroy; // 0x468(0x08)
	bool IsExitingMenu; // 0x470(0x01)
	bool IsPanelTransitionInProgress; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	struct FName TEMP_CauldronID; // 0x474(0x08)
	int32_t activeSwitcherIndex; // 0x47c(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCauldronIDForIdentity(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.SetCauldronIDForIdentity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerPanelChangeWithAnimation(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.TriggerPanelChangeWithAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonLegend(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.RefreshButtonLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToRightSite(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.SwitchToRightSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToLeftSite(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.SwitchToLeftSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshForBrewingSite(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.RefreshForBrewingSite // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRecipeSelected(struct FBrewingRecipe Recipe); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.OnRecipeSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartInputTimeout(float Duration); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.StartInputTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwapContent(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.SwapContent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_BrewingMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.BndEvt__UI_BP_BrewingMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_BrewingMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.BndEvt__UI_BP_BrewingMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingMenu(int32_t EntryPoint); // Function UI_BP_BrewingMenu.UI_BP_BrewingMenu_C.ExecuteUbergraph_UI_BP_BrewingMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

