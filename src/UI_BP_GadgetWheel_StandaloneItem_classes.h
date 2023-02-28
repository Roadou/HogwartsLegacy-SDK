// WidgetBlueprintGeneratedClass UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C
// Size: 0x3a9 (Inherited: 0x328)
struct UUI_BP_GadgetWheel_StandaloneItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x330(0x08)
	struct UButton* BoundingBox; // 0x338(0x08)
	struct UCanvasPanel* buttonPanel; // 0x340(0x08)
	struct UPhoenixRichTextBlock* ButtonPrompt; // 0x348(0x08)
	struct UImage* DeathTimerFill; // 0x350(0x08)
	struct UCanvasPanel* imagePanel; // 0x358(0x08)
	struct UImage* ItemImage; // 0x360(0x08)
	struct UImage* NoMountIcon; // 0x368(0x08)
	struct FName ItemName; // 0x370(0x08)
	struct FString LegendString; // 0x378(0x10)
	bool IsLocked; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FName HolderID; // 0x38c(0x08)
	char pad_394[0x4]; // 0x394(0x04)
	struct FMulticastInlineDelegate OnClickEvent; // 0x398(0x10)
	bool BroomMountIsUsable; // 0x3a8(0x01)

	void CheckItemID(struct FString NewID, struct FString& NewItemID); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.CheckItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTimeoutPct(float& pct); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.GetTimeoutPct // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoadItemIcon(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.OnLoadItemIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Toggle Highlight(bool Is Highlighted); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.Toggle Highlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUsability(bool IsUsable); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.SetUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemName(struct FName ItemName); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.SetItemName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem(int32_t EntryPoint); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnClickEvent__DelegateSignature(); // Function UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.OnClickEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

