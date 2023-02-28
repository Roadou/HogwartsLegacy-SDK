// BlueprintGeneratedClass BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C
// Size: 0x554 (Inherited: 0x430)
struct ABP_TransfigurationPreviewActor_C : ATransfigurationPreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UPostProcessComponent* PostProcess; // 0x438(0x08)
	struct UPointLightComponent* Visibility_PointLight; // 0x440(0x08)
	struct USceneComponent* CentredMeshRoot; // 0x448(0x08)
	struct UNiagaraComponent* NiagaraSwirl; // 0x450(0x08)
	float Timeline_0_Light_551032264E08DDD03F2778B4242AC652; // 0x458(0x04)
	float Timeline_0_Distortion_551032264E08DDD03F2778B4242AC652; // 0x45c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_551032264E08DDD03F2778B4242AC652; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UTimelineComponent* Timeline_1; // 0x468(0x08)
	float ConjuredFromThinAirTimeline_Light_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x470(0x04)
	float ConjuredFromThinAirTimeline_DistortIn_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x474(0x04)
	float ConjuredFromThinAirTimeline_DistortOut_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x478(0x04)
	float ConjuredFromThinAirTimeline_Rotation_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x47c(0x04)
	float ConjuredFromThinAirTimeline_Scale_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x480(0x04)
	enum class ETimelineDirection ConjuredFromThinAirTimeline__Direction_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct UTimelineComponent* ConjuredFromThinAirTimeline; // 0x488(0x08)
	struct FVector OriginalScale; // 0x490(0x0c)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct TArray<struct UMeshComponent*> GhostMeshes; // 0x4a0(0x10)
	struct TArray<struct UMeshComponent*> SolidMeshes; // 0x4b0(0x10)
	float ScaleFactor; // 0x4c0(0x04)
	bool Visible; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	float GlowMult; // 0x4c8(0x04)
	float PinchMult; // 0x4cc(0x04)
	float RefractionMult; // 0x4d0(0x04)
	float RandomSwirl; // 0x4d4(0x04)
	bool TransformingIn; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	int32_t CamUID; // 0x4dc(0x04)
	struct UCurveFloat* SizeToCameraDistanceCurve; // 0x4e0(0x08)
	struct UCurveFloat* BlendCurve; // 0x4e8(0x08)
	struct UCurveFloat* SizeToVertOffsetCurve; // 0x4f0(0x08)
	bool bInitializeVisibilityOnLoad; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FVector OriginalCenter; // 0x4fc(0x0c)
	enum class E_PreviewActorState ActorState; // 0x508(0x01)
	bool bTransformationMeshSwapPending; // 0x509(0x01)
	char pad_50A[0x6]; // 0x50a(0x06)
	struct TArray<struct USceneComponent*> HiddenComponents; // 0x510(0x10)
	float EffectScale; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UNiagaraSystem* ExpandEffect; // 0x528(0x08)
	struct UNiagaraSystem* CollapseEffect; // 0x530(0x08)
	struct FRotator Rotation; // 0x538(0x0c)
	float PlayRate; // 0x544(0x04)
	struct FVector MinimumScale; // 0x548(0x0c)

	void ResetToOriginalScale(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ResetToOriginalScale // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool IsPreviewInTransition(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.IsPreviewInTransition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ShowBillboardComponents(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShowBillboardComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set EffectScale(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Set EffectScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPreviewMesh(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShowPreviewMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HidePreviewMesh(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.HidePreviewMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsReadyForPlacement(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.IsReadyForPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool ShouldBeCollapsedToSwirl(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShouldBeCollapsedToSwirl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetupCentredMeshRoot(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.SetupCentredMeshRoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__FinishedFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__UpdateFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAirTimeline__Camera Shaker Trigger__EventFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__Camera Shaker Trigger__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_1__EventFunc(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void InitializeVisibility(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.InitializeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReinitializeVisibility(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReinitializeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ConjuredFromThinAir(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAir // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CancelledIntoThinAir(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelledIntoThinAir // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectDeselected(struct AActor* InNewActor); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectDeselected // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectConfirmed(struct TArray<struct AActor*>& InNewActors); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectConfirmed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitialize(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.BlueprintInitialize // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnTransformStart(struct ATransfigurationPreviewActor* InNewPreview); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnTransformationDone(struct AActor* DestroyedActor); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformationDone // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectSelected(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectSelected // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnVanishStart(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnVanishStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnPreviewMeshLoaded(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnPreviewMeshLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TransformedFromOtherPreview(struct ATransfigurationPreviewActor* InPreviousPreview); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.TransformedFromOtherPreview // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Vanish(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Vanish // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_OnTransformationLoaded(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.BP_OnTransformationLoaded // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnTransformWithoutStyle(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformWithoutStyle // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnReturnedToSwirl(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnReturnedToSwirl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AppearFromSwirl(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.AppearFromSwirl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnToSwirl(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReturnToSwirl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartHoldConjuring(float TotalConjurationDuration, struct TArray<struct FTransfigurationResource>& Resources, struct FVector WandPos); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldConjuring // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ColorAboutToChange(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ColorAboutToChange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CannotHoldConjuring(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CannotHoldConjuring // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartHoldVanishing(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldVanishing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CancelHoldVanishing(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelHoldVanishing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartHoldTransforming(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldTransforming // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CancelHoldTransforming(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelHoldTransforming // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FinishHoldVanishing(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.FinishHoldVanishing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FinishHoldTransforming(); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.FinishHoldTransforming // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSizeChange(float StartScale, float EndScale); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnSizeChange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TransfigurationPreviewActor(int32_t EntryPoint); // Function BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ExecuteUbergraph_BP_TransfigurationPreviewActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

