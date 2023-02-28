// BlueprintGeneratedClass BTT_Biped_JumpLand.BTT_Biped_JumpLand_C
// Size: 0x169 (Inherited: 0x150)
struct UBTT_Biped_JumpLand_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FTimerHandle CheckMovementModeTimer; // 0x158(0x08)
	bool Landed; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float JumpCooldownTime; // 0x164(0x04)
	bool AnimComplete; // 0x168(0x01)

	void isSprinting(bool& Flag); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.isSprinting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Exit(); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CheckMovementMode(); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.CheckMovementMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_JumpLand(int32_t EntryPoint); // Function BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ExecuteUbergraph_BTT_Biped_JumpLand // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

