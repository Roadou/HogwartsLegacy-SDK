// WidgetBlueprintGeneratedClass UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C
// Size: 0x298 (Inherited: 0x268)
struct UUI_BP_MiniSelectionDiamond_C : UMiniSelectionDiamondBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* UnavailableFeedback; // 0x270(0x08)
	struct UWidgetAnimation* toActive; // 0x278(0x08)
	struct UImage* Back; // 0x280(0x08)
	struct UCanvasPanel* groupPanel; // 0x288(0x08)
	struct UImage* statusIndicator; // 0x290(0x08)

	void LockedDiamondSelected(); // Function UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.LockedDiamondSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGroupStatus(int32_t StatusIndex); // Function UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.SetGroupStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetState(int32_t NewState); // Function UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.OnSetState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MiniSelectionDiamond(int32_t EntryPoint); // Function UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.ExecuteUbergraph_UI_BP_MiniSelectionDiamond // (Final|UbergraphFunction) // @ game+0x38a7480
};

