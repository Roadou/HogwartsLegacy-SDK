// BlueprintGeneratedClass BP_HW_Pastries_Master.BP_HW_Pastries_Master_C
// Size: 0x358 (Inherited: 0x2f4)
struct ABP_HW_Pastries_Master_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct USceneComponent* spawnLocation3; // 0x300(0x08)
	struct USceneComponent* spawnLocation2; // 0x308(0x08)
	struct USceneComponent* spawnLocation1; // 0x310(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x318(0x08)
	struct TArray<struct AActor*> PastriesSpawned; // 0x320(0x10)
	struct AActor* PastryToSpawn; // 0x330(0x08)
	struct TArray<struct AActor*> RandomPastry; // 0x338(0x10)
	struct TArray<struct FTransform> SpawnLocations; // 0x348(0x10)

	void Spawn Pastries(); // Function BP_HW_Pastries_Master.BP_HW_Pastries_Master_C.Spawn Pastries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionStarted(); // Function BP_HW_Pastries_Master.BP_HW_Pastries_Master_C.InteractionStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_Pastries_Master.BP_HW_Pastries_Master_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyPastries(); // Function BP_HW_Pastries_Master.BP_HW_Pastries_Master_C.DestroyPastries // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Pastries_Master(int32_t EntryPoint); // Function BP_HW_Pastries_Master.BP_HW_Pastries_Master_C.ExecuteUbergraph_BP_HW_Pastries_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

