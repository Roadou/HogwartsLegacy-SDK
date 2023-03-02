// BlueprintGeneratedClass BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C
// Size: 0x2c0 (Inherited: 0x290)
struct ABP_BroomEnemy_Spawner_C : ABroomRiderSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct USceneComponent* Default; // 0x298(0x08)
	struct AActor* SplineActor; // 0x2a0(0x08)
	struct FName DatabaseCharacterIDOverride; // 0x2a8(0x08)
	struct TArray<struct AEnemyBroomRider*> SpawnedRiders; // 0x2b0(0x10)

	void SpawnBroomStudent(float MaxSpped, struct ABP_BroomStudent_C*& Broom Rider, struct AFlyingBroom*& Broom); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.SpawnBroomStudent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSplineComponent(struct USplineComponent*& SplineComponent); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.GetSplineComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupBroom(struct AEnemyBroomRider* BroomRider, float Max Broom Speed, struct AFlyingBroom*& Broom); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.SetupBroom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushSplinePhysics(struct AFlyingBroom* HoverBroom); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.PushSplinePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBroomEnemy(enum class EBroomEnemyState EnemyBroomSpawnState, float MaxFlyingSpeed, struct AEnemyBroomRider_AiController*& BroomRiderAIController, struct AFlyingBroom*& Broom); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.SpawnBroomEnemy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBroomAndAttach(struct AEnemyBroomRider* BroomRider, struct AFlyingBroom*& Hover Broom); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.SpawnBroomAndAttach // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DestroyAllRiders(); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.DestroyAllRiders // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BroomEnemy_Spawner(int32_t EntryPoint); // Function BP_BroomEnemy_Spawner.BP_BroomEnemy_Spawner_C.ExecuteUbergraph_BP_BroomEnemy_Spawner // (Final|UbergraphFunction) // @ game+0x38a7480
};

