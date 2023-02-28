// WidgetBlueprintGeneratedClass UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C
// Size: 0x5b1 (Inherited: 0x4a8)
struct UUI_BP_BrewingRecipeButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* ErrorAnimation; // 0x4b0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4b8(0x08)
	struct UWidgetAnimation* TutorialBounce; // 0x4c0(0x08)
	struct UImage* Border; // 0x4c8(0x08)
	struct UImage* DisabledOverlay; // 0x4d0(0x08)
	struct UImage* highlight; // 0x4d8(0x08)
	struct UPhoenixImage* lockIcon; // 0x4e0(0x08)
	struct UImage* RecipeImage; // 0x4e8(0x08)
	struct UBorder* TutorialHighlight; // 0x4f0(0x08)
	struct FBrewingRecipe PreviewRecipe; // 0x4f8(0x40)
	enum class E_BrewingRecipeAvailability PreviewAvailability; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnHovered; // 0x540(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x550(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x560(0x10)
	struct FBrewingRecipe ButtonRecipe; // 0x570(0x40)
	enum class E_BrewingRecipeAvailability ButtonAvailability; // 0x5b0(0x01)

	void PlayErrorAnimation(); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.PlayErrorAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitButton(struct FBrewingRecipe Recipe, enum class E_BrewingRecipeAvailability Availablilty); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.InitButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIsTutorialHighlighted(bool bIsTutorialHighlighted); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.SetIsTutorialHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BrewingRecipeButton(int32_t EntryPoint); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.ExecuteUbergraph_UI_BP_BrewingRecipeButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClicked__DelegateSignature(struct UUI_BP_BrewingRecipeButton_C* Button); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered__DelegateSignature(struct UUI_BP_BrewingRecipeButton_C* Button); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHovered__DelegateSignature(struct UUI_BP_BrewingRecipeButton_C* Button); // Function UI_BP_BrewingRecipeButton.UI_BP_BrewingRecipeButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

