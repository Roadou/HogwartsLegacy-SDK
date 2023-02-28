// WidgetBlueprintGeneratedClass UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C
// Size: 0x2f8 (Inherited: 0x2b0)
struct UUI_BP_ChallengeNotification_C : UNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* NotificationIN; // 0x2b8(0x08)
	struct UWidgetAnimation* NotificationOUT; // 0x2c0(0x08)
	struct UImage* challengeIcon; // 0x2c8(0x08)
	struct UPhoenixTextBlock* CurrentCount; // 0x2d0(0x08)
	struct UPhoenixTextBlock* MaxCount; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OutAnimationStarted; // 0x2e0(0x10)
	struct FTimerHandle LifetimeHandle; // 0x2f0(0x08)

	void IncrementNotification(int32_t NewCount); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.IncrementNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNotificationData(struct FName ChallengeID, struct FName Category, int32_t CurrentCount, int32_t MaxCount); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.SetNotificationData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearKnowledgeFlag(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ClearKnowledgeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void ShowNotification(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ShowNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void ChallengeNotificationIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ChallengeNotificationIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LifetimeComplete(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.LifetimeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengeNotification(int32_t EntryPoint); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ExecuteUbergraph_UI_BP_ChallengeNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OutAnimationStarted__DelegateSignature(); // Function UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.OutAnimationStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

