// WidgetBlueprintGeneratedClass UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C
// Size: 0x380 (Inherited: 0x328)
struct UUI_BP_HerbologyFertilizerButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixTextBlock* descriptionText; // 0x330(0x08)
	struct UUI_BP_InventoryIconButton_C* Icon; // 0x338(0x08)
	struct UPhoenixTextBlock* NameText; // 0x340(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x348(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x358(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x368(0x10)
	struct FName FertilizerName; // 0x378(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void InitFertilizer(struct FInventoryResult FertilizerItem); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.InitFertilizer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologyFertilizerButton(int32_t EntryPoint); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.ExecuteUbergraph_UI_BP_HerbologyFertilizerButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnUnhovered__DelegateSignature(struct FName FertilizerID); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHovered__DelegateSignature(struct FName FertilizerID, struct UUI_BP_HerbologyFertilizerButton_C* FertilizerButton); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClicked__DelegateSignature(struct FName FertilizerID); // Function UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

