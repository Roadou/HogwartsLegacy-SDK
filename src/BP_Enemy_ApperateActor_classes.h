// BlueprintGeneratedClass BP_Enemy_ApperateActor.BP_Enemy_ApperateActor_C
// Size: 0x2f8 (Inherited: 0x2d0)
struct ABP_Enemy_ApperateActor_C : AEnemy_ApparateActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float DistToDestination; // 0x2e8(0x04)
	struct FVector ToDestination; // 0x2ec(0x0c)

	void ReceiveBeginPlay(); // Function BP_Enemy_ApperateActor.BP_Enemy_ApperateActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Enemy_ApperateActor(int32_t EntryPoint); // Function BP_Enemy_ApperateActor.BP_Enemy_ApperateActor_C.ExecuteUbergraph_BP_Enemy_ApperateActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

