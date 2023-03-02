// BlueprintGeneratedClass BP_REST_IN_PITY.BP_REST_IN_PITY_C
// Size: 0x374 (Inherited: 0x280)
struct ABP_REST_IN_PITY_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* EventEndTrigger; // 0x288(0x08)
	struct UBoxComponent* EventStartTrigger; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float GhostReactExit_RotationCurve_8B38DB4B446463E91560A9A531FDD27E; // 0x2a0(0x04)
	enum class ETimelineDirection GhostReactExit__Direction_8B38DB4B446463E91560A9A531FDD27E; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* GhostReactExit; // 0x2a8(0x08)
	struct AActor* CryingGhost; // 0x2b0(0x08)
	float EventNatTimeout; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTimerHandle EventTimeOutTimer; // 0x2c0(0x08)
	struct FVector GhostStartLoc; // 0x2c8(0x0c)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct FVector> GhostExitLocs; // 0x2d8(0x10)
	struct FVector GhostExitLoc; // 0x2e8(0x0c)
	struct FRotator GhostStartRot; // 0x2f4(0x0c)
	struct FRotator GhostExitRot; // 0x300(0x0c)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FTimerHandle LineTraceDelayTimer; // 0x310(0x08)
	float LineTraceFrequency; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FTimerHandle CryingGhostVoTimer; // 0x320(0x08)
	bool RavenclawPlayer; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float EndTriggerRadius; // 0x32c(0x04)
	struct TArray<struct FTransform> Lore Transforms; // 0x330(0x10)
	struct ABroomSpline* IdleSpline; // 0x340(0x08)
	float TargetSpeed; // 0x348(0x04)
	float Speed; // 0x34c(0x04)
	float LocDistance; // 0x350(0x04)
	float TurnPrediction; // 0x354(0x04)
	float RotDistance; // 0x358(0x04)
	float SplineLength; // 0x35c(0x04)
	bool EventEnding; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FTimerHandle GhostDelayTimer; // 0x368(0x08)
	int32_t WorldEventStage; // 0x370(0x04)

	void SetGhostSpeed(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.SetGhostSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGhostExitRot(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.GetGhostExitRot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CryingGhostVO(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.CryingGhostVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LineTraceToPlayer(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.LineTraceToPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void eventStart(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.eventStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GhostReactExit__FinishedFunc(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.GhostReactExit__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void GhostReactExit__UpdateFunc(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.GhostReactExit__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EventStartTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.BndEvt__EventStartTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EventEndTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.BndEvt__EventEndTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EventStartTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.BndEvt__EventStartTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void EventEnd(); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.EventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_REST_IN_PITY(int32_t EntryPoint); // Function BP_REST_IN_PITY.BP_REST_IN_PITY_C.ExecuteUbergraph_BP_REST_IN_PITY // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

