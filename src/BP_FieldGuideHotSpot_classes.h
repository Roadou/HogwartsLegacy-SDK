// BlueprintGeneratedClass BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C
// Size: 0x350 (Inherited: 0x2d0)
struct ABP_FieldGuideHotSpot_C : AFieldGuideHotSpot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UAkComponent* AkComponent; // 0x2d8(0x08)
	struct USkeletalMeshComponent* GhostPageHint; // 0x2e0(0x08)
	struct USphereComponent* Twinkle; // 0x2e8(0x08)
	struct USphereComponent* SphereCollision; // 0x2f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f8(0x08)
	struct ABP_FieldGuidePage_C* FieldGuidePage; // 0x300(0x08)
	struct ABP_MapHelp_C* MapHelpClass; // 0x308(0x08)
	struct UNiagaraComponent* SparkleComponent; // 0x310(0x08)
	struct FTimerHandle DelayedRegisterTimerHandle; // 0x318(0x08)
	struct USkinFXComponent* Skin FXComponent; // 0x320(0x08)
	bool CollectedViaAccio; // 0x328(0x01)
	bool FieldGuidePageRevealed; // 0x329(0x01)
	bool FieldGuideHidden; // 0x32a(0x01)
	bool FieldGuideInOuterRadius; // 0x32b(0x01)
	bool FieldGuideMissionUnlocked; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UMaterialInstanceDynamic* MAT_Quill; // 0x330(0x08)
	struct UMaterialInstanceDynamic* MAT_Page; // 0x338(0x08)
	float PassiveHint_Interval; // 0x340(0x04)
	float PassiveHint_FXDuration; // 0x344(0x04)
	float Ping_FXDuration; // 0x348(0x04)
	float ActiveHint_FXDuration; // 0x34c(0x04)

	void CheckShowFieldGuidePage(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.CheckShowFieldGuidePage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckShowFieldGuideHint(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.CheckShowFieldGuideHint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFieldGuideCollected(bool Flag); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetFieldGuideCollected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFieldGUideMissionUnlocked(bool Flag); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetFieldGUideMissionUnlocked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFieldGuideInOuterRadius(bool Flag); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetFieldGuideInOuterRadius // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGuideHidden(bool Flag); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetGuideHidden // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetGuidePageRevealed(bool Flag); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetGuidePageRevealed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPageActor(struct ABP_FieldGuidePage_C* InPageActor); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetPageActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPageActor(struct ABP_FieldGuidePage_C*& NewParam); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.GetPageActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnPageAndQuill(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SpawnPageAndQuill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyPageAndQuill(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DestroyPageAndQuill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideRevealHint(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HideRevealHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowRevealHint(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ShowRevealHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateThisHotSpot(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DeactivateThisHotSpot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateThisHotSpot(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ActivateThisHotSpot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitOuterRadius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitOuterRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Enter Outer Radius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Enter Outer Radius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SceneRigActionTakingControl(struct UObject* Caller); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SceneRigActionTakingControl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SceneRigActionReleasingControl(struct UObject* Caller); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SceneRigActionReleasingControl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitedOuterRadius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitedOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RevealedByRevelio(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.RevealedByRevelio // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnteredOuterRadius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.EnteredOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DelayedRegisterForInteract(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DelayedRegisterForInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNonCinematicElements(struct UObject* Caller); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ShowNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNonCinematicElements(struct UObject* Caller); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HideNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MenuTabLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.MenuTabLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitedHotSpotRadius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitedHotSpotRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HintedByRevelio(bool bWasHintedAt); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HintedByRevelio // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Ping(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Ping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnteredHotSpotRadius(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.EnteredHotSpotRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FieldGuideHotSpot(int32_t EntryPoint); // Function BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExecuteUbergraph_BP_FieldGuideHotSpot // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

