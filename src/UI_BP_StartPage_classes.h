// WidgetBlueprintGeneratedClass UI_BP_StartPage.UI_BP_StartPage_C
// Size: 0x3d0 (Inherited: 0x380)
struct UUI_BP_StartPage_C : UStartPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* ReturnIntro; // 0x388(0x08)
	struct UWidgetAnimation* NotSignedIn; // 0x390(0x08)
	struct UWidgetAnimation* StartFadeOut; // 0x398(0x08)
	struct UPhoenixImage* FadeToBlack; // 0x3a0(0x08)
	struct UUI_BP_Title_C* hogwartsLogo; // 0x3a8(0x08)
	struct UPhoenixTextBlock* HydraID; // 0x3b0(0x08)
	struct UPhoenixRichTextBlock* PressStartText; // 0x3b8(0x08)
	struct UPhoenixTextBlock* ProfileName; // 0x3c0(0x08)
	struct UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x3c8(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_StartPage.UI_BP_StartPage_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Construct(); // Function UI_BP_StartPage.UI_BP_StartPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_StartPage.UI_BP_StartPage_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_StartPage.UI_BP_StartPage_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetProfileString(struct FString ProfileName); // Function UI_BP_StartPage.UI_BP_StartPage_C.SetProfileString // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetHydraString(struct FString ProfileName); // Function UI_BP_StartPage.UI_BP_StartPage_C.SetHydraString // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIsLoggedIn(bool bIsLoggedIn); // Function UI_BP_StartPage.UI_BP_StartPage_C.SetIsLoggedIn // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_StartPage.UI_BP_StartPage_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_StartPage.UI_BP_StartPage_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_StartPage.UI_BP_StartPage_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature(); // Function UI_BP_StartPage.UI_BP_StartPage_C.BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_StartPage(int32_t EntryPoint); // Function UI_BP_StartPage.UI_BP_StartPage_C.ExecuteUbergraph_UI_BP_StartPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

