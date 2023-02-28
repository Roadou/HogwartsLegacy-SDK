// WidgetBlueprintGeneratedClass UI_BP_BrewingRecipeIngredients.UI_BP_BrewingRecipeIngredients_C
// Size: 0x2c8 (Inherited: 0x268)
struct UUI_BP_BrewingRecipeIngredients_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* IngredientList; // 0x270(0x08)
	struct UVerticalBox* IngredientSection; // 0x278(0x08)
	struct FBrewingRecipe PreviewRecipe; // 0x280(0x40)
	enum class E_BrewingRecipeAvailability PreviewAvailability; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t OwnedIngredientsCounter; // 0x2c4(0x04)

	void Init(struct FBrewingRecipe Recipe, enum class E_BrewingRecipeAvailability Availability); // Function UI_BP_BrewingRecipeIngredients.UI_BP_BrewingRecipeIngredients_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrewingRecipeIngredients.UI_BP_BrewingRecipeIngredients_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingRecipeIngredients(int32_t EntryPoint); // Function UI_BP_BrewingRecipeIngredients.UI_BP_BrewingRecipeIngredients_C.ExecuteUbergraph_UI_BP_BrewingRecipeIngredients // (Final|UbergraphFunction) // @ game+0x38a7480
};

