// WidgetBlueprintGeneratedClass UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C
// Size: 0x460 (Inherited: 0x370)
struct UUI_BP_FastTravelSave_Interaction_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* showFastTravelMenu; // 0x378(0x08)
	struct UUI_BP_FastTravelInteraction_Item_C* backItem; // 0x380(0x08)
	struct UButton* ClickableBackButton; // 0x388(0x08)
	struct UUI_BP_FastTravelInteraction_Item_C* companionItem; // 0x390(0x08)
	struct UUI_BP_LegendItem_C* Legend; // 0x398(0x08)
	struct UUI_BP_FastTravelInteraction_Item_C* waitItem; // 0x3a0(0x08)
	struct UStationComponent* StationComponent; // 0x3a8(0x08)
	struct TArray<struct FStationQueryData> Actions; // 0x3b0(0x10)
	bool EnteredStation; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UUI_BP_BasicToolTipPopout_C* Popout; // 0x3c8(0x08)
	struct TMap<struct FName, int32_t> ActionMap; // 0x3d0(0x50)
	bool OnlyLeave; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UBTTask_AvaAITree* AITree; // 0x428(0x08)
	struct TArray<struct UUI_BP_FastTravelInteraction_Item_C*> OptionArray; // 0x430(0x10)
	int32_t currentOptionIndex; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UUI_BP_FastTravelInteraction_Item_C* currentOptionButton; // 0x448(0x08)
	int32_t maxOptions; // 0x450(0x04)
	bool ButtonPressedHere; // 0x454(0x01)
	bool WaitingTutorialActive; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	struct ASceneRigActor* WaitSceneRigActor; // 0x458(0x08)

	void RefreshShouldShowCursor(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.RefreshShouldShowCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateEnabledOptions(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.UpdateEnabledOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWaitEnable(bool WaitEnabled); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.SetWaitEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnyOptionsEnabled(bool& OptionsAvailable); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.AnyOptionsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get First Enabled Option(int32_t& NumberAvailable); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Get First Enabled Option // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetNumberOfEnabledButtons(int32_t& NumberAvailable); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.GetNumberOfEnabledButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveToPreviousAvailableOption(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.MoveToPreviousAvailableOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveToNextAvailableOption(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.MoveToNextAvailableOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectedOption(struct UUI_BP_FastTravelInteraction_Item_C* FastTravelButton); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.SelectedOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonBindings(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.SetButtonBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreviousOption(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.PreviousOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NextOption(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.NextOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonHovered(struct UUI_BP_FastTravelInteraction_Item_C* Button); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.OnButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Camera(bool Enabled); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanupandLeaveStation(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.CleanupandLeaveStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClassLoaded(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.ClassLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationStoryEnded(struct UObject* Caller); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.StationStoryEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseStationInteraction(struct UObject* Caller); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.CloseStationInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerHint(struct FString HintKey); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.TriggerHint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearHint(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.ClearHint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Button Hovered(struct UUI_BP_FastTravelInteraction_Item_C* Button); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.On Button Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Button Clicked(struct UUI_BP_FastTravelInteraction_Item_C* Button); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.On Button Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FastTravelSave_Interaction(int32_t EntryPoint); // Function UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.ExecuteUbergraph_UI_BP_FastTravelSave_Interaction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

