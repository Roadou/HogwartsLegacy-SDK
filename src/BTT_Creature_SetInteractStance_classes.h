// BlueprintGeneratedClass BTT_Creature_SetInteractStance.BTT_Creature_SetInteractStance_C
// Size: 0xb1 (Inherited: 0xa8)
struct UBTT_Creature_SetInteractStance_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool Wait; // 0xb0(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_SetInteractStance.BTT_Creature_SetInteractStance_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Creature_SetInteractStance.BTT_Creature_SetInteractStance_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_SetInteractStance(int32_t EntryPoint); // Function BTT_Creature_SetInteractStance.BTT_Creature_SetInteractStance_C.ExecuteUbergraph_BTT_Creature_SetInteractStance // (Final|UbergraphFunction) // @ game+0x38a7480
};

