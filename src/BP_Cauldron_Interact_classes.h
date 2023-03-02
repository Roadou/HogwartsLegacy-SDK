// BlueprintGeneratedClass BP_Cauldron_Interact.BP_Cauldron_Interact_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_Cauldron_Interact_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_Cauldron_Interact_Cauldron; // 0x250(0x08)
	struct UAkComponent* Ak_BP_Cauldron_Interact_Fire; // 0x258(0x08)
	struct UNiagaraComponent* Niagara Fire_Brazier_Med_Sml; // 0x260(0x08)
	struct UParticleSystemComponent* VFX_P_Potion_Brewing_Blue; // 0x268(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Kitchen_Ladle_B; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HM_Brazier_Bowl; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HM_Cauldron_Cauldron_J; // 0x280(0x08)
	struct USceneComponent* Scene; // 0x288(0x08)

	void ReceiveBeginPlay(); // Function BP_Cauldron_Interact.BP_Cauldron_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Cauldron_Interact(int32_t EntryPoint); // Function BP_Cauldron_Interact.BP_Cauldron_Interact_C.ExecuteUbergraph_BP_Cauldron_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

