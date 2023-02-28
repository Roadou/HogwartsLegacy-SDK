// WidgetBlueprintGeneratedClass UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C
// Size: 0x338 (Inherited: 0x268)
struct UUI_BP_DuelTechnique_Item_C : UUserWidget {
	struct UWidgetAnimation* MarkFailure; // 0x268(0x08)
	struct UWidgetAnimation* MarkSuccess; // 0x270(0x08)
	struct UBorder* countBorder; // 0x278(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x280(0x08)
	struct UPhoenixTextBlock* maxCountText; // 0x288(0x08)
	struct UPhoenixTextBlock* techniqueTask; // 0x290(0x08)
	struct UPhoenixTextBlock* Time; // 0x298(0x08)
	struct FName TechniqueID; // 0x2a0(0x08)
	int32_t MaxCount; // 0x2a8(0x04)
	bool TaskCompleted; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct FSlateBrush StrikeThroughBrush; // 0x2b0(0x88)

	void GetTechniqueID(struct FName& ID); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.GetTechniqueID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MarkTaskFailure(bool IsNew); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.MarkTaskFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MarkTaskSuccess(bool IsNew); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.MarkTaskSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCount(int32_t CurrentCount); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.UpdateCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTime(struct FText NewTime); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.UpdateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTechniqueData(bool ShowCount, bool ShowTime, struct FString TaskDesc, struct FName ID, int32_t MaxValue); // Function UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.SetTechniqueData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

