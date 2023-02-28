// WidgetBlueprintGeneratedClass UI_BP_CinematicPicker.UI_BP_CinematicPicker_C
// Size: 0x280 (Inherited: 0x268)
struct UUI_BP_CinematicPicker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUI_BP_SettingsDropDownButton_C* CinematicDropDown; // 0x270(0x08)
	struct UUI_BP_MenuTextButton_C* PlayCinematicButton; // 0x278(0x08)

	void GetLastPlayedIndex(struct TArray<struct FString>& Cinematics, int32_t& Index); // Function UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.GetLastPlayedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCinematicIDs(struct TArray<struct FString>& CinematicIDs); // Function UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.GetCinematicIDs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CinematicPicker(int32_t EntryPoint); // Function UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.ExecuteUbergraph_UI_BP_CinematicPicker // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

