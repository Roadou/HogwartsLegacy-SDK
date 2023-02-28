// WidgetBlueprintGeneratedClass UI_BP_ScreenFade.UI_BP_ScreenFade_C
// Size: 0x2f8 (Inherited: 0x2d0)
struct UUI_BP_ScreenFade_C : UScreenFadeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* FadeAnim; // 0x2d8(0x08)
	struct UImage* Image_1; // 0x2e0(0x08)
	struct FLinearColor TargetColor; // 0x2e8(0x10)

	float UI_GetCurrentFade(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_GetCurrentFade // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckFadeFinished(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.CheckFadeFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOut(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeIn(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UI_FadeOut(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_FadeOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UI_FadeIn(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_FadeIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void UI_SetManualFade(float Opacity); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_SetManualFade // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFadeColor(struct FLinearColor TargetColor); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.SetFadeColor // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ScreenFade(int32_t EntryPoint); // Function UI_BP_ScreenFade.UI_BP_ScreenFade_C.ExecuteUbergraph_UI_BP_ScreenFade // (Final|UbergraphFunction) // @ game+0x38a7480
};

