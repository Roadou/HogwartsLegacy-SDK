// BlueprintGeneratedClass BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C
// Size: 0x19a (Inherited: 0x150)
struct UBTT_Biped_PuzzleMiniGame_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* PuzzleActor; // 0x158(0x08)
	float RotationSpeed; // 0x160(0x04)
	float InterpPosSpeed; // 0x164(0x04)
	float DistFromSite; // 0x168(0x04)
	bool ExitingStation; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float StandFar; // 0x170(0x04)
	float StandNear; // 0x174(0x04)
	struct FVector DesiredPosition; // 0x178(0x0c)
	bool IsAlohomoraObject; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct ABP_AlohomoraLock_C* AlohomoraLockPuzzle; // 0x188(0x08)
	float DistanceFromPuzzle; // 0x190(0x04)
	float HeightOffsetFromPlayer; // 0x194(0x04)
	bool AllowCancel; // 0x198(0x01)
	bool Cancelled; // 0x199(0x01)

	struct ABP_AlohomoraLock_C* SpawnLock(); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.SpawnLock // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHudElements(bool Hide); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.HideHudElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTargetDirection(struct FVector& Direction); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.GetTargetDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CustActionEvt_Success_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.CustActionEvt_Success_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_18(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_18 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_17(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_17 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_16(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_16 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_15(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_15 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_14(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_14 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetAlohomoraOrCancel(); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.SetAlohomoraOrCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActorHitBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ActorHitBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MunitionImpactDamage(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.MunitionImpactDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_PuzzleMiniGame(int32_t EntryPoint); // Function BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ExecuteUbergraph_BTT_Biped_PuzzleMiniGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

