// WidgetBlueprintGeneratedClass UI_BP_NoDismount.UI_BP_NoDismount_C
// Size: 0x318 (Inherited: 0x2f0)
struct UUI_BP_NoDismount_C : UNoMountHUDBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* fade; // 0x2f8(0x08)
	struct UImage* NoDismount; // 0x300(0x08)
	struct UImage* NoFly; // 0x308(0x08)
	struct UCanvasPanel* Root; // 0x310(0x08)

	void GetIcon(); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.GetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIconVisible(bool CanDismount, bool CanFly); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.SetIconVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnUseStateChanged(bool Show); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.OnUseStateChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideNoDismount(bool CanDismount, bool CanFly); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.HideNoDismount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NoDismount(int32_t EntryPoint); // Function UI_BP_NoDismount.UI_BP_NoDismount_C.ExecuteUbergraph_UI_BP_NoDismount // (Final|UbergraphFunction) // @ game+0x38a7480
};

