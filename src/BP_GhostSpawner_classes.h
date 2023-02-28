// BlueprintGeneratedClass BP_GhostSpawner.BP_GhostSpawner_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_GhostSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct AAmbientGhost_Character* GhostActor; // 0x258(0x08)
	struct FTimerHandle TimerHandle; // 0x260(0x08)
	float TravelSpeed; // 0x268(0x04)
	float MinSpawnTime; // 0x26c(0x04)
	float MaxSpawnTime; // 0x270(0x04)
	bool AllowGreeting; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FDatabaseName Character; // 0x278(0x10)
	bool EndToStart; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float TurnSpeed; // 0x28c(0x04)

	void SpawnAGhost(); // Function BP_GhostSpawner.BP_GhostSpawner_C.SpawnAGhost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnGhost(); // Function BP_GhostSpawner.BP_GhostSpawner_C.SpawnGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GhostSpawner.BP_GhostSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void GhostDestroyed(struct UObject* Caller); // Function BP_GhostSpawner.BP_GhostSpawner_C.GhostDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GhostSpawner(int32_t EntryPoint); // Function BP_GhostSpawner.BP_GhostSpawner_C.ExecuteUbergraph_BP_GhostSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

