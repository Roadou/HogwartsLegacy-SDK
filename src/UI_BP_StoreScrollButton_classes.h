// WidgetBlueprintGeneratedClass UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C
// Size: 0x298 (Inherited: 0x268)
struct UUI_BP_StoreScrollButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* OnPressed; // 0x270(0x08)
	struct UWidgetAnimation* OnHover; // 0x278(0x08)
	struct UButton* scrollButton; // 0x280(0x08)
	struct FMulticastInlineDelegate OnScrollButtonClicked; // 0x288(0x10)

	void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_StoreScrollButton(int32_t EntryPoint); // Function UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.ExecuteUbergraph_UI_BP_StoreScrollButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnScrollButtonClicked__DelegateSignature(); // Function UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.OnScrollButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

