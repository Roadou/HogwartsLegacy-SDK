// BlueprintGeneratedClass BTT_MoveToOnFire.BTT_MoveToOnFire_C
// Size: 0xf4 (Inherited: 0xa8)
struct UBTT_MoveToOnFire_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct APawn* Pawn; // 0xb0(0x08)
	struct AAIController* Controller; // 0xb8(0x08)
	struct FName LocationKeyName; // 0xc0(0x08)
	enum class ENPC_Mobility Mobility; // 0xc8(0x01)
	bool OverrideMobility; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct UEnemyAIComponent* EnemyComp; // 0xd0(0x08)
	struct UBlackboardComponent* BBComp; // 0xd8(0x08)
	bool MoveStarted; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector MoveLoc; // 0xe4(0x0c)
	float AtTargetDist; // 0xf0(0x04)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToOnFire.BTT_MoveToOnFire_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToOnFire(int32_t EntryPoint); // Function BTT_MoveToOnFire.BTT_MoveToOnFire_C.ExecuteUbergraph_BTT_MoveToOnFire // (Final|UbergraphFunction) // @ game+0x38a7480
};

