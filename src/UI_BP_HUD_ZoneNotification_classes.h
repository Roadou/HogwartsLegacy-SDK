// WidgetBlueprintGeneratedClass UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C
// Size: 0x320 (Inherited: 0x300)
struct UUI_BP_HUD_ZoneNotification_C : UZoneNotification {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* hideNotification; // 0x308(0x08)
	struct UWidgetAnimation* ShowNotification_New; // 0x310(0x08)
	struct UBorder* textBorder; // 0x318(0x08)

	void Construct(); // Function UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DisplayNotificationBP(bool PlaySound); // Function UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.DisplayNotificationBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideNotificationBP(); // Function UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.HideNotificationBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideAnimationFinished(); // Function UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.HideAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HUD_ZoneNotification(int32_t EntryPoint); // Function UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.ExecuteUbergraph_UI_BP_HUD_ZoneNotification // (Final|UbergraphFunction) // @ game+0x38a7480
};

