// BlueprintGeneratedClass BP_AlohomoraLock.BP_AlohomoraLock_C
// Size: 0x47c (Inherited: 0x248)
struct ABP_AlohomoraLock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct URenderSettingsCustomBlendDomainOverrideNamedComponent* TurnOffHighContrastGameplay; // 0x250(0x08)
	struct UFoliageRemoverActorComponent* FoliageRemoverActor; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UStaticMeshComponent* Cube; // 0x268(0x08)
	struct USpotLightComponent* SpotLight1; // 0x270(0x08)
	struct UPostProcessComponent* PostProcess; // 0x278(0x08)
	struct USpotLightComponent* SpotLight; // 0x280(0x08)
	struct UBlendableGlobalLightingComponent* BlendableGlobalLighting; // 0x288(0x08)
	struct UCineCameraComponent* Camera; // 0x290(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	struct USceneComponent* SceneRoot; // 0x2a0(0x08)
	struct UAkComponent* Ak_BP_Alohomora; // 0x2a8(0x08)
	float CameraTimeline_CameraFocalLength_BBD92ECF4B9CBEF233E45D835A118368; // 0x2b0(0x04)
	enum class ETimelineDirection CameraTimeline__Direction_BBD92ECF4B9CBEF233E45D835A118368; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* CameraTimeline; // 0x2b8(0x08)
	bool InteractInitiated; // 0x2c0(0x01)
	bool PuzzleComplete; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct UABP_AlohomoraLock_C* AnimBlueprint; // 0x2c8(0x08)
	float InnerTargetDegrees; // 0x2d0(0x04)
	float OuterTargetDegrees; // 0x2d4(0x04)
	float CurrentOuterDegrees; // 0x2d8(0x04)
	float CurrentInnerDegrees; // 0x2dc(0x04)
	float WinningInnerAngle; // 0x2e0(0x04)
	float WinningOuterAngle; // 0x2e4(0x04)
	float DistanceToInnerWin; // 0x2e8(0x04)
	float DistanceToOuterWin; // 0x2ec(0x04)
	float MinStickPressToWin; // 0x2f0(0x04)
	bool ContainsLoot; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float MaxErrorToWin; // 0x2f8(0x04)
	float MaxRumble; // 0x2fc(0x04)
	bool RightStickPressed; // 0x300(0x01)
	bool LeftStickPressed; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	float LeftStickFrac; // 0x304(0x04)
	float RightStickFrac; // 0x308(0x04)
	float MinAngleForFX; // 0x30c(0x04)
	float LeftRumbleMultiplier; // 0x310(0x04)
	float LargeRumble; // 0x314(0x04)
	float MedRumble; // 0x318(0x04)
	float SmallRumble; // 0x31c(0x04)
	float RightRumbleMult; // 0x320(0x04)
	float LastUnsolvedTime; // 0x324(0x04)
	float HoldtimeForWin; // 0x328(0x04)
	float OneStickCorrectRumble; // 0x32c(0x04)
	float BothSticksCorrectRumble; // 0x330(0x04)
	float DistanceForParticles; // 0x334(0x04)
	float Prev Inner Degrees; // 0x338(0x04)
	float Prev Outer Degrees; // 0x33c(0x04)
	float InnerSpeed; // 0x340(0x04)
	float OuterSpeed; // 0x344(0x04)
	float Delta Seconds; // 0x348(0x04)
	bool InnerDiscMoving; // 0x34c(0x01)
	bool OuterDiscMoving; // 0x34d(0x01)
	char pad_34E[0x2]; // 0x34e(0x02)
	float StartSpeed; // 0x350(0x04)
	float StopSpeed; // 0x354(0x04)
	struct AActor* LockedActor; // 0x358(0x08)
	struct UNiagaraComponent* GreenSpark; // 0x360(0x08)
	struct UNiagaraComponent* RedSpark; // 0x368(0x08)
	float GreenAlpha; // 0x370(0x04)
	float RedAlpha; // 0x374(0x04)
	float FX_Intensity; // 0x378(0x04)
	struct FName GreenOuterSocket; // 0x37c(0x08)
	struct FName RedInnerSocket; // 0x384(0x08)
	bool RightStickPressedLastFrame; // 0x38c(0x01)
	bool LeftStickPressedLastFrame; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	float BaseOuterDegrees; // 0x390(0x04)
	float BaseInnerDegrees; // 0x394(0x04)
	float InitialLeftStickAngle; // 0x398(0x04)
	float InitialRightStickAngle; // 0x39c(0x04)
	struct FVector GreenJitter; // 0x3a0(0x0c)
	struct FVector RedJitter; // 0x3ac(0x0c)
	float JitterMax; // 0x3b8(0x04)
	float JitterMin; // 0x3bc(0x04)
	struct UPointLightComponent* RedLight; // 0x3c0(0x08)
	struct UPointLightComponent* GreenLight; // 0x3c8(0x08)
	struct UNiagaraComponent* RedSmoke; // 0x3d0(0x08)
	struct UNiagaraComponent* GreenSmoke; // 0x3d8(0x08)
	struct FHermesBPDelegateHandle MunitionImpactHandle; // 0x3e0(0x10)
	struct UUI_BP_SimpleLegend_Screen_C* LegendWidget; // 0x3f0(0x08)
	bool UsingKeyboard; // 0x3f8(0x01)
	bool KeyboardButtonPressed; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float Outer KB Input; // 0x3fc(0x04)
	float Inner KB Input; // 0x400(0x04)
	float Keyboard Max Speed; // 0x404(0x04)
	bool Outer KB Pressed; // 0x408(0x01)
	bool Inner KB Pressed; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	float Outer KB Current Speed; // 0x40c(0x04)
	float KB Interp Speed; // 0x410(0x04)
	float Inner KB Current Speed; // 0x414(0x04)
	struct UNiagaraComponent* GreenCorrectFX; // 0x418(0x08)
	struct UNiagaraComponent* RedCorrectFX; // 0x420(0x08)
	bool ExitingPuzzle; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TArray<struct AActor*> Overlapping Actors; // 0x430(0x10)
	struct FLinearColor GreenColor; // 0x440(0x10)
	struct FLinearColor RedColor; // 0x450(0x10)
	float KBOuterFirstTickInput; // 0x460(0x04)
	float KBInnerFirstTickInput; // 0x464(0x04)
	struct FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x468(0x10)
	float FadeBlackDuration; // 0x478(0x04)

	void HighContrastMode(bool Disable); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.HighContrastMode // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateLegend(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.UpdateLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayLightWhooshMotion(float StickAngle); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.PlayLightWhooshMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateUI(bool Activate); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ActivateUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateJitter(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CalculateJitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClickSFX(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ClickSFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float OuterFXAngle(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.OuterFXAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float InnerFXAngle(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.InnerFXAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void OnRightStickPressed(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.OnRightStickPressed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool CalcLeftStickPressed(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CalcLeftStickPressed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool CalcRightStickPressed(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CalcRightStickPressed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float LeftStickAngle(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.LeftStickAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float RightStickAngle(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.RightStickAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void OnLeftStickPressed(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.OnLeftStickPressed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PickClosest45(float A, float& Out); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.PickClosest45 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float SetAngleToRange(float InputPin); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.SetAngleToRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateAnglesFromSticks(float DeltaTime, float& NewParam); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CalculateAnglesFromSticks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraTimeline__FinishedFunc(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CameraTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void CameraTimeline__UpdateFunc(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CameraTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CabinetOpen(struct UObject* Caller); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.CabinetOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RightButtonPressed(struct UObject* Caller); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.RightButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActorHitBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ActorHitBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Exit(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Alohomora_OuterRing_Pressed(struct UObject* Caller, float float); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_OuterRing_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Alohomora_InnerRing_Pressed(struct UObject* Caller, float float); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_InnerRing_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Alohomora_OuterRing_Released(struct UObject* Caller, float float); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_OuterRing_Released // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Alohomora_InnerRing_Released(struct UObject* Caller, float float); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_InnerRing_Released // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitImmediately(struct UObject* Caller); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ExitImmediately // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AutoSolve(); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.AutoSolve // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AlohomoraLock(int32_t EntryPoint); // Function BP_AlohomoraLock.BP_AlohomoraLock_C.ExecuteUbergraph_BP_AlohomoraLock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

