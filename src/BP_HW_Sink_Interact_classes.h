// BlueprintGeneratedClass BP_HW_Sink_Interact.BP_HW_Sink_Interact_C
// Size: 0x31c (Inherited: 0x2d8)
struct ABP_HW_Sink_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Sink_Solo; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_HW_Sink_Handle; // 0x2e8(0x08)
	struct UNiagaraComponent* Niagara; // 0x2f0(0x08)
	struct USceneComponent* ForTag; // 0x2f8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x300(0x08)
	float Timeline_0_NewTrack_0_C7E679F14E494CCB4B04D6ABA53BB7BA; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_C7E679F14E494CCB4B04D6ABA53BB7BA; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	float VFXDuration; // 0x318(0x04)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WaterOn(); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.WaterOn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WaterOff(); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.WaterOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Sink_Interact(int32_t EntryPoint); // Function BP_HW_Sink_Interact.BP_HW_Sink_Interact_C.ExecuteUbergraph_BP_HW_Sink_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

