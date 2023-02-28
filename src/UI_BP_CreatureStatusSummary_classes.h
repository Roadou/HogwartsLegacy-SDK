// WidgetBlueprintGeneratedClass UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C
// Size: 0x381 (Inherited: 0x328)
struct UUI_BP_CreatureStatusSummary_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UUI_BP_CreatureByproduct_C* ByproductWidget; // 0x330(0x08)
	struct UHorizontalBox* CooldownIconContainer; // 0x338(0x08)
	struct UPhoenixTextBlock* CooldownText; // 0x340(0x08)
	struct UUI_BP_CreatureNeedWidget_C* FeedNeed; // 0x348(0x08)
	struct UUI_BP_CreatureNeedWidget_C* InteractionNeed; // 0x350(0x08)
	struct UWidgetSwitcher* MasterSwitcher; // 0x358(0x08)
	struct UUI_BP_CreatureNeedWidget_C* Minimized; // 0x360(0x08)
	struct UWidgetSwitcher* NeedsSwitcher; // 0x368(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x370(0x08)
	struct UCreatureState* CreatureState; // 0x378(0x08)
	bool IsMinimized; // 0x380(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateCooldownTimer(); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.UpdateCooldownTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNeedsMinimized(bool ShouldBeMinimized); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.SetNeedsMinimized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update(); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup(struct UCreatureState* InCreatureState, bool ShouldBeMinimized); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSomethingChanged(); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.OnSomethingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureStatusSummary(int32_t EntryPoint); // Function UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.ExecuteUbergraph_UI_BP_CreatureStatusSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

