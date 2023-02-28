// WidgetBlueprintGeneratedClass UI_BP_BrewingTimeAndYield.UI_BP_BrewingTimeAndYield_C
// Size: 0x2c9 (Inherited: 0x268)
struct UUI_BP_BrewingTimeAndYield_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixTextBlock* BrewingTimeText; // 0x270(0x08)
	struct UVerticalBox* TimeToBrew; // 0x278(0x08)
	struct UPhoenixTextBlock* YieldAmount; // 0x280(0x08)
	struct FBrewingRecipe PreviewRecipe; // 0x288(0x40)
	enum class E_BrewingRecipeAvailability PreviewAvailability; // 0x2c8(0x01)

	void Init(struct FBrewingRecipe Recipe, enum class E_BrewingRecipeAvailability Availability); // Function UI_BP_BrewingTimeAndYield.UI_BP_BrewingTimeAndYield_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrewingTimeAndYield.UI_BP_BrewingTimeAndYield_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingTimeAndYield(int32_t EntryPoint); // Function UI_BP_BrewingTimeAndYield.UI_BP_BrewingTimeAndYield_C.ExecuteUbergraph_UI_BP_BrewingTimeAndYield // (Final|UbergraphFunction) // @ game+0x38a7480
};

