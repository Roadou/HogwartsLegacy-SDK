// BlueprintGeneratedClass BTT_MoveToPathNode.BTT_MoveToPathNode_C
// Size: 0xc8 (Inherited: 0xa8)
struct UBTT_MoveToPathNode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MaxTime; // 0xb0(0x04)
	float ElapsedTime; // 0xb4(0x04)
	struct FName PathNodeLocKeyName; // 0xb8(0x08)
	struct FName PathNodeRadiusKeyName; // 0xc0(0x08)

	void Arrived(struct APathNode* pPathNode, struct AActor* pActor); // Function BTT_MoveToPathNode.BTT_MoveToPathNode_C.Arrived // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_MoveToPathNode.BTT_MoveToPathNode_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_MoveToPathNode.BTT_MoveToPathNode_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_MoveToPathNode(int32_t EntryPoint); // Function BTT_MoveToPathNode.BTT_MoveToPathNode_C.ExecuteUbergraph_BTT_MoveToPathNode // (Final|UbergraphFunction) // @ game+0x38a7480
};

