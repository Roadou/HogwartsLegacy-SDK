// WidgetBlueprintGeneratedClass UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C
// Size: 0x2a3 (Inherited: 0x270)
struct UUI_BP_InstallManagerProgressBar_C : UInstallManagerProgressBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UCanvasPanel* InstallingPanel; // 0x278(0x08)
	struct UPhoenixTextBlock* InstallMessageText; // 0x280(0x08)
	struct UProgressBar* InstallProgressBar; // 0x288(0x08)
	struct UCanvasPanel* PendingInstallPanel; // 0x290(0x08)
	struct UUI_BP_MenuTextButton_C* StartInstallButton; // 0x298(0x08)
	enum class ESlateVisibility ShowInstalling; // 0x2a0(0x01)
	enum class ESlateVisibility ShowPending; // 0x2a1(0x01)
	enum class ESlateVisibility ShowText; // 0x2a2(0x01)

	void BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InstallManagerProgressBar(int32_t EntryPoint); // Function UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.ExecuteUbergraph_UI_BP_InstallManagerProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

