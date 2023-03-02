// BlueprintGeneratedClass BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C
// Size: 0x2f8 (Inherited: 0x280)
struct ABP_WE_Superposition_Experience_Manager_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct ABP_WE_Superposition_Experience_C*> SpawnableExperiences; // 0x290(0x10)
	struct ABP_WE_Superposition_Experience_C* CurrentExperience; // 0x2a0(0x08)
	struct TArray<struct UWorldEventSocketComponent*> TriggerEventSockets; // 0x2a8(0x10)
	struct UBoxComponent* EventStairwayTrigger; // 0x2b8(0x08)
	bool UseForcedExperience; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct ABP_WE_Superposition_Experience_C* ForcedSpawnExperience; // 0x2c8(0x08)
	struct UBoxComponent* EventDoorTrigger; // 0x2d0(0x08)
	struct TArray<struct ABP_WE_Superposition_Experience_C*> SuperpositionDoorTriggerExperiences; // 0x2d8(0x10)
	struct TArray<struct ABP_WE_Superposition_Experience_C*> SuperpositionStairwayTriggerExperiences; // 0x2e8(0x10)

	void SetupSocketTrigger(struct FGameplayTagContainer SocketDescriptor, struct AWorldEventLocationActor* WorldEventLocationActor, struct UBoxComponent*& OutBoxCollision); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.SetupSocketTrigger // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindSocketTrigger(struct UWorldEventSocketComponent* WorldEventSocket, struct UBoxComponent*& BoxComponent); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.FindSocketTrigger // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnExperience(struct ABP_WE_Superposition_Experience_C* Experience); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.SpawnExperience // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExperienceEnded(); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.OnExperienceEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAllSocketsByTag(struct FGameplayTagContainer SocketDescriptor, struct AWorldEventLocationActor*& WorldEventLocator, struct TArray<struct UWorldEventSocketComponent*>& OutWorldEventSockets); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.GetAllSocketsByTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.OnBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Superposition_Experience_Manager(int32_t EntryPoint); // Function BP_WE_Superposition_Experience_Manager.BP_WE_Superposition_Experience_Manager_C.ExecuteUbergraph_BP_WE_Superposition_Experience_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

