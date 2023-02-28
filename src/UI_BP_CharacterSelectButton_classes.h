// WidgetBlueprintGeneratedClass UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C
// Size: 0x601 (Inherited: 0x4a8)
struct UUI_BP_CharacterSelectButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnButtonSelected; // 0x4b0(0x08)
	struct UWidgetAnimation* OnButtonHovered; // 0x4b8(0x08)
	struct UPhoenixTextBlock* ButtonTitle; // 0x4c0(0x08)
	struct UPhoenixImage* cardColorImage; // 0x4c8(0x08)
	struct UCanvasPanel* contentHolder; // 0x4d0(0x08)
	struct UNamedSlot* ContentSlot; // 0x4d8(0x08)
	struct UPhoenixTextBlock* dateInfo; // 0x4e0(0x08)
	struct UHorizontalBox* existingCharacter; // 0x4e8(0x08)
	struct UPhoenixImage* flagMaterial; // 0x4f0(0x08)
	struct USizeBox* iconSizeBox; // 0x4f8(0x08)
	struct UPhoenixImage* LevelBack; // 0x500(0x08)
	struct UHorizontalBox* NewGame; // 0x508(0x08)
	struct UPhoenixTextBlock* NewGameTitle; // 0x510(0x08)
	struct UPhoenixImage* PhoenixImage_86; // 0x518(0x08)
	struct UPhoenixTextBlock* playerLevelText; // 0x520(0x08)
	struct FMulticastInlineDelegate OnCharacterHovered; // 0x528(0x10)
	struct FMulticastInlineDelegate OnCharacterUnhovered; // 0x538(0x10)
	struct FMulticastInlineDelegate OnCharacterClicked; // 0x548(0x10)
	bool IsSelected; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UUserWidget* CursorClass; // 0x560(0x08)
	bool IsEmptySlot; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	int32_t CharacterID; // 0x56c(0x04)
	struct UHorizontalBoxSlot* rayBurst; // 0x570(0x08)
	struct FString CharacterName; // 0x578(0x10)
	struct FSaveGameInfo LatestSaveGame; // 0x588(0x78)
	enum class HouseIds House; // 0x600(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetIsIntroSave(bool& Result); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.GetIsIntroSave // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetHouse(bool IsEmpty, enum class HouseIds PlayerHouse); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetHouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCharacterData(bool IsCharacter, struct FString CharacterName, enum class HouseIds House, struct FString SaveText, int32_t CharacterID, int32_t CharacterLevel, struct FString SaveTimeOverride); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsCurrentSelection(bool IsCurrent); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetIsCurrentSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetButtonIcons(struct FString BackgroundImage); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetButtonIcons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UWidget* GetExtraContent(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.GetExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleNonExistent(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleNonExistent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleDisabled(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleEnabled(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool RemoveExtraContent(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.RemoveExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AddExtraContent(struct UWidget* NewContent); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.AddExtraContent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetState(bool IsActive); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInteractable(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(enum class EIconButtonState NewState); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetButtonState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSynchronizeProperties(); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CharacterSelectButton(int32_t EntryPoint); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.ExecuteUbergraph_UI_BP_CharacterSelectButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

