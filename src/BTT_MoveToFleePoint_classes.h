// BlueprintGeneratedClass BTT_MoveToFleePoint.BTT_MoveToFleePoint_C
// Size: 0xe8 (Inherited: 0xa8)
struct UBTT_MoveToFleePoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName LocKeyName; // 0xb0(0x08)
	float InterpSpeed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FBlackboardKeySelector TimeOutKey; // 0xc0(0x28)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToFleePoint(int32_t EntryPoint); // Function BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ExecuteUbergraph_BTT_MoveToFleePoint // (Final|UbergraphFunction) // @ game+0x38a7480
};

