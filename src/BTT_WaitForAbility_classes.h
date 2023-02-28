// BlueprintGeneratedClass BTT_WaitForAbility.BTT_WaitForAbility_C
// Size: 0xb5 (Inherited: 0xa8)
struct UBTT_WaitForAbility_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Timeout; // 0xb0(0x04)
	enum class EEnemy_Ability Ability; // 0xb4(0x01)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_WaitForAbility.BTT_WaitForAbility_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_WaitForAbility.BTT_WaitForAbility_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_WaitForAbility(int32_t EntryPoint); // Function BTT_WaitForAbility.BTT_WaitForAbility_C.ExecuteUbergraph_BTT_WaitForAbility // (Final|UbergraphFunction) // @ game+0x38a7480
};

