// BlueprintGeneratedClass BP_Clocktower.BP_Clocktower_C
// Size: 0x2e2 (Inherited: 0x248)
struct ABP_Clocktower_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_Clocktower_Gears_Turning_Loop; // 0x250(0x08)
	struct UAkComponent* Ak_BP_Clocktower_Ring_Bells; // 0x258(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x260(0x08)
	struct UChildActorComponent* ChildActor Low Target; // 0x268(0x08)
	struct UChildActorComponent* ChildActor High Target; // 0x270(0x08)
	struct UChildActorComponent* ChildActor Mid Target; // 0x278(0x08)
	struct USendTargetComponent* SendTarget; // 0x280(0x08)
	struct UAkComponent* Ak_BP_Clocktower_pendulum_whoosh; // 0x288(0x08)
	struct USphereComponent* PendulumTrigger; // 0x290(0x08)
	struct UAkComponent* Ak_BP_Clocktower_pendulum_whoosh_motion; // 0x298(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a0(0x08)
	float TimeDilation; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate Arresto; // 0x2b0(0x10)
	struct FMulticastInlineDelegate ArrestoEnd; // 0x2c0(0x10)
	struct FMulticastInlineDelegate Frozen; // 0x2d0(0x10)
	bool bRingBells; // 0x2e0(0x01)
	bool bTurnOnOverlaps; // 0x2e1(0x01)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_Clocktower.BP_Clocktower_C.StartFreeze // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowArrestoMomentum(); // Function BP_Clocktower.BP_Clocktower_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Clocktower.BP_Clocktower_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Clocktower.BP_Clocktower_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Clocktower.BP_Clocktower_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Clocktower.BP_Clocktower_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Clocktower.BP_Clocktower_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Clocktower.BP_Clocktower_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Clocktower.BP_Clocktower_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_Clocktower.BP_Clocktower_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_Clocktower.BP_Clocktower_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Clocktower.BP_Clocktower_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Play Whoosh(); // Function BP_Clocktower.BP_Clocktower_C.Play Whoosh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_Clocktower.BP_Clocktower_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Clocktower.BP_Clocktower_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Clocktower.BP_Clocktower_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Clocktower.BP_Clocktower_C.BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Clocktower.BP_Clocktower_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Clocktower(int32_t EntryPoint); // Function BP_Clocktower.BP_Clocktower_C.ExecuteUbergraph_BP_Clocktower // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ArrestoEnd__DelegateSignature(); // Function BP_Clocktower.BP_Clocktower_C.ArrestoEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Frozen__DelegateSignature(bool bFreeze, struct AActor* Instigator); // Function BP_Clocktower.BP_Clocktower_C.Frozen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Arresto__DelegateSignature(float Duration); // Function BP_Clocktower.BP_Clocktower_C.Arresto__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

