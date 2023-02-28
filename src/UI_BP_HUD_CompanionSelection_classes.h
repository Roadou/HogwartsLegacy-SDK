// WidgetBlueprintGeneratedClass UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C
// Size: 0x420 (Inherited: 0x370)
struct UUI_BP_HUD_CompanionSelection_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* HideCompanionSelection; // 0x378(0x08)
	struct UWidgetAnimation* ShowCompanionSelection; // 0x380(0x08)
	struct UPhoenixTextBlock* CompanionDisabledText; // 0x388(0x08)
	struct UUI_BP_LegendBar_C* Legend; // 0x390(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x398(0x08)
	bool isCompanionLevelShown; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TMap<struct FName, struct UUI_BP_CompanionSelectionButton_C*> CompanionsMap; // 0x3a8(0x50)
	struct FName InitialCompanion; // 0x3f8(0x08)
	struct FName CurrentCompanion; // 0x400(0x08)
	struct TArray<struct FName> DisabledCompanions; // 0x408(0x10)
	struct FName HoveredCompanion; // 0x418(0x08)

	void UpdateLegend(bool CharacterHovered, bool HoveredCharacterSelected); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.UpdateLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCompanionSelectionButton(struct FName CompanionName, struct UUI_BP_CompanionSelectionButton_C* CompanionSelectionButton); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.SetCompanionSelectionButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompanionSelected(struct UUI_BP_CompanionSelectionButton_C* compButton); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void companionUnhovered(struct UUI_BP_CompanionSelectionButton_C* compButton); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.companionUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompanionHovered(struct UUI_BP_CompanionSelectionButton_C* compButton); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CompanionLevelShown(struct UObject* Caller); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionLevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HUD_CompanionSelection(int32_t EntryPoint); // Function UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.ExecuteUbergraph_UI_BP_HUD_CompanionSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

