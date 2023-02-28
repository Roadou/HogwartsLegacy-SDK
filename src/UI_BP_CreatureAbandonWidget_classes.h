// WidgetBlueprintGeneratedClass UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C
// Size: 0x3d0 (Inherited: 0x370)
struct UUI_BP_CreatureAbandonWidget_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x378(0x08)
	struct UPhoenixTextBlock* AreYouSureText; // 0x380(0x08)
	struct UOverlay* boxBorder; // 0x388(0x08)
	struct UImage* CreatureGenderIcon; // 0x390(0x08)
	struct UImage* CreatureImage; // 0x398(0x08)
	struct UPhoenixTextBlock* CreatureNameText; // 0x3a0(0x08)
	struct UPhoenixTextBlock* menuBoxTitle; // 0x3a8(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3b0(0x08)
	struct UImage* PregnancyIcon; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x3c0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCreatureState(struct UCreatureState* CreatureState); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.SetCreatureState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void I_SetCreatureState(struct UCreatureState* CreatureState); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.I_SetCreatureState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureAbandonWidget(int32_t EntryPoint); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.ExecuteUbergraph_UI_BP_CreatureAbandonWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnClosed__DelegateSignature(); // Function UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

