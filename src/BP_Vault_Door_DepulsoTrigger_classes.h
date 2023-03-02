// BlueprintGeneratedClass BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_Vault_Door_DepulsoTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* WindSpinnerTrigger; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FMulticastInlineDelegate VautWindSpinnerOpen; // 0x260(0x10)

	void VaultDoorTriggered(bool VaultDoorTriggeredOn); // Function BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C.VaultDoorTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnActorBeginOverlap_Event_WindSpinnerTrigger(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C.OnActorBeginOverlap_Event_WindSpinnerTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Vault_Door_DepulsoTrigger(int32_t EntryPoint); // Function BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C.ExecuteUbergraph_BP_Vault_Door_DepulsoTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void VautWindSpinnerOpen__DelegateSignature(); // Function BP_Vault_Door_DepulsoTrigger.BP_Vault_Door_DepulsoTrigger_C.VautWindSpinnerOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

