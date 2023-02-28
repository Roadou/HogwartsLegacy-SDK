// BlueprintGeneratedClass BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C
// Size: 0x2f4 (Inherited: 0x2d8)
struct ABP_HW_PartialBody_Interaction_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)
	float DelayTime; // 0x2f0(0x04)

	void InteractionConsumeEnd(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.InteractionConsumeEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionConsumeStart(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.InteractionConsumeStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionPostDelay(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.InteractionPostDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionStarted(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.InteractionStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ConsumeStart(struct UObject* Caller); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.ConsumeStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ConsumeEnd(struct UObject* Caller); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.ConsumeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_PartialBody_Interaction(int32_t EntryPoint); // Function BP_HW_PartialBody_Interaction.BP_HW_PartialBody_Interaction_C.ExecuteUbergraph_BP_HW_PartialBody_Interaction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

