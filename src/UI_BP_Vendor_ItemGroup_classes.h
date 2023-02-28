// WidgetBlueprintGeneratedClass UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C
// Size: 0x344 (Inherited: 0x328)
struct UUI_BP_Vendor_ItemGroup_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* ItemCategoryLabel; // 0x330(0x08)
	struct UUniformGridPanel* ItemGrid; // 0x338(0x08)
	int32_t Stride; // 0x340(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void AddItemButton(struct UUI_BP_InventoryIconButton_C* ItemButton); // Function UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.AddItemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Vendor_ItemGroup(int32_t EntryPoint); // Function UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.ExecuteUbergraph_UI_BP_Vendor_ItemGroup // (Final|UbergraphFunction) // @ game+0x38a7480
};

