// WidgetBlueprintGeneratedClass UI_BP_MountHUD.UI_BP_MountHUD_C
// Size: 0x3f2 (Inherited: 0x2e8)
struct UUI_BP_MountHUD_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideMountHUD; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowMountHUD; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowMountControls; // 0x300(0x08)
	struct UUI_BP_LegendItem_C* AscendDescendCallout; // 0x308(0x08)
	struct UBorder* calloutBorder; // 0x310(0x08)
	struct UVerticalBox* CalloutsBox; // 0x318(0x08)
	struct UProgressBar* ChargeBar; // 0x320(0x08)
	struct UUI_BP_LegendItem_C* ChargeCallout; // 0x328(0x08)
	struct UCanvasPanel* chargePanel; // 0x330(0x08)
	struct UBorder* collapsedCallout; // 0x338(0x08)
	struct UMultiLineEditableText* DebugText; // 0x340(0x08)
	struct UUI_BP_LegendItem_C* DismountCallout; // 0x348(0x08)
	struct UProgressBar* EnabledBar; // 0x350(0x08)
	struct UExpandableArea* expandableCallouts; // 0x358(0x08)
	struct UProgressBar* healthProgressBar; // 0x360(0x08)
	struct UUI_BP_LegendItem_C* HoldGallopCallout; // 0x368(0x08)
	struct UUI_BP_LegendItem_C* KeyboardGallopCallout; // 0x370(0x08)
	struct UUI_BP_LegendItem_C* KeyboardWalkCallout; // 0x378(0x08)
	struct UVerticalBox* MountCallouts; // 0x380(0x08)
	struct UUI_BP_LegendItem_C* ToggleGallopCallout; // 0x388(0x08)
	struct UCreature_MountComponent* MountComponent; // 0x390(0x08)
	struct FString RequestStr; // 0x398(0x10)
	struct FString RefillDelayStr; // 0x3a8(0x10)
	struct FString AmountStr; // 0x3b8(0x10)
	bool bShowCharge; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FHermesBPDelegateHandle ShowControlsHandle; // 0x3d0(0x10)
	struct FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x3e0(0x10)
	bool IsWalking; // 0x3f0(0x01)
	bool IsUsingKeyboard; // 0x3f1(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_MountHUD_2(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.SequenceEvent__ENTRYPOINTUI_BP_MountHUD_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MakeHidden(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.MakeHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MakeVisible(bool FromSettingsChange); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.MakeVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateVisibilitySetting(bool Show); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.UpdateVisibilitySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleExpandableCallouts(bool Expand); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ToggleExpandableCallouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionallyShowKeyboardCallouts(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ConditionallyShowKeyboardCallouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowControls(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ShowControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMountCallouts(bool ShowCharge, enum class EMountMovementState MovementState); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.SetMountCallouts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayerHealth(struct UObjectStateInfo* MountObject); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.SetPlayerHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChargeAmountUpdate(float ChargeAmountNormalized, bool bChargeAvailable); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeAmountUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(struct UCreature_MountComponent* InMountComponent, bool bShowCharge); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateDebugString(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.UpdateDebugString // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChargeRefillDelayUpdate(float ChargeRefillDelayNormalized); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeRefillDelayUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeRequestUpdate(float ChargeRequestNormalized); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ChangeRequestUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthAmountUpdate(struct AActor* Target, float InHealthChange, bool bIndicateHUD); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.HealthAmountUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChargeEnabledUpdate(bool bChargeEnabled); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeEnabledUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MovementStateChanged(struct UCreature_MountComponent* MountComponent, enum class EMountMovementState PrevMovementState); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.MovementStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomSaysShowControls(struct UObject* Caller); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.BroomSaysShowControls // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExpandCallouts(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ExpandCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollapseCallouts(); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.CollapseCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MountHUD(int32_t EntryPoint); // Function UI_BP_MountHUD.UI_BP_MountHUD_C.ExecuteUbergraph_UI_BP_MountHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

