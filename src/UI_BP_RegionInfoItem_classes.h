// WidgetBlueprintGeneratedClass UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C
// Size: 0x389 (Inherited: 0x328)
struct UUI_BP_RegionInfoItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* RegionInfoLeft; // 0x330(0x08)
	struct UWidgetAnimation* RegionInfoRight; // 0x338(0x08)
	struct UPhoenixTextBlock* CompletedText0; // 0x340(0x08)
	struct UPhoenixTextBlock* CompletedText1; // 0x348(0x08)
	struct UPhoenixTextBlock* DividerText0; // 0x350(0x08)
	struct UPhoenixTextBlock* DividerText1; // 0x358(0x08)
	struct UImage* Icon; // 0x360(0x08)
	struct UImage* Icon_2; // 0x368(0x08)
	struct UPhoenixTextBlock* ItemtypeText; // 0x370(0x08)
	struct UPhoenixTextBlock* TotalText0; // 0x378(0x08)
	struct UPhoenixTextBlock* TotalText1; // 0x380(0x08)
	bool IsLeft; // 0x388(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRegionInfoRight(); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetRegionInfoRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRegionInfoLeft(); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetRegionInfoLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCompleted(int32_t Completed); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTotal(int32_t Total); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetTotal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIcon(struct FString IconName); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemName(struct FString ItemName); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetItemName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RegionInfoItemLeft(struct UObject* Caller); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.RegionInfoItemLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegionInfoItemRight(struct UObject* Caller); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.RegionInfoItemRight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RegionInfoItem(int32_t EntryPoint); // Function UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.ExecuteUbergraph_UI_BP_RegionInfoItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

