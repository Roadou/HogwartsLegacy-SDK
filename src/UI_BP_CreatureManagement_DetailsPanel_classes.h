// WidgetBlueprintGeneratedClass UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C
// Size: 0x3c3 (Inherited: 0x328)
struct UUI_BP_CreatureManagement_DetailsPanel_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UImage* CreatureAlbinoIcon; // 0x330(0x08)
	struct UImage* CreatureGenderIcon; // 0x338(0x08)
	struct UPhoenixTextBlock* descriptionText; // 0x340(0x08)
	struct UOverlay* detailsLegend; // 0x348(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x350(0x08)
	struct UPhoenixTextBlock* detailsTitle; // 0x358(0x08)
	struct UHorizontalBox* ErrorText; // 0x360(0x08)
	struct UPhoenixTextBlock* ErrorTextMain; // 0x368(0x08)
	struct UImage* Image_5; // 0x370(0x08)
	struct UImage* meterDivider; // 0x378(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x380(0x08)
	struct UUI_BP_CreatureStatusSummary_C* StatusSummary; // 0x388(0x08)
	struct FMulticastInlineDelegate OnGetUpgradeStats; // 0x390(0x10)
	struct ULegendItem* LegendGearUpgrade; // 0x3a0(0x08)
	struct ULegendItem* LegendGearApplyTrait; // 0x3a8(0x08)
	struct FMulticastInlineDelegate ApplyUpgradeOnSelected; // 0x3b0(0x10)
	bool hasLegend; // 0x3c0(0x01)
	bool IsMale; // 0x3c1(0x01)
	bool IsAlbino; // 0x3c2(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateBreedTooltip(struct UCreatureState* CreatureState); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.UpdateBreedTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSpeciesTooltip(struct FName SpeciesName, struct TArray<struct FLegendItemData>& TooltipLegendArray); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.UpdateSpeciesTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Tooltip(struct UCreatureState* CreatureState, struct FName NurturingSpaceID); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.Update Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel(int32_t EntryPoint); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel // (Final|UbergraphFunction) // @ game+0x38a7480
	void ApplyUpgradeOnSelected__DelegateSignature(); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.ApplyUpgradeOnSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGetUpgradeStats__DelegateSignature(int32_t BaseValue, int32_t NextUpgradeValue); // Function UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.OnGetUpgradeStats__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

