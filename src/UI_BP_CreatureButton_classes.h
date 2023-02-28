// WidgetBlueprintGeneratedClass UI_BP_CreatureButton.UI_BP_CreatureButton_C
// Size: 0x5b3 (Inherited: 0x4a8)
struct UUI_BP_CreatureButton_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x4b0(0x08)
	struct UWidgetAnimation* OnSelectedAnimation; // 0x4b8(0x08)
	struct UImage* CreatureAlbinoIcon; // 0x4c0(0x08)
	struct UImage* CreatureGenderIcon; // 0x4c8(0x08)
	struct UImage* CreatureImage; // 0x4d0(0x08)
	struct UPhoenixTextBlock* CreatureNameText; // 0x4d8(0x08)
	struct USizeBox* creatureSizeBox; // 0x4e0(0x08)
	struct UImage* emptyImage; // 0x4e8(0x08)
	struct UImage* newHighlight; // 0x4f0(0x08)
	struct UPhoenixTextBlock* ReadyInLabel; // 0x4f8(0x08)
	struct USizeBox* StatusSizeBox; // 0x500(0x08)
	struct UPhoenixTextBlock* statusText; // 0x508(0x08)
	struct UCanvasPanel* StatusTime; // 0x510(0x08)
	struct UWidgetSwitcher* StatusWidgetSwitcher; // 0x518(0x08)
	struct UPhoenixTextBlock* timeText; // 0x520(0x08)
	struct UUI_BP_CreatureStatusSummary_C* UI_BP_CreatureStatusSummary; // 0x528(0x08)
	struct UCreatureState* CreatureState; // 0x530(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x538(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x548(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x558(0x10)
	struct TSoftObjectPtr<UCreatureState> UnbornCreature_MotherState; // 0x568(0x28)
	struct UCreatureDefinition* CreatureDefinition; // 0x590(0x08)
	struct UCreatureDefinition* AdultCreatureDefinition; // 0x598(0x08)
	struct UCreatureState* UnbornCreatureState; // 0x5a0(0x08)
	bool isButtonHovered; // 0x5a8(0x01)
	bool AlwaysClickable; // 0x5a9(0x01)
	char pad_5AA[0x2]; // 0x5aa(0x02)
	int32_t CreatureIndex; // 0x5ac(0x04)
	bool IsEmpty; // 0x5b0(0x01)
	bool IsMale; // 0x5b1(0x01)
	bool IsAlbino; // 0x5b2(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateBeastState(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateBeastState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Is Empty(bool ShowEmptySlot); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.Set Is Empty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleBeastState(int32_t BeastTypeIndex); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.ToggleBeastState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySelectedAnimation(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.PlaySelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitPregnantCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitPregnantCreature // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetEnabled(bool Enabled); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateReservedSlot(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateReservedSlot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePregnantCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdatePregnantCreature // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateEgg(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateEgg // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateHatchingProgress(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateHatchingProgress // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateRegularCreatureStatusLabel(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateRegularCreatureStatusLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateRegularCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateRegularCreature // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateUnbornCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateUnbornCreature // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateGestationProgress(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateGestationProgress // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsHoverable(bool& Result); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.IsHoverable // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitEgg(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitEgg // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitRegularCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitRegularCreature // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitUnbornCreature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitUnbornCreature // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitEmptySlot(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitEmptySlot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCreatureState(struct UCreatureState*& CreatureState); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.GetCreatureState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCreatureState(struct UCreatureState* InCreatureState, struct TSoftObjectPtr<UCreatureState> InIfUnbornCreatureStateMother); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.SetCreatureState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ForceUnhover(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.ForceUnhover // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnNeedsChanged(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnNeedsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnByproductCooldownEnded(); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnByproductCooldownEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureButton(int32_t EntryPoint); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.ExecuteUbergraph_UI_BP_CreatureButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnClicked__DelegateSignature(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnhovered__DelegateSignature(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHovered__DelegateSignature(struct UUI_BP_CreatureButton_C* CreatureButton); // Function UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

