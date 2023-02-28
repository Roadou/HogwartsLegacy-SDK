// WidgetBlueprintGeneratedClass UI_BP_LanguageSelect.UI_BP_LanguageSelect_C
// Size: 0x540 (Inherited: 0x3f0)
struct UUI_BP_LanguageSelect_C : USettingsTabWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* showDetails; // 0x3f8(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Arabic; // 0x400(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Chinese; // 0x408(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Chinese_Simp; // 0x410(0x08)
	struct UUI_BP_MenuTextButton_C* LB_English; // 0x418(0x08)
	struct UUI_BP_MenuTextButton_C* LB_French; // 0x420(0x08)
	struct UUI_BP_MenuTextButton_C* LB_German; // 0x428(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Italian; // 0x430(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Japanese; // 0x438(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Korean; // 0x440(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Polish; // 0x448(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Portuguese; // 0x450(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Russian; // 0x458(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Spanish; // 0x460(0x08)
	struct UUI_BP_MenuTextButton_C* LB_Spanish_LA; // 0x468(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x470(0x08)
	struct TArray<struct UUI_BP_MenuTextButton_C*> LanguageButtonArray; // 0x478(0x10)
	struct TMap<struct UUI_BP_MenuTextButton_C*, struct FString> LanguageButtonMap; // 0x488(0x50)
	struct TMap<struct FString, struct UUI_BP_MenuTextButton_C*> LanguageMap; // 0x4d8(0x50)
	struct UUI_BP_MenuTextButton_C* currentLanguageButton; // 0x528(0x08)
	struct FMulticastInlineDelegate LanguageSelected; // 0x530(0x10)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOSTLanguage(struct UUI_BP_MenuTextButton_C* SelectedButton); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.SetOSTLanguage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuTextButton_C* Button); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LanguageSelect(int32_t EntryPoint); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.ExecuteUbergraph_UI_BP_LanguageSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void LanguageSelected__DelegateSignature(); // Function UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.LanguageSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

