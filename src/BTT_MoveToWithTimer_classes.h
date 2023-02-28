// BlueprintGeneratedClass BTT_MoveToWithTimer.BTT_MoveToWithTimer_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_MoveToWithTimer_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct APawn* Pawn; // 0xb0(0x08)
	struct AAIController* Controller; // 0xb8(0x08)
	struct FName LocationKeyName; // 0xc0(0x08)
	float ElapsedTime; // 0xc8(0x04)
	float MaxTime; // 0xcc(0x04)
	enum class ENPC_Mobility Mobility; // 0xd0(0x01)
	bool OverrideMobility; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct UEnemyAIComponent* EnemyComp; // 0xd8(0x08)
	struct UBlackboardComponent* BBComp; // 0xe0(0x08)
	bool MoveStarted; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector MoveLoc; // 0xec(0x0c)
	float AtTargetDist; // 0xf8(0x04)
	float MoveTimeout; // 0xfc(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MoveToWithTimer.BTT_MoveToWithTimer_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToWithTimer.BTT_MoveToWithTimer_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToWithTimer(int32_t EntryPoint); // Function BTT_MoveToWithTimer.BTT_MoveToWithTimer_C.ExecuteUbergraph_BTT_MoveToWithTimer // (Final|UbergraphFunction) // @ game+0x38a7480
};

