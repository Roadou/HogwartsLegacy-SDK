// BlueprintGeneratedClass BTT_AttackDone.BTT_AttackDone_C
// Size: 0xb8 (Inherited: 0xa8)
struct UBTT_AttackDone_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float ElapsedTime; // 0xb0(0x04)
	float Timeout; // 0xb4(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_AttackDone.BTT_AttackDone_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_AttackDone(int32_t EntryPoint); // Function BTT_AttackDone.BTT_AttackDone_C.ExecuteUbergraph_BTT_AttackDone // (Final|UbergraphFunction) // @ game+0x38a7480
};

