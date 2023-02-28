// BlueprintGeneratedClass BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_Creature_GetLocationAbove_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Height; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector TargetLocationKey; // 0xb8(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_GetLocationAbove(int32_t EntryPoint); // Function BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ExecuteUbergraph_BTT_Creature_GetLocationAbove // (Final|UbergraphFunction) // @ game+0x38a7480
};

