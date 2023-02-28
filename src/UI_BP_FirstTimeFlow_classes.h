// WidgetBlueprintGeneratedClass UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C
// Size: 0x46f (Inherited: 0x370)
struct UUI_BP_FirstTimeFlow_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* EndFlow; // 0x378(0x08)
	struct UWidgetAnimation* fadeInClouds; // 0x380(0x08)
	struct UWidgetAnimation* FadeOutBG; // 0x388(0x08)
	struct UWidgetAnimation* BlackScrimFade; // 0x390(0x08)
	struct UWidgetAnimation* Done; // 0x398(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3a0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x3a8(0x08)
	struct UCanvasPanel* Autosave; // 0x3b0(0x08)
	struct UUI_BP_AutosaveDisclaimer_C* AutosaveDisclaimer; // 0x3b8(0x08)
	struct UPhoenixImage* backgroundBlackScreen; // 0x3c0(0x08)
	struct UCanvasPanel* benchmark; // 0x3c8(0x08)
	struct UImage* BlackOverlay; // 0x3d0(0x08)
	struct UCanvasPanel* EULApanel; // 0x3d8(0x08)
	struct UUI_BP_LanguageSelect_C* LanguageSelectScreen; // 0x3e0(0x08)
	struct UUI_BP_NextGenPerf_C* NextGenPerformance; // 0x3e8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x3f0(0x08)
	struct UBorder* switcherBorder; // 0x3f8(0x08)
	struct UUI_BP_Benchmark_C* UI_BP_Benchmark; // 0x400(0x08)
	struct UUI_BP_EULA_C* UI_BP_EULA; // 0x408(0x08)
	struct UUI_BP_FirstFlowAccessibility_C* UI_BP_FirstFlowAccessibility; // 0x410(0x08)
	struct UUI_BP_FirstPlayCalibration_C* UI_BP_FirstPlayCalibration; // 0x418(0x08)
	struct UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x420(0x08)
	struct UUI_BP_LogoAndLegal_C* UI_BP_LogoAndLegal; // 0x428(0x08)
	struct UUI_BP_PSO_FS_C* UI_BP_PSO_FS; // 0x430(0x08)
	struct UUI_BP_WbGamesSignin_C* WBSignIn; // 0x438(0x08)
	struct UCanvasPanel* WBSignInPanel; // 0x440(0x08)
	float DisplayDuration; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FMulticastInlineDelegate SequenceComplete; // 0x450(0x10)
	int32_t houseIndex; // 0x460(0x04)
	float BenchmarkDuration; // 0x464(0x04)
	float BenchmarkStart; // 0x468(0x04)
	bool HDRActorNeedsHide; // 0x46c(0x01)
	bool HDRActorShowing; // 0x46d(0x01)
	bool CloudsShowing; // 0x46e(0x01)

	void ShouldSkipLegalScreen(bool& bHideLegalScreen); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ShouldSkipLegalScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RemoveUnusedScreens(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.RemoveUnusedScreens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayWidget(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.DisplayWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldSkipPSO(bool& ShouldSkip); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ShouldSkipPSO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ConditionallyHandleEULA(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleEULA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionallyHandleFirstFlowAccessibility(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleFirstFlowAccessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionallyHandleHDRScreen(bool IsShowing); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleHDRScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToNextWidget(bool& bSuccess); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.SwitchToNextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerNext(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.TriggerNext // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_4(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature(bool IsShown); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature(bool WantsCursor); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature(bool WantsToShowCursor); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FirstTimeFlow(int32_t EntryPoint); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ExecuteUbergraph_UI_BP_FirstTimeFlow // (Final|UbergraphFunction) // @ game+0x38a7480
	void SequenceComplete__DelegateSignature(); // Function UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.SequenceComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

