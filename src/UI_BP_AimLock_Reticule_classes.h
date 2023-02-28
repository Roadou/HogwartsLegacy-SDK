// WidgetBlueprintGeneratedClass UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C
// Size: 0x330 (Inherited: 0x2f0)
struct UUI_BP_AimLock_Reticule_C : UUserWidget_LockOnReticle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UImage* AimModeCircle; // 0x2f8(0x08)
	struct UCanvasPanel* CursorPanel; // 0x300(0x08)
	struct UImage* MouseCursorRings_2; // 0x308(0x08)
	struct UImage* RedDot; // 0x310(0x08)
	struct UImage* sparkles; // 0x318(0x08)
	struct UImage* TargetCircle; // 0x320(0x08)
	struct UImage* TargetDot; // 0x328(0x08)

	void SetAimModeVisibility(enum class ESlateVisibility InVisibility); // Function UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetAimModeVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetLockOnVisibility(enum class ESlateVisibility InVisibility); // Function UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetLockOnVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetAimModeCircleScale(float InScale); // Function UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetAimModeCircleScale // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AimLock_Reticule(int32_t EntryPoint); // Function UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.ExecuteUbergraph_UI_BP_AimLock_Reticule // (Final|UbergraphFunction) // @ game+0x38a7480
};

