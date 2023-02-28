// WidgetBlueprintGeneratedClass UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C
// Size: 0x348 (Inherited: 0x2e8)
struct UUI_BP_ChallengeComplete_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideChallengeUnlock_Anim; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowChallengeUnlock_Anim; // 0x2f8(0x08)
	struct UImage* challengeIcon; // 0x300(0x08)
	struct UPhoenixTextBlock* CompleteMissionName; // 0x308(0x08)
	struct UImage* pulseCloud; // 0x310(0x08)
	struct UImage* pulseRing; // 0x318(0x08)
	struct UImage* shieldCloud; // 0x320(0x08)
	struct UImage* shieldSparks_2; // 0x328(0x08)
	float Duration; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct FChallengeNotificationData> NotificationData; // 0x338(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_3(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetChallengeDisplayText(struct FName ChallengeID, int32_t TotalRequired); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SetChallengeDisplayText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearNotification(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.ClearNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayHideAnimation(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.PlayHideAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IntroAnimationStart(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IntroAnimationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IntroAnimationEnd(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IntroAnimationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OutroAnimationEnded(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OutroAnimationEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestChallengeComplete(struct FName ChallengeID, struct FName ChallengeCategory, int32_t CompletedTier, int32_t TotalTiers, int32_t TotalInstancesForLevel); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.RequestChallengeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void OnShowNotification(struct UObject* Caller); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OnShowNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengeComplete(int32_t EntryPoint); // Function UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.ExecuteUbergraph_UI_BP_ChallengeComplete // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

