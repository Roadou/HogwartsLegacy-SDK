// BlueprintGeneratedClass BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_Creature_RequestFeedFromFeedingStation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector FeedingStation; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation(int32_t EntryPoint); // Function BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C.ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

