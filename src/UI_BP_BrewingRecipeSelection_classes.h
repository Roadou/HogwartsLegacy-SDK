// WidgetBlueprintGeneratedClass UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C
// Size: 0x3c1 (Inherited: 0x328)
struct UUI_BP_BrewingRecipeSelection_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* showDetails; // 0x330(0x08)
	struct UWidgetAnimation* Main_OUT; // 0x338(0x08)
	struct UUI_BP_BrewingDetails_C* brewingDetails; // 0x340(0x08)
	struct UUniformGridPanel* RecipeButtonGrid; // 0x348(0x08)
	struct UUI_BP_IconButton_C* UI_BP_IconButton; // 0x350(0x08)
	struct ABrewingSite* BrewingSite; // 0x358(0x08)
	struct FMulticastInlineDelegate OnRecipeSelected; // 0x360(0x10)
	struct UUI_BP_PotionDetails_C* PotionDetailsPanel; // 0x370(0x08)
	struct TArray<struct FBrewingRecipe> PreviewAvailableRecipes; // 0x378(0x10)
	struct TArray<struct FBrewingRecipe> PreviewLockedRecipes; // 0x388(0x10)
	struct FName CauldronID; // 0x398(0x08)
	struct UUI_BP_BrewingRecipeButton_C* CurrentlyHoveredRecipe; // 0x3a0(0x08)
	float InputBuffer; // 0x3a8(0x04)
	int32_t GridWidth; // 0x3ac(0x04)
	struct TArray<struct FName> TutorialHighlights; // 0x3b0(0x10)
	bool IsFirstHover; // 0x3c0(0x01)

	void GridIndexToRowColumn(int32_t GridIndex, int32_t GridWidth, int32_t& OutRow, int32_t& OutColumn); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.GridIndexToRowColumn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshRecipeTooltipInfo(); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.RefreshRecipeTooltipInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshRecipes(); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.RefreshRecipes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateRecipeButton(struct FBrewingRecipe BrewingRecipe, enum class E_BrewingRecipeAvailability Availability, int32_t ItemRow, int32_t ItemColumn); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.CreateRecipeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulatePotionList(struct TArray<struct FBrewingRecipe>& AvailableRecipes, struct TArray<struct FBrewingRecipe>& LockedRecipes); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.PopulatePotionList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRecipeButtonClicked(struct UUI_BP_BrewingRecipeButton_C* Recipe Button); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnRecipeButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRecipeButtonHovered(struct UUI_BP_BrewingRecipeButton_C* Recipe Button); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnRecipeButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRecipeButtonUnhovered(struct UUI_BP_BrewingRecipeButton_C* Recipe Button); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnRecipeButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintConsolidatedUMGInputAxis(struct FUMGConsolidatedAxisInputData& AxisInputData); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.BlueprintConsolidatedUMGInputAxis // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HoverFirstRecipe(); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.HoverFirstRecipe // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingRecipeSelection(int32_t EntryPoint); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.ExecuteUbergraph_UI_BP_BrewingRecipeSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnRecipeSelected__DelegateSignature(struct FBrewingRecipe Recipe); // Function UI_BP_BrewingRecipeSelection.UI_BP_BrewingRecipeSelection_C.OnRecipeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

