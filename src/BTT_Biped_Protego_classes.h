// BlueprintGeneratedClass BTT_Biped_Protego.BTT_Biped_Protego_C
// Size: 0x18c (Inherited: 0x150)
struct UBTT_Biped_Protego_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool IsSwimming; // 0x158(0x01)
	bool MovingStick; // 0x159(0x01)
	bool IsMelee; // 0x15a(0x01)
	bool RestoreIKState; // 0x15b(0x01)
	bool SustainedBlast; // 0x15c(0x01)
	bool inSustainedProtego; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	struct FTimerHandle SustainedProtegoTimer; // 0x160(0x08)
	bool Deflected; // 0x168(0x01)
	bool Heavy; // 0x169(0x01)
	bool Perfect; // 0x16a(0x01)
	bool ReadyToRetaliate; // 0x16b(0x01)
	bool CanRetaliate; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	struct FTimerHandle CameraTimer; // 0x170(0x08)
	struct AActor* RetaliateVictim; // 0x178(0x08)
	struct FTimerHandle AlreadyDeflectedTimerHandle; // 0x180(0x08)
	float GameTime; // 0x188(0x04)

	void StartParryTimeDilation(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.StartParryTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowPickNewTarget(float MinTimeInto); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.AllowPickNewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraTimeout(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CameraTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Retaliate(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.Retaliate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SustainedProtegoTimeout(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.SustainedProtegoTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetParryState(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ResetParryState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProtegoAbilityAndState(struct AActor* Actor, struct FVariantMapHandle VariantMapHandle, bool DestroyVarMap); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ProtegoAbilityAndState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void AlreadyDeflectedTimerExpired(); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.AlreadyDeflectedTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Protego(int32_t EntryPoint); // Function BTT_Biped_Protego.BTT_Biped_Protego_C.ExecuteUbergraph_BTT_Biped_Protego // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

