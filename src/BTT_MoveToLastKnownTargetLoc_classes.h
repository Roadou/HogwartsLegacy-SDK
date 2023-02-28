// BlueprintGeneratedClass BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C
// Size: 0xbd (Inherited: 0xa8)
struct UBTT_MoveToLastKnownTargetLoc_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName LocKeyName; // 0xb0(0x08)
	float InterpSpeed; // 0xb8(0x04)
	enum class ENPC_Mobility MobilityMode; // 0xbc(0x01)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc(int32_t EntryPoint); // Function BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc // (Final|UbergraphFunction) // @ game+0x38a7480
};

