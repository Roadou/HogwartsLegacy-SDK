// BlueprintGeneratedClass BP_GuideSpline.BP_GuideSpline_C
// Size: 0x5f9 (Inherited: 0x488)
struct ABP_GuideSpline_C : AGuideSpline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	float Timeline_1_BasecolorOpacity_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x490(0x04)
	float Timeline_1_NewTrack_0_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x494(0x04)
	enum class ETimelineDirection Timeline_1__Direction_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UTimelineComponent* Timeline_2; // 0x4a0(0x08)
	float Timeline_0_RibbonOpacity_7C1B1AE44828561BB5866090503E04CF; // 0x4a8(0x04)
	float Timeline_0_flapflapboom_7C1B1AE44828561BB5866090503E04CF; // 0x4ac(0x04)
	float Timeline_0_slowstart_7C1B1AE44828561BB5866090503E04CF; // 0x4b0(0x04)
	float Timeline_0_linear_7C1B1AE44828561BB5866090503E04CF; // 0x4b4(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7C1B1AE44828561BB5866090503E04CF; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UTimelineComponent* Timeline_1; // 0x4c0(0x08)
	bool CanPathStart; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UNiagaraComponent* SpawnedBookNiagaraRibbon; // 0x4d0(0x08)
	float Myplayrate; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct TArray<struct USplineMeshComponent*> MySplineMeshComponentArray; // 0x4e0(0x10)
	float MovableRibbonDistance; // 0x4f0(0x04)
	int32_t Number Of Elements; // 0x4f4(0x04)
	struct UStaticMesh* New Mesh; // 0x4f8(0x08)
	float scaleMovableRibbon; // 0x500(0x04)
	float Tangent; // 0x504(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> dynamicinstances; // 0x508(0x10)
	float BookHoveringDistanceInWorldUnits; // 0x518(0x04)
	float BookHoveringUDistance; // 0x51c(0x04)
	float PlayRate; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UNiagaraComponent* EverLastingRibbon; // 0x528(0x08)
	int32_t BackTrackComponents; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct FHermesBPDelegateHandle Start guiding VFXHandle; // 0x538(0x10)
	struct UNiagaraComponent* InitialNiagaraBurst; // 0x548(0x08)
	float FadeOutDuration; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UNiagaraComponent* BookBurstNiagara; // 0x558(0x08)
	struct FVector PreviousBookLocation; // 0x560(0x0c)
	float MinimumSplineLengthBurstEffectsTrigger; // 0x56c(0x04)
	bool SecondaryBurstSpawned; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	int32_t PlayerProgressInComponentLengthUnits; // 0x574(0x04)
	int32_t SplineLengthInComonentLengthUnits; // 0x578(0x04)
	float InitialSplineLength; // 0x57c(0x04)
	struct UAkComponent* AK_SecondaryBurst; // 0x580(0x08)
	float timeSinceLastCast; // 0x588(0x04)
	float PlayerDistanceAlongSpline; // 0x58c(0x04)
	int32_t CurrentPrefix; // 0x590(0x04)
	int32_t PrevPrefix; // 0x594(0x04)
	int32_t Player Progress Delta; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TArray<bool> UpdateMesh; // 0x5a0(0x10)
	struct TArray<struct FVector> StartPointTargets; // 0x5b0(0x10)
	struct TArray<struct FVector> StartTangentTargets; // 0x5c0(0x10)
	struct TArray<struct FVector> EndPointTargets; // 0x5d0(0x10)
	struct TArray<struct FVector> EndTangentTargets; // 0x5e0(0x10)
	float MeshUpdateDeltaTime; // 0x5f0(0x04)
	float MeshUpdateInterpSpeed; // 0x5f4(0x04)
	bool GuidingStarted; // 0x5f8(0x01)

	void Timeline_0__FinishedFunc(); // Function BP_GuideSpline.BP_GuideSpline_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GuideSpline.BP_GuideSpline_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_GuideSpline.BP_GuideSpline_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_GuideSpline.BP_GuideSpline_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ComputeMeshComponentTargetsFromPlayerPosition(); // Function BP_GuideSpline.BP_GuideSpline_C.ComputeMeshComponentTargetsFromPlayerPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnInitialBurstAndCheckIfPathCanStart(); // Function BP_GuideSpline.BP_GuideSpline_C.SpawnInitialBurstAndCheckIfPathCanStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreparePathRemoval(); // Function BP_GuideSpline.BP_GuideSpline_C.PreparePathRemoval // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReverseRibbon(); // Function BP_GuideSpline.BP_GuideSpline_C.ReverseRibbon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GuideSpline.BP_GuideSpline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartGuidingMechanicVFX(struct UObject* Caller); // Function BP_GuideSpline.BP_GuideSpline_C.StartGuidingMechanicVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_GuideSpline.BP_GuideSpline_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GuideSpline(int32_t EntryPoint); // Function BP_GuideSpline.BP_GuideSpline_C.ExecuteUbergraph_BP_GuideSpline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

