// WidgetBlueprintGeneratedClass UI_BP_NavBarButton.UI_BP_NavBarButton_C
// Size: 0x44c (Inherited: 0x3e8)
struct UUI_BP_NavBarButton_C : UTextButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* ShowHighlight; // 0x3f0(0x08)
	struct UImage* highlight; // 0x3f8(0x08)
	struct UImage* highlightBack; // 0x400(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x408(0x08)
	struct FMulticastInlineDelegate OnHoveredEventDispatcher; // 0x410(0x10)
	struct FMulticastInlineDelegate OnClickedEventDispatcher; // 0x420(0x10)
	struct FMulticastInlineDelegate OnUnhoveredEventDispatcher; // 0x430(0x10)
	bool IsSelected; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FName Category; // 0x444(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetItemCount(int32_t NewCount); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.SetItemCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSelectedState(bool isSelectedButton); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.SetSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSynchronizeProperties(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NavBarButton(int32_t EntryPoint); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.ExecuteUbergraph_UI_BP_NavBarButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnUnhoveredEventDispatcher__DelegateSignature(); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnUnhoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClickedEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnClickedEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoveredEventDispatcher__DelegateSignature(struct UUI_BP_NavBarButton_C* Me); // Function UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnHoveredEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

