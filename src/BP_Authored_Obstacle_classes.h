// BlueprintGeneratedClass BP_Authored_Obstacle.BP_Authored_Obstacle_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_Authored_Obstacle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x250(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function BP_Authored_Obstacle.BP_Authored_Obstacle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Authored_Obstacle(int32_t EntryPoint); // Function BP_Authored_Obstacle.BP_Authored_Obstacle_C.ExecuteUbergraph_BP_Authored_Obstacle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

