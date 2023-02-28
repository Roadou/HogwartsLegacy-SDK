// BlueprintGeneratedClass BTT_Creature_OpenPen.BTT_Creature_OpenPen_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_Creature_OpenPen_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Total Time; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FHermesBPDelegateHandle HermesAnimCompleteHandle; // 0xb8(0x10)
	bool Success; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UCreatureSpawnSlotComponent* CreatureSpawnSlot; // 0xd0(0x08)
	struct FName BlackboardKey; // 0xd8(0x08)

	void SetMovementModeOnFinishExit(struct APawn* InPawn); // Function BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.SetMovementModeOnFinishExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_OpenPen(int32_t EntryPoint); // Function BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.ExecuteUbergraph_BTT_Creature_OpenPen // (Final|UbergraphFunction) // @ game+0x38a7480
};

