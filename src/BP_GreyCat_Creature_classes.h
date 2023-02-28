// BlueprintGeneratedClass BP_GreyCat_Creature.BP_GreyCat_Creature_C
// Size: 0x2510 (Inherited: 0x24f8)
struct ABP_GreyCat_Creature_C : ABP_Kneazle_Creature_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24f8(0x08)
	struct USceneRig_Interaction* PettingSR; // 0x2500(0x08)
	struct FTimerHandle NoLongerSwimmingTimerHandle; // 0x2508(0x08)

	void ReceiveBeginPlay(); // Function BP_GreyCat_Creature.BP_GreyCat_Creature_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_GreyCat_Creature.BP_GreyCat_Creature_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_GreyCat_Creature.BP_GreyCat_Creature_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NoLongerSwimmingTimerExpired(); // Function BP_GreyCat_Creature.BP_GreyCat_Creature_C.NoLongerSwimmingTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GreyCat_Creature(int32_t EntryPoint); // Function BP_GreyCat_Creature.BP_GreyCat_Creature_C.ExecuteUbergraph_BP_GreyCat_Creature // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

