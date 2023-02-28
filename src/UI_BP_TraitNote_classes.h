// WidgetBlueprintGeneratedClass UI_BP_TraitNote.UI_BP_TraitNote_C
// Size: 0x351 (Inherited: 0x328)
struct UUI_BP_TraitNote_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* traitDesc_2; // 0x330(0x08)
	struct UImage* traitIcon; // 0x338(0x08)
	struct UPhoenixTextBlock* traitTier; // 0x340(0x08)
	struct UPhoenixTextBlock* traitTitle; // 0x348(0x08)
	bool isInTooltip; // 0x350(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_TraitNote.UI_BP_TraitNote_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Set TraitData(struct FString traitName, struct FText traitTier); // Function UI_BP_TraitNote.UI_BP_TraitNote_C.Set TraitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_TraitNote.UI_BP_TraitNote_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_TraitNote(int32_t EntryPoint); // Function UI_BP_TraitNote.UI_BP_TraitNote_C.ExecuteUbergraph_UI_BP_TraitNote // (Final|UbergraphFunction) // @ game+0x38a7480
};

