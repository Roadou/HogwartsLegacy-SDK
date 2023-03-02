// BlueprintGeneratedClass BTT_MamaDragon_GetRandomPoint.BTT_MamaDragon_GetRandomPoint_C
// Size: 0xbc (Inherited: 0xa8)
struct UBTT_MamaDragon_GetRandomPoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FVector PickedLoc; // 0xb0(0x0c)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MamaDragon_GetRandomPoint.BTT_MamaDragon_GetRandomPoint_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MamaDragon_GetRandomPoint.BTT_MamaDragon_GetRandomPoint_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MamaDragon_GetRandomPoint(int32_t EntryPoint); // Function BTT_MamaDragon_GetRandomPoint.BTT_MamaDragon_GetRandomPoint_C.ExecuteUbergraph_BTT_MamaDragon_GetRandomPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

