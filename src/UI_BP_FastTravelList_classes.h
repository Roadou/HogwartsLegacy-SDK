// WidgetBlueprintGeneratedClass UI_BP_FastTravelList.UI_BP_FastTravelList_C
// Size: 0x3c8 (Inherited: 0x330)
struct UUI_BP_FastTravelList_C : UFastTravelList {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* showList; // 0x338(0x08)
	struct UPhoenixTextBlock* FastTravelListTitle; // 0x340(0x08)
	struct UVerticalBox* locationList; // 0x348(0x08)
	struct UUI_BP_SimpleScrollBox_C* locationScrollBox; // 0x350(0x08)
	struct FString HighlighItemName; // 0x358(0x10)
	struct TArray<struct UUI_BP_FastTravelButton_C*> LocationButtonArray; // 0x368(0x10)
	struct UUI_BP_FastTravelButton_C* highlightedLocation; // 0x378(0x08)
	bool isListShowing; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	int32_t listCount; // 0x384(0x04)
	int32_t expansionCount; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct FString> LocationListArray; // 0x390(0x10)
	float expandAnimationFrame; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FMulticastInlineDelegate OnFastTravelButtonHovered; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnFastTravelButtonUnhovered; // 0x3b8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ClearLocationList(); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearLocationList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLocationUnhovered(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLocationHovered(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLocationClicked(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateLocationList(struct TArray<struct FString>& ListArray); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.PopulateLocationList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearListMenuItems(); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearListMenuItems // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetListTitle(struct FString Title); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.SetListTitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClearHighlightListMenuItem(bool bCallUnHovered); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearHighlightListMenuItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HighlightListMenuItem(struct FString ItemName, bool bCallUnHovered); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.HighlightListMenuItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddListMenuItem(struct FString ItemName); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.AddListMenuItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowEvent(); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.ShowEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideEvent(); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.HideEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddList(struct TArray<struct FString>& ItemList); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.AddList // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisableItem(struct FString ItemName); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.DisableItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnableItem(struct FString ItemName); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.EnableItem // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FastTravelList(int32_t EntryPoint); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.ExecuteUbergraph_UI_BP_FastTravelList // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnFastTravelButtonUnhovered__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnFastTravelButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFastTravelButtonHovered__DelegateSignature(struct UUI_BP_FastTravelButton_C* Button); // Function UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnFastTravelButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

