// BlueprintGeneratedClass BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C
// Size: 0x3f0 (Inherited: 0x280)
struct ABP_WE_MagicKiteBattle_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	bool ShouldSpawnStudents; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t NumOfKiteFliers; // 0x294(0x04)
	struct TArray<struct ABP_Station_C*> NPCKiteStations; // 0x298(0x10)
	struct TArray<struct ABP_Station_C*> CrowdStations; // 0x2a8(0x10)
	bool ShouldCountExtraHobos; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t DialogueHandle; // 0x2bc(0x04)
	int32_t FallbackCounter; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FHermesBPDelegateHandle DeployHandle; // 0x2c8(0x10)
	struct FTimerHandle DialogueTimerHandle; // 0x2d8(0x08)
	struct AActor* KiteToSpawn; // 0x2e0(0x08)
	struct TArray<enum class HouseIds> AvailableHouses; // 0x2e8(0x10)
	struct TArray<struct AActor*> TownieKites; // 0x2f8(0x10)
	struct TArray<struct AActor*> KitesAvailable; // 0x308(0x10)
	struct TArray<struct UScheduledEntity*> KiteHobos; // 0x318(0x10)
	struct TArray<struct ABP_Station_C*> KiteStationsInUse; // 0x328(0x10)
	struct TArray<struct ABP_Station_C*> CrowdStationsInUse; // 0x338(0x10)
	struct TMap<struct AActor*, struct ABP_WE_MagicKiteBattle_Kite_C*> NPCAndKite; // 0x348(0x50)
	struct TMap<struct AActor*, struct UStaticMeshComponent*> NPCAndWand; // 0x398(0x50)
	struct UStaticMeshComponent* NewVar_1; // 0x3e8(0x08)

	struct USkeletalMeshComponent* Get Char Mesh(struct AActor* NewParam); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.Get Char Mesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ReactionReceived(struct FQueueReactionParams& ReactionParams, struct UAblReactionComponent* ReactionComp); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.ReactionReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FallbackKiteDeploy(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.FallbackKiteDeploy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NPCArrivedAtStation(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.NPCArrivedAtStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAvailableKites(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.SetAvailableKites // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerKiteFlierDialogue(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.TriggerKiteFlierDialogue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NPCHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult Hit, struct FVector ImpactDirection); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.NPCHitBySpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetRandStation(struct TArray<struct ABP_Station_C*>& AvailableStations, struct TArray<struct ABP_Station_C*>& InUseStations, struct ABP_Station_C*& Station); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.GetRandStation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnKite(struct AActor* KiteFlier, struct ABP_WE_MagicKiteBattle_Kite_C*& Kite); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.SpawnKite // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoboCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.HoboCreated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnHobos(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.SpawnHobos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Kite Deploy(struct AActor* Owner); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.Kite Deploy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Kite Return(struct AActor* Owner); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.Kite Return // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerEvent(); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.TriggerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WE_DeployKites(struct UObject* Caller); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.WE_DeployKites // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_MagicKiteBattle(int32_t EntryPoint); // Function BP_WE_MagicKiteBattle.BP_WE_MagicKiteBattle_C.ExecuteUbergraph_BP_WE_MagicKiteBattle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

