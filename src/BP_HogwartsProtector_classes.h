// BlueprintGeneratedClass BP_HogwartsProtector.BP_HogwartsProtector_C
// Size: 0x2b94 (Inherited: 0x259b)
struct ABP_HogwartsProtector_C : ABP_TombProtectorBase_C {
	char pad_259B[0x5]; // 0x259b(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x25a0(0x08)
	struct UAkComponent* Ak_puzzle_audio_location; // 0x25a8(0x08)
	struct UStaticMeshComponent* VFX_SK_SplineThicken_Streak_1m; // 0x25b0(0x08)
	struct UStaticMeshComponent* VFX_SK_SplineThicken_Streak_1m_Thin; // 0x25b8(0x08)
	struct USceneComponent* HintVFX; // 0x25c0(0x08)
	struct UBoxComponent* AlignmentCorridor; // 0x25c8(0x08)
	struct USkeletalMeshComponent* ReflectionSword; // 0x25d0(0x08)
	struct USkeletalMeshComponent* ReflectionMesh; // 0x25d8(0x08)
	struct USceneComponent* ReflectionRotator; // 0x25e0(0x08)
	float VFX_FadeHint_Alpha_72F4E7444C6E808530AF6E925F051971; // 0x25e8(0x04)
	enum class ETimelineDirection VFX_FadeHint__Direction_72F4E7444C6E808530AF6E925F051971; // 0x25ec(0x01)
	char pad_25ED[0x3]; // 0x25ed(0x03)
	struct UTimelineComponent* VFX_FadeHint; // 0x25f0(0x08)
	float AlignToAngle; // 0x25f8(0x04)
	float TargetAngle; // 0x25fc(0x04)
	float CurrentAngle; // 0x2600(0x04)
	char pad_2604[0x4]; // 0x2604(0x04)
	struct AActor* TargetActor; // 0x2608(0x08)
	float InterpSpeed; // 0x2610(0x04)
	bool bPuzzleActive; // 0x2614(0x01)
	char pad_2615[0x3]; // 0x2615(0x03)
	struct FEnemy_CharacterParams ReflectionSpawnParams; // 0x2618(0x490)
	struct FNPC_ShowUI ReflectionShowUI; // 0x2aa8(0x0c)
	struct FGameplayTag TutorialTag; // 0x2ab4(0x08)
	bool bStatueVisible; // 0x2abc(0x01)
	bool bReflectionVisible; // 0x2abd(0x01)
	char pad_2ABE[0x2]; // 0x2abe(0x02)
	struct FMulticastInlineDelegate OnReflectionAligned; // 0x2ac0(0x10)
	struct FMulticastInlineDelegate OnReflectionUnaligned; // 0x2ad0(0x10)
	struct FMulticastInlineDelegate OnParryTutorialBegin; // 0x2ae0(0x10)
	struct FMulticastInlineDelegate OnParryTutorialEnded; // 0x2af0(0x10)
	bool bReleaseOnAlignment; // 0x2b00(0x01)
	bool PuzzleDebug; // 0x2b01(0x01)
	char pad_2B02[0x6]; // 0x2b02(0x06)
	struct FHermesBPDelegateHandle TutorialHermesHandle; // 0x2b08(0x10)
	struct FTimerHandle CheckWeaponHandle; // 0x2b18(0x08)
	struct FMulticastInlineDelegate OnPuzzleLoaded; // 0x2b20(0x10)
	bool ProtegoTutorialSetup; // 0x2b30(0x01)
	char pad_2B31[0x3]; // 0x2b31(0x03)
	struct FGameplayTag ReleaseTag; // 0x2b34(0x08)
	struct FGameplayTag StandingTag; // 0x2b3c(0x08)
	struct FGameplayTag KneelingTag; // 0x2b44(0x08)
	struct FGameplayTag ReadyToReleaseTag; // 0x2b4c(0x08)
	bool bHasBeenReleased; // 0x2b54(0x01)
	bool SpecialSelectionStarted; // 0x2b55(0x01)
	char pad_2B56[0x2]; // 0x2b56(0x02)
	struct UBP_EnemyAI_C* BP Enemy AI; // 0x2b58(0x08)
	struct FMulticastInlineDelegate OnRevealed; // 0x2b60(0x10)
	struct UNiagaraComponent* N_HintLine; // 0x2b70(0x08)
	struct UMaterialInstanceDynamic* MAT_HintLineA; // 0x2b78(0x08)
	struct UMaterialInstanceDynamic* MAT_HintLineB; // 0x2b80(0x08)
	float VFX_HintLine_Alpha; // 0x2b88(0x04)
	float VFX_TransitionDuration; // 0x2b8c(0x04)
	float VFX_BoxLength; // 0x2b90(0x04)

