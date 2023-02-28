// WidgetBlueprintGeneratedClass UI_BP_MediaWidget.UI_BP_MediaWidget_C
// Size: 0x2e2 (Inherited: 0x268)
struct UUI_BP_MediaWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* fadeOutVideo; // 0x270(0x08)
	struct UWidgetAnimation* fadeInVideo; // 0x278(0x08)
	struct UCircularThrobber* LoadingThrobber; // 0x280(0x08)
	struct UImage* StaticImage; // 0x288(0x08)
	struct UImage* VideoImage; // 0x290(0x08)
	struct UMediaSource* MediaSource; // 0x298(0x08)
	bool PlayImmediately; // 0x2a0(0x01)
	bool DestroyOnEnd; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct AUI_BP_MediaSoundActor_C* MediaSoundActor; // 0x2a8(0x08)
	bool PlayRequested; // 0x2b0(0x01)
	bool Looping; // 0x2b1(0x01)
	bool WithSound; // 0x2b2(0x01)
	char pad_2B3[0x5]; // 0x2b3(0x05)
	struct FString StaticImageID; // 0x2b8(0x10)
	struct UBinkMediaPlayer* BinkMediaPlayer; // 0x2c8(0x08)
	struct TArray<struct UWidgetAnimation*> AnimationQueue; // 0x2d0(0x10)
	bool AnimPlaying; // 0x2e0(0x01)
	bool VideoShown; // 0x2e1(0x01)

	void QueueAnimation(struct UWidgetAnimation* NewAnim); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.QueueAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetPlayer(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.ResetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsLoading(bool IsLoading); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.SetIsLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseVideo(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.PauseVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseCurrentVideo(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.CloseCurrentVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMediaSource(struct UMediaSource* NewSource); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.SetMediaSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnSoundActor(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.SpawnSoundActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVideoFromStart(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.PlayVideoFromStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MediaEnded(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.MediaEnded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MediaOpened(struct FString OpenedUrl); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.MediaOpened // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ClearLoadingAfterDelay(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.ClearLoadingAfterDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OpenMedia(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.OpenMedia // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_fadeOutVideo_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.WidgetAnimationEvt_fadeOutVideo_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_fadeInVideo_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.WidgetAnimationEvt_fadeInVideo_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MediaWidget(int32_t EntryPoint); // Function UI_BP_MediaWidget.UI_BP_MediaWidget_C.ExecuteUbergraph_UI_BP_MediaWidget // (Final|UbergraphFunction) // @ game+0x38a7480
};

