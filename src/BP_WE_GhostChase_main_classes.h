// BlueprintGeneratedClass BP_WE_GhostChase_main.BP_WE_GhostChase_main_C
// Size: 0x2f4 (Inherited: 0x280)
struct ABP_WE_GhostChase_main_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USplineComponent* SplinePathComponent; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct TArray<struct AAmbientGhost_Character*> GhostActor refs; // 0x298(0x10)
	struct FTimerHandle TimerHandle; // 0x2a8(0x08)
	float TravelSpeed; // 0x2b0(0x04)
	struct FVector2D SpawnTimeRange; // 0x2b4(0x08)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FDatabaseName> Character; // 0x2c0(0x10)
	bool BeginPathFromEnd?; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float TurnSpeed; // 0x2d4(0x04)
	struct ABP_WE_GhostChase_ghost_C* EddieCleaver; // 0x2d8(0x08)
	struct ABP_WE_GhostChase_ghost_C* AnabellePoole; // 0x2e0(0x08)
	struct ATriggerBox* StartTrigger; // 0x2e8(0x08)
	int32_t VO_Post_Count; // 0x2f0(0x04)

	void Set Spline Data From World Event Socket(struct FGameplayTagContainer SocketDescriptor, struct USplineComponent*& OutSplineComponent); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.Set Spline Data From World Event Socket // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Add offsets to path spline points(); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.Add offsets to path spline points // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Check line of sight to Start and end points(bool Debug text, bool& Start Point in view?, bool& End Point in view?); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.Check line of sight to Start and end points // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupGhostCharacter(int32_t GhostID, struct ABP_WE_GhostChase_ghost_C* GhostCharacter, float YawSpeed); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.SetupGhostCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnGhosts(bool BeginPathFromEnd?); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.SpawnGhosts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttemptEventStart(); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.AttemptEventStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.OnBeginOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitGhostVO(); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.InitGhostVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayEddieCleaverVO(); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.PlayEddieCleaverVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_GhostChase_main(int32_t EntryPoint); // Function BP_WE_GhostChase_main.BP_WE_GhostChase_main_C.ExecuteUbergraph_BP_WE_GhostChase_main // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

