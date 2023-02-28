// BlueprintGeneratedClass BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C
// Size: 0x360 (Inherited: 0x2d8)
struct ABP_OL_StoneSkipping_Interaction_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* CollisionSphere; // 0x2e0(0x08)
	struct USkeletalMeshComponent* SK_SkippingStonePile_Master; // 0x2e8(0x08)
	struct UArrowComponent* Arrow3; // 0x2f0(0x08)
	struct USceneComponent* SpawnPosition3; // 0x2f8(0x08)
	struct UArrowComponent* Arrow2; // 0x300(0x08)
	struct USceneComponent* SpawnPosition2; // 0x308(0x08)
	struct UArrowComponent* Arrow1; // 0x310(0x08)
	struct USceneComponent* SpawnPosition1; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	struct TArray<struct USceneComponent*> SpawnLocations; // 0x328(0x10)
	struct TArray<struct AActor*> RandomRock; // 0x338(0x10)
	struct TArray<struct AActor*> RocksSpawned; // 0x348(0x10)
	int32_t RandomInt; // 0x358(0x04)
	float Delay; // 0x35c(0x04)

	void SpawnRocks(); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.SpawnRocks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DestroySpawnedRocks(); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.DestroySpawnedRocks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_StoneSkipping_Interaction(int32_t EntryPoint); // Function BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.ExecuteUbergraph_BP_OL_StoneSkipping_Interaction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

