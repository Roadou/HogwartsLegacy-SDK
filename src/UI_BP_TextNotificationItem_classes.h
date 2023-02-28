// WidgetBlueprintGeneratedClass UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C
// Size: 0x2a1 (Inherited: 0x268)
struct UUI_BP_TextNotificationItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* hideNotification; // 0x270(0x08)
	struct UWidgetAnimation* ShowNotification; // 0x278(0x08)
	struct UPhoenixTextBlock* NotificationText; // 0x280(0x08)
	float TimeToLive; // 0x288(0x04)
	float CurrentLifespan; // 0x28c(0x04)
	struct FString TextKey; // 0x290(0x10)
	bool IsCompleted; // 0x2a0(0x01)

	void SetText(struct FString newText); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Initialize(struct FString NotificationText, float TimeToLive); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_TextNotificationItem(int32_t EntryPoint); // Function UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.ExecuteUbergraph_UI_BP_TextNotificationItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

