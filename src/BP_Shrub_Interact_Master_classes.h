// BlueprintGeneratedClass BP_Shrub_Interact_Master.BP_Shrub_Interact_Master_C
// Size: 0x32c (Inherited: 0x2f4)
struct ABP_Shrub_Interact_Master_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct USceneComponent* ForTag; // 0x300(0x08)
	struct USkeletalMeshComponent* SK_HW_InteractiveShrub_A_Master; // 0x308(0x08)
	struct UStaticMeshComponent* SM_Pot_selected; // 0x310(0x08)
	struct TArray<struct UStaticMesh*> PotMeshes; // 0x318(0x10)
	int32_t SelectPot; // 0x328(0x04)

	void UserConstructionScript(); // Function BP_Shrub_Interact_Master.BP_Shrub_Interact_Master_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_Shrub_Interact_Master.BP_Shrub_Interact_Master_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Shrub_Interact_Master.BP_Shrub_Interact_Master_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Shrub_Interact_Master(int32_t EntryPoint); // Function BP_Shrub_Interact_Master.BP_Shrub_Interact_Master_C.ExecuteUbergraph_BP_Shrub_Interact_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

