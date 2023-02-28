// WidgetBlueprintGeneratedClass UI_BP_PSO_FS.UI_BP_PSO_FS_C
// Size: 0x38f (Inherited: 0x328)
struct UUI_BP_PSO_FS_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* FrontendFadeOut; // 0x330(0x08)
	struct UOverlay* backgroundOverlay; // 0x338(0x08)
	struct UImage* BlackFadeImage; // 0x340(0x08)
	struct UProgressBar* CompileProgressBar; // 0x348(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x350(0x08)
	struct UPhoenixTextBlock* PSODesc; // 0x358(0x08)
	struct UPhoenixTextBlock* PSOTitle; // 0x360(0x08)
	struct UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x368(0x08)
	struct FMulticastInlineDelegate PSOComplete; // 0x370(0x10)
	bool MinDurationComplete; // 0x380(0x01)
	bool CompileComplete; // 0x381(0x01)
	bool MaxDurationExceeded; // 0x382(0x01)
	char pad_383[0x1]; // 0x383(0x01)
	float MinScreenDuration; // 0x384(0x04)
	float MaxScreenDuration; // 0x388(0x04)
	bool ExitRequested; // 0x38c(0x01)
	bool IsFrontend; // 0x38d(0x01)
	bool IsPrecompilationPaused; // 0x38e(0x01)

	void AdjustForViewportWidth(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RequestExit(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.RequestExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PSOUpdate(float Progress); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.PSOUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMinDurationCompleted(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.OnMinDurationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EmergencyTimeout(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.EmergencyTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartListening(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.StartListening // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ResolutionSettingsApplied(struct UObject* Caller); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.ResolutionSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_PSO_FS(int32_t EntryPoint); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.ExecuteUbergraph_UI_BP_PSO_FS // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PSOComplete__DelegateSignature(); // Function UI_BP_PSO_FS.UI_BP_PSO_FS_C.PSOComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

