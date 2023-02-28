// BlueprintGeneratedClass BP_PropOwlSpawner.BP_PropOwlSpawner_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_PropOwlSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TArray<struct AStaticMeshActor*> StaticMeshesToSpawnOn; // 0x258(0x10)
	float SocketSpawnProbability; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct AActor*> SpawnedActors; // 0x270(0x10)
	struct ABP_PropOwl_Base_C* PropOwlClass; // 0x280(0x08)
	struct TArray<struct FTransform> SpawnSocketTransforms; // 0x288(0x10)

	void ReceiveBeginPlay(); // Function BP_PropOwlSpawner.BP_PropOwlSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PropOwlSpawner.BP_PropOwlSpawner_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PropOwlSpawner(int32_t EntryPoint); // Function BP_PropOwlSpawner.BP_PropOwlSpawner_C.ExecuteUbergraph_BP_PropOwlSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

