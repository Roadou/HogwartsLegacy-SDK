// WidgetBlueprintGeneratedClass UI_BP_RegionInfo.UI_BP_RegionInfo_C
// Size: 0x3c0 (Inherited: 0x330)
struct UUI_BP_RegionInfo_C : UMapRegionInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPhoenixTextBlock* DividerText; // 0x338(0x08)
	struct UPhoenixTextBlock* EnemyLevel; // 0x340(0x08)
	struct UCanvasPanel* EnemyPanel; // 0x348(0x08)
	struct UPhoenixTextBlock* HeaderText; // 0x350(0x08)
	struct UImage* Icon; // 0x358(0x08)
	struct UVerticalBox* ItemsContainer; // 0x360(0x08)
	struct UPhoenixTextBlock* MaxLevel; // 0x368(0x08)
	struct UPhoenixTextBlock* MinLevel; // 0x370(0x08)
	struct UCanvasPanel* RegionInfo; // 0x378(0x08)
	struct UUI_BP_RegionInfoItem_C* UI_BP_RegionInfoItem; // 0x380(0x08)
	struct FMulticastInlineDelegate ShowRegionInfoEvent; // 0x388(0x10)
	struct FMulticastInlineDelegate HideRegionInfoEvent; // 0x398(0x10)
	struct UObject* Parent; // 0x3a8(0x08)
	struct TArray<struct UUI_BP_RegionInfoItem_C*> ItemArray; // 0x3b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetEnemyData(struct FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetEnemyData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMapParent(struct UObject* ParentScreen); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetMapParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemData(struct FString RegionName, struct TArray<struct FRegionPopuplData>& ItemData); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBP(); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.ShowBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideBP(); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.HideBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetDataBP(struct FString RegionName, struct FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, struct TArray<struct FRegionPopuplData>& RegionData); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetDataBP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RegionInfo(int32_t EntryPoint); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.ExecuteUbergraph_UI_BP_RegionInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void HideRegionInfoEvent__DelegateSignature(); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.HideRegionInfoEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowRegionInfoEvent__DelegateSignature(); // Function UI_BP_RegionInfo.UI_BP_RegionInfo_C.ShowRegionInfoEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

