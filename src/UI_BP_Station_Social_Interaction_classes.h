// WidgetBlueprintGeneratedClass UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C
// Size: 0x42d (Inherited: 0x370)
struct UUI_BP_Station_Social_Interaction_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UVerticalBox* OptionBox; // 0x378(0x08)
	struct UStationComponent* StationComponent; // 0x380(0x08)
	struct TArray<struct FStationQueryData> Actions; // 0x388(0x10)
	struct AStation* Current Station; // 0x398(0x08)
	bool EnteredStation; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UUI_BP_BasicToolTipPopout_C* Popout; // 0x3a8(0x08)
	struct TMap<struct FName, int32_t> ActionMap; // 0x3b0(0x50)
	struct UBTTask_AvaAITree* AITree; // 0x400(0x08)
	struct TArray<struct UUI_BP_StationInteractButton_C*> OptionArray; // 0x408(0x10)
	int32_t currentOptionIndex; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UUI_BP_StationInteractButton_C* currentOptionButton; // 0x420(0x08)
	int32_t maxOptions; // 0x428(0x04)
	bool ButtonPressedHere; // 0x42c(0x01)

	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreviousOption(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.PreviousOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NextOption(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.NextOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonHovered(struct UUI_BP_StationInteractButton_C* Button); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.OnButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Camera(bool Enabled); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanupandLeaveStation(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.CleanupandLeaveStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectedButton(struct UUI_BP_StationInteractButton_C* Button); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.SelectedButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetStationOptions(struct TArray<struct FStationQueryData>& Actions); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.GetStationOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClassLoaded(); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.ClassLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationStoryEnded(struct UObject* Caller); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.StationStoryEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseStationInteraction(struct UObject* Caller); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.CloseStationInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Station_Social_Interaction(int32_t EntryPoint); // Function UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.ExecuteUbergraph_UI_BP_Station_Social_Interaction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

