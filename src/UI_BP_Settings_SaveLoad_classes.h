// WidgetBlueprintGeneratedClass UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C
// Size: 0x4b0 (Inherited: 0x410)
struct UUI_BP_Settings_SaveLoad_C : USaveLoadSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* hideDetails; // 0x418(0x08)
	struct UWidgetAnimation* showDetails; // 0x420(0x08)
	struct UWidgetAnimation* ToLoadList; // 0x428(0x08)
	struct UUI_BP_MenuTextButton_C* button_exit; // 0x430(0x08)
	struct UUI_BP_MenuTextButton_C* button_exitToMain; // 0x438(0x08)
	struct UUI_BP_MenuTextButton_C* button_hoverDrone; // 0x440(0x08)
	struct UUI_BP_MenuTextButton_C* button_load; // 0x448(0x08)
	struct UUI_BP_MenuTextButton_C* button_restart; // 0x450(0x08)
	struct UUI_BP_MenuTextButton_C* button_save; // 0x458(0x08)
	struct UUI_BP_SettingsDetails_C* detailsPanel; // 0x460(0x08)
	struct UUI_BP_ScrollingTextTestButton_C* scrollingTextTestButton; // 0x468(0x08)
	struct TArray<struct UUI_BP_MenuTextButton_C*> ButtonArray; // 0x470(0x10)
	bool isButtonHovered; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float CurrentHoverTime; // 0x484(0x04)
	float RequiredHoverTime; // 0x488(0x04)
	bool isDetailsShowing; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct FString HoveredButtonText; // 0x490(0x10)
	struct FMulticastInlineDelegate RestartFromLastSaveFail; // 0x4a0(0x10)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_1(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetTooltipShowing(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.ResetTooltipShowing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonHovered(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.MenuButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuButtonUnhovered(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.MenuButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnSavePopup(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnSavePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitGamePopupClosed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnExitGamePopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestartPopupClosed(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnRestartPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSaveGameFailed(struct UObject* Caller); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.LoadSaveGameFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Settings_SaveLoad(int32_t EntryPoint); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.ExecuteUbergraph_UI_BP_Settings_SaveLoad // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void RestartFromLastSaveFail__DelegateSignature(); // Function UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.RestartFromLastSaveFail__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

