// BlueprintGeneratedClass BP_Anvil_Interact.BP_Anvil_Interact_C
// Size: 0x30c (Inherited: 0x2d8)
struct ABP_Anvil_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UParticleSystemComponent* VFX_P_GoldDustRise; // 0x2e0(0x08)
	struct USkeletalMeshComponent* VFX_SK_HammerAnvil_Anim01; // 0x2e8(0x08)
	struct USceneComponent* ForTag; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Anvil_001_D; // 0x2f8(0x08)
	struct USceneComponent* Scene; // 0x300(0x08)
	float Duration; // 0x308(0x04)

	void InteractionInitiated(); // Function BP_Anvil_Interact.BP_Anvil_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Anvil_Interact.BP_Anvil_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Anvil_Interact(int32_t EntryPoint); // Function BP_Anvil_Interact.BP_Anvil_Interact_C.ExecuteUbergraph_BP_Anvil_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

