// BlueprintGeneratedClass BTT_MoveToLoc.BTT_MoveToLoc_C
// Size: 0xd4 (Inherited: 0xa8)
struct UBTT_MoveToLoc_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct AAIController* Controller; // 0xb0(0x08)
	struct FName LocationKeyName; // 0xb8(0x08)
	enum class ENPC_Mobility Mobility; // 0xc0(0x01)
	bool FaceDirection; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	float Interpollation; // 0xc4(0x04)
	bool OverrideMobility; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float TimeoutMin; // 0xcc(0x04)
	float TimeoutMax; // 0xd0(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MoveToLoc.BTT_MoveToLoc_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToLoc.BTT_MoveToLoc_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToLoc(int32_t EntryPoint); // Function BTT_MoveToLoc.BTT_MoveToLoc_C.ExecuteUbergraph_BTT_MoveToLoc // (Final|UbergraphFunction) // @ game+0x38a7480
};

