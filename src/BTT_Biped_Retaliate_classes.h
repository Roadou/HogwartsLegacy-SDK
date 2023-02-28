// BlueprintGeneratedClass BTT_Biped_Retaliate.BTT_Biped_Retaliate_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_Biped_Retaliate_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct ASpellTool* CurrentFiringSpell; // 0x158(0x08)
	struct ASpellTool* EmptySpell; // 0x160(0x08)
	bool SpellFired; // 0x168(0x01)
	bool ButtonReleased; // 0x169(0x01)
	bool RestoreIKState; // 0x16a(0x01)
	char pad_16B[0x5]; // 0x16b(0x05)
	struct AActor* RetaliateVictim; // 0x170(0x08)
	bool AllowStickMovement; // 0x178(0x01)
	bool AllowTargetTracking; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	float GameTime; // 0x17c(0x04)

	void GetInitialRetaliateVictim(struct ABiped_Player* BipedPlayer, struct AActor*& AsActor); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.GetInitialRetaliateVictim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowPickNewTarget(float MaxTimeIntoAttack); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.AllowPickNewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableAimModeInFinisher(bool Flag); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.DisableAimModeInFinisher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StickValid(float StickX, float StickY, bool& IsValid); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.StickValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFinisherIndex(bool& Found, int32_t& FinisherIndex); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.GetFinisherIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartWandAbility(struct AActor* InActor); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.StartWandAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Protego_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SpellMadeContact(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.SpellMadeContact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ObjectDestroyed(struct UObject* Caller); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ObjectDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Retaliate(int32_t EntryPoint); // Function BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ExecuteUbergraph_BTT_Biped_Retaliate // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

