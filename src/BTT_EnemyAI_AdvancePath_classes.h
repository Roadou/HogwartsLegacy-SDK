// BlueprintGeneratedClass BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_EnemyAI_AdvancePath_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector PathNodeLoc; // 0xb0(0x28)
	struct FBlackboardKeySelector HasPathKey; // 0xd8(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_EnemyAI_AdvancePath(int32_t EntryPoint); // Function BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C.ExecuteUbergraph_BTT_EnemyAI_AdvancePath // (Final|UbergraphFunction) // @ game+0x38a7480
};

