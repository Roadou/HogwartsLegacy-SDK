// WidgetBlueprintGeneratedClass UI_BP_NotificationItem.UI_BP_NotificationItem_C
// Size: 0x351 (Inherited: 0x2b0)
struct UUI_BP_NotificationItem_C : UNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* NotificationIN; // 0x2b8(0x08)
	struct UWidgetAnimation* NotificationOUT; // 0x2c0(0x08)
	struct UImage* Burst; // 0x2c8(0x08)
	struct UPhoenixImage* compareArrow; // 0x2d0(0x08)
	struct UImage* countBack; // 0x2d8(0x08)
	struct UBorder* iconBorder; // 0x2e0(0x08)
	struct UCanvasPanel* ItemCountPanel; // 0x2e8(0x08)
	struct UImage* Outline; // 0x2f0(0x08)
	struct UImage* outlineglow; // 0x2f8(0x08)
	struct UImage* QuestBack; // 0x300(0x08)
	struct UImage* rarityBack; // 0x308(0x08)
	struct UImage* sparkles; // 0x310(0x08)
	struct UBorder* textBorder; // 0x318(0x08)
	float RemainingLifeTime; // 0x320(0x04)
	bool ShouldTickLifetime; // 0x324(0x01)
	bool canAddToInventory; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct FMulticastInlineDelegate NotificationComplete; // 0x328(0x10)
	struct FTimerHandle LifetimeTimer; // 0x338(0x08)
	struct FHermesBPDelegateHandle NotificationAbortionHandle; // 0x340(0x10)
	bool CountVisible; // 0x350(0x01)

	void SetPlayerHouseBroom(); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetPlayerHouseBroom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Compare Gear Stats(struct FName GearID); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.Compare Gear Stats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncrementCount(int32_t Amount); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.IncrementCount // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddCount(int32_t Amount); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.AddCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemNotificationType(bool isQuestItem); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetItemNotificationType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Rarity State(struct FName RarityTier); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.Set Rarity State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void LifetimeComplete(); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.LifetimeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void ActivateNotification(); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.ActivateNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsInventoryFullNotification(bool IsInventoryFull); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetIsInventoryFullNotification // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ToggleCountVisibility(bool IsVisible); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.ToggleCountVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotificationAborted(struct UObject* Caller); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.NotificationAborted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NotificationItem(int32_t EntryPoint); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.ExecuteUbergraph_UI_BP_NotificationItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void NotificationComplete__DelegateSignature(struct UUI_BP_NotificationItem_C* Item); // Function UI_BP_NotificationItem.UI_BP_NotificationItem_C.NotificationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

