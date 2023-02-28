// WidgetBlueprintGeneratedClass UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C
// Size: 0x4f9 (Inherited: 0x370)
struct UUI_BP_CreatureManagementScreen_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* showDetailsPanel; // 0x378(0x08)
	struct UWidgetAnimation* SNC_02_FadeOut; // 0x380(0x08)
	struct UWidgetAnimation* BeastManagement_IN; // 0x388(0x08)
	struct UWidgetAnimation* ShowErrorMessage; // 0x390(0x08)
	struct UPhoenixTextBlock* activeBeastsCurrent; // 0x398(0x08)
	struct UPhoenixTextBlock* ActiveBeastsLabel; // 0x3a0(0x08)
	struct UPhoenixTextBlock* activeBeastsMax; // 0x3a8(0x08)
	struct UBorder* beastManagementBorder; // 0x3b0(0x08)
	struct UScaleBox* breedingScaleBox; // 0x3b8(0x08)
	struct UOverlay* BreedingWarningBox; // 0x3c0(0x08)
	struct UUI_BP_CreatureManagement_DetailsPanel_C* detailsPanel; // 0x3c8(0x08)
	struct UPhoenixTextBlock* ErrorMessageText; // 0x3d0(0x08)
	struct UImage* Icon; // 0x3d8(0x08)
	struct UUI_BP_ItemScrollBox_C* inventoryScroll; // 0x3e0(0x08)
	struct UPhoenixTextBlock* MainTitle; // 0x3e8(0x08)
	struct UPhoenixTextBlock* NoCreaturesMessage; // 0x3f0(0x08)
	struct UCanvasPanel* NoCreaturesPanel; // 0x3f8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x400(0x08)
	struct UPhoenixImage* scrim; // 0x408(0x08)
	struct UPhoenixTextBlock* speciesCurrent; // 0x410(0x08)
	struct UPhoenixTextBlock* SpeciesLabel; // 0x418(0x08)
	struct UPhoenixTextBlock* speciesMax; // 0x420(0x08)
	struct UPhoenixTextBlock* StationTitle; // 0x428(0x08)
	struct UUniformGridPanel* vivariumGrid; // 0x430(0x08)
	struct UUI_BP_CreatureInNurtureSpaceTooltip_C* StatusWidgetTooltip; // 0x438(0x08)
	struct FName NurturingSpaceID; // 0x440(0x08)
	struct UUI_BP_CreatureButton_C* HoveredCreatureButton; // 0x448(0x08)
	struct UUI_BP_InventoryIconButton_C* HoveredInventoryButton; // 0x450(0x08)
	struct UUI_BP_CreatureAddToNurtureSpaceTooltip_C* AddCreatureTooltip; // 0x458(0x08)
	bool IsScreenExitingToFollowScreen; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct AActor* CreatureToFollow; // 0x468(0x08)
	int32_t CurrentNumInventoryCreatures; // 0x470(0x04)
	int32_t CurrentNumNurturingSpaceCreatures; // 0x474(0x04)
	bool CanReleaseToNurturingSpace; // 0x478(0x01)
	bool SaveReleasedCreatureUIDInstead; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FString ReleasedCreatureUIDIdentifier; // 0x480(0x10)
	struct UUI_BP_CreatureButton_C* currentVivariumButton; // 0x490(0x08)
	bool canSelectCreature; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct TArray<struct UUI_BP_CreatureButton_C*> VivariumCreatureButtons; // 0x4a0(0x10)
	struct TArray<struct UCreatureState*> CurrentVivariumCreatures; // 0x4b0(0x10)
	int32_t LastReleasedCreatureID; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct FName> RequiredTypesToRelease; // 0x4c8(0x10)
	struct TArray<int32_t> AlreadySelectedCreatureUIDs; // 0x4d8(0x10)
	struct TArray<struct FHermesBPDelegateHandle> HermesHandles; // 0x4e8(0x10)
	bool IsHiddenFromViewport; // 0x4f8(0x01)

	void AdjustForViewportWidth(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ClearNewStatus(struct FName CreatureID, struct FName Variation, struct UUI_BP_InventoryIconButton_C* Button); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.ClearNewStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsNewCreature(struct FName CreatureID, struct FName Variation, bool& IsNew); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.IsNewCreature // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetNurtureSpaceCreaturesToDisplay(struct TArray<struct UCreatureState*>& CreatureStates, struct TMap<struct FName, int32_t>& CreatureSpecies); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.GetNurtureSpaceCreaturesToDisplay // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FilterOutSNC_02SelectedCreatures(struct TArray<struct FInventoryResult>& InventoryResultsArray, struct TArray<struct FInventoryResult>& FilteredArray); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.FilterOutSNC_02SelectedCreatures // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SaveSNC_02ReleasedCreature(struct UCreatureState* CreatureState); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.SaveSNC_02ReleasedCreature // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCreatureTooltipDescription(struct UCreatureState* HoveredCreatureState, struct FString& CreatureDescription); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.UpdateCreatureTooltipDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateInventoryButtonEnabled(struct UUI_BP_InventoryIconButton_C* IconButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.UpdateInventoryButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCreatureInInventoryTooltip(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.UpdateCreatureInInventoryTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayScreenIntro(bool FromSubScreen); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.PlayScreenIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ViewCreatureDetails(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.ViewCreatureDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnCreatureToInventory(struct UUI_BP_CreatureButton_C* ButtonPressed, struct FEventReply& Return Value); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.ReturnCreatureToInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddCreatureToNurtureSpace(struct UCreatureState* CreatureState); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.AddCreatureToNurtureSpace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerExitScreen(bool ToFollowScreen); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.TriggerExitScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Creature in Nurture Space Tooltip(struct UCreatureState* CreatureState); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Update Creature in Nurture Space Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayErrorMessage(struct FString Message); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.DisplayErrorMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitCreatureButton(struct UUI_BP_CreatureButton_C* ButtonWidget, struct UCreatureState* CreatureState, struct TSoftObjectPtr<UCreatureState> MotherStateIfUnborn); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.InitCreatureButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateCreatureList(struct TArray<struct UCreatureState*>& CreatureStates, int32_t MaxNumCreatures, int32_t MaxNumSpecies, struct TMap<struct FName, int32_t> CreatureSpecies, bool PlayAddAnimation); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.PopulateCreatureList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitForNurturingSpace(bool PlayAddAnimation); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.InitForNurturingSpace // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_E8409943489DCF8C0282D6A9FFD4BE36(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Finished_E8409943489DCF8C0282D6A9FFD4BE36 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureHovered(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureUnhovered(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInventoryButtonHovered(struct UIconButtonWidget* IconButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInventoryButtonUnhovered(struct UIconButtonWidget* IconButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureClicked(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureChanged(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInventoryButtonClicked(struct UIconButtonWidget* IconButton); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureSummoned(); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureSummoned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SNC_02_BeastReleaseStarted(struct UObject* Caller, struct FString String); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.SNC_02_BeastReleaseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature(struct UIconButtonWidget* Button); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureManagementScreen(int32_t EntryPoint); // Function UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.ExecuteUbergraph_UI_BP_CreatureManagementScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

