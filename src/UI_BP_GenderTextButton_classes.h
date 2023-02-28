// WidgetBlueprintGeneratedClass UI_BP_GenderTextButton.UI_BP_GenderTextButton_C
// Size: 0x3e4 (Inherited: 0x328)
struct UUI_BP_GenderTextButton_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnButtonDeselected; // 0x330(0x08)
	struct UWidgetAnimation* OnButtonSelected; // 0x338(0x08)
	struct UWidgetAnimation* OnHover; // 0x340(0x08)
	struct UPhoenixImage* BackGorund; // 0x348(0x08)
	struct UImage* buttonSmoke; // 0x350(0x08)
	struct UImage* FlareBack; // 0x358(0x08)
	struct UImage* Frame; // 0x360(0x08)
	struct UImage* Glitter; // 0x368(0x08)
	struct UImage* Glitter2; // 0x370(0x08)
	struct UUI_BP_SelectedBox_C* selectedBox; // 0x378(0x08)
	struct UButton* TheButton; // 0x380(0x08)
	struct UPhoenixTextBlock* TheText; // 0x388(0x08)
	struct FMulticastInlineDelegate MenuTextButtonClicked; // 0x390(0x10)
	struct FMulticastInlineDelegate MenuTextButtonHovered; // 0x3a0(0x10)
	struct FMulticastInlineDelegate MenuTextButtonUnhovered; // 0x3b0(0x10)
	struct FString ButtonText; // 0x3c0(0x10)
	bool IsActive; // 0x3d0(0x01)
	bool Hovered; // 0x3d1(0x01)
	char pad_3D2[0x6]; // 0x3d2(0x06)
	struct UMaterialInstanceDynamic* SmokeMaterial; // 0x3d8(0x08)
	float UTiling; // 0x3e0(0x04)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetIsSelected(bool IsSelected); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString ButtonText); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GenderTextButton(int32_t EntryPoint); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.ExecuteUbergraph_UI_BP_GenderTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_GenderTextButton_C* Button); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuTextButtonHovered__DelegateSignature(struct UUI_BP_GenderTextButton_C* Button); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuTextButtonClicked__DelegateSignature(struct UUI_BP_GenderTextButton_C* Button); // Function UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

