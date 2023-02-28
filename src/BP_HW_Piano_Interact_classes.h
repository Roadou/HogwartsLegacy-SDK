// BlueprintGeneratedClass BP_HW_Piano_Interact.BP_HW_Piano_Interact_C
// Size: 0x308 (Inherited: 0x2d8)
struct ABP_HW_Piano_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UAkComponent* Ak; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_HM_3Broom_Piano; // 0x2e8(0x08)
	struct USceneComponent* ForTag; // 0x2f0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2f8(0x08)
	struct FTimerHandle TimerHandle; // 0x300(0x08)

	void ReceiveBeginPlay(); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PlayerLeavingInteractionEarly(struct UObject* Caller); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.PlayerLeavingInteractionEarly // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PianoTuneComplete(); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.PianoTuneComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Piano_Interact(int32_t EntryPoint); // Function BP_HW_Piano_Interact.BP_HW_Piano_Interact_C.ExecuteUbergraph_BP_HW_Piano_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

