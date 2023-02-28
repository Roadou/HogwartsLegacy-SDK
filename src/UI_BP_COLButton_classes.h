// WidgetBlueprintGeneratedClass UI_BP_COLButton.UI_BP_COLButton_C
// Size: 0x510 (Inherited: 0x4a8)
struct UUI_BP_COLButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x4b0(0x08)
	struct UImage* ButtonBackground; // 0x4b8(0x08)
	struct UImage* buttonImage; // 0x4c0(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x4c8(0x08)
	struct UPhoenixTextBlock* MaxCount; // 0x4d0(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x4d8(0x08)
	struct UPhoenixTextBlock* Slash; // 0x4e0(0x08)
	enum class UI_BP_CollectionCategoryEnum CollectionCategory; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FString TitleText; // 0x4f0(0x10)
	float ButtonFillPercent; // 0x500(0x04)
	bool MeterMatLoaded; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct FName NewIndicatoryCategory; // 0x508(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_COLButton.UI_BP_COLButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetNewIndicatorVisibility(); // Function UI_BP_COLButton.UI_BP_COLButton_C.SetNewIndicatorVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCategoryGraphics(); // Function UI_BP_COLButton.UI_BP_COLButton_C.SetCategoryGraphics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FillMatLoaded(struct UObject* LoadedMat); // Function UI_BP_COLButton.UI_BP_COLButton_C.FillMatLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonLevels(int32_t Current, int32_t Max); // Function UI_BP_COLButton.UI_BP_COLButton_C.SetButtonLevels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_COLButton.UI_BP_COLButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_COLButton.UI_BP_COLButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HighlightButton(bool isHighlighted); // Function UI_BP_COLButton.UI_BP_COLButton_C.HighlightButton // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CollectionsButton_TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_COLButton.UI_BP_COLButton_C.BndEvt__UI_BP_CollectionsButton_TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CollectionsButton_TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_COLButton.UI_BP_COLButton_C.BndEvt__UI_BP_CollectionsButton_TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_COLButton(int32_t EntryPoint); // Function UI_BP_COLButton.UI_BP_COLButton_C.ExecuteUbergraph_UI_BP_COLButton // (Final|UbergraphFunction) // @ game+0x38a7480
};

