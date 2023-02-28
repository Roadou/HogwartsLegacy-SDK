// BlueprintGeneratedClass BP_Telescope_Camera.BP_Telescope_Camera_C
// Size: 0x40d (Inherited: 0x2a8)
struct ABP_Telescope_Camera_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UBlendableGlobalLightingComponent* BlendableGlobalLighting-Telescope; // 0x2b0(0x08)
	struct UAkComponent* telescope_zoom_zoom; // 0x2b8(0x08)
	struct UAkComponent* telescope_zoom_zoom_3; // 0x2c0(0x08)
	struct UAkComponent* telescope_zoom_clicks_prt2; // 0x2c8(0x08)
	struct UAkComponent* telescope_zoom_clicks; // 0x2d0(0x08)
	struct UTimeOverrideComponent* TimeOverrideMidnight; // 0x2d8(0x08)
	struct USkyStateOverrideComponent* SkyStateOverridePOI; // 0x2e0(0x08)
	struct USkyStateOverrideComponent* SkyStateOverrideNoMoon; // 0x2e8(0x08)
	struct UCameraComponent* Camera; // 0x2f0(0x08)
	struct APawn* Player_Pawn; // 0x2f8(0x08)
	struct FRotator Player_Rot; // 0x300(0x0c)
	bool bRotLeft; // 0x30c(0x01)
	bool bRotRight; // 0x30d(0x01)
	char pad_30E[0x2]; // 0x30e(0x02)
	float MoveLimit; // 0x310(0x04)
	struct FCelestialPointOfInterestName Point Of Interest; // 0x314(0x08)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct USkyStateOverrideCelestialPointOfInterestAlignToRotator* POI_AlignToRot; // 0x320(0x08)
	struct FRotator ExtraRot; // 0x328(0x0c)
	float ResetLerp; // 0x334(0x04)
	bool bResettingRot; // 0x338(0x01)
	bool bSolveLerp; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float EndLerp; // 0x33c(0x04)
	float FOV; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FMulticastInlineDelegate Solved; // 0x348(0x10)
	struct FMulticastInlineDelegate Exit; // 0x358(0x10)
	struct UUI_BP_Astronomy_minigame_C* Game_UI; // 0x368(0x08)
	struct FStarrySkyHighlightParameters DefaultStarrySkyParameters; // 0x370(0x18)
	struct UDataTable* Solution Table; // 0x388(0x08)
	struct FAstronomyMiniGameSolutionEntry SolutionEntry; // 0x390(0x30)
	struct ABP_Telescope_C* WhoSpawnedMe; // 0x3c0(0x08)
	float FOV Pitch Yaw Input Scaling; // 0x3c8(0x04)
	float Approach Pitch Yaw Min Scale; // 0x3cc(0x04)
	float Approach Zoom Min Scale; // 0x3d0(0x04)
	float Approach Roll Min Scale; // 0x3d4(0x04)
	float TranslateXValue; // 0x3d8(0x04)
	float TranslateYValue; // 0x3dc(0x04)
	float ZoomAxisValue; // 0x3e0(0x04)
	float RotateAxisValue; // 0x3e4(0x04)
	bool BackDisabled; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FWeatherSequenceName Astronomy Weather Preset; // 0x3f0(0x10)
	struct FRenderingCutBits Rendering Cuts; // 0x400(0x08)
	float Autosolve_Timer; // 0x408(0x04)
	bool SolvePopupActive; // 0x40c(0x01)

	void StartingRotator(struct FRotator SolutionRotator, struct FRotator& RandomizedRotator); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StartingRotator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CancelMinigame(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.CancelMinigame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartingFOV(float minFOV, float maxFOV, float SolutionFOV, float& StartingFOV); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StartingFOV // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ConstellationEnumToName(enum class E_AstronomyConstellations Selection, struct FName& Name); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ConstellationEnumToName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool Start Highlighting(struct FName POI Name, float Highlight Intensity); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.Start Highlighting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSolveExtraInfo(struct FString& Extra Info); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.GetSolveExtraInfo // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetPointOfInterest(struct FCelestialPointOfInterestName& Point Of Interest); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.GetPointOfInterest // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool SetStarrySkyParameters(float Highlight Intensity); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.SetStarrySkyParameters // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void SetSolution(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.SetSolution // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGameRotator(struct FRotator Rotator); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.SetGameRotator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupSky(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.SetupSky // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGRightShoulder_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpActEvt_UMGRightShoulder_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGUINavigateUp_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpActEvt_UMGUINavigateUp_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGUINavigateUp_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpActEvt_UMGUINavigateUp_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGLeftShoulder_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpActEvt_UMGLeftShoulder_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MiniGame_Cancel_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpActEvt_MiniGame_Cancel_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ResetRot(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ResetRot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckSolved(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.CheckSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SolveLerp(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.SolveLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpAxisEvt_Telescope_Translate_X_K2Node_InputAxisEvent_6(float AxisValue); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpAxisEvt_Telescope_Translate_X_K2Node_InputAxisEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpAxisEvt_Telescope_Translate_Y_K2Node_InputAxisEvent_7(float AxisValue); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpAxisEvt_Telescope_Translate_Y_K2Node_InputAxisEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpAxisEvt_Telescope_Zoom_Axis_K2Node_InputAxisEvent_8(float AxisValue); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpAxisEvt_Telescope_Zoom_Axis_K2Node_InputAxisEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void InpAxisEvt_Telescope_Rotate_Axis_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.InpAxisEvt_Telescope_Rotate_Axis_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void PlayTranslateXSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.PlayTranslateXSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopTranslateXSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StopTranslateXSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayTranslateYSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.PlayTranslateYSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopTranslateYSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StopTranslateYSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayZoomSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.PlayZoomSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopZoomSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StopZoomSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayRotateSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.PlayRotateSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopRotateSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.StopRotateSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayResetRotationSound(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.PlayResetRotationSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CHEAT_SolveMinigame(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.CHEAT_SolveMinigame // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStoryModeSolve(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.OnStoryModeSolve // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Telescope_Camera(int32_t EntryPoint); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.ExecuteUbergraph_BP_Telescope_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Exit__DelegateSignature(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.Exit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Solved__DelegateSignature(); // Function BP_Telescope_Camera.BP_Telescope_Camera_C.Solved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

