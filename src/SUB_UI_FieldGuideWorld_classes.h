// BlueprintGeneratedClass SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C
// Size: 0x380 (Inherited: 0x250)
struct ASUB_UI_FieldGuideWorld_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	enum class ETimelineDirection FromBackButtonTimeline__Direction_727FAD364D6ACEFFA018E98D85E431B6; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UTimelineComponent* FromBackButtonTimeline; // 0x260(0x08)
	struct FVector IntoMapTimeline_CameraRotation_7B140F41437348D1AB426D9FE4D86A05; // 0x268(0x0c)
	struct FVector IntoMapTimeline_CameraLocation_7B140F41437348D1AB426D9FE4D86A05; // 0x274(0x0c)
	float IntoMapTimeline_CameraFOV_7B140F41437348D1AB426D9FE4D86A05; // 0x280(0x04)
	enum class ETimelineDirection IntoMapTimeline__Direction_7B140F41437348D1AB426D9FE4D86A05; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* IntoMapTimeline; // 0x288(0x08)
	bool TransitionToMapInProgress; // 0x290(0x01)
	bool CameraTransitionAllowed; // 0x291(0x01)
	bool AudioIsBookHidden; // 0x292(0x01)
	bool IsDummyActorVisible; // 0x293(0x01)
	bool isGuideBookVisible; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct ASkeletalMeshActor* SK_GuideBook_2_ExecuteUbergraph_SUB_UI_FieldGuideWorld_RefProperty; // 0x298(0x08)
	struct AUI_BP_DummyActor_C* DummyCharacter_ExecuteUbergraph_SUB_UI_FieldGuideWorld_RefProperty; // 0x2a0(0x08)
	struct AUI_BP_CompendiumModelSpawner_C* UI_BP_CompendiumModelSpawner_2_ExecuteUbergraph_SUB_UI_FieldGuideWorld_RefProperty; // 0x2a8(0x08)
	struct AUI_BP_CompendiumModelSpawner_C* UI_BP_CompendiumModelSpawner_2_EdGraph_0_RefProperty; // 0x2b0(0x08)
	struct ACameraActor* CompendiumCam_EdGraph_0_RefProperty; // 0x2b8(0x08)
	struct AUI_BP_CompendiumModelSpawner_C* UI_BP_CompendiumModelSpawner_2_EdGraph_1_RefProperty; // 0x2c0(0x08)
	struct ACameraActor* HandCam_EdGraph_1_RefProperty; // 0x2c8(0x08)
	struct ABP_GearBroomPreview_C* BP_GearBroomPreview_2_EdGraph_1_RefProperty; // 0x2d0(0x08)
	struct ACameraActor* BroomCam_EdGraph_1_RefProperty; // 0x2d8(0x08)
	struct ABP_CustomizableWand_C* BP_CustomizableWand_2_EdGraph_1_RefProperty; // 0x2e0(0x08)
	struct ACameraActor* WandCam_EdGraph_1_RefProperty; // 0x2e8(0x08)
	struct AUI_BP_DummyActor_C* DummyCharacter_EdGraph_1_RefProperty; // 0x2f0(0x08)
	struct ABP_FieldGuide_CameraTransitionController_C* CameraTransitionController_EdGraph_1_RefProperty; // 0x2f8(0x08)
	struct ACameraActor* CharacterNeckCam_EdGraph_1_RefProperty; // 0x300(0x08)
	struct ACameraActor* FG_MapCam_EdGraph_1_RefProperty; // 0x308(0x08)
	struct ACameraActor* FG_OpenBookCam_EdGraph_1_RefProperty; // 0x310(0x08)
	struct ACameraActor* FG_IndexCam_EdGraph_1_RefProperty; // 0x318(0x08)
	struct ACameraActor* AppFaceCam_EdGraph_1_RefProperty; // 0x320(0x08)
	struct ACameraActor* CharacterBodyCam_EdGraph_1_RefProperty; // 0x328(0x08)
	struct ACameraActor* GearFaceCam_EdGraph_1_RefProperty; // 0x330(0x08)
	struct ACameraActor* CharacterGearCam_EdGraph_1_RefProperty; // 0x338(0x08)
	struct ACameraActor* CharacterAppCam_EdGraph_1_RefProperty; // 0x340(0x08)
	struct ACameraActor* CompendiumCam_EdGraph_1_RefProperty; // 0x348(0x08)
	struct ASkeletalMeshActor* SK_GuideBook_2_EdGraph_2_RefProperty; // 0x350(0x08)
	struct ABP_CustomizableWand_C* BP_CustomizableWand_2_EdGraph_3_RefProperty; // 0x358(0x08)
	struct AUI_BP_CompendiumModelSpawner_C* UI_BP_CompendiumModelSpawner_2_EdGraph_4_RefProperty; // 0x360(0x08)
	struct AUI_BP_DummyActor_C* DummyCharacter_EdGraph_5_RefProperty; // 0x368(0x08)
	struct ABP_GearBroomPreview_C* BP_GearBroomPreview_2_EdGraph_6_RefProperty; // 0x370(0x08)
	struct ASkeletalMeshActor* SK_GuideBook_2_EdGraph_7_RefProperty; // 0x378(0x08)

	void FadeGuideBookModel(enum class EObjectFadeDirection FadeDirection, enum class EObjectFadeSpeed FadeSpeed); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeGuideBookModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeBroomModel(enum class EObjectFadeDirection FadeDirection, enum class EObjectFadeSpeed FadeSpeed); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeBroomModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeCharacterModel(enum class EObjectFadeDirection FadeDirection, enum class EObjectFadeSpeed FadeSpeed); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeCharacterModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeCompendiumModel(enum class EObjectFadeDirection FadeDirection, enum class EObjectFadeSpeed FadeSpeed); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeCompendiumModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeWandModel(enum class EObjectFadeDirection FadeDirection, enum class EObjectFadeSpeed FadeSpeed); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeWandModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBookAnimInstance(struct UABP_FieldGuideBook_C*& AnimInstance); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.GetBookAnimInstance // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ChangeCamera(enum class E_UICamLocation NewCameraLoc, float TransitionDuration, float Delay); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ChangeCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FitCameraToCompendiumActor(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FitCameraToCompendiumActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IntoMapTimeline__FinishedFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.IntoMapTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void IntoMapTimeline__UpdateFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.IntoMapTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void IntoMapTimeline__FadeOutStart__EventFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.IntoMapTimeline__FadeOutStart__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void FromBackButtonTimeline__FinishedFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FromBackButtonTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FromBackButtonTimeline__UpdateFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FromBackButtonTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void FromBackButtonTimeline__FadeOutStart__EventFunc(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FromBackButtonTimeline__FadeOutStart__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Complete_8BCC09844E57EECF0A2B0684D64C592A(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_8BCC09844E57EECF0A2B0684D64C592A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_6EBF84414F9F18A8DB9B8BA814F4B114(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_6EBF84414F9F18A8DB9B8BA814F4B114 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_5D3A736A4C7A72818ABC219D9647E307(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_5D3A736A4C7A72818ABC219D9647E307 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_56F2B4A3457B43B8F1004788B30BC877(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_56F2B4A3457B43B8F1004788B30BC877 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_E60DD9FC43DF88D0A80F009ACBD72D87(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_E60DD9FC43DF88D0A80F009ACBD72D87 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_464C46C549AAEA996BEE10A7A8A446F2(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.Complete_464C46C549AAEA996BEE10A7A8A446F2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupMapTransitionGraph(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.SetupMapTransitionGraph // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTransitionToMap(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.OnTransitionToMap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DelayLeavingMapDir(struct UObject* Caller, int32_t int); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.DelayLeavingMapDir // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnFromMapWorld(bool ExitFieldGuide, enum class E_UICamLocation CameraLocation, float FadeDelay); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ReturnFromMapWorld // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchedToMapTab(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.SwitchedToMapTab // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ClearPauseMenuBlendTime(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ClearPauseMenuBlendTime // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOpenFieldGuide(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.OnOpenFieldGuide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowIndexCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowIndexCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnToIndexCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ReturnToIndexCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnCameraFromGearScreen(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ReturnCameraFromGearScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBroomModelCam(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowBroomModelCam // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideBroomModelCam(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.HideBroomModelCam // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeInGuideBook(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeInGuideBook // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOutGuideBook(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeOutGuideBook // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenBookWithoutCameraChange(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.OpenBookWithoutCameraChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCompendiumModelCam(struct UObject* Caller, struct FString String); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowCompendiumModelCam // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideCompendiumModel(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.HideCompendiumModel // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowWandModelCam(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowWandModelCam // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideWandModelCam(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.HideWandModelCam // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMenuCharacter(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowMenuCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMenuCharacter(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.HideMenuCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOutCharacter(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeOutCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeInCharacter(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FadeInCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FG_TurnPageLeft(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FG_TurnPageLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FG_TurnPageRight(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.FG_TurnPageRight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCharacterGearCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowCharacterGearCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetCharacterCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ResetCharacterCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCharacterAppearanceCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowCharacterAppearanceCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowGearFaceCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowGearFaceCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowAppFaceCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowAppFaceCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowGearHandCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowGearHandCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBodyCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowBodyCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowGearNeckCamera(struct UObject* Caller); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ShowGearNeckCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_UI_FieldGuideWorld(int32_t EntryPoint); // Function SUB_UI_FieldGuideWorld.SUB_UI_FieldGuideWorld_C.ExecuteUbergraph_SUB_UI_FieldGuideWorld // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

