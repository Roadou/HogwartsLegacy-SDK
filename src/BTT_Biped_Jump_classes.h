// BlueprintGeneratedClass BTT_Biped_Jump.BTT_Biped_Jump_C
// Size: 0x162 (Inherited: 0x150)
struct UBTT_Biped_Jump_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool RestoreIKState; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float HeightAtJumpStart; // 0x15c(0x04)
	bool AllowLand; // 0x160(0x01)
	bool Landed; // 0x161(0x01)

	void SetAllowLand(bool AllowLand); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.SetAllowLand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndIK(); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.EndIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartIK(); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.StartIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteJump(struct AActor* OwnerActor); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.ExecuteJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateJumpingType(struct AActor* Actor, enum class EJumpingType& JumpingType); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CalculateJumpingType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterTeleported(struct AAmbulatory_Character* TeleportedCharacter, struct FVector AmountDisplaced, struct FRotator AmountRotated); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.OnCharacterTeleported // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Jump(int32_t EntryPoint); // Function BTT_Biped_Jump.BTT_Biped_Jump_C.ExecuteUbergraph_BTT_Biped_Jump // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

