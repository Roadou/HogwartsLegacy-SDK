// WidgetBlueprintGeneratedClass UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C
// Size: 0x3f8 (Inherited: 0x370)
struct UUI_BP_CrossGenSaveData_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot1; // 0x378(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot2; // 0x380(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot3; // 0x388(0x08)
	struct UUI_BP_CharacterSelectButton_C* characterSlot4; // 0x390(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x398(0x08)
	struct TArray<struct UUI_BP_CharacterSelectButton_C*> Slot Array; // 0x3a0(0x10)
	int32_t Temp Slot Count; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct FCharacterSaveGameInfo> PlayableCharacters; // 0x3b8(0x10)
	enum class HouseIds House; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UPopupScreen* FailedTransferPopup; // 0x3d0(0x08)
	struct ULegendItem* SelectLegendItem; // 0x3d8(0x08)
	struct UUI_BP_FrontEnd_Menu_C* FrontEnd; // 0x3e0(0x08)
	struct FString Platform Save Time; // 0x3e8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature(struct UUI_BP_CharacterSelectButton_C* IconButton); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SetFrontend(struct UUI_BP_FrontEnd_Menu_C* FrontEnd); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.SetFrontend // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSaveSataTransferComplete_2(bool bResult); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSaveSataTransferComplete_3(bool bResult); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSaveSataTransferComplete_4(bool bResult); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSaveSataTransferComplete_5(bool bResult); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_5 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CrossGenSaveData(int32_t EntryPoint); // Function UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.ExecuteUbergraph_UI_BP_CrossGenSaveData // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

