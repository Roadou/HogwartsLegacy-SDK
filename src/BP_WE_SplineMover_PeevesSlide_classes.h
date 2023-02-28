// BlueprintGeneratedClass BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C
// Size: 0x37c (Inherited: 0x300)
struct ABP_WE_SplineMover_PeevesSlide_C : ABP_World_Event_Spline_Mover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct AActor* Peeves; // 0x308(0x08)
	struct USplineComponent* SlideSpline; // 0x310(0x08)
	struct UCurveFloat* AccelerationCurve; // 0x318(0x08)
	float InterpTime; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FTimerHandle VO_SlidingTimer; // 0x328(0x08)
	struct TArray<struct UWorldEventSpline*> SlideSplines; // 0x330(0x10)
	struct TArray<float> SplineLengths; // 0x340(0x10)
	int32_t ActiveSplineIndex; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct UWorldEventSpline*> ArrayToSort; // 0x358(0x10)
	float SplineWorldZ; // 0x368(0x04)
	int32_t SplineSortIndex; // 0x36c(0x04)
	float SlideLength; // 0x370(0x04)
	float PeevesZ_Rot; // 0x374(0x04)
	float PeevesRightOffset; // 0x378(0x04)

	void SplineManager(); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.SplineManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MovePeeves(); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.MovePeeves // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStartTriggerOverlapped(struct UWorldEventSocketComponent* Socket); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.OnStartTriggerOverlapped // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void VO_Sliding(); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.VO_Sliding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DiveFinished(); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.DiveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Dismount(struct AActor* TriggerActor, int32_t EventSplinePointIndex); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.Dismount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SplineMover_PeevesSlide(int32_t EntryPoint); // Function BP_WE_SplineMover_PeevesSlide.BP_WE_SplineMover_PeevesSlide_C.ExecuteUbergraph_BP_WE_SplineMover_PeevesSlide // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

