// WidgetBlueprintGeneratedClass UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C
// Size: 0x599 (Inherited: 0x4a8)
struct UUI_BP_AppearanceIcon_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnSelected; // 0x4b0(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4b8(0x08)
	struct UWidgetAnimation* OnButtonHovered; // 0x4c0(0x08)
	struct UOverlay* appearanceContent; // 0x4c8(0x08)
	struct UImage* AppearanceImage; // 0x4d0(0x08)
	struct UPhoenixImage* emptyIcon; // 0x4d8(0x08)
	struct USizeBox* iconSizeBox; // 0x4e0(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x4e8(0x08)
	struct UPhoenixImage* normalBorder; // 0x4f0(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x4f8(0x08)
	struct UImage* selected; // 0x500(0x08)
	struct UPhoenixImage* selectedBorder; // 0x508(0x08)
	struct UPhoenixImage* selectedGlitter; // 0x510(0x08)
	struct UPhoenixImage* specialBorder; // 0x518(0x08)
	struct UBorder* TutorialHighlight; // 0x520(0x08)
	struct FMulticastInlineDelegate OnHoveredAppearnace; // 0x528(0x10)
	struct FMulticastInlineDelegate OnUnhoveredAppearance; // 0x538(0x10)
	struct FMulticastInlineDelegate OnClickedAppearance; // 0x548(0x10)
	bool IsSelected; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UUserWidget* CursorClass; // 0x560(0x08)
	struct FGearItemID AppearanceID; // 0x568(0x14)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FString AppearanceName; // 0x580(0x10)
	struct FName AppearanceVariation; // 0x590(0x08)
	enum class EGearSlotIDEnum AppearanceSlotType; // 0x598(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsNewItem(bool IsNew); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HandleMissing(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.HandleMissing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitSelected(bool IsSelected); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetInitSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitAppearanceItem(struct FGearItemID AppearanceID, bool isCostume); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.InitAppearanceItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAppearanceIcon(struct FString AppearanceID); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetAppearanceIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonSize(struct FVector2D NewSize); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetButtonSize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsLocked(bool IsLocked); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsCurrentSelection(bool IsCurrent); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsCurrentSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSelected(bool buttonSelected); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInteractable(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetButtonState(enum class EIconButtonState NewState); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetButtonState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsNew(bool bIsNew); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsNew // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAppearanceIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnAppearanceIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AppearanceIcon(int32_t EntryPoint); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.ExecuteUbergraph_UI_BP_AppearanceIcon // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClickedAppearance__DelegateSignature(struct UUI_BP_AppearanceIcon_C* AppearanceButton); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnClickedAppearance__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhoveredAppearance__DelegateSignature(struct UUI_BP_AppearanceIcon_C* AppearanceButton); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnUnhoveredAppearance__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoveredAppearnace__DelegateSignature(struct UUI_BP_AppearanceIcon_C* AppearanceButton); // Function UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnHoveredAppearnace__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

