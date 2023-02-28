// WidgetBlueprintGeneratedClass UI_BP_Wanted.UI_BP_Wanted_C
// Size: 0x328 (Inherited: 0x2e8)
struct UUI_BP_Wanted_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideWanted; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowWanted; // 0x2f8(0x08)
	struct UWidgetAnimation* RipplePulse; // 0x300(0x08)
	struct UImage* ripple; // 0x308(0x08)
	struct UCanvasPanel* ripplePanel; // 0x310(0x08)
	struct UUI_BP_GoldLeafDivider_C* UI_BP_GoldLeafDivider; // 0x318(0x08)
	struct UBorder* wantedBorder; // 0x320(0x08)

	void StopWanted(); // Function UI_BP_Wanted.UI_BP_Wanted_C.StopWanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartRipple(); // Function UI_BP_Wanted.UI_BP_Wanted_C.StartRipple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleWantedState(bool isWanted); // Function UI_BP_Wanted.UI_BP_Wanted_C.ToggleWantedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Wanted.UI_BP_Wanted_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_Wanted.UI_BP_Wanted_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RippleRotation(float RotationAngle); // Function UI_BP_Wanted.UI_BP_Wanted_C.RippleRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Wanted(int32_t EntryPoint); // Function UI_BP_Wanted.UI_BP_Wanted_C.ExecuteUbergraph_UI_BP_Wanted // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

