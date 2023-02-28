// WidgetBlueprintGeneratedClass UI_BP_BrewingDetails.UI_BP_BrewingDetails_C
// Size: 0x3c0 (Inherited: 0x328)
struct UUI_BP_BrewingDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UVerticalBox* brewDetails; // 0x330(0x08)
	struct UPhoenixTextBlock* brewLabel; // 0x338(0x08)
	struct UPhoenixTextBlock* detailsDescription; // 0x340(0x08)
	struct UPhoenixTextBlock* detailsTitle; // 0x348(0x08)
	struct UHorizontalBox* ErrorText; // 0x350(0x08)
	struct UPhoenixTextBlock* ErrorTextMain; // 0x358(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient1; // 0x360(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient2; // 0x368(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient3; // 0x370(0x08)
	struct UVerticalBox* ingredientsList; // 0x378(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* NewTooltipLegend; // 0x380(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x388(0x08)
	struct UPhoenixTextBlock* Time; // 0x390(0x08)
	struct UPhoenixTextBlock* Yield; // 0x398(0x08)
	struct UPhoenixTextBlock* yieldLabel; // 0x3a0(0x08)
	enum class E_BrewingRecipeAvailability BrewAvailability; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct TArray<struct UUI_BP_IngredientRequirement_C*> IngredientWidgetArray; // 0x3b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PlaySelectionAnimation(); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.PlaySelectionAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBrewingTimeAndYield(int32_t BrewYield, struct FTimespan BrewTime); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.SetBrewingTimeAndYield // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBrewingIngredients(struct TArray<struct FRecipeIngredient>& NewIngredients); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.SetBrewingIngredients // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitBrewingData(struct FBrewingRecipe Recipe, enum class E_BrewingRecipeAvailability Availability, bool UseErrorMessage, struct FText ErrorMessage); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.InitBrewingData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingDetails(int32_t EntryPoint); // Function UI_BP_BrewingDetails.UI_BP_BrewingDetails_C.ExecuteUbergraph_UI_BP_BrewingDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

