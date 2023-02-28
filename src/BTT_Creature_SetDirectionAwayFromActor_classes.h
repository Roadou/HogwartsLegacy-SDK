// BlueprintGeneratedClass BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_Creature_SetDirectionAwayFromActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetActor; // 0xb0(0x28)
	struct FBlackboardKeySelector DirectionAwayFromActorOutput; // 0xd8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor(int32_t EntryPoint); // Function BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C.ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

