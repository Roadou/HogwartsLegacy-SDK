// WidgetBlueprintGeneratedClass UI_BP_SavedGameButton.UI_BP_SavedGameButton_C
// Size: 0x490 (Inherited: 0x328)
struct UUI_BP_SavedGameButton_C : USavedGameButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHover; // 0x330(0x08)
	struct UWidgetAnimation* ShowHighlight; // 0x338(0x08)
	struct UHorizontalBox* ContentsBox; // 0x340(0x08)
	struct UPhoenixTextBlock* dateText; // 0x348(0x08)
	struct UPhoenixTextBlock* EmptySlotText; // 0x350(0x08)
	struct UImage* goldleafBorder; // 0x358(0x08)
	struct UImage* highlight; // 0x360(0x08)
	struct UPhoenixTextBlock* MissionNameText; // 0x368(0x08)
	struct UPhoenixTextBlock* placeText; // 0x370(0x08)
	struct UPhoenixTextBlock* PlayTimeText; // 0x378(0x08)
	struct UPhoenixTextBlock* SaveTypeText; // 0x380(0x08)
	struct UPhoenixTextBlock* SaveVersionText; // 0x388(0x08)
	struct UButton* TheButton; // 0x390(0x08)
	struct FMulticastInlineDelegate OnSavedButtonClicked; // 0x398(0x10)
	struct FMulticastInlineDelegate OnSavedButtonHover; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnSavedButtonUnhover; // 0x3b8(0x10)
	struct FString buttonImage; // 0x3c8(0x10)
	struct FString SaveFileName; // 0x3d8(0x10)
	struct FString SaveType; // 0x3e8(0x10)
	struct FSaveGameInfo SaveInfo; // 0x3f8(0x78)
	struct FMulticastInlineDelegate OnSavedButtonPressed; // 0x470(0x10)
	struct FMulticastInlineDelegate OnSavedButtonReleased; // 0x480(0x10)

	void IsIntroSave(bool& bIsIntroSave); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.IsIntroSave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SelectTitleText(struct FString MissionName, struct FString LocationName, struct FString& TitleText); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.SelectTitleText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetFileName(struct FString& Filename); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.GetFileName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void setButtonData(struct FSaveGameInfo SaveGameInfo); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.setButtonData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SavedGameButton(int32_t EntryPoint); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.ExecuteUbergraph_UI_BP_SavedGameButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnSavedButtonReleased__DelegateSignature(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSavedButtonPressed__DelegateSignature(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSavedButtonUnhover__DelegateSignature(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSavedButtonHover__DelegateSignature(struct UUI_BP_SavedGameButton_C* Button); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSavedButtonClicked__DelegateSignature(struct UUI_BP_SavedGameButton_C* SelectedButton); // Function UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

