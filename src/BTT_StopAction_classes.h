// BlueprintGeneratedClass BTT_StopAction.BTT_StopAction_C
// Size: 0xb1 (Inherited: 0xa8)
struct UBTT_StopAction_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EEnemyAIAction Action; // 0xb0(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_StopAction.BTT_StopAction_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_StopAction(int32_t EntryPoint); // Function BTT_StopAction.BTT_StopAction_C.ExecuteUbergraph_BTT_StopAction // (Final|UbergraphFunction) // @ game+0x38a7480
};

