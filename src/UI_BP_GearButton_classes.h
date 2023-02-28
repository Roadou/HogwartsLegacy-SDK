// WidgetBlueprintGeneratedClass UI_BP_GearButton.UI_BP_GearButton_C
// Size: 0x621 (Inherited: 0x4a8)
struct UUI_BP_GearButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnReset; // 0x4b0(0x08)
	struct UWidgetAnimation* traitLoop; // 0x4b8(0x08)
	struct UWidgetAnimation* upgradeLoop; // 0x4c0(0x08)
	struct UWidgetAnimation* TutorialPulse; // 0x4c8(0x08)
	struct UWidgetAnimation* OnHover; // 0x4d0(0x08)
	struct UWidgetAnimation* buttonActive; // 0x4d8(0x08)
	struct UImage* appearanceIcon; // 0x4e0(0x08)
	struct UImage* buttonHighlight; // 0x4e8(0x08)
	struct UNamedSlot* ContentSlot; // 0x4f0(0x08)
	struct UImage* disabledGraphic; // 0x4f8(0x08)
	struct UPhoenixImage* dropShadow; // 0x500(0x08)
	struct USizeBox* gearSizeBox; // 0x508(0x08)
	struct UImage* hoodIcon; // 0x510(0x08)
	struct UUI_BP_NewIndicator_C* indicator; // 0x518(0x08)
	struct UOverlay* lockedOverlay; // 0x520(0x08)
	struct UPhoenixImage* loomInteract; // 0x528(0x08)
	struct UScaleBox* newIndicator; // 0x530(0x08)
	struct UPhoenixImage* PhoenixImage_157; // 0x538(0x08)
	struct UPhoenixImage* rarityBack; // 0x540(0x08)
	struct UUI_BP_SelectedBox_C* selectedBox; // 0x548(0x08)
	struct UPhoenixImage* selectedOutline; // 0x550(0x08)
	struct UUI_BP_GearThreadSlot_C* thread1; // 0x558(0x08)
	struct UCanvasPanel* Traits; // 0x560(0x08)
	struct UPhoenixImage* upgradeArrow; // 0x568(0x08)
	struct FMulticastInlineDelegate OnGearButtonHoveredEvent; // 0x570(0x10)
	struct FMulticastInlineDelegate OnGearButtonUnhoveredEvent; // 0x580(0x10)
	struct FMulticastInlineDelegate OnGearButtonClickEvent; // 0x590(0x10)
	bool IsSelected; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct UUserWidget* CursorClass; // 0x5a8(0x08)
	struct FName GearVariation; // 0x5b0(0x08)
	struct FName ItemRarity; // 0x5b8(0x08)
	struct FLinearColor OutlineColor; // 0x5c0(0x10)
	enum class EGearSlotIDEnum SlotType; // 0x5d0(0x01)
	bool IsHoodUp; // 0x5d1(0x01)
	char pad_5D2[0x6]; // 0x5d2(0x06)
	struct FString ItemId; // 0x5d8(0x10)
	float ButtonWidth; // 0x5e8(0x04)
	float ButtonHeight; // 0x5ec(0x04)
	bool hasStats; // 0x5f0(0x01)
	bool IsEmpty; // 0x5f1(0x01)
	bool IsLocked; // 0x5f2(0x01)
	bool isUnidentified; // 0x5f3(0x01)
	bool canUpgrade; // 0x5f4(0x01)
	bool canApplyTrait; // 0x5f5(0x01)
	char pad_5F6[0x2]; // 0x5f6(0x02)
	struct FGearItemID GearItemID; // 0x5f8(0x14)
	bool LoomCanInteract; // 0x60c(0x01)
	bool HasMaxUpgrades; // 0x60d(0x01)
	char pad_60E[0x2]; // 0x60e(0x02)
	struct FString DisabledTooltipMessage; // 0x610(0x10)
	bool canShowButtonEvents; // 0x620(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_GearButton.UI_BP_GearButton_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetGearButtonState(); // Function UI_BP_GearButton.UI_BP_GearButton_C.ResetGearButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHoodState(bool ShowHoodIcon); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetHoodState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetButton(); // Function UI_BP_GearButton.UI_BP_GearButton_C.ResetButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OverrideGearIcon(); // Function UI_BP_GearButton.UI_BP_GearButton_C.OverrideGearIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleLoomInteraction(); // Function UI_BP_GearButton.UI_BP_GearButton_C.ToggleLoomInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitGearButton(struct FGearItemID GearID, bool IsAppearance); // Function UI_BP_GearButton.UI_BP_GearButton_C.InitGearButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButtonGearItem(struct FGearItem& GearItem); // Function UI_BP_GearButton.UI_BP_GearButton_C.GetButtonGearItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ToggleTraitNotification(bool ShowNotification); // Function UI_BP_GearButton.UI_BP_GearButton_C.ToggleTraitNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTraitAvailable(); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetTraitAvailable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUpgradeAvailable(); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetUpgradeAvailable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleUpgradeNotification(bool showUpgrade); // Function UI_BP_GearButton.UI_BP_GearButton_C.ToggleUpgradeNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitSelected(bool IsSelected); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetInitSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsIdentified(int32_t IdentifiedIndex); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetIsIdentified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemLock(int32_t ItemLevel); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetItemLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsNewItem(bool IsNew); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetIsNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTraitSlots(struct TArray<struct FName>& TraitArray, int32_t EmptyTraitCount); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetTraitSlots // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideStatList(bool showStats); // Function UI_BP_GearButton.UI_BP_GearButton_C.HideStatList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleAppearanceIcon(bool HasAppearance); // Function UI_BP_GearButton.UI_BP_GearButton_C.ToggleAppearanceIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleHoodState(); // Function UI_BP_GearButton.UI_BP_GearButton_C.ToggleHoodState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRarityState(struct FName RarityTier); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetRarityState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetButtonIcons(struct FString BackgroundImage); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetButtonIcons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UWidget* GetExtraContent(); // Function UI_BP_GearButton.UI_BP_GearButton_C.GetExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleNonExistent(); // Function UI_BP_GearButton.UI_BP_GearButton_C.HandleNonExistent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_GearButton.UI_BP_GearButton_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleDisabled(); // Function UI_BP_GearButton.UI_BP_GearButton_C.HandleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleEnabled(); // Function UI_BP_GearButton.UI_BP_GearButton_C.HandleEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool RemoveExtraContent(); // Function UI_BP_GearButton.UI_BP_GearButton_C.RemoveExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AddExtraContent(struct UWidget* NewContent); // Function UI_BP_GearButton.UI_BP_GearButton_C.AddExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetState(bool IsActive); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInteractable(); // Function UI_BP_GearButton.UI_BP_GearButton_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_GearButton.UI_BP_GearButton_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_GearButton.UI_BP_GearButton_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_GearButton.UI_BP_GearButton_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_GearButton.UI_BP_GearButton_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GearButton.UI_BP_GearButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_GearButton.UI_BP_GearButton_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(enum class EIconButtonState NewState); // Function UI_BP_GearButton.UI_BP_GearButton_C.SetButtonState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GearButton.UI_BP_GearButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GearButton(int32_t EntryPoint); // Function UI_BP_GearButton.UI_BP_GearButton_C.ExecuteUbergraph_UI_BP_GearButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnGearButtonClickEvent__DelegateSignature(struct UUI_BP_GearButton_C* IconButton); // Function UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonClickEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGearButtonUnhoveredEvent__DelegateSignature(struct UUI_BP_GearButton_C* IconButton); // Function UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonUnhoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGearButtonHoveredEvent__DelegateSignature(struct UUI_BP_GearButton_C* IconButton); // Function UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonHoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

