// BlueprintGeneratedClass BTT_Creature_StopMove.BTT_Creature_StopMove_C
// Size: 0xb4 (Inherited: 0xa8)
struct UBTT_Creature_StopMove_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float SpeedThreshold; // 0xb0(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Creature_StopMove.BTT_Creature_StopMove_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_StopMove.BTT_Creature_StopMove_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_StopMove(int32_t EntryPoint); // Function BTT_Creature_StopMove.BTT_Creature_StopMove_C.ExecuteUbergraph_BTT_Creature_StopMove // (Final|UbergraphFunction) // @ game+0x38a7480
};

