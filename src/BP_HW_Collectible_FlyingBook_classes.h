// BlueprintGeneratedClass BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C
// Size: 0x3a1 (Inherited: 0x308)
struct ABP_HW_Collectible_FlyingBook_C : AFlyingBook {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x310(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x318(0x08)
	struct USplineComponent* MainSpline; // 0x320(0x08)
	struct UAkComponent* Ak_BP_HW_Collectible_FlyingBook; // 0x328(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x330(0x08)
	struct UNiagaraComponent* Niagara; // 0x338(0x08)
	struct USphereComponent* Sphere; // 0x340(0x08)
	struct USkeletalMeshComponent* SK_Paper; // 0x348(0x08)
	struct UABP_FlyingPaper_C* ABP; // 0x350(0x08)
	bool IsZSR; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FStatList Stat List; // 0x35c(0x08)
	bool bFollowSpline; // 0x364(0x01)
	bool bStartSpline; // 0x365(0x01)
	bool bStartFlying; // 0x366(0x01)
	bool bSwitchPanic; // 0x367(0x01)
	bool bOnFire; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FName Knowledge Subject; // 0x36c(0x08)
	char pad_374[0x4]; // 0x374(0x04)
	struct ABP_MapHelp_C* MapHelpClass; // 0x378(0x08)
	float No Tick Radius Meters; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UNiagaraComponent* Fire; // 0x388(0x08)
	struct FTimerHandle SubscribeToWandToolHandle; // 0x390(0x08)
	float FadeInOutDuration; // 0x398(0x04)
	float WentToSleepTime; // 0x39c(0x04)
	bool Sleeping; // 0x3a0(0x01)

	bool StartReveal(struct AActor* Instigator, bool ShowOccluded); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartReveal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WithinCameraDistanceMeters(struct FVector Position, float Distance Meters, bool UseXYDistance, bool& WithinDistance); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.WithinCameraDistanceMeters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DistanceToCamera(struct FVector Position, bool UseXYDistance, float NoCameraDistance, float& DistanceSquared); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.DistanceToCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeInOut(enum class EObjectFadeDirection Direction); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.FadeInOut // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOnBroom(struct AActor* Instigator, bool& IsOnBroom); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.IsOnBroom // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RemoveFromTickThrottler(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.RemoveFromTickThrottler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddToTickThrottler(bool InRevelio, float RevelioRadius, bool UseXYDistance); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.AddToTickThrottler // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffMinimap(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.TurnOffMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioStop(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.AccioStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioStart(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.AccioStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRevealFade(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnBeginRevealFade // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectHinted(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnHiddenObjectHinted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectRevealed(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnHiddenObjectRevealed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void StartFlying(bool bPanic); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartFlying // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartPanic(bool bPanic); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.StartPanic // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DestroyActorTimer(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.DestroyActorTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Perceived_AutoTarget(struct UObject* Caller); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.Perceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_AutoTarget(struct UObject* Caller); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.NoLongerPerceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateSpell(bool Activate); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ActivateSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SubscribeToWandTool(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.SubscribeToWandTool // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddToWandTool(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.AddToWandTool // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveDestroyed(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ActivateSpellReaction(bool newActivate); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ActivateSpellReaction // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateTargetable(); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.UpdateTargetable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spell_Accio_Unlocked(struct UObject* Caller); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.Spell_Accio_Unlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableAllSpellsChanged(struct UObject* Caller, int32_t int); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.EnableAllSpellsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEndReveal(struct AActor* Instigator); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.OnEndReveal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Collectible_FlyingBook(int32_t EntryPoint); // Function BP_HW_Collectible_FlyingBook.BP_HW_Collectible_FlyingBook_C.ExecuteUbergraph_BP_HW_Collectible_FlyingBook // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

