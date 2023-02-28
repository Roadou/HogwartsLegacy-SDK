// WidgetBlueprintGeneratedClass UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C
// Size: 0x2d0 (Inherited: 0x268)
struct UUI_BP_FG_QuestTask_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixTextBlock* NavigateText; // 0x270(0x08)
	struct UOverlay* NavigateWidget; // 0x278(0x08)
	struct UImage* taskCompleteIcon; // 0x280(0x08)
	struct UButton* TrackButton; // 0x288(0x08)
	struct UImage* TrackedBG; // 0x290(0x08)
	struct UImage* TrackedBorder; // 0x298(0x08)
	struct UPhoenixTextBlock* traitDescription; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x2a8(0x10)
	bool IsTrackable; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FString objectiveText; // 0x2c0(0x10)

	void SetSelected(bool IsSelected); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTaskData(struct FString TaskDescription, bool TaskComplete, int32_t RuntimeVal1, int32_t RuntimeVal2, bool Trackable, bool Tracked); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.SetTaskData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.BndEvt__UI_BP_FG_QuestTask_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_QuestTask(int32_t EntryPoint); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.ExecuteUbergraph_UI_BP_FG_QuestTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnButtonClicked__DelegateSignature(struct UUI_BP_FG_QuestTask_C* Button); // Function UI_BP_FG_QuestTask.UI_BP_FG_QuestTask_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

