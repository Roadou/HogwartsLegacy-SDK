// WidgetBlueprintGeneratedClass UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C
// Size: 0x341 (Inherited: 0x280)
struct UUI_BP_SpellSelectionGroup_C : USpellSelectionDiamondBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* showCallouts; // 0x288(0x08)
	struct UWidgetAnimation* toActive; // 0x290(0x08)
	struct UUI_BP_SelectionRingItem_C* Item1; // 0x298(0x08)
	struct UUI_BP_SelectionRingItem_C* Item2; // 0x2a0(0x08)
	struct UUI_BP_SelectionRingItem_C* Item3; // 0x2a8(0x08)
	struct UUI_BP_SelectionRingItem_C* Item4; // 0x2b0(0x08)
	struct UScaleBox* locked1; // 0x2b8(0x08)
	struct UScaleBox* locked2; // 0x2c0(0x08)
	struct UScaleBox* locked3; // 0x2c8(0x08)
	struct UScaleBox* locked4; // 0x2d0(0x08)
	struct UBorder* mainCallouts; // 0x2d8(0x08)
	struct UImage* shadow1; // 0x2e0(0x08)
	struct UImage* shadow2; // 0x2e8(0x08)
	struct UImage* shadow3; // 0x2f0(0x08)
	struct UImage* shadow4; // 0x2f8(0x08)
	struct FMulticastInlineDelegate TwitchSpellCast; // 0x300(0x10)
	struct TArray<struct UUI_BP_SelectionRingItem_C*> DPadItemArray; // 0x310(0x10)
	int32_t SelectedIndex_1; // 0x320(0x04)
	float TimeHeld; // 0x324(0x04)
	bool IsActiveGroup; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FMulticastInlineDelegate OnGroupSelected; // 0x330(0x10)
	bool areCalloutsShowing; // 0x340(0x01)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLockedState(bool IsGroupLocked); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.SetLockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleSpellDrop(struct FString SpellName, int32_t GroupIndex); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.HandleSpellDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActive(bool ACTIVE); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowUpdateAnimation(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.ShowUpdateAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleDPadDown(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.HandleDPadDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleDPadUp(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.HandleDPadUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleDPadRight(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.HandleDPadRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleDPadLeft(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.HandleDPadLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDiamondState(bool IsActive); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.SetDiamondState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSelectDpadItem(int32_t NewActionIndex); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.SetSelectDpadItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Refresh(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowControllerButtons(bool Show); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.ShowControllerButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__itemRight_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__itemRight_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__itemBottom_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__itemBottom_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__itemLeft_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__itemLeft_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SpellSelectionGroup_item1_K2Node_ComponentBoundEvent_0_OnSpellDropped__DelegateSignature(struct FString ItemName); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__UI_BP_SpellSelectionGroup_item1_K2Node_ComponentBoundEvent_0_OnSpellDropped__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SpellSelectionGroup_item2_K2Node_ComponentBoundEvent_4_OnSpellDropped__DelegateSignature(struct FString ItemName); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__UI_BP_SpellSelectionGroup_item2_K2Node_ComponentBoundEvent_4_OnSpellDropped__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SpellSelectionGroup_item3_K2Node_ComponentBoundEvent_5_OnSpellDropped__DelegateSignature(struct FString ItemName); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__UI_BP_SpellSelectionGroup_item3_K2Node_ComponentBoundEvent_5_OnSpellDropped__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_SpellSelectionGroup_item4_K2Node_ComponentBoundEvent_6_OnSpellDropped__DelegateSignature(struct FString ItemName); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.BndEvt__UI_BP_SpellSelectionGroup_item4_K2Node_ComponentBoundEvent_6_OnSpellDropped__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SpellSelectionGroup(int32_t EntryPoint); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.ExecuteUbergraph_UI_BP_SpellSelectionGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnGroupSelected__DelegateSignature(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.OnGroupSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TwitchSpellCast__DelegateSignature(); // Function UI_BP_SpellSelectionGroup.UI_BP_SpellSelectionGroup_C.TwitchSpellCast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

