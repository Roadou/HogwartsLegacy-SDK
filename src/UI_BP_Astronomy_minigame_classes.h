// WidgetBlueprintGeneratedClass UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C
// Size: 0x3d0 (Inherited: 0x328)
struct UUI_BP_Astronomy_minigame_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OutroAnimation; // 0x330(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x338(0x08)
	struct UWidgetAnimation* SolvedAnimation; // 0x340(0x08)
	struct UImage* Constellation_Image; // 0x348(0x08)
	struct UImage* Constellation_SFX; // 0x350(0x08)
	struct UPhoenixTextBlock* ConstellationNameText; // 0x358(0x08)
	struct UImage* Glass; // 0x360(0x08)
	struct UImage* Inner_Ring; // 0x368(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend_Horizontal_Screen; // 0x370(0x08)
	struct UImage* Lines_Image; // 0x378(0x08)
	struct UImage* Lines_SFX; // 0x380(0x08)
	struct UImage* Outer_Ring; // 0x388(0x08)
	struct UImage* outside_Left; // 0x390(0x08)
	struct UImage* outside_Right; // 0x398(0x08)
	enum class E_AstronomyConstellations Constellation; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float InnerLerpStart; // 0x3a4(0x04)
	float OuterLerpStart; // 0x3a8(0x04)
	float OuterLerpEnd; // 0x3ac(0x04)
	struct TArray<struct FLegendItemData> DefaultLegendItemData; // 0x3b0(0x10)
	struct TArray<struct FLegendItemData> CompletedLegendItemData; // 0x3c0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void LerpOuterRing_End(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpOuterRing_Start(float StartFOV, float EndFOV); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpOuterRing_Step(float LerpProgress); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_Step // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpInnerRing_End(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpInnerRing_Start(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpInnerRing_Step(float LerpProgress); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_Step // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetGlass(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ResetGlass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateGlass(float Rotation); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateGlass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateOuterRing(float Rotation); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateOuterRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateInnerRing(float Rotation); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateInnerRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LinesSfxTexLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LinesSfxTexLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConstellationSfxTexLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ConstellationSfxTexLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearLegend(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ClearLegend // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBackButton(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ShowBackButton // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LinesTexLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LinesTexLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConstellationImageLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ConstellationImageLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Astronomy_minigame(int32_t EntryPoint); // Function UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ExecuteUbergraph_UI_BP_Astronomy_minigame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

