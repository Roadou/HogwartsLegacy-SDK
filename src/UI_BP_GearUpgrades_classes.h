// WidgetBlueprintGeneratedClass UI_BP_GearUpgrades.UI_BP_GearUpgrades_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_GearUpgrades_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* showUpgradeApplied; // 0x330(0x08)
	struct UImage* requirementDivider; // 0x338(0x08)
	struct UUI_BP_GearUpgradeMarker_C* upgrade1; // 0x340(0x08)
	struct UUI_BP_GearUpgradeMarker_C* upgrade2; // 0x348(0x08)
	struct UUI_BP_GearUpgradeMarker_C* upgrade3; // 0x350(0x08)
	struct UPhoenixTextBlock* UpgradesText; // 0x358(0x08)
	int32_t BaseStatValue; // 0x360(0x04)
	int32_t NextUpgradeStatValue; // 0x364(0x04)
	struct TArray<struct UUI_BP_GearUpgradeMarker_C*> UpgradeArray; // 0x368(0x10)
	struct FString UpgradesNumericValue; // 0x378(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ShowAppliedAnimation(); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.ShowAppliedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitUpgrades(int32_t CurrentUpgrade); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.InitUpgrades // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GearUpgrades(int32_t EntryPoint); // Function UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.ExecuteUbergraph_UI_BP_GearUpgrades // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

