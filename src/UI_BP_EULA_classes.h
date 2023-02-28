// WidgetBlueprintGeneratedClass UI_BP_EULA.UI_BP_EULA_C
// Size: 0x3e8 (Inherited: 0x328)
struct UUI_BP_EULA_C : UEULAPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* FadeOut; // 0x330(0x08)
	struct UUI_BP_HYDRATextButton_C* accept; // 0x338(0x08)
	struct UPhoenixRichTextBlock* AcceptText; // 0x340(0x08)
	struct UPhoenixTextBlock* BuildVersion; // 0x348(0x08)
	struct UUI_BP_SimpleScrollBox_C* EULAscrollBox; // 0x350(0x08)
	struct UPhoenixTextBlock* Hydra_ID; // 0x358(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x360(0x08)
	struct UPhoenixRichTextBlock* mainBodyText; // 0x368(0x08)
	struct UUI_BP_HYDRATextButton_C* PrivacyPolicy; // 0x370(0x08)
	struct UPhoenixTextBlock* ProfileName; // 0x378(0x08)
	struct UUI_BP_HYDRATextButton_C* ReadEULA; // 0x380(0x08)
	struct UUI_BP_HYDRATextButton_C* termsOfService; // 0x388(0x08)
	float ScrollBuffer; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FString ppLink; // 0x398(0x10)
	struct FString tosLink; // 0x3a8(0x10)
	bool AcceptedEULA; // 0x3b8(0x01)
	bool StandAloneMode; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct FMulticastInlineDelegate EulaAccepted; // 0x3c0(0x10)
	bool IsOnScreen; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FString tosPlatform; // 0x3d8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_EULA.UI_BP_EULA_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void PrivacyClicked(); // Function UI_BP_EULA.UI_BP_EULA_C.PrivacyClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TOSClicked(); // Function UI_BP_EULA.UI_BP_EULA_C.TOSClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AcceptClicked(); // Function UI_BP_EULA.UI_BP_EULA_C.AcceptClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadEULAClicked(); // Function UI_BP_EULA.UI_BP_EULA_C.ReadEULAClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateButtonTexts(); // Function UI_BP_EULA.UI_BP_EULA_C.UpdateButtonTexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_EULA.UI_BP_EULA_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsOnScreen(); // Function UI_BP_EULA.UI_BP_EULA_C.SetIsOnScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_EULA.UI_BP_EULA_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_EULA.UI_BP_EULA_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_EULA.UI_BP_EULA_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EULALoaded(struct UObject* Caller); // Function UI_BP_EULA.UI_BP_EULA_C.EULALoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_EULA.UI_BP_EULA_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_EULA.UI_BP_EULA_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature(struct UUI_BP_HYDRATextButton_C* Button); // Function UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExternalConfigUpdated(struct UObject* Caller); // Function UI_BP_EULA.UI_BP_EULA_C.ExternalConfigUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshReadEulaButton(); // Function UI_BP_EULA.UI_BP_EULA_C.RefreshReadEulaButton // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserProfileChange(struct UObject* Caller, struct FString String); // Function UI_BP_EULA.UI_BP_EULA_C.UserProfileChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_EULA(int32_t EntryPoint); // Function UI_BP_EULA.UI_BP_EULA_C.ExecuteUbergraph_UI_BP_EULA // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void EulaAccepted__DelegateSignature(); // Function UI_BP_EULA.UI_BP_EULA_C.EulaAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

