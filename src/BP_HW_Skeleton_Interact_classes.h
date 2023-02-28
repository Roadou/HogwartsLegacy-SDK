// BlueprintGeneratedClass BP_HW_Skeleton_Interact.BP_HW_Skeleton_Interact_C
// Size: 0x324 (Inherited: 0x2d8)
struct ABP_HW_Skeleton_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* InteractionCollision; // 0x2e0(0x08)
	struct USkeletalMeshComponent* SK_HW_SkeletonDog_Master; // 0x2e8(0x08)
	struct USceneComponent* ForTag; // 0x2f0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x300(0x08)
	int32_t RandomInt; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TArray<int32_t> intsForAnims; // 0x310(0x10)
	float Delay; // 0x320(0x04)

	void InteractionInitiated(); // Function BP_HW_Skeleton_Interact.BP_HW_Skeleton_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Skeleton_Interact.BP_HW_Skeleton_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Skeleton_Interact(int32_t EntryPoint); // Function BP_HW_Skeleton_Interact.BP_HW_Skeleton_Interact_C.ExecuteUbergraph_BP_HW_Skeleton_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

