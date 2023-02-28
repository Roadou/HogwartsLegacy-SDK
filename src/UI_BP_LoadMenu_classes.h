// WidgetBlueprintGeneratedClass UI_BP_LoadMenu.UI_BP_LoadMenu_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_LoadMenu_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* showDetailsPanel; // 0x330(0x08)
	struct UUI_BP_LoadSaveDetails_C* detailPanel; // 0x338(0x08)
	struct UVerticalBox* SaveItems; // 0x340(0x08)
	struct UPhoenixTextBlock* Title; // 0x348(0x08)
	struct UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x350(0x08)
	bool IsSaveMenu; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FMulticastInlineDelegate OnLoadSave; // 0x360(0x10)
	int32_t CharacterID; // 0x370(0x04)
	int32_t DetailsDirection; // 0x374(0x04)
	struct UUI_BP_SavedGameButton_C* ClickedLoadButton; // 0x378(0x08)
	struct ULegend* ParentLegend; // 0x380(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void OnLoadConfirmPopupClosed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.OnLoadConfirmPopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonUnhovered(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.MenuButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonHovered(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.MenuButtonHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonSelected(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.MenuButtonSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLoadSaveData(int32_t CharacterID); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.SetLoadSaveData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LoadMenu(int32_t EntryPoint); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.ExecuteUbergraph_UI_BP_LoadMenu // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnLoadSave__DelegateSignature(struct FString Filename, int32_t CharacterID); // Function UI_BP_LoadMenu.UI_BP_LoadMenu_C.OnLoadSave__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

