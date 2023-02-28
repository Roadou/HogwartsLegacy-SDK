// BlueprintGeneratedClass UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C
// Size: 0x29a (Inherited: 0x248)
struct AUI_BP_HogwartsMapBeacon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* Yellow2Blue; // 0x250(0x08)
	struct UNiagaraComponent* Blue2Yellow; // 0x258(0x08)
	struct UNiagaraComponent* YellowDeactivate; // 0x260(0x08)
	struct UNiagaraComponent* YellowActivate; // 0x268(0x08)
	struct UNiagaraComponent* BlueDeactivate; // 0x270(0x08)
	struct UNiagaraComponent* BlueActivate; // 0x278(0x08)
	struct UNiagaraComponent* YellowLoop; // 0x280(0x08)
	struct UNiagaraComponent* BlueLoop; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	bool HilightBeaconActive; // 0x298(0x01)
	bool Visible; // 0x299(0x01)

	void SetHilight(bool Hilight); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.SetHilight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBeacon(bool Visible); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ShowBeacon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BlueActivate_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__BlueActivate_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DeactivateBlue(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.DeactivateBlue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BlueDeactivate_K2Node_ComponentBoundEvent_1_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__BlueDeactivate_K2Node_ComponentBoundEvent_1_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ActivateBlue(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ActivateBlue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateYellow(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ActivateYellow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__YellowActivate_K2Node_ComponentBoundEvent_2_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__YellowActivate_K2Node_ComponentBoundEvent_2_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DeactivateYellow(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.DeactivateYellow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__YellowDeactivate_K2Node_ComponentBoundEvent_3_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__YellowDeactivate_K2Node_ComponentBoundEvent_3_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ActivateYellow2Blue(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ActivateYellow2Blue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Yellow2Blue_K2Node_ComponentBoundEvent_4_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__Yellow2Blue_K2Node_ComponentBoundEvent_4_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ActivateBlue2Yellow(); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ActivateBlue2Yellow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Blue2Yellow_K2Node_ComponentBoundEvent_5_OnNiagaraSystemFinished__DelegateSignature(struct UNiagaraComponent* PSystem); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.BndEvt__Blue2Yellow_K2Node_ComponentBoundEvent_5_OnNiagaraSystemFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HogwartsMapBeacon(int32_t EntryPoint); // Function UI_BP_HogwartsMapBeacon.UI_BP_HogwartsMapBeacon_C.ExecuteUbergraph_UI_BP_HogwartsMapBeacon // (Final|UbergraphFunction) // @ game+0x38a7480
};

