// BlueprintGeneratedClass BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_Creature_OnInteractedWith_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class ECreatureInteraction InteractionType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FBlackboardKeySelector InteractedActorKey; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_OnInteractedWith(int32_t EntryPoint); // Function BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C.ExecuteUbergraph_BTT_Creature_OnInteractedWith // (Final|UbergraphFunction) // @ game+0x38a7480
};

