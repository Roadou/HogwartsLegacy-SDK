// BlueprintGeneratedClass BP_HW_Phonograph_Interact.BP_HW_Phonograph_Interact_C
// Size: 0x320 (Inherited: 0x2d8)
struct ABP_HW_Phonograph_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UAkComponent* Ak; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_HM_Music_Phonograph; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_HW_Music_Phonograph_Handle; // 0x2f0(0x08)
	struct USceneComponent* ForHandle; // 0x2f8(0x08)
	struct USceneComponent* ForTag; // 0x300(0x08)
	struct UObjectStateComponent* ObjectState; // 0x308(0x08)
	float Timeline_0_RotateHandle_68E6F4AC4DCA306FB3C9EDBAFFC191CD; // 0x310(0x04)
	enum class ETimelineDirection Timeline_0__Direction_68E6F4AC4DCA306FB3C9EDBAFFC191CD; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* Timeline_1; // 0x318(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Phonograph_Interact.BP_HW_Phonograph_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Phonograph_Interact.BP_HW_Phonograph_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Phonograph_Interact.BP_HW_Phonograph_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Phonograph_Interact(int32_t EntryPoint); // Function BP_HW_Phonograph_Interact.BP_HW_Phonograph_Interact_C.ExecuteUbergraph_BP_HW_Phonograph_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

