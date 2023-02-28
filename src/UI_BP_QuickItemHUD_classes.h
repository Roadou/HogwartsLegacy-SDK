// WidgetBlueprintGeneratedClass UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C
// Size: 0x420 (Inherited: 0x2e8)
struct UUI_BP_QuickItemHUD_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Deactivate; // 0x2f0(0x08)
	struct UWidgetAnimation* Activate; // 0x2f8(0x08)
	struct UWidgetAnimation* NewItemSelected; // 0x300(0x08)
	struct UImage* ActiveFlames; // 0x308(0x08)
	struct UImage* ActiveGlow; // 0x310(0x08)
	struct UCanvasPanel* ActiveHighlight; // 0x318(0x08)
	struct UPhoenixImage* ActiveSparks; // 0x320(0x08)
	struct UOverlay* Count; // 0x328(0x08)
	struct UPhoenixRichTextBlock* ItemButtonText; // 0x330(0x08)
	struct UPhoenixTextBlock* ItemCountText; // 0x338(0x08)
	struct UImage* ItemIcon; // 0x340(0x08)
	struct UImage* itemMeter; // 0x348(0x08)
	struct UCanvasPanel* ItemPanel; // 0x350(0x08)
	struct UOverlay* UsageCount; // 0x358(0x08)
	struct UPhoenixTextBlock* UsageCountText; // 0x360(0x08)
	struct TArray<struct FName> ItemPickupLocks; // 0x368(0x10)
	bool TimerActive; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float potionDuration; // 0x37c(0x04)
	struct TMap<struct FName, struct FSlateColor> PotionColorMap; // 0x380(0x50)
	struct FSlateColor DefaultHighlightColor; // 0x3d0(0x28)
	struct FName SelectedItemName; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnFocusPotionApplied; // 0x400(0x10)
	struct FMulticastInlineDelegate OnFocusPotionExpired; // 0x410(0x10)

	void FocusPotionExpired(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.FocusPotionExpired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHighlightColor(struct FName PotionID); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetHighlightColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTimerActive(bool ACTIVE, bool ShowAnimation, bool ForceOperation); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetTimerActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePlantUsageCount(struct FName ItemName); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.UpdatePlantUsageCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTimer(struct FName PotionName); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ResetTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateTimer(struct FName ItemName); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ActivateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Fill Meter(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Update Fill Meter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Item Panel Visibility(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Set Item Panel Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemCount(struct FName ItemName); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetItemCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItem(struct FName ItemName); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbilityAdded(struct UObject* Caller, struct FName& String); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.AbilityAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WheelItemSelected(struct UObject* Caller, struct FName& String); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.WheelItemSelected // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WheelItemUnlocked(struct UObject* Caller, struct FLockManagerLock& Lock); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.WheelItemUnlocked // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ItemIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ItemIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PlayerInventoryChanged(struct UObject* Caller, struct FInventoryResult& InventoryResult); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PlayerInventoryChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QuickItemUsed(struct UObject* Caller, struct FName& String); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.QuickItemUsed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowButtonGraphicsFlagChanged(struct UObject* Caller, int32_t int); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ShowButtonGraphicsFlagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerPlantCountChanged(struct UObject* Caller); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PlayerPlantCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PostLoadPlayerSpawn(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PostLoadPlayerSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestartChallenge(struct UObject* Caller); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.RestartChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_QuickItemHUD(int32_t EntryPoint); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ExecuteUbergraph_UI_BP_QuickItemHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnFocusPotionExpired__DelegateSignature(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.OnFocusPotionExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFocusPotionApplied__DelegateSignature(); // Function UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.OnFocusPotionApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

