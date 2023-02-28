// WidgetBlueprintGeneratedClass UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C
// Size: 0x41b (Inherited: 0x378)
struct UUI_BP_NewLoadingScreen_C : ULoadingcreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UWidgetAnimation* FadeInTips; // 0x380(0x08)
	struct UWidgetAnimation* FadeInImage; // 0x388(0x08)
	struct UWidgetAnimation* FadeInSpinner; // 0x390(0x08)
	struct UWidgetAnimation* Intro; // 0x398(0x08)
	struct UWidgetAnimation* NextTip; // 0x3a0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x3a8(0x08)
	struct UUI_BP_AutoSave_C* AutoSaveIcon; // 0x3b0(0x08)
	struct UCanvasPanel* Canvas; // 0x3b8(0x08)
	struct USizeBox* imageSizeBox; // 0x3c0(0x08)
	struct UTextBlock* LienHolders; // 0x3c8(0x08)
	struct UVerticalBox* LienholdersBox; // 0x3d0(0x08)
	struct UOverlay* TipsContent; // 0x3d8(0x08)
	struct UBorder* TipsWidget; // 0x3e0(0x08)
	struct UPhoenixRichTextBlock* TipText; // 0x3e8(0x08)
	struct UUI_BP_LoadingBackgroundFX_C* UI_BP_LoadingBackgroundFX; // 0x3f0(0x08)
	struct TArray<struct FKey> PrevHintKeys; // 0x3f8(0x10)
	struct TArray<struct FKey> NextHintKeys; // 0x408(0x10)
	bool LastSpinnerValue; // 0x418(0x01)
	bool LastStaticImageValue; // 0x419(0x01)
	bool LastTipsValue; // 0x41a(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateTipsState(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateTipsState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateStaticImageState(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateStaticImageState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSpinnerState(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateSpinnerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitKeyDownArrays(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.InitKeyDownArrays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateLienholdersWidget(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateLienholdersWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCurtainRaised(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainRaised // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCurtainStageOptionsChanged(struct FCurtainStageOptions CurtainStageOptions); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainStageOptionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDisplayNextTip(struct FString TipKey); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnDisplayNextTip // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCurtainLienholdersChanged(); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainLienholdersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NewLoadingScreen(int32_t EntryPoint); // Function UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.ExecuteUbergraph_UI_BP_NewLoadingScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

