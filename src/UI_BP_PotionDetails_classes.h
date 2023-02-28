// WidgetBlueprintGeneratedClass UI_BP_PotionDetails.UI_BP_PotionDetails_C
// Size: 0x2c9 (Inherited: 0x268)
struct UUI_BP_PotionDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixTextBlock* PotionDesc; // 0x270(0x08)
	struct UUI_BP_BrewingRecipeIngredients_C* UI_BP_BrewingRecipeIngredients; // 0x278(0x08)
	struct UUI_BP_BrewingTimeAndYield_C* UI_BP_BrewingTimeAndYield; // 0x280(0x08)
	struct FBrewingRecipe PreviewRecipe; // 0x288(0x40)
	enum class E_BrewingRecipeAvailability PreviewAvailability; // 0x2c8(0x01)

	void PotionDescription(struct FBrewingRecipe& BrewingRecipe); // Function UI_BP_PotionDetails.UI_BP_PotionDetails_C.PotionDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Init(struct FBrewingRecipe Recipe, enum class E_BrewingRecipeAvailability Availability); // Function UI_BP_PotionDetails.UI_BP_PotionDetails_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_PotionDetails.UI_BP_PotionDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PotionDetails(int32_t EntryPoint); // Function UI_BP_PotionDetails.UI_BP_PotionDetails_C.ExecuteUbergraph_UI_BP_PotionDetails // (Final|UbergraphFunction) // @ game+0x38a7480
};

