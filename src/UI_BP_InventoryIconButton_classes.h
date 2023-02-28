// WidgetBlueprintGeneratedClass UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C
// Size: 0x690 (Inherited: 0x4a8)
struct UUI_BP_InventoryIconButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* IconStateNormal; // 0x4b0(0x08)
	struct UWidgetAnimation* ResetHover; // 0x4b8(0x08)
	struct UWidgetAnimation* FadeInandOut; // 0x4c0(0x08)
	struct UWidgetAnimation* IconStateQuestItem; // 0x4c8(0x08)
	struct UWidgetAnimation* IconStateTutorial; // 0x4d0(0x08)
	struct UWidgetAnimation* PurchaseAnimation; // 0x4d8(0x08)
	struct UWidgetAnimation* ShowSelected; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x4e8(0x08)
	struct UWidgetAnimation* Error; // 0x4f0(0x08)
	struct UPhoenixImage* AmountFram; // 0x4f8(0x08)
	struct UImage* disabledImage; // 0x500(0x08)
	struct UImage* Fresnel; // 0x508(0x08)
	struct UPhoenixImage* IconStateQuest; // 0x510(0x08)
	struct UScaleBox* inventoryConent; // 0x518(0x08)
	struct UPhoenixTextBlock* ItemCountNumber; // 0x520(0x08)
	struct UUI_BP_NewIndicator_C* NEW; // 0x528(0x08)
	struct UImage* Outline; // 0x530(0x08)
	struct UImage* QuestShin; // 0x538(0x08)
	struct UImage* rarityBack-old; // 0x540(0x08)
	struct USizeBox* SizeBox_Content; // 0x548(0x08)
	struct UImage* TempReqNotMetShadow; // 0x550(0x08)
	struct UImage* TraitIndicator; // 0x558(0x08)
	enum class EInventoryQuality ItemQuality; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	int32_t ItemCost; // 0x564(0x04)
	int32_t ModifiedCost; // 0x568(0x04)
	int32_t Quantity; // 0x56c(0x04)
	struct UUserWidget* ParentWidget; // 0x570(0x08)
	struct UUserWidget* NewButtonHighlight; // 0x578(0x08)
	enum class ESlateVisibility HighlightVisibility; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FMulticastInlineDelegate OnDropComplete; // 0x588(0x10)
	bool IsButtonSelected; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FInventoryResult InventoryResult; // 0x5a0(0x88)
	struct FName ItemVariation; // 0x628(0x08)
	bool pressedhere; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	struct FLinearColor OutlineColor; // 0x634(0x10)
	bool isEmptyButton; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	struct FName ItemRarity; // 0x648(0x08)
	struct FString outlineIcon; // 0x650(0x10)
	struct FString highlightIcon; // 0x660(0x10)
	bool Clickable; // 0x670(0x01)
	char pad_671[0x3]; // 0x671(0x03)
	struct FName ItemId; // 0x674(0x08)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FMulticastInlineDelegate PurchasedAnimationFinished; // 0x680(0x10)

	void I_GetIsEmpty(bool& isButtonEmpty); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetIsEmpty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetItemRarity(struct FName& Rarity); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetItemRarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemVariation(struct FName& Variation); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemVariation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_GetItemCount(int32_t& ItemCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetItemCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetModifiedCost(int32_t& ModifiedCost); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetModifiedCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInventoryResult(struct FInventoryResult& InventoryResult); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetInventoryResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemCost(int32_t& Cost); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetIconName(struct FString& IconName); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemQuality(enum class EInventoryQuality& Quality); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckItemID(struct FString NewID, struct FString& NewItemID); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.CheckItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateHolderID(struct FName NewHolderID); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.UpdateHolderID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Play Purchase Animation(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Play Purchase Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set TraitIndicator(bool Item Have Trait); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Set TraitIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Is New Item(bool Index); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Set Is New Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySelectedAnimation(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.PlaySelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Dim(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Dim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonEmpty(bool IsEmpty, struct FString Item); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRarityState(struct FName RarityTier); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetRarityState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsCurrentSelection(bool IsCurrent); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsCurrentSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool IsSelected); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetButtonIcons(struct FString BackgroundImage); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonIcons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleNonExistent(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleNonExistent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleDisabled(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleEnabled(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTurnInCount(int32_t CurrentCount, int32_t NeededCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetTurnInCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCountVisibleHandler(int32_t ItemCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetCountVisibleHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitItemButton(struct FInventoryResult InventoryItem, float Modifier); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.InitItemButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemCost(int32_t Cost, int32_t ModifiedCost); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemCountHandler(int32_t ItemCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemCountHandler // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_3766CA3448CB5F6A18115FB0C3017A79(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Finished_3766CA3448CB5F6A18115FB0C3017A79 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemCount(int32_t ItemCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCountVisible(bool ShowCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetCountVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonEnabled(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonMissing(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonMissing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonNonExistant(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonNonExistant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonDisabled(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetModifiedCost(int32_t ModifiedCost); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetModifiedCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInventoryResult(struct FInventoryResult InventoryResult); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetInventoryResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetTurninCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonState(enum class EIconButtonState NewState); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIsQuestItem(bool isQuestItem); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetIsQuestItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconButtonSize(struct FVector2D NewSize); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIsNew(bool IsNew); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetIsNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeItemButton(struct FInventoryResult Inventory Item, float Modifier); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.InitializeItemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemQuality(enum class EInventoryQuality Quality); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(enum class EIconButtonState NewState); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ErrorAnimation(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.ErrorAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetIsNew(bool bIsNew); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsNew // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLevelReqMet(bool LevelMet); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetLevelReqMet // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I Play Purchase Animation(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I Play Purchase Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InventoryIconButton(int32_t EntryPoint); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.ExecuteUbergraph_UI_BP_InventoryIconButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PurchasedAnimationFinished__DelegateSignature(); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.PurchasedAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDropComplete__DelegateSignature(struct UUI_BP_InventoryIconButton_C* Held, struct UUI_BP_InventoryIconButton_C* Container); // Function UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.OnDropComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

