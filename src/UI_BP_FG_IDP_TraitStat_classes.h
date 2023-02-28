// WidgetBlueprintGeneratedClass UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C
// Size: 0x380 (Inherited: 0x328)
struct UUI_BP_FG_IDP_TraitStat_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UUI_BP_TraitNote_C* trait1; // 0x330(0x08)
	struct UPhoenixTextBlock* TraitSlotLevel; // 0x338(0x08)
	struct UPhoenixTextBlock* traitTier; // 0x340(0x08)
	struct TArray<struct FName> FinalTraitArray; // 0x348(0x10)
	struct TArray<struct UUI_BP_TraitNote_C*> TraitArray; // 0x358(0x10)
	bool showAvailableTraits; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FString TraitTierValueNumber; // 0x370(0x10)

	void GetTraitTierValueNumeric(struct FName TraitRarity, struct FString& TraitTierValue); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.GetTraitTierValueNumeric // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetTraitTierValue(struct FName TraitRarity, struct FText& TraitTierValue); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.GetTraitTierValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTraits(); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.ResetTraits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTraitData(struct TArray<struct FName>& TraitArray, int32_t AvailableTraits, struct FName ObjectRarity); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.SetTraitData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_IDP_TraitStat(int32_t EntryPoint); // Function UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.ExecuteUbergraph_UI_BP_FG_IDP_TraitStat // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

