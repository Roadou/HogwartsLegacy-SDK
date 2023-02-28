// WidgetBlueprintGeneratedClass UI_BP_CommonActions.UI_BP_CommonActions_C
// Size: 0x2e0 (Inherited: 0x288)
struct UUI_BP_CommonActions_C : UCommonActionsBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* showGroupDiamond; // 0x290(0x08)
	struct UWidgetAnimation* showCallouts; // 0x298(0x08)
	struct UOverlay* dpadOverlay; // 0x2a0(0x08)
	struct UUI_BP_SpellSelectionDiamond_C* mainLoadoutDiamond; // 0x2a8(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* miniBottom; // 0x2b0(0x08)
	struct UBorder* miniDiamond; // 0x2b8(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* miniLeft; // 0x2c0(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* miniRight; // 0x2c8(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* miniTop; // 0x2d0(0x08)
	struct UHorizontalBox* SouthpawFaceButtons; // 0x2d8(0x08)

	void StupidSetupThatNeedsRemoving(); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.StupidSetupThatNeedsRemoving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnToggleButtonCallouts(bool IsSlotting); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.OnToggleButtonCallouts // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowSpellGroupDiamond(); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.OnShowSpellGroupDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHideSpellGroupDiamond(); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.OnHideSpellGroupDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CommonActions(int32_t EntryPoint); // Function UI_BP_CommonActions.UI_BP_CommonActions_C.ExecuteUbergraph_UI_BP_CommonActions // (Final|UbergraphFunction) // @ game+0x38a7480
};

