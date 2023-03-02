// BlueprintGeneratedClass BP_Grindstone_interact.BP_Grindstone_interact_C
// Size: 0x338 (Inherited: 0x2f4)
struct ABP_Grindstone_interact_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct USceneComponent* ForTag; // 0x300(0x08)
	struct UCapsuleComponent* Capsule; // 0x308(0x08)
	struct UBoxComponent* Box; // 0x310(0x08)
	struct USkeletalMeshComponent* SK_Station_GrindstoneWithStand_Master; // 0x318(0x08)
	int32_t RandomInt; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<int32_t> intsForAnims; // 0x328(0x10)

	void InteractionInitiated(); // Function BP_Grindstone_interact.BP_Grindstone_interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Grindstone_interact.BP_Grindstone_interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Grindstone_interact(int32_t EntryPoint); // Function BP_Grindstone_interact.BP_Grindstone_interact_C.ExecuteUbergraph_BP_Grindstone_interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

