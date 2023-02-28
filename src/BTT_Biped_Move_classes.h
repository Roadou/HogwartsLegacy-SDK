// BlueprintGeneratedClass BTT_Biped_Move.BTT_Biped_Move_C
// Size: 0x190 (Inherited: 0x150)
struct UBTT_Biped_Move_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UObject* IKFootPlacementComponent; // 0x158(0x08)
	float LastDodgeTime; // 0x160(0x04)
	float DodgeCoolDownTime; // 0x164(0x04)
	bool StickPressed; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	float StickReleaseMinTime; // 0x16c(0x04)
	float StickReleasedTime; // 0x170(0x04)
	struct FVector DesiredWorldDirection; // 0x174(0x0c)
	float DesiredWorldSpeed; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UCurveFloat* SpeedGovernor; // 0x188(0x08)

	void StickValid(float StickX, float StickY, bool& IsValid); // Function BTT_Biped_Move.BTT_Biped_Move_C.StickValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Move.BTT_Biped_Move_C.CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Move.BTT_Biped_Move_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Move.BTT_Biped_Move_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Move.BTT_Biped_Move_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Move.BTT_Biped_Move_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Move.BTT_Biped_Move_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Move(int32_t EntryPoint); // Function BTT_Biped_Move.BTT_Biped_Move_C.ExecuteUbergraph_BTT_Biped_Move // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

