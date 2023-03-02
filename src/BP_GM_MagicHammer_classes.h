// BlueprintGeneratedClass BP_GM_MagicHammer.BP_GM_MagicHammer_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_GM_MagicHammer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UParticleSystemComponent* VFX_P_GoldDustRise; // 0x250(0x08)
	struct UStaticMeshComponent* Cube; // 0x258(0x08)
	struct USkeletalMeshComponent* SK_GobMine_MagicHammer; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_GM_MagicHammer.BP_GM_MagicHammer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_MagicHammer(int32_t EntryPoint); // Function BP_GM_MagicHammer.BP_GM_MagicHammer_C.ExecuteUbergraph_BP_GM_MagicHammer // (Final|UbergraphFunction) // @ game+0x38a7480
};

