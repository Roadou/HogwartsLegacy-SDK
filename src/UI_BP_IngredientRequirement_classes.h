// WidgetBlueprintGeneratedClass UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C
// Size: 0x370 (Inherited: 0x328)
struct UUI_BP_IngredientRequirement_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x330(0x08)
	struct UImage* ingredientIcon; // 0x338(0x08)
	struct UPhoenixTextBlock* ItemName; // 0x340(0x08)
	struct UPhoenixTextBlock* MaxCount; // 0x348(0x08)
	struct UImage* Outline; // 0x350(0x08)
	struct UPhoenixTextBlock* Slash; // 0x358(0x08)
	struct FRecipeIngredient PreviewIngredients; // 0x360(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetInventoryCount(int32_t Count, int32_t& NewCount); // Function UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.SetInventoryCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetRecipeIngredient(struct FRecipeIngredient Ingredient); // Function UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.SetRecipeIngredient // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_IngredientRequirement(int32_t EntryPoint); // Function UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.ExecuteUbergraph_UI_BP_IngredientRequirement // (Final|UbergraphFunction) // @ game+0x38a7480
};

