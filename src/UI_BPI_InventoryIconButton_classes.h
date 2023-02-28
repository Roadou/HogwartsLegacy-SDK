// BlueprintGeneratedClass UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C
// Size: 0x28 (Inherited: 0x28)
struct UUI_BPI_InventoryIconButton_C : UInterface {

	void I Play Purchase Animation(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I Play Purchase Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIsNew(bool IsNew); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetIsNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetIsEmpty(bool& isButtonEmpty); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetIsEmpty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIsQuestItem(bool isQuestItem); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetIsQuestItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetItemRarity(struct FName& Rarity); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetItemRarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonSize(struct FVector2D NewSize); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemVariation(struct FName& Variation); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemVariation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetItemCount(int32_t& ItemCount); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetItemCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetTurninCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInventoryResult(struct FInventoryResult InventoryResult); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetInventoryResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetModifiedCost(int32_t& ModifiedCost); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetModifiedCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInventoryResult(struct FInventoryResult& InventoryResult); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetInventoryResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ErrorAnimation(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.ErrorAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetModifiedCost(int32_t ModifiedCost); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetModifiedCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemCost(int32_t& Cost); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonDisabled(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonMissing(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonMissing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonNonExistant(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonNonExistant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonEnabled(); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonState(enum class EIconButtonState NewState); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetIconName(struct FString& IconName); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCountVisible(bool ShowCount); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetCountVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemCount(int32_t ItemCount); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetItemCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeItemButton(struct FInventoryResult Inventory Item, float Modifier); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.InitializeItemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemQuality(enum class EInventoryQuality Quality); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetItemQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemQuality(enum class EInventoryQuality& Quality); // Function UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

