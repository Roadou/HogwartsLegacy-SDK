// BlueprintGeneratedClass UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UUI_BPI_InventoryInterface_C : UInterface {

	void I_AddInspectable(struct FString RichPaperID); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_AddInspectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetInventoryTabCategory(enum class EInventoryTabCategory& TabCategory); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_GetInventoryTabCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInteractTargetInfo(struct FName& TargetId, struct FName& TargetHolderID); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetInteractTargetInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetInventory(struct UUserWidget*& Inventory); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_GetInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToInventory(bool ToInventory); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetToInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetActiveButton(struct UUserWidget* Button); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetActiveButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ShowAmountWidget(int32_t Max, struct FName ItemName); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_ShowAmountWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonTransferDrop(bool Drop); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetButtonTransferDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ClickHandler(bool& Handled); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_ClickHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentIconButton(struct UUserWidget* CurrentButton); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetCurrentIconButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_RemoveInspectable(bool& Removed); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_RemoveInspectable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_Sort(); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_Sort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_InitButtonsToEmpty(); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_InitButtonsToEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_RefreshInventory(); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_RefreshInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetInventoryCategory(enum class EInventoryTabCategory Category); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetInventoryCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPlayerInventory(struct TArray<struct FInventoryResult>& PlayerInventory); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetPlayerInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetScrollBox(struct UUserWidget*& InventoryScrollBox); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetScrollBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPickPocketing(bool PickPocketing); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetPickPocketing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetParent(struct UUserWidget* NewParam); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryData(); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.InventoryData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UMGInputHandler(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent, bool& Handled); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.UMGInputHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClickHandler(bool& Handled); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.ClickHandler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNavBar(bool ShouldShow); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.ShowNavBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStride(int32_t Stride); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetStride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemBox(struct UUserWidget*& ItemBox); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetItemBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInteractTargetInfo(struct FName TargetId, struct FName TargetHolderID); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetInteractTargetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMode(enum class EUIDisplayMode UIDisplayMode); // Function UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

