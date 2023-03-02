// BlueprintGeneratedClass BP_GM_MagicGrinder.BP_GM_MagicGrinder_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_GM_MagicGrinder_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak; // 0x250(0x08)
	struct UAkComponent* Ak_BP_GM_MagicGrinder; // 0x258(0x08)
	struct USkeletalMeshComponent* SK_GobMine_MagicGrinder; // 0x260(0x08)
	struct UParticleSystemComponent* VFX_P_GoldDustRise; // 0x268(0x08)
	struct USkeletalMeshComponent* SK_GobMine_MagicSword; // 0x270(0x08)
	struct UStaticMeshComponent* SM_GobMine_MagicGrinderBase; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ReceiveBeginPlay(); // Function BP_GM_MagicGrinder.BP_GM_MagicGrinder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_MagicGrinder(int32_t EntryPoint); // Function BP_GM_MagicGrinder.BP_GM_MagicGrinder_C.ExecuteUbergraph_BP_GM_MagicGrinder // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

