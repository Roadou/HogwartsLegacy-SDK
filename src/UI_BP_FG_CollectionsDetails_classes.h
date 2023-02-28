// WidgetBlueprintGeneratedClass UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C
// Size: 0x468 (Inherited: 0x328)
struct UUI_BP_FG_CollectionsDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* hideDetails; // 0x330(0x08)
	struct UWidgetAnimation* showDetails; // 0x338(0x08)
	struct UHorizontalBox* brewDetails; // 0x340(0x08)
	struct UPhoenixTextBlock* brewLabel; // 0x348(0x08)
	struct UPhoenixTextBlock* categoryDesc; // 0x350(0x08)
	struct UPhoenixTextBlock* categoryDesc_Expanded; // 0x358(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* detailsPanelback; // 0x360(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient1; // 0x368(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient2; // 0x370(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient3; // 0x378(0x08)
	struct UCanvasPanel* IngredientCanvas; // 0x380(0x08)
	struct UPhoenixTextBlock* IngredientName; // 0x388(0x08)
	struct UVerticalBox* ingredientsList; // 0x390(0x08)
	struct UImage* ItemImage; // 0x398(0x08)
	struct UVerticalBox* potionsInfo; // 0x3a0(0x08)
	struct UImage* pulseCloud; // 0x3a8(0x08)
	struct UImage* pulseRing; // 0x3b0(0x08)
	struct UBorder* subjectImage; // 0x3b8(0x08)
	struct UPhoenixImage* subjectPicture; // 0x3c0(0x08)
	struct UPhoenixTextBlock* subjectTitle; // 0x3c8(0x08)
	struct UPhoenixTextBlock* Time; // 0x3d0(0x08)
	struct UVerticalBox* traitInfo; // 0x3d8(0x08)
	struct UPhoenixTextBlock* TraitIngredientAmount; // 0x3e0(0x08)
	struct UImage* TraitIngredientIconStub; // 0x3e8(0x08)
	struct UPhoenixImage* unknownImage; // 0x3f0(0x08)
	struct UHorizontalBox* used1; // 0x3f8(0x08)
	struct UPhoenixImage* used1icon; // 0x400(0x08)
	struct UPhoenixRichTextBlock* used1title; // 0x408(0x08)
	struct UHorizontalBox* used2; // 0x410(0x08)
	struct UPhoenixImage* used2icon; // 0x418(0x08)
	struct UPhoenixRichTextBlock* used2title; // 0x420(0x08)
	struct UVerticalBox* usedInInfo; // 0x428(0x08)
	struct UPhoenixTextBlock* UsedInText; // 0x430(0x08)
	struct UPhoenixTextBlock* Yield; // 0x438(0x08)
	struct UPhoenixTextBlock* yieldLabel; // 0x440(0x08)
	struct TArray<struct UUI_BP_IngredientRequirement_C*> PotionIngredientWidgetArray; // 0x448(0x10)
	struct FMulticastInlineDelegate OnHideDetailsCompleteMessage; // 0x458(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_FG_CollectionsDetails_1(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SequenceEvent__ENTRYPOINTUI_BP_FG_CollectionsDetails_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGearTraitRecipes(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.GetGearTraitRecipes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTraitsData(struct FName traitName, bool ShowTraitData); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SetTraitsData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCategorySpecificData(struct FName CategoryName, struct FName ItemName, struct FName KnowledgeState, struct TArray<struct FName>& RecipeArray); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SetCategorySpecificData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDescriptionText(struct FString DescriptionID); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SetDescriptionText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetUsedInData(bool ShowUsedInData, struct FName ItemId, struct TArray<struct FName>& UsedInRecipes); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SetUsedInData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPotionsData(bool ShowPotionData, struct FName ItemId); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SetPotionsData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideDetailsPanel(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.HideDetailsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void showDetailsPanel(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.showDetailsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SubjectImageLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.SubjectImageLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateData(struct FName ItemId, struct FName KnowledgeState, struct FName Category, struct TArray<struct FName>& UsedInRecipes); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.PopulateData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHideDetailsComplete(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.OnHideDetailsComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_CollectionsDetails(int32_t EntryPoint); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.ExecuteUbergraph_UI_BP_FG_CollectionsDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnHideDetailsCompleteMessage__DelegateSignature(); // Function UI_BP_FG_CollectionsDetails.UI_BP_FG_CollectionsDetails_C.OnHideDetailsCompleteMessage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

