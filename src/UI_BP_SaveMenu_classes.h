// WidgetBlueprintGeneratedClass UI_BP_SaveMenu.UI_BP_SaveMenu_C
// Size: 0x431 (Inherited: 0x338)
struct UUI_BP_SaveMenu_C : USaveGameWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton0; // 0x340(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton1; // 0x348(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton2; // 0x350(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton3; // 0x358(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton4; // 0x360(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton5; // 0x368(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton6; // 0x370(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton7; // 0x378(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton8; // 0x380(0x08)
	struct UUI_BP_SavedGameButton_C* SavedGameButton9; // 0x388(0x08)
	struct UVerticalBox* SaveList; // 0x390(0x08)
	struct UPhoenixTextBlock* Title; // 0x398(0x08)
	struct FMulticastInlineDelegate OnGameSaved; // 0x3a0(0x10)
	struct UWidgetAnimation* DetailsAnimation; // 0x3b0(0x08)
	int32_t DetailsDirection; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct UUI_BP_SavedGameButton_C*> Buttons; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnLegendRequested; // 0x3d0(0x10)
	struct UUI_BP_SavedGameButton_C* HoveredSlot; // 0x3e0(0x08)
	struct FMulticastInlineDelegate StartStopOverwrite; // 0x3e8(0x10)
	struct FMulticastInlineDelegate StartStopDelete; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnSaveStarted; // 0x408(0x10)
	struct FMulticastInlineDelegate OnSaveFailed; // 0x418(0x10)
	struct ULegend* ParentLegend; // 0x428(0x08)
	bool AudioIsHoveredSlotInUse; // 0x430(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void InitSlotButtons(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.InitSlotButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SaveToSlot(struct UUI_BP_SavedGameButton_C* SaveButton); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.SaveToSlot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtons(struct TArray<struct FSaveGameInfo>& SaveInfo); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshButtons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OverwriteHoveredSave(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.OverwriteHoveredSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeleteHoveredSave(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.DeleteHoveredSave // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonClicked(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonUnhovered(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonHovered(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonReleased(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonPressed(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshListAfterSave(struct TArray<struct FSaveGameInfo>& SaveData); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshListAfterSave // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshListAfterSaveFailed(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshListAfterSaveFailed // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SaveMenu(int32_t EntryPoint); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.ExecuteUbergraph_UI_BP_SaveMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnSaveFailed__DelegateSignature(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnSaveFailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSaveStarted__DelegateSignature(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnSaveStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartStopDelete__DelegateSignature(bool Start, int32_t LegendIndex); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.StartStopDelete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartStopOverwrite__DelegateSignature(bool Start, int32_t LegendIndex); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.StartStopOverwrite__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLegendRequested__DelegateSignature(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnLegendRequested__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGameSaved__DelegateSignature(); // Function UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnGameSaved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