	bool StartReveal(struct AActor* Instigator, bool ShowOccluded); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.StartReveal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAlignmentCorridorBox(float XValue, float YValue); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetAlignmentCorridorBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToKneeling(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetToKneeling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToStanding(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetToStanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNoStencilTag(bool bNoStencil); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetNoStencilTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Damaged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableCharacterEffects(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.DisableCharacterEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableCharacterEffects(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.EnableCharacterEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unmark Ready for Release(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Unmark Ready for Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SignalForRelease(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SignalForRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Branch to Release(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Branch to Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is In Alignment Corridor(bool& IsAligned); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Is In Alignment Corridor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TogglePuzzleDebug(bool Flag); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.TogglePuzzleDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugLine(float Angle, float Length, float Thickness, struct FLinearColor Color, struct FString Text); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.DebugLine // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugSphere(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.DebugSphere // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleStatueState(bool Flag); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ToggleStatueState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateStatue(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ActivateStatue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsPuzzleActive(bool& ACTIVE); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.IsPuzzleActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CanTick(bool& CanTick); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.CanTick // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void DetermineAlignmentAngle(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.DetermineAlignmentAngle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Aligned(bool& Aligned); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Is Aligned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetReflectionStatueVisible(bool Visible); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetReflectionStatueVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMainStatueVisible(bool Visible); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetMainStatueVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WindRelativeAnglesDegrees(float Angle0, float Angle1, float& NewAngle); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.WindRelativeAnglesDegrees // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ComputeTargetAngle(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ComputeTargetAngle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleReflectionPuzzle(bool Flag); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ToggleReflectionPuzzle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupReflectionPuzzle(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetupReflectionPuzzle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_FadeHint__FinishedFunc(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.VFX_FadeHint__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void VFX_FadeHint__UpdateFunc(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.VFX_FadeHint__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnBeginRevealFade(struct AActor* Instigator); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnBeginRevealFade // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEndReveal(struct AActor* Instigator); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnEndReveal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectHinted(struct AActor* Instigator); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnHiddenObjectHinted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NewFunction_1(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CharacterDiedEvent(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.CharacterDiedEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartAmbience(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.StartAmbience // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupProtegoTutorial(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SetupProtegoTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnComplete(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.SpawnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProtegoTutorialComplete(struct UObject* Caller); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ProtegoTutorialComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckWeaponLoaded(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.CheckWeaponLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HogwartsProtector_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnSpawnFinishedDelegate__DelegateSignature(struct AActor* pActor); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.BndEvt__BP_HogwartsProtector_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnSpawnFinishedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Destroy Rotator(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.Destroy Rotator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttackEnd(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnAttackEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnParryWindow(struct AActor* InActorActor, bool bInUnblockable); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnParryWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnParryWindowEnd(struct AActor* InActorActor, bool bInUnblockable); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnParryWindowEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectRevealed(struct AActor* Instigator); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnHiddenObjectRevealed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoParryEvent(struct UObject* Caller); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.GoParryEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StandingArrived(struct UObject* Caller); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.StandingArrived // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DelayedUnhide(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.DelayedUnhide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProtectorPuzzleComplete(struct UObject* Caller); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ProtectorPuzzleComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharacterDamaged(struct UObject* Caller, struct FHitResult& HitResult); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.CharacterDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HogwartsProtector(int32_t EntryPoint); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.ExecuteUbergraph_BP_HogwartsProtector // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnRevealed__DelegateSignature(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnRevealed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReflectionUnaligned__DelegateSignature(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnReflectionUnaligned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnParryTutorialBegin__DelegateSignature(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnParryTutorialBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPuzzleLoaded__DelegateSignature(struct ABP_HogwartsProtector_C* Hogwarts Protector); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnPuzzleLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnParryTutorialEnded__DelegateSignature(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnParryTutorialEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReflectionAligned__DelegateSignature(); // Function BP_HogwartsProtector.BP_HogwartsProtector_C.OnReflectionAligned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

