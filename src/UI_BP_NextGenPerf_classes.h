// WidgetBlueprintGeneratedClass UI_BP_NextGenPerf.UI_BP_NextGenPerf_C
// Size: 0x478 (Inherited: 0x328)
struct UUI_BP_NextGenPerf_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixRichTextBlock* balancedDesc; // 0x330(0x08)
	struct UUI_BP_MenuTextButton_C* btn_Balanced; // 0x338(0x08)
	struct UUI_BP_MenuTextButton_C* btn_Fidelity; // 0x340(0x08)
	struct UUI_BP_MenuTextButton_C* btn_FidelityRT; // 0x348(0x08)
	struct UUI_BP_MenuTextButton_C* btn_HFRPerformance; // 0x350(0x08)
	struct UUI_BP_MenuTextButton_C* btn_Performance; // 0x358(0x08)
	struct UPhoenixRichTextBlock* FidelityDescription; // 0x360(0x08)
	struct UPhoenixRichTextBlock* FidWithRTDescription; // 0x368(0x08)
	struct UPhoenixRichTextBlock* HFRdescription; // 0x370(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x378(0x08)
	struct UOverlay* MainOverlay; // 0x380(0x08)
	struct UPhoenixRichTextBlock* PerfDescription; // 0x388(0x08)
	struct FMulticastInlineDelegate PerfScreenDismissed; // 0x390(0x10)
	struct TArray<struct FLegendItemData> DefaultLegendData; // 0x3a0(0x10)
	struct TArray<struct FString> PerformanceModesArray; // 0x3b0(0x10)
	bool shouldShowRebootPopup; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TMap<struct FString, struct UUI_BP_MenuTextButton_C*> PerformanceButtonsMap; // 0x3c8(0x50)
	struct UUI_BP_MenuTextButton_C* SelectedButton; // 0x418(0x08)
	struct UUI_BP_MenuTextButton_C* hoveredButton; // 0x420(0x08)
	struct TMap<struct FString, struct UWidget*> PerformanceDescriptionsMap; // 0x428(0x50)

	void Performance Button Clicked(struct UUI_BP_MenuTextButton_C* ClickedButton); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.Performance Button Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitPerformanceButtons(); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.InitPerformanceButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetMenuLegend(struct TArray<struct FLegendItemData>& LegendData); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.SetMenuLegend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NextGenPerf(int32_t EntryPoint); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.ExecuteUbergraph_UI_BP_NextGenPerf // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PerfScreenDismissed__DelegateSignature(); // Function UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.PerfScreenDismissed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

