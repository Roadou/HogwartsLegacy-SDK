// BlueprintGeneratedClass BTT_SetBBKey.BTT_SetBBKey_C
// Size: 0xb2 (Inherited: 0xa8)
struct UBTT_SetBBKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EEnemy_BBKey Key; // 0xb0(0x01)
	bool KeyValue; // 0xb1(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_SetBBKey.BTT_SetBBKey_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_SetBBKey(int32_t EntryPoint); // Function BTT_SetBBKey.BTT_SetBBKey_C.ExecuteUbergraph_BTT_SetBBKey // (Final|UbergraphFunction) // @ game+0x38a7480
};

