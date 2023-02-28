// WidgetBlueprintGeneratedClass UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C
// Size: 0x341 (Inherited: 0x2e8)
struct UUI_BP_OutOfAreaNotification_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* PulseCountdownText; // 0x2f0(0x08)
	struct UWidgetAnimation* hideNotification; // 0x2f8(0x08)
	struct UWidgetAnimation* PulseText; // 0x300(0x08)
	struct UWidgetAnimation* ShowNotification; // 0x308(0x08)
	struct UPhoenixTextBlock* countdown; // 0x310(0x08)
	struct UPhoenixTextBlock* notificationMessage; // 0x318(0x08)
	struct UImage* redScrim; // 0x320(0x08)
	bool isReadyForCountdown; // 0x328(0x01)
	bool HasCountdownStarted; // 0x329(0x01)
	char pad_32A[0x2]; // 0x32a(0x02)
	int32_t CountTime; // 0x32c(0x04)
	int32_t currentCountTime; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FTimerHandle CountdownTimer; // 0x338(0x08)
	bool DesiredActiveState; // 0x340(0x01)

	void StopNotification(); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.StopNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateNotificationTime(float NewTime); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.UpdateNotificationTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartNotification(struct FString ErrorMessage, float CountdownTime); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.StartNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_OutOfAreaNotification(int32_t EntryPoint); // Function UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.ExecuteUbergraph_UI_BP_OutOfAreaNotification // (Final|UbergraphFunction) // @ game+0x38a7480
};

