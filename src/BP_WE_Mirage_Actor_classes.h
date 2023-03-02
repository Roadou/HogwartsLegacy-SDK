// BlueprintGeneratedClass BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C
// Size: 0x338 (Inherited: 0x280)
struct ABP_WE_Mirage_Actor_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* AnimalTrigger; // 0x288(0x08)
	struct UCapsuleComponent* Capsule; // 0x290(0x08)
	struct UAkComponent* AkSoundSource; // 0x298(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b0(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x2b8(0x08)
	struct UArrowComponent* Arrow; // 0x2c0(0x08)
	struct USphereComponent* SphereTrigger; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	float RotateOverTime_Alpha_29B889C94D7D45E7D81FA3A058378A36; // 0x2d8(0x04)
	enum class ETimelineDirection RotateOverTime__Direction_29B889C94D7D45E7D81FA3A058378A36; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* RotateOverTime; // 0x2e0(0x08)
	struct ABP_WE_Mirage_Dressing_C* DressingBP; // 0x2e8(0x08)
	struct UNiagaraSystem* VFXMelt; // 0x2f0(0x08)
	struct UNiagaraSystem* VFXHit; // 0x2f8(0x08)
	struct ABP_WE_Mirage_ThrownObject_C* ThrownObjectClass; // 0x300(0x08)
	struct UABP_WE_Mirage_Actor_C* ABP; // 0x308(0x08)
	struct AActor* SpawnedThrownObject; // 0x310(0x08)
	bool HasAnimal; // 0x318(0x01)
	bool IsRotating; // 0x319(0x01)
	bool HasRotated; // 0x31a(0x01)
	bool IsDamageAnimating; // 0x31b(0x01)
	bool HasGreetedPlayer; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	int32_t DestructionStage; // 0x320(0x04)
	int32_t ReactionToPlay; // 0x324(0x04)
	float ThrownObjectSpeedMultiplier; // 0x328(0x04)
	float MaxThrowAngle; // 0x32c(0x04)
	struct FTimerHandle PROTO_TextTimerHandle; // 0x330(0x08)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayRepairVFX(int32_t DestructionStage); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.PlayRepairVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector MaxAngleVelocity(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.MaxAngleVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateToPlayer(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.RotateToPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnThrownObject(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.SpawnThrownObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AngryReaction(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.AngryReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GratefulReaction(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.GratefulReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FriendlyReaction(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.FriendlyReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitReaction(struct FHitResult Hit); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.HitReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DamageActor(bool Destroy); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.DamageActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepairActor(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.RepairActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateOverTime__FinishedFunc(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.RotateOverTime__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void RotateOverTime__UpdateFunc(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.RotateOverTime__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ThrowObject(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.ThrowObject // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartRotatingToPlayer(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.StartRotatingToPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitNoDamage(struct FHitResult HitResult); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.HitNoDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitDamage(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.HitDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitDamageFull(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.HitDamageFull // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitRepair(); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.HitRepair // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AnimalTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.BndEvt__AnimalTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Mirage_Actor(int32_t EntryPoint); // Function BP_WE_Mirage_Actor.BP_WE_Mirage_Actor_C.ExecuteUbergraph_BP_WE_Mirage_Actor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

