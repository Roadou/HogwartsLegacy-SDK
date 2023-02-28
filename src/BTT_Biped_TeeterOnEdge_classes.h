// BlueprintGeneratedClass BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C
// Size: 0x158 (Inherited: 0x150)
struct UBTT_Biped_TeeterOnEdge_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)

	void RevertMovementMode(); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.RevertMovementMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Teeter2Fall(struct UObject* Caller); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.Teeter2Fall // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Teeter2FallStart(struct UObject* Caller); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.Teeter2FallStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_TeeterOnEdge(int32_t EntryPoint); // Function BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ExecuteUbergraph_BTT_Biped_TeeterOnEdge // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

