// WidgetBlueprintGeneratedClass UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C
// Size: 0x350 (Inherited: 0x2e8)
struct UUI_BP_SpecialChallengeNotification_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideChallengeUnlock_Anim; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowChallengeUnlock_Anim; // 0x2f8(0x08)
	struct UImage* challengeIcon; // 0x300(0x08)
	struct UPhoenixTextBlock* CompleteMissionName; // 0x308(0x08)
	struct UImage* pulseCloud; // 0x310(0x08)
	struct UImage* pulseRing; // 0x318(0x08)
	struct UImage* shieldSparks_2; // 0x320(0x08)
	float Duration; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct FChallengeNotificationData> NotificationData; // 0x330(0x10)
	struct FString ChallengeName; // 0x340(0x10)

	void SetChallengeDisplayText(struct FName ChallengeID, int32_t TotalRequired); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.SetChallengeDisplayText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearNotification(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.ClearNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideChallengeUnlock(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.HideChallengeUnlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestChallengeUnlock(struct FName ChallengeID, struct FName ChallengeCategory, int32_t TotalRequired); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.RequestChallengeUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.IconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void OnShowNotification(struct UObject* Caller); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.OnShowNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SpecialChallengeNotification(int32_t EntryPoint); // Function UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.ExecuteUbergraph_UI_BP_SpecialChallengeNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

