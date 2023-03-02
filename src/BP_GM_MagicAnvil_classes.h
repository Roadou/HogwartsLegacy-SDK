// BlueprintGeneratedClass BP_GM_MagicAnvil.BP_GM_MagicAnvil_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_GM_MagicAnvil_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UParticleSystemComponent* VFX_P_GoldDustRise; // 0x250(0x08)
	struct USkeletalMeshComponent* SK_GobMine_MagicAnvilHammer; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Anvil_001_D; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function BP_GM_MagicAnvil.BP_GM_MagicAnvil_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_MagicAnvil(int32_t EntryPoint); // Function BP_GM_MagicAnvil.BP_GM_MagicAnvil_C.ExecuteUbergraph_BP_GM_MagicAnvil // (Final|UbergraphFunction) // @ game+0x38a7480
};

