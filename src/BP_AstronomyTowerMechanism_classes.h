// BlueprintGeneratedClass BP_AstronomyTowerMechanism.BP_AstronomyTowerMechanism_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_AstronomyTowerMechanism_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_AstronomyTowerMechanism; // 0x250(0x08)
	struct USkeletalMeshComponent* SK_AstronomyTowerMechanic; // 0x258(0x08)
	struct USphereComponent* CollisionSphere1; // 0x260(0x08)
	struct USphereComponent* CollisionSphere2; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_AstronomyTowerMechanism.BP_AstronomyTowerMechanism_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AstronomyTowerMechanism(int32_t EntryPoint); // Function BP_AstronomyTowerMechanism.BP_AstronomyTowerMechanism_C.ExecuteUbergraph_BP_AstronomyTowerMechanism // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

