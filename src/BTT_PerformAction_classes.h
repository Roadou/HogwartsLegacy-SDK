// BlueprintGeneratedClass BTT_PerformAction.BTT_PerformAction_C
// Size: 0x128 (Inherited: 0xa8)
struct UBTT_PerformAction_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EEnemyAIAction Action; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float Timeout; // 0xb4(0x04)
	struct FNPC_ActionParams ActionParams; // 0xb8(0x38)
	struct AActor* Actor; // 0xf0(0x08)
	struct FVector Loc; // 0xf8(0x0c)
	bool ForceReturn; // 0x104(0x01)
	bool ForcesReturnSuccess; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct FGameplayTagContainer TagContainer; // 0x108(0x20)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_PerformAction.BTT_PerformAction_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_PerformAction.BTT_PerformAction_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_PerformAction(int32_t EntryPoint); // Function BTT_PerformAction.BTT_PerformAction_C.ExecuteUbergraph_BTT_PerformAction // (Final|UbergraphFunction) // @ game+0x38a7480
};

