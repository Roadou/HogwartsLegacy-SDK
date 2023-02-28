// WidgetBlueprintGeneratedClass UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C
// Size: 0x310 (Inherited: 0x2e8)
struct UUI_BP_TextNotificationPanel_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UVerticalBox* Container; // 0x2f0(0x08)
	float DefaultTimeToLive; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct FString> PendingNotifications; // 0x300(0x10)

	void Construct(); // Function UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddNotification(struct FString NotificationText); // Function UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.AddNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDisplayTextTickerNotification(struct UObject* Caller); // Function UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.OnDisplayTextTickerNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_TextNotificationPanel(int32_t EntryPoint); // Function UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.ExecuteUbergraph_UI_BP_TextNotificationPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

