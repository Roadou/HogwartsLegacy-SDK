// BlueprintGeneratedClass BP_WE_BroominFast.BP_WE_BroominFast_C
// Size: 0x2b9 (Inherited: 0x280)
struct ABP_WE_BroominFast_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_BroomEnemy_Spawner_C* BroomSpawner; // 0x290(0x08)
	struct TArray<struct USplineComponent*> Spline Components; // 0x298(0x10)
	struct TArray<struct AEnemyBroomRider_AiController*> BroomStudents; // 0x2a8(0x10)
	enum class EHoboType Hobo Type; // 0x2b8(0x01)

	void OnStartTriggerOverlapped(struct UWorldEventSocketComponent* Socket); // Function BP_WE_BroominFast.BP_WE_BroominFast_C.OnStartTriggerOverlapped // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_BroominFast.BP_WE_BroominFast_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DestroyBroom(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_BroominFast.BP_WE_BroominFast_C.DestroyBroom // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNoStartTriggerFound(); // Function BP_WE_BroominFast.BP_WE_BroominFast_C.OnNoStartTriggerFound // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_BroominFast(int32_t EntryPoint); // Function BP_WE_BroominFast.BP_WE_BroominFast_C.ExecuteUbergraph_BP_WE_BroominFast // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

