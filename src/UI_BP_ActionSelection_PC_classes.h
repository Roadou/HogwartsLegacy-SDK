// WidgetBlueprintGeneratedClass UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C
// Size: 0x3a0 (Inherited: 0x370)
struct UUI_BP_ActionSelection_PC_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UUI_BP_ActionSelection_C* ActionSelection_Controller; // 0x378(0x08)
	struct UUI_BP_ActionSelection_MKB_C* ActionSelection_MKB; // 0x380(0x08)
	struct UWidgetSwitcher* ActionSelectionSwitcher; // 0x388(0x08)
	struct FHermesBPDelegateHandle ButtonCalloutCallbackHandle; // 0x390(0x10)

	void UpdateActiveWidget(); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.UpdateActiveWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialActionType(char InitialType); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.SetInitialActionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_ActionSelection_Controller_K2Node_ComponentBoundEvent_0_PC_ExitRequested__DelegateSignature(); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.BndEvt__UI_BP_ActionSelection_PC_ActionSelection_Controller_K2Node_ComponentBoundEvent_0_PC_ExitRequested__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_ActionSelection_PC_ActionSelection_MKB_K2Node_ComponentBoundEvent_1_PC_ExitRequested__DelegateSignature(); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.BndEvt__UI_BP_ActionSelection_PC_ActionSelection_MKB_K2Node_ComponentBoundEvent_1_PC_ExitRequested__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionSelection_PC(int32_t EntryPoint); // Function UI_BP_ActionSelection_PC.UI_BP_ActionSelection_PC_C.ExecuteUbergraph_UI_BP_ActionSelection_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

