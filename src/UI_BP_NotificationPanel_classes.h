// WidgetBlueprintGeneratedClass UI_BP_NotificationPanel.UI_BP_NotificationPanel_C
// Size: 0x3c8 (Inherited: 0x3a8)
struct UUI_BP_NotificationPanel_C : UNotificationPanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UUI_BP_ChallengeNotification_C* ChallengeNotification; // 0x3b0(0x08)
	struct UUI_BP_CollectionNotification_C* CollectionNotification; // 0x3b8(0x08)
	struct UUI_BP_MoneyNotification_C* MoneyNotification; // 0x3c0(0x08)

	void AddPickupNotification(struct FPickupNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddPickupNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddChallengeCompleteNotification(struct FChallengeNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddChallengeCompleteNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddCollectionKnownNotification(struct FCollectionNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddCollectionKnownNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddCollectionObtainedNotification(struct FCollectionNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddCollectionObtainedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddChallengeUpdatedNotification(struct FChallengeNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddChallengeUpdatedNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void IncrementCurrentChallengeUpdate(struct FChallengeNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.IncrementCurrentChallengeUpdate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PickupNotificationComplete(struct UUI_BP_NotificationItem_C* Item); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.PickupNotificationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddMoneyNotification(struct FPickupNotificationData ItemData); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddMoneyNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature(); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature(); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void IncrementCurrentMoneyNotification(int32_t Amount); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.IncrementCurrentMoneyNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature(); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NotificationPanel(int32_t EntryPoint); // Function UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.ExecuteUbergraph_UI_BP_NotificationPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

