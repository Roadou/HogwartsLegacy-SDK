// WidgetBlueprintGeneratedClass UI_BP_CollectionNotification.UI_BP_CollectionNotification_C
// Size: 0x306 (Inherited: 0x2b0)
struct UUI_BP_CollectionNotification_C : UNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* NotificationIN; // 0x2b8(0x08)
	struct UWidgetAnimation* NotificationOUT; // 0x2c0(0x08)
	struct UImage* categoryIcon; // 0x2c8(0x08)
	struct UPhoenixTextBlock* CollectionID; // 0x2d0(0x08)
	struct UPhoenixTextBlock* CollectionState; // 0x2d8(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x2e0(0x08)
	struct UImage* Item; // 0x2e8(0x08)
	struct UImage* pulseCloud; // 0x2f0(0x08)
	struct UImage* pulseRing; // 0x2f8(0x08)
	float RemainingLifeTime; // 0x300(0x04)
	bool ShouldTickLifetime; // 0x304(0x01)
	bool canAddToInventory; // 0x305(0x01)

	void CheckItemID(struct FString NewID, struct FString& SetItemID); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.CheckItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNotificationData(struct FName CollectionID, struct FName Category, struct FString CollectionState); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.SetNotificationData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearKnowledgeFlag(); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ClearKnowledgeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ActivateNotification(); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ActivateNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CollectionNotification(int32_t EntryPoint); // Function UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ExecuteUbergraph_UI_BP_CollectionNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

