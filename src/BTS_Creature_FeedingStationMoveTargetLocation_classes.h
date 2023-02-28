// BlueprintGeneratedClass BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C
// Size: 0x100 (Inherited: 0x98)
struct UBTS_Creature_FeedingStationMoveTargetLocation_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector FeedingStationKey; // 0xa0(0x28)
	struct FBlackboardKeySelector MoveTargetLocationKey; // 0xc8(0x28)
	float ApproachRadiusMultiplier; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct ACreatureFeedingStation* FeedingStation; // 0xf8(0x08)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation(int32_t EntryPoint); // Function BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

