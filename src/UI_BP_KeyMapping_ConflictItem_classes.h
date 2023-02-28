// WidgetBlueprintGeneratedClass UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C
// Size: 0x348 (Inherited: 0x328)
struct UUI_BP_KeyMapping_ConflictItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* ItemText; // 0x330(0x08)
	struct FString Text Key; // 0x338(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Construct(); // Function UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem(int32_t EntryPoint); // Function UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem // (Final|UbergraphFunction) // @ game+0x38a7480
};

