// BlueprintGeneratedClass BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C
// Size: 0x190 (Inherited: 0x150)
struct UBTT_Biped_ClimbLadder_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float OriginalCapsuleRadius; // 0x158(0x04)
	float ClimbingCapsuleRadius; // 0x15c(0x04)
	struct ALadder* Ladder; // 0x160(0x08)
	float DeadZone; // 0x168(0x04)
	bool StickPressed; // 0x16c(0x01)
	bool MoveUp; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	int32_t DismountBottomRungs; // 0x170(0x04)
	int32_t DismountTopRungs; // 0x174(0x04)
	bool DismountTopAnimStarted; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FHermesBPDelegateHandle DismountTopAnimStartHandle; // 0x180(0x10)

	void RevertMovementMode(); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.RevertMovementMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IgnoreLadderWhenMoving(bool Ignore); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.IgnoreLadderWhenMoving // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool CheckForDismountBottom(); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CheckForDismountBottom // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool CheckForDismountTop(); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CheckForDismountTop // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DismountTopAnimStart(struct UObject* Caller); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.DismountTopAnimStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_ClimbLadder(int32_t EntryPoint); // Function BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ExecuteUbergraph_BTT_Biped_ClimbLadder // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

