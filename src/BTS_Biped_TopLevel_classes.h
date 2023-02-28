// BlueprintGeneratedClass BTS_Biped_TopLevel.BTS_Biped_TopLevel_C
// Size: 0x2a8 (Inherited: 0xf8)
struct UBTS_Biped_TopLevel_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FTimerHandle SprintTimerHandle; // 0x100(0x08)
	bool TimeDilated; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAblAbilityContext* AdditiveAbilityContext; // 0x110(0x08)
	bool AnimDebugOn; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t ReactionIndex; // 0x11c(0x04)
	struct UAblAbility* DebugReactionAbility; // 0x120(0x08)
	int32_t SpellSlot; // 0x128(0x04)
	enum class EBTCustomActionType BTActionType; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FTimerHandle LockOnTimerHandle; // 0x130(0x08)
	struct FTimerHandle FullBodyWandCastTimerHandle; // 0x138(0x08)
	struct FTimerHandle SpellButtonTimerHandle; // 0x140(0x08)
	bool UsingInventoryItem; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct AActor* InteractSenseTarget; // 0x150(0x08)
	struct AActor* InteractActor; // 0x158(0x08)
	struct FVariantMapHandle FullBodyCastVariantHandle; // 0x160(0x04)
	bool StealthMode; // 0x164(0x01)
	bool FinisherInitiated; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	float DodgeCoolDownTime; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FTimerHandle ProximityTimerHandle; // 0x170(0x08)
	bool FaceShiftButtonHeld; // 0x178(0x01)
	bool AltModifierPressed; // 0x179(0x01)
	bool CogTargetDebugDraw; // 0x17a(0x01)
	bool CancelQueuedStupefy; // 0x17b(0x01)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString CurrentHealthItem; // 0x180(0x10)
	float TimeDeadBeforeDialog; // 0x190(0x04)
	bool SoftLanding; // 0x194(0x01)
	bool MedLanding; // 0x195(0x01)
	bool FaceTarget; // 0x196(0x01)
	bool IsMoving; // 0x197(0x01)
	bool isSprinting; // 0x198(0x01)
	enum class ELandingType LandingType; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct FTimerHandle ActivateActionsOnHUDTimerHandle; // 0x1a0(0x08)
	bool HUDActionsShown; // 0x1a8(0x01)
	bool MoveStickPressed; // 0x1a9(0x01)
	bool ShouldSprintOnStartMoving; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
	struct FTimerHandle ShouldSprintOnStartMovingTimerHandle; // 0x1b0(0x08)
	float DelayBeforeActionHud; // 0x1b8(0x04)
	int32_t LoadOutSlot; // 0x1bc(0x04)
	bool RagdollCriteriaMet; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FTimerHandle CastFailedTimerHandle; // 0x1c8(0x08)
	enum class EBTCustomActionType ActionType; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float InjuryHeight; // 0x1d4(0x04)
	float DeathHeight; // 0x1d8(0x04)
	float LastTwitchSpellCastAtTime; // 0x1dc(0x04)
	struct FString TakedownTutorialString; // 0x1e0(0x10)
	int32_t SpellTestIndex; // 0x1f0(0x04)
	int32_t SpellTestSlot; // 0x1f4(0x04)
	struct AActor* SpellTestSpawnedActor; // 0x1f8(0x08)
	struct TArray<struct FString> ItemNameArray; // 0x200(0x10)
	struct TArray<struct FString> SpellNameArray; // 0x210(0x10)
	struct FTimerHandle ItemMenuTimerHandle; // 0x220(0x08)
	struct FTimerHandle DodgeTimerHandle; // 0x228(0x08)
	struct FTimerHandle SprintStopTimerHandle; // 0x230(0x08)
	struct FTimerHandle WalkStopTimerHandle; // 0x238(0x08)
	struct UUI_BP_GadgetWheel_C* ItemWheelWidget; // 0x240(0x08)
	float FallHeightAdjust; // 0x248(0x04)
	bool IsWalking; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	int32_t SpellWheelActiveSpellIndex; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FTimerHandle WalkStopTimerHandle_Idle; // 0x258(0x08)
	struct FTimerHandle FieldGuideTimerHandle; // 0x260(0x08)
	struct FTimerHandle OppugnoTimerHandle; // 0x268(0x08)
	bool ItemMenuButtonHeld; // 0x270(0x01)
	bool OppugnoButtonHeld; // 0x271(0x01)
	bool InteractButtonPressed; // 0x272(0x01)
	bool Stealing; // 0x273(0x01)
	bool InteractStarted; // 0x274(0x01)
	bool InteractDebug; // 0x275(0x01)
	bool StupefyButtonHeld; // 0x276(0x01)
	bool LockOnButtonHeld; // 0x277(0x01)
	bool SprintButtonHeld; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct ABP_StealthTakedownInteractActor_C* StealthInteractActor; // 0x280(0x08)
	bool OppugnoSenseEnabled; // 0x288(0x01)
	bool AimModeActive; // 0x289(0x01)
	bool AimModeWasStartedInCombat; // 0x28a(0x01)
	char pad_28B[0x1]; // 0x28b(0x01)
	float LoadoutNextTimeout; // 0x28c(0x04)
	struct TArray<struct FName> ItemPickupLocks; // 0x290(0x10)
	float BroomcastTime; // 0x2a0(0x04)
	float BroomcastCooldownDuration; // 0x2a4(0x04)

	void SelectedLockedDiamond(int32_t Current, int32_t NEW); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SelectedLockedDiamond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsItemWheelAvailable(bool& IsAvailable); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsItemWheelAvailable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNextLightWandCast(bool Casual); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetNextLightWandCast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlushQueuedActions(struct AActor* Owner); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FlushQueuedActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndAimMode(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EndAimMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAimMode(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StartAimMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetOppugnoSenseEnabled(bool Enabled); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetOppugnoSenseEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InHogwarts(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InHogwarts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StealthInteractTargetSighted(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StealthInteractTargetSighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractDebugString(struct FString inString); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractDebugString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsSimpleInteractObject(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsSimpleInteractObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsTwoHandChest(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsTwoHandChest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool IsLootPickup(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsLootPickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInteractTargetAllowed(bool Allowed); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetInteractTargetAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollectItem(struct FName ItemId, int32_t ItemCount, struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CollectItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearTrackedStudentBeacon(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ClearTrackedStudentBeacon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleAnalyticsAndKnowledge(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.HandleAnalyticsAndKnowledge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayLootPickup(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayLootPickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Pickup(struct UObject* PickupObject); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Pickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LootContainer(struct AActor* LootTargetActor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.LootContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Looting(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Looting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractCanceled(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractCanceled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Interact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractInitiated(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractInitiated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckInteractTargetAllowed(struct AActor* Actor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CheckInteractTargetAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInteractTargetLost(struct AActor* OldTarget); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetLost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInteractTargetChanged(struct AActor* NewTarget); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInteractTargetSighted(struct AActor* Target); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetSighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateItemWheel(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CreateItemWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanupItemWheel(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CleanupItemWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Handle Owl Mail Button(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Handle Owl Mail Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSwimAbility(enum class EMovementMode PrevMovementMode, struct UObject*& Ability); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetSwimAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustSpellWheelIndex(int32_t Direction); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.AdjustSpellWheelIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PutOppugnoTargetInBlackboard(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PutOppugnoTargetInBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stick Click(bool OnlyOn, bool OnlyOff); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Stick Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCameraLookAtHeadTrackingTarget(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.UpdateCameraLookAtHeadTrackingTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Dodge(bool FakeDodge); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Dodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForSpellDupes(bool& Allowed); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CheckForSpellDupes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Teleported(struct AAmbulatory_Character* InCharacter, struct FVector InAmountDisplaced, struct FRotator InAmoundRotated); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Teleported // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireSimpleSpell(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FireSimpleSpell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoFallDamage(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoFallDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleLedgeDetected_NoJump(struct AActor* OwningActor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.HandleLedgeDetected_NoJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleLedgeDetected(struct AActor* OwningActor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.HandleLedgeDetected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetReactorTags(struct FGameplayTagContainer MunitionTags, struct FGameplayTagContainer& ReactorTags); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetReactorTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GotoTargetFactSheet(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GotoTargetFactSheet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CastFinisher(int32_t FinisherIndex); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CastFinisher // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopSprint(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StopSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartSprint(enum class ESpeedModifierType SpeedModType); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StartSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButtonQueueTimer(struct FName KeyName, float& Value); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetButtonQueueTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonQueueTimer(struct FName NewParam, float Value); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetButtonQueueTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetButtonKeyValue(struct FName KeyName, bool Value); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetButtonKeyValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetButtonKeyValue(struct FName& KeyName, bool& Pressed); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetButtonKeyValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompleteTwitchSpell(int32_t SpellIndex); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CompleteTwitchSpell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeselectTwitchSpell(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DeselectTwitchSpell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CastTwitchSpell(int32_t SpellIndex); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CastTwitchSpell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthChanged(struct AActor* Actor, float HealthChange, bool IndicateHUD); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.HealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdditiveReaction(struct AActor* ReactingActor, struct UObject* InAblAbilitClass, struct AActor* InInstigator, struct FVector ImpactDirection); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.AdditiveReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StoreImpactValuesOnBlackboard(struct UAblAbility* AbilityClass, struct AActor* ImpactInstigator, struct FVector TraceDirection, struct FVector ImpactPoint, struct FVector ImpactNormal, struct AActor* HitActor, struct FName HitBoneName); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StoreImpactValuesOnBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_59(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_59 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_58(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_58 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_110(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_110 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_14(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_14 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_57(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_57 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_56(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_56 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_55(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_55 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_HealthButton_K2Node_CustomInputActionEvent_107(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_HealthButton_K2Node_CustomInputActionEvent_107 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_106(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_106 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_105(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_105 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_102(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_102 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_101(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_101 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_98(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_98 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_95(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_95 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_92(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_92 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_89(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_89 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_86(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_86 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_85(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_85 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_82(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_82 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_81(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_81 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_80(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_80 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_79(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_79 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_54(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_54 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_78(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_78 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_76(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_76 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_53(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_53 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_52(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_52 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_73(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_73 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_70(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_70 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_13(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_69(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_69 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_66(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_66 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_65(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_65 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_64(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_64 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_62(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_62 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_61(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_61 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_60(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_60 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_57(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_57 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_54(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_54 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_53(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_53 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_51(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_51 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_12(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_49(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_49 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_48(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_48 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_47(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_47 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SlowMo_K2Node_CustomInputActionEvent_44(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SlowMo_K2Node_CustomInputActionEvent_44 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_43(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_43 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_48(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_48 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_47(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_47 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_46(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_46 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_45(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_45 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_42(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_42 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_41(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_41 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_44(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_44 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_41(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_41 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_39(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_39 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Teleport_K2Node_BTCustomActionEvent_37(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Teleport_K2Node_BTCustomActionEvent_37 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_36(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_36 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_35(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_35 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_34(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_34 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_33(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_33 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_32(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_32 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_30(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_30 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_40(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_40 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_29(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_29 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_27(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_27 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_26(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_26 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_25(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_25 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_78E5F47E4DA3EB293495B4AB0017E703(struct UObject* Loaded); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnLoaded_78E5F47E4DA3EB293495B4AB0017E703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_24(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_24 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_23(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_23 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_39(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_39 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_22(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_22 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_21(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_21 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_20(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_20 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_19(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_19 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_17(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_17 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_16(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_16 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_15(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_15 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_14(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_14 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_13(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_36(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_36 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_33(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_33 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_11(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_31(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_31 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_30(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_30 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_10(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_25(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_25 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_24(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_24 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_23(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_23 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_22(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_22 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_21(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_21 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_20(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_20 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_19(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_19 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_18(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_18 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_LockOn_K2Node_CustomInputActionEvent_17(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_17 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_LockOn_K2Node_CustomInputActionEvent_16(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_16 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_15(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_15 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_9(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_13(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_8(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_7(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_6(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_5(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_4(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_LockOn_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_LockOn_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_LockOn_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_3(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_2(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void StupefyTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StupefyTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CastFailedTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CastFailedTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StupefyExpelliarmusTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StupefyExpelliarmusTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ItemMenuTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ItemMenuTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseWheel(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CloseWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevelioMountTriggered(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.RevelioMountTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateActionsOnHUD(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ActivateActionsOnHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OppugnoTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OppugnoTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetWalkToggle_Idle(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetWalkToggle_Idle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnterFloo(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EnterFloo // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToBed(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GoToBed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpreadFeed(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SpreadFeed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdditiveReactionComplete(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.AdditiveReactionComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PutDownCarry(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PutDownCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CatchCarry(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CatchCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoPickup(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoPickup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationAbilityComplete(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StationAbilityComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenChest(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OpenChest // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MunitionImpactDamage(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.MunitionImpactDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForcedTalk(struct UObject* Caller, struct FForcedConversation& FForcedConversation); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ForcedTalk // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TSighted(struct UAISense* Sense, struct AActor* Target); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.TSighted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropCarry(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DropCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnterStealthMode(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EnterStealthMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitStealthMode(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ExitStealthMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NearMissTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.NearMissTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SurfaceTypeChanged(struct UObject* Caller, struct FSurfaceTypeChanged& SurfaceTypeChanged); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SurfaceTypeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NewHealthItemSelected(struct UObject* Caller, struct FString String); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.NewHealthItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelViaMapFinished(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaMapFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerCharacterDied(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerCharacterDied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerTeleported(struct AAmbulatory_Character* TeleportedCharacter, struct FVector AmountDisplaced, struct FRotator AmountRotated); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerTeleported // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerInputSoonToBeRemoved(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerInputSoonToBeRemoved // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DodgeTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DodgeTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelViaCrimeSceneFinished(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaCrimeSceneFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevelioMount(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.RevelioMount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SprintStopTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SprintStopTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureMountComplete(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CreatureMountComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetKeyboardSprintWalkToggle(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetKeyboardSprintWalkToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FieldGuideTimerHandleExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FieldGuideTimerHandleExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractTargetSighted(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetSighted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractTargetChanged(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractTargetLost(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetShouldSprintOnStartMoving(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetShouldSprintOnStartMoving // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WalkStopTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.WalkStopTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoPickupAnimation(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoPickupAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SprintTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SprintTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockOnTimerExpired(); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.LockOnTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FastTravelViaMissionFinished(struct UObject* Caller); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaMissionFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_TopLevel(int32_t EntryPoint); // Function BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ExecuteUbergraph_BTS_Biped_TopLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

