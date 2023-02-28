// BlueprintGeneratedClass BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C
// Size: 0xe4 (Inherited: 0xa8)
struct UBTT_Creature_SetTagLimitOnActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName TagID; // 0xb0(0x08)
	struct FBlackboardKeySelector ActorKey; // 0xb8(0x28)
	int32_t Limit; // 0xe0(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor(int32_t EntryPoint); // Function BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C.ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

