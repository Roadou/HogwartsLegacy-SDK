// WidgetBlueprintGeneratedClass UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C
// Size: 0x58c (Inherited: 0x4a8)
struct UUI_BP_FG_CategoryBarButton_C : UTabIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* ShowHighlight; // 0x4b0(0x08)
	struct UWidgetAnimation* NewPulse; // 0x4b8(0x08)
	struct UWidgetAnimation* hideSelected; // 0x4c0(0x08)
	struct UWidgetAnimation* ShowSelected; // 0x4c8(0x08)
	struct UImage* BackGlitter; // 0x4d0(0x08)
	struct UImage* Background; // 0x4d8(0x08)
	struct UPhoenixTextBlock* categoryCount; // 0x4e0(0x08)
	struct UPhoenixTextBlock* categoryTitle; // 0x4e8(0x08)
	struct UCanvasPanel* contentHolder; // 0x4f0(0x08)
	struct UImage* highlight; // 0x4f8(0x08)
	struct UCanvasPanel* ItemCount; // 0x500(0x08)
	struct UBorder* newItemBorder; // 0x508(0x08)
	struct UBorder* textBorder; // 0x510(0x08)
	bool currentlyActive; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	struct FVector LocalPosition; // 0x51c(0x0c)
	struct FGeometry WidgetGeometry; // 0x528(0x38)
	struct FLinearColor HouseColor; // 0x560(0x10)
	bool ShowCategoryTitle; // 0x570(0x01)
	bool ShowCategoryCount; // 0x571(0x01)
	char pad_572[0x6]; // 0x572(0x06)
	struct FString CategoryID; // 0x578(0x10)
	int32_t CountValue; // 0x588(0x04)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleNewIndicator(bool Show); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ToggleNewIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCategoryCount(bool ShowCategoryCount, int32_t NewCount); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ToggleCategoryCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleCategoryText(bool ShowCategoryTitle, struct FString NewTitle); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ToggleCategoryText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonColor(struct FLinearColor NewColor); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonCount(int32_t NewCount); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonFontSize(int32_t NewFontSize); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonText(struct FString NewString); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SetState(bool IsActive); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInteractable(); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSelectionChanged(bool selected); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_CategoryBarButton(int32_t EntryPoint); // Function UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ExecuteUbergraph_UI_BP_FG_CategoryBarButton // (Final|UbergraphFunction) // @ game+0x38a7480
};

