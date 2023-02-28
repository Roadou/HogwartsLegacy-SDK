// WidgetBlueprintGeneratedClass UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C
// Size: 0x3e0 (Inherited: 0x328)
struct UUI_BP_PopUpLinkingAcounts_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* TransitionToMessage; // 0x330(0x08)
	struct UWidgetAnimation* ShowCopiedText; // 0x338(0x08)
	struct UOverlay* connectingPopup; // 0x340(0x08)
	struct UPhoenixTextBlock* Description; // 0x348(0x08)
	struct UVerticalBox* linkInfoPanel; // 0x350(0x08)
	struct UPhoenixTextBlock* Linkmesage; // 0x358(0x08)
	struct UVerticalBox* PopupContents; // 0x360(0x08)
	struct UPhoenixTextBlock* popupMessage; // 0x368(0x08)
	struct UPhoenixImage* QR_Code; // 0x370(0x08)
	struct UButton* ShortcodeButton; // 0x378(0x08)
	struct UPhoenixTextBlock* ShortcodeDesc; // 0x380(0x08)
	struct UPhoenixTextBlock* ShortcodeText; // 0x388(0x08)
	struct UPhoenixTextBlock* ShortcodeTitle; // 0x390(0x08)
	struct UPhoenixTextBlock* TextCopied; // 0x398(0x08)
	struct UPhoenixTextBlock* Title; // 0x3a0(0x08)
	struct UUI_BP_LoadDoor_C* UI_BP_LoadDoor; // 0x3a8(0x08)
	struct UButton* UrlButton; // 0x3b0(0x08)
	struct UPhoenixTextBlock* UrlText; // 0x3b8(0x08)
	struct FString SigninUrl; // 0x3c0(0x10)
	struct FString SigninShortcode; // 0x3d0(0x10)

	void ShowLinkPopup(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ShowLinkPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateUnlinkData(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.UpdateUnlinkData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetToDefaultState(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ResetToDefaultState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPopup(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ShowPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HidePopup(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.HidePopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdatePopupData(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.UpdatePopupData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PopUpLinkingAcounts(int32_t EntryPoint); // Function UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ExecuteUbergraph_UI_BP_PopUpLinkingAcounts // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

