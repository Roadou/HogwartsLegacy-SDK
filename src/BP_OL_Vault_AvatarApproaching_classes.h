// BlueprintGeneratedClass BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_OL_Vault_AvatarApproaching_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* AvatarInsideVault; // 0x250(0x08)
	struct USphereComponent* AvatarApproachingVault; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FString Vault; // 0x268(0x10)

	void ReceiveBeginPlay(); // Function BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnComponentBeginOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.OnComponentBeginOverlap_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.CustomEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Vault_AvatarApproaching(int32_t EntryPoint); // Function BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.ExecuteUbergraph_BP_OL_Vault_AvatarApproaching // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

