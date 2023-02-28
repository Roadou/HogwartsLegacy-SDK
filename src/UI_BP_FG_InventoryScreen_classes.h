// WidgetBlueprintGeneratedClass UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C
// Size: 0x6f0 (Inherited: 0x3c8)
struct UUI_BP_FG_InventoryScreen_C : UTabPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* fadeInInspectable; // 0x3d0(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x3d8(0x08)
	struct UWidgetAnimation* OutroAnim; // 0x3e0(0x08)
	struct UWidgetAnimation* FadeOutTooltip; // 0x3e8(0x08)
	struct UWidgetAnimation* FadeInTooltip; // 0x3f0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncNavBar; // 0x3f8(0x08)
	struct UImage* categoryIcon; // 0x400(0x08)
	struct UUI_BP_FG_InventoryDetails_C* detailsPanel; // 0x408(0x08)
	struct UCanvasPanel* InspectablePanel; // 0x410(0x08)
	struct UUI_BP_ItemScrollBox_C* InventoryScrollBox; // 0x418(0x08)
	struct UPhoenixRichTextBlock* InventorySortText; // 0x420(0x08)
	struct UCircularThrobber* Loadingwidget; // 0x428(0x08)
	struct UPhoenixTextBlock* menuBoxTitle; // 0x430(0x08)
	struct UCanvasPanel* Root; // 0x438(0x08)
	struct UButton* SortLeftButton; // 0x440(0x08)
	struct UButton* SortRightButton; // 0x448(0x08)
	struct FMulticastInlineDelegate OnClickedEventDispatcher; // 0x450(0x10)
	struct UUserWidget* InventoryPopout; // 0x460(0x08)
	enum class EUIDisplayMode UIMode; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct FMulticastInlineDelegate AbortInteraction; // 0x470(0x10)
	struct UUserWidget* Current_IconButton; // 0x480(0x08)
	struct TArray<struct FInventoryResult> PlayerInventory; // 0x488(0x10)
	struct FName InteractTargetID; // 0x498(0x08)
	struct UUserWidget* InspectableWidget; // 0x4a0(0x08)
	struct UUserWidget* RichPaperClass; // 0x4a8(0x08)
	struct UUserWidget* ParentContainer; // 0x4b0(0x08)
	int32_t InventoryRows; // 0x4b8(0x04)
	int32_t InventoryColumns; // 0x4bc(0x04)
	struct FTimerHandle ToolTipTimer; // 0x4c0(0x08)
	struct UInventoryState* InventoryState; // 0x4c8(0x08)
	enum class EInventoryTabCategory InventoryCategory; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float IconButtonSize; // 0x4d4(0x04)
	struct UIconButtonWidget* IconButtonClass; // 0x4d8(0x08)
	struct FName InteractTargetHolderID; // 0x4e0(0x08)
	struct TArray<struct FText> AvailableTabNames; // 0x4e8(0x10)
	struct UUI_BP_HowMany_C* howMany; // 0x4f8(0x08)
	bool Drop; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UUserWidget* ActiveButton; // 0x508(0x08)
	bool ToInventory; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FLinearColor HouseColor; // 0x514(0x10)
	bool PickPocketing; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct TArray<struct FName> NewItemsList; // 0x528(0x10)
	bool ReadyToUse; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	int32_t AsyncLoadCount; // 0x53c(0x04)
	struct TArray<struct FName> TutorialItemNames; // 0x540(0x10)
	struct TArray<struct FName> InventoryHolders; // 0x550(0x10)
	struct TArray<struct FInventoryHolder> InventoryHolderStructures; // 0x560(0x10)
	int32_t Category; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct TMap<struct FName, bool> ShowCategoryMap; // 0x578(0x50)
	bool CategoriesAreSetup; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct FTimerHandle ShowTimerHandle; // 0x5d0(0x08)
	struct FTimerHandle HideTimerHandle; // 0x5d8(0x08)
	bool isDetailsShowing; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float CurrentHoverTime; // 0x5e4(0x04)
	bool isButtonHovered; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float HoverTimeFinal; // 0x5ec(0x04)
	struct TMap<struct FString, struct FName> CategoryToTutorialMap; // 0x5f0(0x50)
	int32_t InventoryIconCount; // 0x640(0x04)
	enum class EInventorySortType CurrentInventorySort; // 0x644(0x01)
	enum class EInventorySortType NUM_SORT_TYPES; // 0x645(0x01)
	char pad_646[0x2]; // 0x646(0x02)
	struct FString CurrentCategory; // 0x648(0x10)
	int32_t DropButtonIndex; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct FInventoryResult ItemToDrop; // 0x660(0x88)
	bool IsInspectableShown; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	int32_t HoveredNavBarIndex; // 0x6ec(0x04)

	void I_GetInventoryTabCategory(enum class EInventoryTabCategory& TabCategory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_GetInventoryTabCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInteractTargetInfo(struct FName& TargetId, struct FName& TargetHolderID); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetInteractTargetInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetInventory(struct UUserWidget*& Inventory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_GetInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ClickHandler(bool& Handled); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_ClickHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_RemoveInspectable(bool& Removed); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_RemoveInspectable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPlayerInventory(struct TArray<struct FInventoryResult>& PlayerInventory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetPlayerInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetScrollBox(struct UUserWidget*& InventoryScrollBox); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetScrollBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UMGInputHandler(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent, bool& Handled); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.UMGInputHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClickHandler(bool& Handled); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ClickHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemBox(struct UUserWidget*& ItemBox); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetItemBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CenterInspectableScreenVertically(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.CenterInspectableScreenVertically // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButtonNewIndicatorName(struct UIconButtonWidget* Button, struct FString& NewIndicatorString); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetButtonNewIndicatorName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void TerminateLingeringTutorials(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.TerminateLingeringTutorials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RefreshLegend(struct TArray<struct FLegendItemData>& TooltipLegendArray); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.RefreshLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SaveCurrentSortPreference(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SaveCurrentSortPreference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadSavedSortPreference(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ReadSavedSortPreference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindNextValidSortForCategory(struct FString Category, int32_t Delta); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.FindNextValidSortForCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsValidSortForCategory(enum class EInventorySortType SortType, struct FString Category, bool& Result); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IsValidSortForCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CycleSortType(int32_t Delta); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.CycleSortType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KillActiveTutorial(struct FText CategoryName); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.KillActiveTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayOneTimeTutorial(struct FString Category); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.PlayOneTimeTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup Categories(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Setup Categories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Inventory Structures Data(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Get Inventory Structures Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTutorialHighlight(struct TArray<struct FName>& ItemNames); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetTutorialHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowAmountWidget(int32_t Max, struct FName ItemName); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowAmountWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowSort_Label(struct FString Sort Type); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowSort_Label // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup Tooltip(struct UUserWidget* Button, struct TArray<struct FLegendItemData>& TooltipLegend); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Setup Tooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeIconSizeForPage(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ComputeIconSizeForPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupItemScrollBox(struct UIconButtonWidget* ButtonClass); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetupItemScrollBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResizeInventory(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ResizeInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCreatureInventoryTooltipInformation(struct UUserWidget* InButton); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCreatureInventoryTooltipInformation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInventoryTabCategory(enum class EInventoryTabCategory& InventoryTabCategory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetInventoryTabCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MarkSelectedItems(struct TArray<struct FString>& Items); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.MarkSelectedItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentHighlightedItem(struct FString NewItem); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCurrentHighlightedItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInventoryState(enum class EUIDisplayMode DisplayMode); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetInventoryState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddInspectable(struct FString RichPaperID); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.AddInspectable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveInspectable(bool& Removed); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.RemoveInspectable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitButtonsToEmpty(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InitButtonsToEmpty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateAllButtons(struct TArray<struct FInventoryResult>& Inventory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.UpdateAllButtons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitNavbar(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InitNavbar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Refresh Inventory(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Refresh Inventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Unhovered(struct UObject* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IconButton_Unhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Clicked(struct UObject* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IconButton_Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconButton_Hover(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IconButton_Hover // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitInventory(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InitInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD(struct UObject* Loaded); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_8DA06735455F217B13C1A8853936776A(struct UObject* Loaded); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_8DA06735455F217B13C1A8853936776A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_627C7C8846B3845375AEA1B3524C9FA0(struct UObject* Loaded); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_627C7C8846B3845375AEA1B3524C9FA0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStride(int32_t Stride); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetStride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNavBar(bool ShouldShow); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowNavBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_RefreshInventory(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_RefreshInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPickPocketing(bool PickPocketing); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetPickPocketing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowAmountWidget(int32_t Max, struct FName ItemName); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_ShowAmountWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentIconButton(struct UUserWidget* CurrentButton); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCurrentIconButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToInventory(bool ToInventory); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetToInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_Sort(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_Sort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonTransferDrop(bool Drop); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetButtonTransferDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_InitButtonsToEmpty(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_InitButtonsToEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetActiveButton(struct UUserWidget* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetActiveButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddInspectable(struct FString RichPaperID); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_AddInspectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryData(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NavBar_SelectionChanged(struct UObject* Caller, int32_t int); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_SelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavBar_HoveredCategory(struct UObject* Caller, int32_t int); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_HoveredCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryAmountWidgetEvent(struct UObject* Caller, int32_t int); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryAmountWidgetEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNavBarSelectionChanged(int32_t NewCategoryIndex); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnNavBarSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearCategory(struct FName CategoryName); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ClearCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetInventoryCategory(enum class EInventoryTabCategory Category); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetInventoryCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryIconButtonClicked(struct UObject* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryIconButtonUnhovered(struct UObject* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryIconButtonHovered(struct UObject* Button); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Load Class(struct TSoftClassPtr<UObject> AssetClass); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Load Class // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNavLoadComplete(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnNavLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInteractTargetInfo(struct FName TargetId, struct FName TargetHolderID); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetInteractTargetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavBar_UnhoveredCategory(struct UObject* Caller, int32_t int); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_UnhoveredCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LeaveFromPage(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.LeaveFromPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMode(enum class EUIDisplayMode UIDisplayMode); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void I_SetParent(struct UUserWidget* NewParam); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLegendItemHoldEnd(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLegendItemHoldEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature(struct ULegendItem* InventoryLegendItem, bool HoldWasCompleted); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_InventoryScreen(int32_t EntryPoint); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ExecuteUbergraph_UI_BP_FG_InventoryScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void AbortInteraction__DelegateSignature(); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.AbortInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClickedEventDispatcher__DelegateSignature(struct UObject* Category); // Function UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnClickedEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

