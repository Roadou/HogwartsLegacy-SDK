// BlueprintGeneratedClass BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C
// Size: 0x1a0 (Inherited: 0x150)
struct UBTT_Biped_DodgeStart_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float StickMag; // 0x158(0x04)
	bool OnButtslideSurface; // 0x15c(0x01)
	bool UseDodgeCamera; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	float invulnerableTime; // 0x160(0x04)
	struct FVector StartingLocation; // 0x164(0x0c)
	struct FTimerHandle BlinkTimer; // 0x170(0x08)
	bool Blinking; // 0x178(0x01)
	bool IsInterruptible; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	struct FVector LastDirection; // 0x17c(0x0c)
	bool DodgedUnblockable; // 0x188(0x01)
	bool autoFireAfterDodge; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	int32_t autoFireSpellSlot; // 0x18c(0x04)
	struct FTimerHandle AimAtTimerHandle; // 0x190(0x08)
	struct FTimerHandle LockTimerHandle; // 0x198(0x08)

	void CancelChannelSpell(struct ABiped_Character* BipedCharacter); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CancelChannelSpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlushQueuedActions(struct AActor* Owner); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.FlushQueuedActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockTarget(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.UnlockTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockTarget(bool Condition, struct AActor* InTargetActor); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.LockTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForAutoFireAfterDodge(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CheckForAutoFireAfterDodge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FallingTest(bool& Falling); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.FallingTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleDamageCollision(enum class ECollisionResponse CollisionResponse, struct AActor* OwnerActor); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ToggleDamageCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleLockOnCamera(struct UObject* Object, bool Allowed); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ToggleLockOnCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BlinkTimerExpired(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.BlinkTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AimAtTimerExpired(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.AimAtTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockTargetTimerExpired(); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.LockTargetTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_DodgeStart(int32_t EntryPoint); // Function BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ExecuteUbergraph_BTT_Biped_DodgeStart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

