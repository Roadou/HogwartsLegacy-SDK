// WidgetBlueprintGeneratedClass UI_BP_AutoSave.UI_BP_AutoSave_C
// Size: 0x311 (Inherited: 0x2e8)
struct UUI_BP_AutoSave_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* SaveLoop_House; // 0x2f0(0x08)
	struct UWidgetAnimation* hideAutoSave; // 0x2f8(0x08)
	struct UWidgetAnimation* showAutoSave; // 0x300(0x08)
	struct UImage* Houses; // 0x308(0x08)
	bool UseManualHide; // 0x310(0x01)

	void StopLoopingSave(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.StopLoopingSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartLoopingSave(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.StartLoopingSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideSave(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.HideSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowSave(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.ShowSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AutoSave(int32_t EntryPoint); // Function UI_BP_AutoSave.UI_BP_AutoSave_C.ExecuteUbergraph_UI_BP_AutoSave // (Final|UbergraphFunction) // @ game+0x38a7480
};

