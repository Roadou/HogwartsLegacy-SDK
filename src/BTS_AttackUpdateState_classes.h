// BlueprintGeneratedClass BTS_AttackUpdateState.BTS_AttackUpdateState_C
// Size: 0xa1 (Inherited: 0x98)
struct UBTS_AttackUpdateState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	enum class EEnemy_AttackUpdateState AttackUpdateState; // 0xa0(0x01)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTS_AttackUpdateState.BTS_AttackUpdateState_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_AttackUpdateState(int32_t EntryPoint); // Function BTS_AttackUpdateState.BTS_AttackUpdateState_C.ExecuteUbergraph_BTS_AttackUpdateState // (Final|UbergraphFunction) // @ game+0x38a7480
};

