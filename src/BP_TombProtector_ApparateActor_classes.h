// BlueprintGeneratedClass BP_TombProtector_ApparateActor.BP_TombProtector_ApparateActor_C
// Size: 0x2f0 (Inherited: 0x2d0)
struct ABP_TombProtector_ApparateActor_C : AEnemy_ApparateActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	float DistToDestination; // 0x2e0(0x04)
	struct FVector ToDestination; // 0x2e4(0x0c)

	void ReceiveBeginPlay(); // Function BP_TombProtector_ApparateActor.BP_TombProtector_ApparateActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TombProtector_ApparateActor(int32_t EntryPoint); // Function BP_TombProtector_ApparateActor.BP_TombProtector_ApparateActor_C.ExecuteUbergraph_BP_TombProtector_ApparateActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

