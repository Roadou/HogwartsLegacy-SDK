// BlueprintGeneratedClass BP_Telescope.BP_Telescope_C
// Size: 0x3e8 (Inherited: 0x2b0)
struct ABP_Telescope_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* SafeLocationCheck; // 0x2b8(0x08)
	struct USphereComponent* ProximityHint; // 0x2c0(0x08)
	struct USphereComponent* ProximityOverlap; // 0x2c8(0x08)
	struct UAkComponent* Telescope_Enter; // 0x2d0(0x08)
	struct USceneComponent* CallOut; // 0x2d8(0x08)
	struct UNiagaraComponent* Niagara1; // 0x2e0(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2e8(0x08)
	struct UChildActorComponent* BP_Telescope_Marker; // 0x2f0(0x08)
	struct UStaticMeshComponent* Telescope; // 0x2f8(0x08)
	struct UStaticMeshComponent* AstronomyBase; // 0x300(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	float TelescopeInOut_TelescopeScaleFloat_8F2C51404BE2A2264C7D33AE5D12CD51; // 0x318(0x04)
	enum class ETimelineDirection TelescopeInOut__Direction_8F2C51404BE2A2264C7D33AE5D12CD51; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* TelescopeInOut; // 0x320(0x08)
	struct APawn* Player; // 0x328(0x08)
	struct AActor* Player_Camera; // 0x330(0x08)
	enum class E_AstronomyConstellations Constellation; // 0x338(0x01)
	bool IsZZS; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct ABP_Telescope_Camera_C* TelescopeGame; // 0x340(0x08)
	struct FKnowledgeInfo KnowledgeCard; // 0x348(0x30)
	bool InMiniGame; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UUI_BP_Astronomy_minigame_C* UI_Widget; // 0x380(0x08)
	struct FMulticastInlineDelegate TelescopeSolved; // 0x388(0x10)
	struct FMulticastInlineDelegate TelescopeExit; // 0x398(0x10)
	struct FMulticastInlineDelegate TelescopeInteraction; // 0x3a8(0x10)
	struct FHermesBPDelegateHandle InteractionHandle; // 0x3b8(0x10)
	bool AlreadySolved; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	struct FWorldFXPresetRuleName PresetRule; // 0x3cc(0x08)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UGameLogicObject* GameLogicObject; // 0x3d8(0x08)
	struct ASceneRigActor* FadeSR; // 0x3e0(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_Telescope.BP_Telescope_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Constellation From Index(int32_t Index, enum class E_AstronomyConstellations Default Constellation, enum class E_AstronomyConstellations& Constellation); // Function BP_Telescope.BP_Telescope_C.Constellation From Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void GetConstellation(enum class E_AstronomyConstellations& Constellation); // Function BP_Telescope.BP_Telescope_C.GetConstellation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetPointOfInterest(struct FCelestialPointOfInterestName& Point Of Interest); // Function BP_Telescope.BP_Telescope_C.GetPointOfInterest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Telescope.BP_Telescope_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TelescopeInOut__FinishedFunc(); // Function BP_Telescope.BP_Telescope_C.TelescopeInOut__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TelescopeInOut__UpdateFunc(); // Function BP_Telescope.BP_Telescope_C.TelescopeInOut__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_AllowTelescopeInteraction_K2Node_GameLogicBoolResultEvent_4(bool CachedResult); // Function BP_Telescope.BP_Telescope_C.GameLogicElementEvt_AllowTelescopeInteraction_K2Node_GameLogicBoolResultEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_ShowTelescopeHint_K2Node_GameLogicBoolResultEvent_3(bool CachedResult); // Function BP_Telescope.BP_Telescope_C.GameLogicElementEvt_ShowTelescopeHint_K2Node_GameLogicBoolResultEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_EnableTelescopeTick_K2Node_GameLogicBoolResultEvent_2(bool CachedResult); // Function BP_Telescope.BP_Telescope_C.GameLogicElementEvt_EnableTelescopeTick_K2Node_GameLogicBoolResultEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_ShowTableBeam_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function BP_Telescope.BP_Telescope_C.GameLogicElementEvt_ShowTableBeam_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Telescope.BP_Telescope_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Telescope.BP_Telescope_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Telescope.BP_Telescope_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ToggleInteract(bool EnableInteract); // Function BP_Telescope.BP_Telescope_C.ToggleInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateBeacon(bool bActivate); // Function BP_Telescope.BP_Telescope_C.ActivateBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Solved_Event(); // Function BP_Telescope.BP_Telescope_C.Solved_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Exit_Event(); // Function BP_Telescope.BP_Telescope_C.Exit_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_Telescope.BP_Telescope_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartSolved(); // Function BP_Telescope.BP_Telescope_C.StartSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GrowTelescope(); // Function BP_Telescope.BP_Telescope_C.GrowTelescope // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShrinkTelescope(); // Function BP_Telescope.BP_Telescope_C.ShrinkTelescope // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void EnableTable(); // Function BP_Telescope.BP_Telescope_C.EnableTable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ZZS_01_Updated(struct UObject* Caller, struct FName& String); // Function BP_Telescope.BP_Telescope_C.ZZS_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Telescope.BP_Telescope_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_ProximityHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityHint_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_ProximityHint_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_Cube_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_Cube_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_Cube_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Telescope.BP_Telescope_C.BndEvt__BP_Telescope_Cube_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Telescope(int32_t EntryPoint); // Function BP_Telescope.BP_Telescope_C.ExecuteUbergraph_BP_Telescope // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void TelescopeInteraction__DelegateSignature(); // Function BP_Telescope.BP_Telescope_C.TelescopeInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TelescopeExit__DelegateSignature(); // Function BP_Telescope.BP_Telescope_C.TelescopeExit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TelescopeSolved__DelegateSignature(); // Function BP_Telescope.BP_Telescope_C.TelescopeSolved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

