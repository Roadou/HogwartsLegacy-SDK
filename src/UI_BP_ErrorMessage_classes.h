// WidgetBlueprintGeneratedClass UI_BP_ErrorMessage.UI_BP_ErrorMessage_C
// Size: 0x308 (Inherited: 0x2e8)
struct UUI_BP_ErrorMessage_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ShowErrorMessage; // 0x2f0(0x08)
	struct UImage* ErrorImage; // 0x2f8(0x08)
	struct UPhoenixTextBlock* ErrorMessage; // 0x300(0x08)

	void DisplayErrorMessage(struct FString Key, float DisplayTime); // Function UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.DisplayErrorMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HermesDisplayErrorMessage(struct UObject* Caller, struct FString String); // Function UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.HermesDisplayErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ErrorMessage(int32_t EntryPoint); // Function UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.ExecuteUbergraph_UI_BP_ErrorMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

