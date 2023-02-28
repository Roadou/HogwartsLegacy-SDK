// BlueprintGeneratedClass BP_HouseElfSpawner.BP_HouseElfSpawner_C
// Size: 0x1722 (Inherited: 0x1668)
struct ABP_HouseElfSpawner_C : ADynamicObjectVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1668(0x08)
	struct AActor* SpawnedActor; // 0x1670(0x08)
	struct UScheduledEntity* MyScheduledEntity; // 0x1678(0x08)
	struct FNPC_HouseElfData AbilityData; // 0x1680(0x28)
	struct AEnemy_Character* Spawned Character; // 0x16a8(0x08)
	bool IsBefriended; // 0x16b0(0x01)
	char pad_16B1[0x3]; // 0x16b1(0x03)
	float Scared Time; // 0x16b4(0x04)
	struct FObjectFadeParamsSpeedDuration Fade Params; // 0x16b8(0x0c)
	char pad_16C4[0xc]; // 0x16c4(0x0c)
	struct FTransform Elf Spawn Location; // 0x16d0(0x30)
	struct TArray<struct ASpawnLocation*> MySpawnLocations; // 0x1700(0x10)
	float Destroy Delay; // 0x1710(0x04)
	char pad_1714[0x4]; // 0x1714(0x04)
	struct FTimerHandle TimerHandle; // 0x1718(0x08)
	bool WasSeen; // 0x1720(0x01)
	bool Spawn only once; // 0x1721(0x01)

	void UserConstructionScript(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllEnemiesSpawned(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.AllEnemiesSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PerceivedByPlayerDelegate_Event_1(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.PerceivedByPlayerDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerHasGreetedMe(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.PlayerHasGreetedMe // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEventFinished(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.CustomEventFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FleeEvent(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.FleeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void AllEnemiesDead(); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.AllEnemiesDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActorSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.ActorSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharacterIsLoaded(struct AActor* LoadedActor); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.CharacterIsLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HouseElfSpawner(int32_t EntryPoint); // Function BP_HouseElfSpawner.BP_HouseElfSpawner_C.ExecuteUbergraph_BP_HouseElfSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

