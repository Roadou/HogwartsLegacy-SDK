// BlueprintGeneratedClass BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C
// Size: 0x720 (Inherited: 0x670)
struct ABP_HogwartsProtector_Sword_C : AEnemyAIWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct UAkComponent* Ak; // 0x678(0x08)
	struct UArrowComponent* Arrow_Edge; // 0x680(0x08)
	struct UArrowComponent* Arrow_Center; // 0x688(0x08)
	struct UBoxComponent* PhysicsBox; // 0x690(0x08)
	struct UCapsuleComponent* PhysicsCapsule; // 0x698(0x08)
	struct USceneComponent* RegrowFXLoc; // 0x6a0(0x08)
	struct USceneComponent* ThrowFXLoc; // 0x6a8(0x08)
	struct UCapsuleComponent* RangeAttackCapsule; // 0x6b0(0x08)
	struct UCapsuleComponent* AttackCapsule; // 0x6b8(0x08)
	struct USceneComponent* ImpactLocation; // 0x6c0(0x08)
	struct USceneComponent* WieldLoc; // 0x6c8(0x08)
	struct USceneComponent* ThrowLoc; // 0x6d0(0x08)
	struct USkeletalMeshComponent* WeaponMesh; // 0x6d8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x6e0(0x08)
	struct USphereComponent* Sphere; // 0x6e8(0x08)
	struct UParticleSystemComponent* ParticleBuffCookEmitter; // 0x6f0(0x08)
	struct UParticleSystemComponent* ParticleBuffPulseEmitter; // 0x6f8(0x08)
	struct UParticleSystemComponent* ParticleBuffImpactEmitter; // 0x700(0x08)
	struct UMaterialInstanceDynamic* MAT_Sword; // 0x708(0x08)
	float RadiusMax; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct USkinFXComponent* Skin FXComponent; // 0x718(0x08)

	bool EventTransientWeaponPoweredUp(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventTransientWeaponPoweredUp // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HideWeaponStopFX(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.HideWeaponStopFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ShowWeaponStartFX(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.ShowWeaponStartFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDisarmedForRecoveryFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDisarmedForRecoveryFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ActivateWeaponThreat(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.ActivateWeaponThreat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DeactivateWeaponThreat(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DeactivateWeaponThreat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWeaponSwing(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.StartWeaponSwing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ActivateWeapon(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.ActivateWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DeactivateWeapon(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DeactivateWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableShieldCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DisableShieldCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableShieldCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EnableShieldCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SpawnStoredWeapon(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.SpawnStoredWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WeaponStored(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.WeaponStored // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTrackPoints(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventTrackPoints // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTransientWeaponActivate(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventTransientWeaponActivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTransientWeaponDeactivate(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventTransientWeaponDeactivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponImpactGlowFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponImpactGlowFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponMeleeAttackStartFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponMeleeAttackStartFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponFireAOE1Fx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponFireAOE1Fx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponMeleePawnSlashFx(struct FHitResult& HitResult, struct FGameplayTagContainer& InMunitionTagContainer); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponMeleePawnSlashFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponThrownPawnStabFx(struct FHitResult& HitResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponThrownPawnStabFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMeshComponent* FireWeaponAOE1(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.FireWeaponAOE1 // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivatedFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDeactivatedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponSpawnStoredWeaponFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponSpawnStoredWeaponFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDisarmedFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDisarmedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponActivateBuffEmitterFx(enum class EEnemyBuffTypeEnum InBuffType); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponActivateBuffEmitterFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateBuffEmitterFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDeactivateBuffEmitterFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponAcquire(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.InterfaceWeaponAcquire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponRigidBodyActivate(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.InterfaceWeaponRigidBodyActivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponRigidBodyDeactivate(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.InterfaceWeaponRigidBodyDeactivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDestroyedFx(struct FHitResult& HitResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDestroyedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerGenericImpactFx(struct FHitResult& HitResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponTriggerGenericImpactFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerProtegoFx(struct FHitResult& HitResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponTriggerProtegoFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerThrownFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponTriggerThrownFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponActivateLiteFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponActivateLiteFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateLiteFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDeactivateLiteFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerImpactFx(struct FHitResult& HitResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponTriggerImpactFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateHeavyFx(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventWeaponDeactivateHeavyFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UCapsuleComponent* GetCapsuleComponent(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.GetCapsuleComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMeshComponent* GetMeshComponent(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.GetMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DisableCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableMeleeCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DisableMeleeCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EnableCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableMeleeCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EnableMeleeCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisablePhysicsSim(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DisablePhysicsSim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnablePhysicsSim(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EnablePhysicsSim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USceneComponent* GetSceneComponent(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.GetSceneComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Call_VFX_FadeOut(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.Call_VFX_FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__AttackCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.BndEvt__AttackCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__RangeAttackCapsule_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.BndEvt__RangeAttackCapsule_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FXForImpactGlowEvent(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.FXForImpactGlowEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimEvent(struct FName Name); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.AnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EventDisableRangedPawnCollision(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EventDisableRangedPawnCollision // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoThrow(struct AActor* Instigator, struct AActor* Target, struct FVector Velocity); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnOppugnoThrow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoHold(struct AActor* Instigator); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnOppugnoHold // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SpawnSword(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.SpawnSword // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnOut(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.SpawnOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoEnd(struct AActor* Instigator); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnOppugnoEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitByOppugnoImpact(struct AActor* Instigator, struct AActor* Object); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnHitByOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnableWeaponEffects(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.EnableWeaponEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableWeaponEffects(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.DisableWeaponEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RespawnSword(); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.RespawnSword // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoPull(struct AActor* Instigator); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnOppugnoPull // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoImpact(struct AActor* Instigator, struct AActor* Target, struct AActor* HitObject); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.OnOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HogwartsProtector_Sword(int32_t EntryPoint); // Function BP_HogwartsProtector_Sword.BP_HogwartsProtector_Sword_C.ExecuteUbergraph_BP_HogwartsProtector_Sword // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

