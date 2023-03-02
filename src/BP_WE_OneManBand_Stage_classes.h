// BlueprintGeneratedClass BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C
// Size: 0x423 (Inherited: 0x280)
struct ABP_WE_OneManBand_Stage_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USocialAgentPawnComponent* SocialAgentPawn; // 0x288(0x08)
	struct USceneComponent* Instruments Root; // 0x290(0x08)
	struct UAkComponent* AkMusicSource; // 0x298(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_WE_Trunk_A1; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Wands_Wand01; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	bool Is Tipped; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> Instruments; // 0x2c8(0x10)
	int32_t World Event Stage; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UChildActorComponent* Broken_Instrument; // 0x2e0(0x08)
	struct UAnimMontage* Hat Montage; // 0x2e8(0x08)
	struct ABP_Station_C* Left Crowd Station; // 0x2f0(0x08)
	struct ABP_Station_C* Right Crowd Station; // 0x2f8(0x08)
	int32_t Dialogue Handle; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UAvaAudioDialogueEvent* Ongoing No Tip Dialogue; // 0x308(0x08)
	struct UAvaAudioDialogueEvent* Ongoing Tipped Dialogue; // 0x310(0x08)
	struct ABP_Station_C* Busker Station; // 0x318(0x08)
	struct UScheduledEntity* Ernie Lark; // 0x320(0x08)
	struct TArray<struct ABP_WE_OneManBand_Instrument_C*> Spawned Instruments; // 0x328(0x10)
	struct FTimerHandle Dialogue Timer Handle; // 0x338(0x08)
	struct ABP_Station_C* Coin Drop Station; // 0x340(0x08)
	struct ATriggerSphere* DialogueTrigger; // 0x348(0x08)
	int32_t Tip Amount (Knuts); // 0x350(0x04)
	int32_t LoadedInstruments; // 0x354(0x04)
	struct TArray<struct UAvaAudioDialogueEvent*> Adknowledge Player Dialogue; // 0x358(0x10)
	struct FHermesBPDelegateHandle StationFinishedEnter Delegate; // 0x368(0x10)
	struct FHermesBPDelegateHandle StationFinishedExit Delegate; // 0x378(0x10)
	struct TArray<struct ATier4_Actor*> Crowd Actors; // 0x388(0x10)
	struct FHermesBPDelegateHandle T4LoadedHandle; // 0x398(0x10)
	struct FGameplayTagContainer Left Crowd Socket Tag; // 0x3a8(0x20)
	struct FGameplayTagContainer Right Crowd Socket Tag; // 0x3c8(0x20)
	struct UWorldEventSocketComponent* Left Socket; // 0x3e8(0x08)
	struct UWorldEventSocketComponent* Right Socket; // 0x3f0(0x08)
	struct FMasterTickThrottlerSettings Settings; // 0x3f8(0x28)
	bool BandOnStage; // 0x420(0x01)
	bool BandPlaying; // 0x421(0x01)
	bool BandInAudibleRange; // 0x422(0x01)

	void AddToStation(struct ATier4_Actor* T4); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.AddToStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasFreeSlots(struct AStation* Station, bool& FreeSlots); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.HasFreeSlots // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBuskerEnterStation(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.OnBuskerEnterStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBuskerExitStation(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.OnBuskerExitStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleMusic(bool Enable); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.ToggleMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_241ECB8C4515CA4260BA6DA4DE71E242(struct UObject* Loaded); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.OnLoaded_241ECB8C4515CA4260BA6DA4DE71E242 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Dialogue(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnInstrumentMusicToggle(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.OnInstrumentMusicToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DialogueTrigger_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.BndEvt__DialogueTrigger_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Kill Ernie(); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.Kill Ernie // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void T4CharacterLoadComplete(struct UObject* Caller, struct AActor* Actor); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.T4CharacterLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void T4ActorSpawned(struct ATier4_Actor* T4Actor); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.T4ActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TippedBusker(struct UObject* Caller); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.TippedBusker // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_OneManBand_Stage(int32_t EntryPoint); // Function BP_WE_OneManBand_Stage.BP_WE_OneManBand_Stage_C.ExecuteUbergraph_BP_WE_OneManBand_Stage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

