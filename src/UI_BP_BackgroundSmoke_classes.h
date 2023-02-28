// WidgetBlueprintGeneratedClass UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C
// Size: 0x446 (Inherited: 0x370)
struct UUI_BP_BackgroundSmoke_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* Fluid_Vortex_switch; // 0x378(0x08)
	struct UWidgetAnimation* Fadeout_SmokeDesolve_Vortex; // 0x380(0x08)
	struct UWidgetAnimation* FadeIn_SmokeFluid_Vortex; // 0x388(0x08)
	struct UWidgetAnimation* FadeIn_SmokeFluid_RB; // 0x390(0x08)
	struct UPhoenixImage* PhoenixImage_BackSmokePlate; // 0x398(0x08)
	struct UPhoenixImage* PhoenixImage_BackVortexPool; // 0x3a0(0x08)
	struct UPhoenixImage* PhoenixImage_StarBrust; // 0x3a8(0x08)
	struct URetainerBox* RetainerBox_BackSmoke; // 0x3b0(0x08)
	struct FMulticastInlineDelegate AbortInteraction; // 0x3b8(0x10)
	struct FMulticastInlineDelegate StartPreview; // 0x3c8(0x10)
	struct FMulticastInlineDelegate LeavePreview; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnItemPurchased; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnItemSold; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoMoney; // 0x408(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoSpace; // 0x418(0x10)
	float MatRef_BorderGlow; // 0x428(0x04)
	float MatRef_FillGlow; // 0x42c(0x04)
	float MatRef_MoveY; // 0x430(0x04)
	float MatRef_Rotate; // 0x434(0x04)
	float MatRef_MaskLerpAlpha; // 0x438(0x04)
	float MatRef_Move; // 0x43c(0x04)
	float MatRef_Move2; // 0x440(0x04)
	bool HaveStarBrust; // 0x444(0x01)
	enum class UI_BP_BackgroundSmoke_Enum BackSmokeType; // 0x445(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_4(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_A0718D5D4425C53BA4252CA49D170DAC(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Finished_A0718D5D4425C53BA4252CA49D170DAC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished_7E5D6D1D4577374A1CD1A781D1E39F3B(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Finished_7E5D6D1D4577374A1CD1A781D1E39F3B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_2(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_SmokeFadeIn(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent_SmokeFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void IntroAnim_SmokeFluid(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.IntroAnim_SmokeFluid // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OutroAnim_SmokeDesolve(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OutroAnim_SmokeDesolve // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IntroAnim_SmokeFluidVortex(float PlaybackSpeed, float StartAtTime, float VortexOpacity); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.IntroAnim_SmokeFluidVortex // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OutroAnim_SmokeFluid(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OutroAnim_SmokeFluid // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchAnim(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SwitchAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BackgroundSmoke(int32_t EntryPoint); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.ExecuteUbergraph_UI_BP_BackgroundSmoke // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnItemPurchaseFailedNoSpace__DelegateSignature(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchaseFailedNoSpace__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchaseFailedNoMoney__DelegateSignature(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchaseFailedNoMoney__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemSold__DelegateSignature(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemSold__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchased__DelegateSignature(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeavePreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.LeavePreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartPreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.StartPreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortInteraction__DelegateSignature(); // Function UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.AbortInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

