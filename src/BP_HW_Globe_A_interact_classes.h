// BlueprintGeneratedClass BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C
// Size: 0x318 (Inherited: 0x2d8)
struct ABP_HW_Globe_A_interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_A_Frame; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_A_Ball; // 0x2f0(0x08)
	struct USceneComponent* Scene; // 0x2f8(0x08)
	struct USceneComponent* ForTag; // 0x300(0x08)
	float Timeline_0_NewTrack_0_ACADD73D4F18C6BC38B174A999AE07B1; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_ACADD73D4F18C6BC38B174A999AE07B1; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Globe_A_interact(int32_t EntryPoint); // Function BP_HW_Globe_A_interact.BP_HW_Globe_A_interact_C.ExecuteUbergraph_BP_HW_Globe_A_interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

