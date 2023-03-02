// BlueprintGeneratedClass BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C
// Size: 0x528 (Inherited: 0x318)
struct ABP_WE_DRAGON_SHEEP_SplineMover_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAkComponent* Ak; // 0x320(0x08)
	float TailBlend_TailBlend_AE41C23F4255A62A4886ED84A4121A67; // 0x328(0x04)
	enum class ETimelineDirection TailBlend__Direction_AE41C23F4255A62A4886ED84A4121A67; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent* TailBlend; // 0x330(0x08)
	struct UABP_WE_DRAGON_SHEEP_C* DragonABP; // 0x338(0x08)
	float SplineLength; // 0x340(0x04)
	float DragonPitch; // 0x344(0x04)
	float TargetVelocity; // 0x348(0x04)
	struct FRotator EventOrientation; // 0x34c(0x0c)
	int32_t EventPreyTypeIndex; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TMap<struct FName, struct TSoftObjectPtr<USkeletalMesh>> DragonsByTags; // 0x360(0x50)
	struct TSoftObjectPtr<USkeletalMesh> DragonMesh; // 0x3b0(0x28)
	int32_t PreyEventIndex; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct AActor* PreyCreature; // 0x3e0(0x08)
	struct TArray<struct FName> PreyCreatureNames; // 0x3e8(0x10)
	struct TArray<struct FTransform> PreySplineOffsets; // 0x3f8(0x10)
	struct FVector PreyStartingLoc; // 0x408(0x0c)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct UAnimSequence*> FakePreyAnims; // 0x418(0x10)
	struct FVector FakePreyLoc; // 0x428(0x0c)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct UAkAudioEvent*> PreyCreatureDistressSFX; // 0x438(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> FakePreyMeshes; // 0x448(0x10)
	struct TArray<struct FTransform> FakePreyOffsets; // 0x458(0x10)
	struct USplineComponent* FlightSpline; // 0x468(0x08)
	struct UParticleSystemComponent* FloorWindVFX; // 0x470(0x08)
	struct ASkeletalMeshActor* FakePrey; // 0x478(0x08)
	bool DragonExitLift; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float DragonLookAlpha; // 0x484(0x04)
	bool PlayerKnockedOver; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct ADynamicObjectVolume* PassivePreyDOV; // 0x490(0x08)
	struct ADynamicObjectVolume* PoacherPreyDOV; // 0x498(0x08)
	struct ATriggerSphere* PreyFleeRadius; // 0x4a0(0x08)
	struct AActor* FakePoacher; // 0x4a8(0x08)
	struct ADynamicObjectVolume* Poacher_DOV; // 0x4b0(0x08)
	struct AActor* Poacher_Actor; // 0x4b8(0x08)
	struct ABP_Station_C* Poacher_Station; // 0x4c0(0x08)
	struct TMap<struct FName, struct ABP_WE_GenericSpline_C*> FlightSplinesByTags; // 0x4c8(0x50)
	struct TArray<struct ABP_WE_GenericSpline_C*> ValidTaggedSplines; // 0x518(0x10)

	void GrabPoacherPrey(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.GrabPoacherPrey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GrabPassivePrey(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.GrabPassivePrey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnPrey(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.SpawnPrey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ManualTriggerFix(int32_t SplinePoint, struct FDelegate& Event, struct UBoxComponent*& TriggerBox, struct FVector& Location); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.ManualTriggerFix // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonLookAtPrey(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonLookAtPrey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonGrabSplineLift(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonGrabSplineLift // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopEventTick(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.StopEventTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Knockdown(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.Knockdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonAbortGrab(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonAbortGrab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonVFXFloorWind(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonVFXFloorWind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonVFXWingDust(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonVFXWingDust // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonPitchShiftVelocity(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonPitchShiftVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonWingFlapBlend(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.DragonWingFlapBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerEvent(struct FDelegate& CameraShake, struct FDelegate& PreyGrabbed); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.TriggerEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupSplinePosition(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.SetupSplinePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TailBlend__FinishedFunc(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.TailBlend__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TailBlend__UpdateFunc(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.TailBlend__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C7197AAB436405E81A3CB5B9D1A07302(struct UObject* Loaded); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.OnLoaded_C7197AAB436405E81A3CB5B9D1A07302 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_FD31C27A4EC20CB97DBEF99C5EDA166B(struct UObject* Loaded); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.OnLoaded_FD31C27A4EC20CB97DBEF99C5EDA166B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerD(struct FVector Location); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.Event_WE_TriggerD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraShake(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GrabPrey(); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.GrabPrey // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PreySpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.PreySpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PreyFleeRadius_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.BndEvt__PreyFleeRadius_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnStartTriggerOverlapped(struct UWorldEventSocketComponent* Socket); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.OnStartTriggerOverlapped // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_Fade(struct FVector Location); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.Event_WE_Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_DRAGON_SHEEP_SplineMover(int32_t EntryPoint); // Function BP_WE_DRAGON_SHEEP_SplineMover.BP_WE_DRAGON_SHEEP_SplineMover_C.ExecuteUbergraph_BP_WE_DRAGON_SHEEP_SplineMover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

