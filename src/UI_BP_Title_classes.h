// WidgetBlueprintGeneratedClass UI_BP_Title.UI_BP_Title_C
// Size: 0x308 (Inherited: 0x268)
struct UUI_BP_Title_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* StartFadeIn_Title; // 0x270(0x08)
	struct UWidgetAnimation* StartFadeIn; // 0x278(0x08)
	struct UWidgetAnimation* StartFadeOut; // 0x280(0x08)
	struct UUI_BP_SparkleBurst_C* burst1; // 0x288(0x08)
	struct UUI_BP_SparkleBurst_C* burst2; // 0x290(0x08)
	struct UUI_BP_SparkleBurst_C* burst3; // 0x298(0x08)
	struct UUI_BP_SparkleBurst_C* burst4; // 0x2a0(0x08)
	struct UUI_BP_SparkleBurst_C* burst5; // 0x2a8(0x08)
	struct UPhoenixImage* mainGodray1; // 0x2b0(0x08)
	struct UOverlay* Overlay_Bloom; // 0x2b8(0x08)
	struct UPhoenixImage* PhoenixImage_FrontSparkels; // 0x2c0(0x08)
	struct UImage* TitleLogo; // 0x2c8(0x08)
	bool sparkles; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate LogoIsReady; // 0x2d8(0x10)
	bool LogoLoaded; // 0x2e8(0x01)
	bool GlowLoaded; // 0x2e9(0x01)
	bool ShowIsPending; // 0x2ea(0x01)
	char pad_2EB[0x5]; // 0x2eb(0x05)
	struct UWidgetAnimation* PendingAnim; // 0x2f0(0x08)
	struct FMulticastInlineDelegate LogoAnimationIsFinished; // 0x2f8(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_Title_6(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Title_5(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Title_4(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Title_3(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Title_2(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Title_1(); // Function UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGlarePos(struct FVector2D InPosition); // Function UI_BP_Title.UI_BP_Title_C.SetGlarePos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHogwartsLogoLocale(); // Function UI_BP_Title.UI_BP_Title_C.SetHogwartsLogoLocale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst1(); // Function UI_BP_Title.UI_BP_Title_C.PlayBurst1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst2(); // Function UI_BP_Title.UI_BP_Title_C.PlayBurst2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst3(); // Function UI_BP_Title.UI_BP_Title_C.PlayBurst3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst4(); // Function UI_BP_Title.UI_BP_Title_C.PlayBurst4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst5(); // Function UI_BP_Title.UI_BP_Title_C.PlayBurst5 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReadyForPressStartReveal(); // Function UI_BP_Title.UI_BP_Title_C.ReadyForPressStartReveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHogwartsLogoLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Title.UI_BP_Title_C.OnHogwartsLogoLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHogwartsLogoGlowsLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Title.UI_BP_Title_C.OnHogwartsLogoGlowsLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Title.UI_BP_Title_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowMainTitle(); // Function UI_BP_Title.UI_BP_Title_C.ShowMainTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMainTitle(); // Function UI_BP_Title.UI_BP_Title_C.HideMainTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMainTitleIntro(); // Function UI_BP_Title.UI_BP_Title_C.ShowMainTitleIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Title.UI_BP_Title_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Title(int32_t EntryPoint); // Function UI_BP_Title.UI_BP_Title_C.ExecuteUbergraph_UI_BP_Title // (Final|UbergraphFunction) // @ game+0x38a7480
	void LogoAnimationIsFinished__DelegateSignature(); // Function UI_BP_Title.UI_BP_Title_C.LogoAnimationIsFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LogoIsReady__DelegateSignature(); // Function UI_BP_Title.UI_BP_Title_C.LogoIsReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

