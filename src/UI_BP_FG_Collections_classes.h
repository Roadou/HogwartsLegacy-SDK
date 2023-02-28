// WidgetBlueprintGeneratedClass UI_BP_FG_Collections.UI_BP_FG_Collections_C
// Size: 0x632 (Inherited: 0x418)
struct UUI_BP_FG_Collections_C : UCollectionsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* ShowDescription; // 0x420(0x08)
	struct UWidgetAnimation* ShowBrooms; // 0x428(0x08)
	struct UWidgetAnimation* ShowSeeds; // 0x430(0x08)
	struct UWidgetAnimation* ShowConjuration; // 0x438(0x08)
	struct UWidgetAnimation* ShowWands; // 0x440(0x08)
	struct UWidgetAnimation* ShowTraits; // 0x448(0x08)
	struct UWidgetAnimation* ShowBeasts; // 0x450(0x08)
	struct UWidgetAnimation* ShowExploration; // 0x458(0x08)
	struct UWidgetAnimation* ShowGear; // 0x460(0x08)
	struct UWidgetAnimation* ShowEnemies; // 0x468(0x08)
	struct UWidgetAnimation* ShowPotions; // 0x470(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x478(0x08)
	struct UWidgetAnimation* OutroAnim; // 0x480(0x08)
	struct UWidgetAnimation* showDetails; // 0x488(0x08)
	struct UUI_BP_COLButton_C* button_Beasts; // 0x490(0x08)
	struct UUI_BP_COLButton_C* button_Brooms; // 0x498(0x08)
	struct UUI_BP_COLButton_C* button_Conjuration; // 0x4a0(0x08)
	struct UUI_BP_COLButton_C* button_Enemies; // 0x4a8(0x08)
	struct UUI_BP_COLButton_C* button_Exploration; // 0x4b0(0x08)
	struct UUI_BP_COLButton_C* button_Gear; // 0x4b8(0x08)
	struct UUI_BP_COLButton_C* button_Potions; // 0x4c0(0x08)
	struct UUI_BP_COLButton_C* button_Seeds; // 0x4c8(0x08)
	struct UUI_BP_COLButton_C* button_Traits; // 0x4d0(0x08)
	struct UUI_BP_COLButton_C* button_Wands; // 0x4d8(0x08)
	struct UPhoenixTextBlock* categoryCount; // 0x4e0(0x08)
	struct UBorder* categoryDetails; // 0x4e8(0x08)
	struct UImage* categoryIcon; // 0x4f0(0x08)
	struct UPhoenixTextBlock* categoryMax; // 0x4f8(0x08)
	struct UUI_BP_FG_CollectionsDetails_C* collectionDetails; // 0x500(0x08)
	struct UUI_BP_SimpleScrollBox_C* CollectionsScrollBox; // 0x508(0x08)
	struct UVerticalBox* CollectionsScrollContent; // 0x510(0x08)
	struct UPhoenixTextBlock* detailsCategoryTitle; // 0x518(0x08)
	struct UBorder* mainBorder; // 0x520(0x08)
	struct UPhoenixTextBlock* mainCategoryDescription; // 0x528(0x08)
	struct UPhoenixTextBlock* mainCategoryTitle; // 0x530(0x08)
	struct UScaleBox* mainScaleBox; // 0x538(0x08)
	struct UPhoenixRichTextBlock* NewCategoryDesc; // 0x540(0x08)
	bool isDetailsShowing; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct TMap<struct FName, struct FCollectionCategory> CategoryDataMap; // 0x550(0x50)
	struct UUI_BP_CollectionItemButton_C* SelectedButton; // 0x5a0(0x08)
	struct TMap<struct FString, struct UUI_BP_COLButton_C*> PageNameToButtonMap; // 0x5a8(0x50)
	struct UWidgetAnimation* CategoryAnimation; // 0x5f8(0x08)
	struct FName CurrentCategory; // 0x600(0x08)
	struct FTimerHandle HoverTimer; // 0x608(0x08)
	struct UUI_BP_CollectionItemButton_C* hoveredButton; // 0x610(0x08)
	bool isHoverShowing; // 0x618(0x01)
	bool isHovering; // 0x619(0x01)
	char pad_61A[0x2]; // 0x61a(0x02)
	float HoverTimeGoal; // 0x61c(0x04)
	float CurrentHoverTime; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct UIconButtonWidget* HoveredCategoryButton; // 0x628(0x08)
	bool isDescriptionShowing; // 0x630(0x01)
	bool CloseFieldGuideRequested; // 0x631(0x01)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_16(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_16 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_15(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_15 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_14(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_14 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_13(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_13 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_12(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_12 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_11(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_11 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_10(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_10 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_9(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_9 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_8(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_8 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_7(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_7 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_6(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_5(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_4(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_3(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_2(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_1(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SequenceEvent__ENTRYPOINTUI_BP_FG_Collections_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Handle Transition Animation Input(bool IsAnimating); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.Handle Transition Animation Input // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HoverTimeMet(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.HoverTimeMet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitLegend(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.InitLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCategoryDescription(struct UIconButtonWidget* hoveredButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.ShowCategoryDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategoryAnimationFinished(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.CategoryAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildPageMap(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BuildPageMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateCategoryGrid(struct FName CategoryName); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.PopulateCategoryGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitData(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionToMain(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.TransitionToMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategoryClicked(struct UIconButtonWidget* CategoryButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.CategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionToDetails(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.TransitionToDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_8_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_8_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_9_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_9_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_20_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_20_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowDetails_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.WidgetAnimationEvt_ShowDetails_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_12_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_12_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_13_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Beasts_K2Node_ComponentBoundEvent_13_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_14_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_14_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_15_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Brooms_K2Node_ComponentBoundEvent_15_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_16_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_16_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_17_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Conjuration_K2Node_ComponentBoundEvent_17_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_18_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_18_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_19_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Enemies_K2Node_ComponentBoundEvent_19_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Exploration_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Gear_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Potions_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Seeds_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Traits_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_button_Wands_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCollectionClicked(struct UUI_BP_CollectionItemButton_C* ItemButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnCollectionClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCollectionHovered(struct UUI_BP_CollectionItemButton_C* ItemButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnCollectionHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCollectionUnhovered(struct UUI_BP_CollectionItemButton_C* ItemButton); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnCollectionUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Collections_collectionDetails_K2Node_ComponentBoundEvent_0_OnHideDetailsCompleteMessage__DelegateSignature(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.BndEvt__UI_BP_FG_Collections_collectionDetails_K2Node_ComponentBoundEvent_0_OnHideDetailsCompleteMessage__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LeaveFromPage(); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.LeaveFromPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_Collections(int32_t EntryPoint); // Function UI_BP_FG_Collections.UI_BP_FG_Collections_C.ExecuteUbergraph_UI_BP_FG_Collections // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

