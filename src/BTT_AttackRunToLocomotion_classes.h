// BlueprintGeneratedClass BTT_AttackRunToLocomotion.BTT_AttackRunToLocomotion_C
// Size: 0xc8 (Inherited: 0xa8)
struct UBTT_AttackRunToLocomotion_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName LocationKeyName; // 0xb0(0x08)
	struct UCurveFloat* AttackRotCurve; // 0xb8(0x08)
	struct FName BlackboardName; // 0xc0(0x08)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_AttackRunToLocomotion.BTT_AttackRunToLocomotion_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_AttackRunToLocomotion.BTT_AttackRunToLocomotion_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_AttackRunToLocomotion(int32_t EntryPoint); // Function BTT_AttackRunToLocomotion.BTT_AttackRunToLocomotion_C.ExecuteUbergraph_BTT_AttackRunToLocomotion // (Final|UbergraphFunction) // @ game+0x38a7480
};

