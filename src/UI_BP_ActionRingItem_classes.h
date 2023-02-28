// WidgetBlueprintGeneratedClass UI_BP_ActionRingItem.UI_BP_ActionRingItem_C
// Size: 0x341 (Inherited: 0x2a0)
struct UUI_BP_ActionRingItem_C : UActionRingItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* FailedCast; // 0x2a8(0x08)
	struct UWidgetAnimation* ShowSpellFull; // 0x2b0(0x08)
	struct UBorder* emptyBorder; // 0x2b8(0x08)
	struct UImage* epmtyOutline; // 0x2c0(0x08)
	struct UImage* ItemIcon; // 0x2c8(0x08)
	struct UImage* itemMeter; // 0x2d0(0x08)
	struct UImage* Outline; // 0x2d8(0x08)
	struct UImage* SelectedHighlight; // 0x2e0(0x08)
	struct UCanvasPanel* TempItem; // 0x2e8(0x08)
	struct UImage* TempItemBackground; // 0x2f0(0x08)
	struct UImage* TempItemIcon; // 0x2f8(0x08)
	struct UButton* TheButton; // 0x300(0x08)
	struct UMaterialInstanceDynamic* EnergyMaterial; // 0x308(0x08)
	bool isSpellFull; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t directionIndex; // 0x314(0x04)
	float renderAngle; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate Blacklisted; // 0x320(0x10)
	struct FMulticastInlineDelegate UnBlacklisted; // 0x330(0x10)
	bool IsBlacklisted; // 0x340(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellMeterColor(enum class ESpellCategory SpellCategory); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetSpellMeterColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleEmptyItem(bool IsEmptySlot); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ToggleEmptyItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FillMeter(float NewPct, bool IsASpell); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.FillMeter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIconTextureLoaded(struct UTexture2D* Texture); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnIconTextureLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSubWidgetVisibility(enum class EUIQActionBarType ItemType); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetSubWidgetVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUpdateMeter(float pct, bool IsASpell); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnUpdateMeter // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetItemInventoryData(bool IsConsumable, int32_t ItemCount); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnSetItemInventoryData // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnToggleEmptyItem(bool IsEmpty); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnToggleEmptyItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHideItemCount(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnHideItemCount // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlayTextureLoaded(struct UTexture2D* Texture); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnOverlayTextureLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnItemIconTextureLoaded(struct UTexture2D* Texture); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnItemIconTextureLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ToggleSelectionHighlight(bool Show); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ToggleSelectionHighlight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MarkSpellAsBlacklisted(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.MarkSpellAsBlacklisted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClearSpellAsBlacklisted(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ClearSpellAsBlacklisted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellCastFailed(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnSpellCastFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetColorBlindMode(struct UObject* Caller, int32_t int); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetColorBlindMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionRingItem(int32_t EntryPoint); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ExecuteUbergraph_UI_BP_ActionRingItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void UnBlacklisted__DelegateSignature(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.UnBlacklisted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Blacklisted__DelegateSignature(); // Function UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.Blacklisted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

