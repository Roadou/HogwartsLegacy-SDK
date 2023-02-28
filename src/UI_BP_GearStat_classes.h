// WidgetBlueprintGeneratedClass UI_BP_GearStat.UI_BP_GearStat_C
// Size: 0x369 (Inherited: 0x328)
struct UUI_BP_GearStat_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* stat_Value; // 0x330(0x08)
	struct UPhoenixImage* statArrow; // 0x338(0x08)
	struct UVerticalBox* statBox; // 0x340(0x08)
	struct UImage* statIcon; // 0x348(0x08)
	struct UPhoenixTextBlock* statTitle; // 0x350(0x08)
	struct UPhoenixTextBlock* upgradeMessage; // 0x358(0x08)
	int32_t DefenseStat; // 0x360(0x04)
	int32_t StatValue; // 0x364(0x04)
	bool CanCompareStat; // 0x368(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GearStat.UI_BP_GearStat_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ResetStatCompare(); // Function UI_BP_GearStat.UI_BP_GearStat_C.ResetStatCompare // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCannotUpgradeMessage(); // Function UI_BP_GearStat.UI_BP_GearStat_C.ShowCannotUpgradeMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Stat(enum class GearStatType StatType, int32_t offenseValue, int32_t defenseValue, bool isUnidentified, bool isMainStat); // Function UI_BP_GearStat.UI_BP_GearStat_C.Set Stat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Compare Stat(int32_t CompareValue); // Function UI_BP_GearStat.UI_BP_GearStat_C.Compare Stat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GearStat.UI_BP_GearStat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GearStat.UI_BP_GearStat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GearStat(int32_t EntryPoint); // Function UI_BP_GearStat.UI_BP_GearStat_C.ExecuteUbergraph_UI_BP_GearStat // (Final|UbergraphFunction) // @ game+0x38a7480
};

