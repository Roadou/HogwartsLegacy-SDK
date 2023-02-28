// BlueprintGeneratedClass BTT_GameChangerWait.BTT_GameChangerWait_C
// Size: 0xb8 (Inherited: 0xa8)
struct UBTT_GameChangerWait_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UEnemyAIComponent* EnemyAIComponent; // 0xb0(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_GameChangerWait.BTT_GameChangerWait_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveAbort(struct AActor* OwnerActor); // Function BTT_GameChangerWait.BTT_GameChangerWait_C.ReceiveAbort // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_GameChangerWait(int32_t EntryPoint); // Function BTT_GameChangerWait.BTT_GameChangerWait_C.ExecuteUbergraph_BTT_GameChangerWait // (Final|UbergraphFunction) // @ game+0x38a7480
};

