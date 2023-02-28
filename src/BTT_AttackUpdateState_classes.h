// BlueprintGeneratedClass BTT_AttackUpdateState.BTT_AttackUpdateState_C
// Size: 0xba (Inherited: 0xa8)
struct UBTT_AttackUpdateState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName Label; // 0xb0(0x08)
	enum class EEnemy_AttackUpdateState AttackUpdateState; // 0xb8(0x01)
	bool Return; // 0xb9(0x01)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_AttackUpdateState.BTT_AttackUpdateState_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_AttackUpdateState(int32_t EntryPoint); // Function BTT_AttackUpdateState.BTT_AttackUpdateState_C.ExecuteUbergraph_BTT_AttackUpdateState // (Final|UbergraphFunction) // @ game+0x38a7480
};

