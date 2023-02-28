// BlueprintGeneratedClass BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C
// Size: 0xd0 (Inherited: 0x98)
struct UBTS_Creature_RemoveTagOnAbort_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector TargetActor; // 0xa0(0x28)
	struct FName TagID; // 0xc8(0x08)

	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort(int32_t EntryPoint); // Function BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C.ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort // (Final|UbergraphFunction) // @ game+0x38a7480
};

