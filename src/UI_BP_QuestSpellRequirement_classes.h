// WidgetBlueprintGeneratedClass UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C
// Size: 0x338 (Inherited: 0x328)
struct UUI_BP_QuestSpellRequirement_C : UPhoenixUserWidget {
	struct UImage* SpellIcon; // 0x328(0x08)
	struct UPhoenixTextBlock* SpellName; // 0x330(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SpellTypeLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C.SpellTypeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellData(struct FString Spell); // Function UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C.SetSpellData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

