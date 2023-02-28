// BlueprintGeneratedClass BP_HW_Toilet_Interact.BP_HW_Toilet_Interact_C
// Size: 0x330 (Inherited: 0x2d8)
struct ABP_HW_Toilet_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Toilet_Set_A_1; // 0x2e0(0x08)
	struct UNiagaraComponent* Niagara; // 0x2e8(0x08)
	struct USceneComponent* Tag; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_Toilet_PullChain; // 0x2f8(0x08)
	struct USceneComponent* Chain; // 0x300(0x08)
	struct UStaticMeshComponent* SM_HW_Toilet_Mechanism_1; // 0x308(0x08)
	struct UStaticMeshComponent* SM_HW_Toilet_Seat_1; // 0x310(0x08)
	struct UObjectStateComponent* ObjectState; // 0x318(0x08)
	float Timeline_0_Handle_47C5EB16463790FDC880DD8FF832F8D9; // 0x320(0x04)
	enum class ETimelineDirection Timeline_0__Direction_47C5EB16463790FDC880DD8FF832F8D9; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* Timeline_1; // 0x328(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Toilet_Interact.BP_HW_Toilet_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Toilet_Interact.BP_HW_Toilet_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Toilet_Interact.BP_HW_Toilet_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Toilet_Interact(int32_t EntryPoint); // Function BP_HW_Toilet_Interact.BP_HW_Toilet_Interact_C.ExecuteUbergraph_BP_HW_Toilet_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

