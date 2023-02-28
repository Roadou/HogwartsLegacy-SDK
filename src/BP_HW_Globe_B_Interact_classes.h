// BlueprintGeneratedClass BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C
// Size: 0x310 (Inherited: 0x2d8)
struct ABP_HW_Globe_B_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_B_Frame; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct USceneComponent* Tag; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_Globe_B_Ball; // 0x2f8(0x08)
	float Timeline_0_NewTrack_0_7EA0485846E0A06C57EEEA939F88E026; // 0x300(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7EA0485846E0A06C57EEEA939F88E026; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_1; // 0x308(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Globe_B_Interact(int32_t EntryPoint); // Function BP_HW_Globe_B_Interact.BP_HW_Globe_B_Interact_C.ExecuteUbergraph_BP_HW_Globe_B_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

