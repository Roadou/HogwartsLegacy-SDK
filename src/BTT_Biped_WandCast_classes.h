// BlueprintGeneratedClass BTT_Biped_WandCast.BTT_Biped_WandCast_C
// Size: 0x188 (Inherited: 0x150)
struct UBTT_Biped_WandCast_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct ASpellTool* CurrentFiringSpell; // 0x158(0x08)
	struct ASpellTool* EmptySpell; // 0x160(0x08)
	bool SpellFired; // 0x168(0x01)
	bool ButtonReleased; // 0x169(0x01)
	bool RestoreIKState; // 0x16a(0x01)
	bool RestartingWandCast; // 0x16b(0x01)
	bool ClearRetaliateLockOnExit; // 0x16c(0x01)
	bool AnimCompleted; // 0x16d(0x01)
	bool AllowStick; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	struct FVector StickDirection; // 0x170(0x0c)
	bool AllowAcquireNewTarget; // 0x17c(0x01)
	bool AllowTargetTracking; // 0x17d(0x01)
	bool IsOppugnoSpell; // 0x17e(0x01)
	char pad_17F[0x1]; // 0x17f(0x01)
	struct AActor* TargetedEnemy; // 0x180(0x08)

	void ProtectCharacterFromDamage(struct AActor* InActor, bool Flag); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ProtectCharacterFromDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AcquireNewTarget(); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.AcquireNewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlushQueuedActions(struct AActor* Owner); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.FlushQueuedActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionalCancelSpell(); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ConditionalCancelSpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTargetTrackers(struct AActor* InputPin); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.SetTargetTrackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StickValid(float StickX, float StickY, bool& IsValid); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.StickValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartWandAbility(struct AActor* InActor); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.StartWandAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetWandAbility(struct FName WandCastName, bool IsInStealth, struct UObject*& WandCastAbility); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.GetWandAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Protego_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SpellMadeContact(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.SpellMadeContact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_WandCast(int32_t EntryPoint); // Function BTT_Biped_WandCast.BTT_Biped_WandCast_C.ExecuteUbergraph_BTT_Biped_WandCast // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

