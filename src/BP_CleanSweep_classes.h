// BlueprintGeneratedClass BP_CleanSweep.BP_CleanSweep_C
// Size: 0x3a0 (Inherited: 0x280)
struct ABP_CleanSweep_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* ChaosObject_03; // 0x288(0x08)
	struct UStaticMeshComponent* ChaosObject_02; // 0x290(0x08)
	struct UStaticMeshComponent* ChaosObject_01; // 0x298(0x08)
	struct USplineComponent* Spline03; // 0x2a0(0x08)
	struct USplineComponent* Spline02; // 0x2a8(0x08)
	struct USplineComponent* Spline01; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	float TL_ChaosOrbits_LenghtAlongSpline_ADBDCC4F487798F090C34892D1494D9D; // 0x2c0(0x04)
	enum class ETimelineDirection TL_ChaosOrbits__Direction_ADBDCC4F487798F090C34892D1494D9D; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* TL_ChaosOrbits; // 0x2c8(0x08)
	float TL_GrowChaosSplines_NewTrack_0_DAB1822C4A0B1B07757B0AA18A38FE84; // 0x2d0(0x04)
	enum class ETimelineDirection TL_GrowChaosSplines__Direction_DAB1822C4A0B1B07757B0AA18A38FE84; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* TL_GrowChaosSplines; // 0x2d8(0x08)
	struct ABP_Station_C* EventStation; // 0x2e0(0x08)
	struct ATriggerBox* EnterVOTriggerBox; // 0x2e8(0x08)
	struct UScheduledEntity* HoboStudent; // 0x2f0(0x08)
	struct TArray<struct UAnimSequence*> TricksterStudentAnims; // 0x2f8(0x10)
	float MischiefSpeed; // 0x308(0x04)
	float ArrestoMultiplier; // 0x30c(0x04)
	float EventTimeout; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct UStaticMeshComponent*> ChaosObjects; // 0x318(0x10)
	struct TArray<struct USplineComponent*> ChaosSplines; // 0x328(0x10)
	struct FTimerHandle EventNatTimeout; // 0x338(0x08)
	struct FTimerHandle OngoingVoCooldown; // 0x340(0x08)
	struct FVector SplineScaleStart; // 0x348(0x0c)
	struct FVector SplineScaleFin; // 0x354(0x0c)
	float ArrestoMultMaxChaosStart; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct UWorldEventSocketComponent*> TriggerSockets; // 0x368(0x10)
	float TL_OrbitDelta; // 0x378(0x04)
	bool VO_ProximityPlayed; // 0x37c(0x01)
	bool VO_Ongoinged; // 0x37d(0x01)
	bool VO_Climaxed; // 0x37e(0x01)
	bool VO_TimedOut; // 0x37f(0x01)
	float VO_WaitTime; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct AFocusTrigger* FocusTrigger; // 0x388(0x08)
	struct AActor* FocusActor; // 0x390(0x08)
	struct UWorldEventSocketComponent* TriggerSocket; // 0x398(0x08)

	void ClearAndInvalidateTimers(); // Function BP_CleanSweep.BP_CleanSweep_C.ClearAndInvalidateTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End_StudentHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult Hit, struct FVector ImpactDirection); // Function BP_CleanSweep.BP_CleanSweep_C.End_StudentHitBySpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStudentExitStation(); // Function BP_CleanSweep.BP_CleanSweep_C.OnStudentExitStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStudentFleshCreated(struct AActor* Flesh Actor); // Function BP_CleanSweep.BP_CleanSweep_C.OnStudentFleshCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetOrbitRateMultiplier(struct TArray<struct UAnimSequence*>& Array, int32_t AnimIndex, int32_t Num Of Loops); // Function BP_CleanSweep.BP_CleanSweep_C.GetOrbitRateMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVO(); // Function BP_CleanSweep.BP_CleanSweep_C.PlayVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateStartingOrbits(); // Function BP_CleanSweep.BP_CleanSweep_C.ActivateStartingOrbits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Anim_TransToMischief02(); // Function BP_CleanSweep.BP_CleanSweep_C.Anim_TransToMischief02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveSplinePointDown(struct USplineComponent* self2, int32_t PointIndex); // Function BP_CleanSweep.BP_CleanSweep_C.MoveSplinePointDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveSplinePointUp(struct USplineComponent* Spline, int32_t PointIndex); // Function BP_CleanSweep.BP_CleanSweep_C.MoveSplinePointUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveOnSpline(struct USplineComponent* Spline, int32_t EventObjectIndex); // Function BP_CleanSweep.BP_CleanSweep_C.MoveOnSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupComponentArrays(); // Function BP_CleanSweep.BP_CleanSweep_C.SetupComponentArrays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TL_ChaosOrbits__FinishedFunc(); // Function BP_CleanSweep.BP_CleanSweep_C.TL_ChaosOrbits__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TL_ChaosOrbits__UpdateFunc(); // Function BP_CleanSweep.BP_CleanSweep_C.TL_ChaosOrbits__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TL_GrowChaosSplines__FinishedFunc(); // Function BP_CleanSweep.BP_CleanSweep_C.TL_GrowChaosSplines__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TL_GrowChaosSplines__UpdateFunc(); // Function BP_CleanSweep.BP_CleanSweep_C.TL_GrowChaosSplines__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CleanSweep.BP_CleanSweep_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EnterVOTriggerBox_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_CleanSweep.BP_CleanSweep_C.BndEvt__EnterVOTriggerBox_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void End_EndChaos(); // Function BP_CleanSweep.BP_CleanSweep_C.End_EndChaos // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End_StudentAttacked(); // Function BP_CleanSweep.BP_CleanSweep_C.End_StudentAttacked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End_StudentSad(); // Function BP_CleanSweep.BP_CleanSweep_C.End_StudentSad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddChaosWobble(); // Function BP_CleanSweep.BP_CleanSweep_C.AddChaosWobble // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play_VO(struct UAvaAudioDialogueEvent* Dialogue Event); // Function BP_CleanSweep.BP_CleanSweep_C.Play_VO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFleshCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_CleanSweep.BP_CleanSweep_C.OnFleshCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup(); // Function BP_CleanSweep.BP_CleanSweep_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTriggerEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CleanSweep.BP_CleanSweep_C.OnTriggerEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReactionFinished_Event_1(struct UAblReactionData* ReactionData, struct UAblReactionComponent* ReactionComponent); // Function BP_CleanSweep.BP_CleanSweep_C.OnReactionFinished_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CleanSweep(int32_t EntryPoint); // Function BP_CleanSweep.BP_CleanSweep_C.ExecuteUbergraph_BP_CleanSweep // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

