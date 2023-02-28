// BlueprintGeneratedClass BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C
// Size: 0xd9 (Inherited: 0xa8)
struct UBTT_Creature_SetSpeedFromPathNode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector PathNode; // 0xb0(0x28)
	enum class ECreatureMovementSpeed CreatureMovementSpeed; // 0xd8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode(int32_t EntryPoint); // Function BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C.ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode // (Final|UbergraphFunction) // @ game+0x38a7480
};

