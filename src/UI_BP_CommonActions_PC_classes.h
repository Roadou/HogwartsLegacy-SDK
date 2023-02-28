// WidgetBlueprintGeneratedClass UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C
// Size: 0x2e0 (Inherited: 0x288)
struct UUI_BP_CommonActions_PC_C : UCommonActionsBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUI_BP_ActionHUD_PC_MiniHUD_C* groupNotification; // 0x290(0x08)
	struct UUI_BP_SpellSelectionGroup_C* loadout1; // 0x298(0x08)
	struct UUI_BP_SpellSelectionGroup_C* loadout2; // 0x2a0(0x08)
	struct UUI_BP_SpellSelectionGroup_C* loadout3; // 0x2a8(0x08)
	struct UUI_BP_SpellSelectionGroup_C* loadout4; // 0x2b0(0x08)
	struct TArray<struct UUI_BP_SpellSelectionGroup_C*> GroupArray; // 0x2b8(0x10)
	struct FMulticastInlineDelegate DragDropCompleted; // 0x2c8(0x10)
	struct UUI_BP_SpellSelectionGroup_C* activeGroup; // 0x2d8(0x08)

	void StupidSetupThatNeedsRemoving(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.StupidSetupThatNeedsRemoving // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActiveGroup(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.SetActiveGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializeGroupLoadouts(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.InitializeGroupLoadouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnActivateMiniDiamond(bool Activate); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.OnActivateMiniDiamond // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CommonActions_PC_loadout1_K2Node_ComponentBoundEvent_4_OnGroupSelected__DelegateSignature(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.BndEvt__UI_BP_CommonActions_PC_loadout1_K2Node_ComponentBoundEvent_4_OnGroupSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CommonActions_PC_loadout2_K2Node_ComponentBoundEvent_5_OnGroupSelected__DelegateSignature(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.BndEvt__UI_BP_CommonActions_PC_loadout2_K2Node_ComponentBoundEvent_5_OnGroupSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CommonActions_PC_loadout3_K2Node_ComponentBoundEvent_6_OnGroupSelected__DelegateSignature(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.BndEvt__UI_BP_CommonActions_PC_loadout3_K2Node_ComponentBoundEvent_6_OnGroupSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CommonActions_PC_loadout4_K2Node_ComponentBoundEvent_7_OnGroupSelected__DelegateSignature(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.BndEvt__UI_BP_CommonActions_PC_loadout4_K2Node_ComponentBoundEvent_7_OnGroupSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CommonActions_PC(int32_t EntryPoint); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.ExecuteUbergraph_UI_BP_CommonActions_PC // (Final|UbergraphFunction) // @ game+0x38a7480
	void DragDropCompleted__DelegateSignature(); // Function UI_BP_CommonActions_PC.UI_BP_CommonActions_PC_C.DragDropCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

